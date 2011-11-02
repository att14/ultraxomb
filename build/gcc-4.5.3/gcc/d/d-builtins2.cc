/* GDC -- D front-end for GCC
   Copyright (C) 2004 David Friedman

   Modified by
    Michael Parrott, Iain Buclaw, (C) 2010, 2011

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "d-gcc-includes.h"
#include "d-lang.h"
#include "attrib.h"
#include "module.h"
#include "template.h"
#include "symbol.h"
#include "d-codegen.h"

static ListMaker bi_fn_list;
static ListMaker bi_type_list;

// Necessary for built-in struct types
static Array builtin_converted_types;
static Dsymbols builtin_converted_decls;

static Type * gcc_type_to_d_type(tree t);

Type * d_gcc_builtin_va_list_d_type;

void
d_bi_init()
{
#if D_VA_LIST_TYPE_VOIDPTR
    // The "standard" definition of va_list is void*.
    d_va_list_type_node = build_distinct_type_copy(ptr_type_node);

    // %% Yuck. Needed to pass stabilize_va_list
    if (TREE_CODE(va_list_type_node) == ARRAY_TYPE)
        TYPE_MAIN_VARIANT(TREE_TYPE(d_va_list_type_node)) =
                TYPE_MAIN_VARIANT(TREE_TYPE(va_list_type_node));

    TYPE_MAIN_VARIANT(d_va_list_type_node) =
                TYPE_MAIN_VARIANT(va_list_type_node);
#else
    // The "standard" abi va_list is va_list_type_node.
    // assumes va_list_type_node already built
    d_va_list_type_node = build_variant_type_copy(va_list_type_node);
#endif

    d_gcc_builtin_va_list_d_type = gcc_type_to_d_type(d_va_list_type_node);
    if (! d_gcc_builtin_va_list_d_type)
    {   // fallback to array of byte of the same size?
        error("cannot represent built in va_list type in D");
        gcc_unreachable();
    }

    // if D_VA_TYPE_VOIDPTR, need to avoid errors in gimplification,
    // else, need to not ICE in targetm.canonical_va_list_type
    d_gcc_builtin_va_list_d_type->ctype = d_va_list_type_node;
}

/*
  Set ctype directly for complex types to save toCtype() the work.
  For others, it is not useful or, in the cast of (C char) -> (D char),
  will cause errors.  This also means char* ...

  NOTE: We cannot always use type->pointerTo (in V2, at least) because
  (explanation TBD -- see TypeFunction::semantic and
  TypePointer::semantic: {deco = NULL;} .)
*/

static Type *
gcc_type_to_d_type(tree t)
{
    Type *d;
    switch (TREE_CODE(t))
    {
        case POINTER_TYPE:
        {
            d = gcc_type_to_d_type(TREE_TYPE(t));
            if (d)
            {
                if (d->ty == Tfunction)
                    return new TypePointer(d);
                else
                    return d->pointerTo();
            }
            break;
        }
        case REFERENCE_TYPE:
        {
            d = gcc_type_to_d_type(TREE_TYPE(t));
            if (d)
            {   // Want to assign ctype directly so that the REFERENCE_TYPE
                // code can be turned into an InOut argument below.  Can't use
                // pointerTo(), because that Type is shared.
                d = new TypePointer(d);
                d->ctype = t;
                return d;
            }
            break;
        }
        case BOOLEAN_TYPE:
        {   // Should be no need for size checking.
            return Type::tbool;
            break;
        }
        case INTEGER_TYPE:
        {
            unsigned sz = tree_low_cst(TYPE_SIZE_UNIT(t), 1);
            bool unsgn = TYPE_UNSIGNED(t);

            // Check for char first. Needs to be done for chars/string.
            if (TYPE_MAIN_VARIANT(t) == char_type_node)
                return Type::tchar;

            // This search assumes that integer types come before char and bit...
            for (size_t i = 0; i < TMAX; i++)
            {
                d = Type::basic[i];
                if (d && d->isintegral() && d->size() == sz &&
                        (d->isunsigned()?true:false) ==  unsgn)
                {
                    return d;
                }
            }
            break;
        }
        case REAL_TYPE:
        {   // Double and long double may be the same size
            if (TYPE_MAIN_VARIANT(t) == double_type_node)
                return Type::tfloat64;
            else if (TYPE_MAIN_VARIANT(t) == long_double_type_node)
                return Type::tfloat80;

            unsigned sz = tree_low_cst(TYPE_SIZE_UNIT(t), 1);
            for (size_t i = 0; i < TMAX; i++)
            {
                d = Type::basic[i];
                if (d && d->isreal() && d->size() == sz)
                {
                    return d;
                }
            }
            break;
        }
        case COMPLEX_TYPE:
        {
            unsigned sz = tree_low_cst(TYPE_SIZE_UNIT(t), 1);
            for (size_t i = 0; i < TMAX; i++)
            {
                d = Type::basic[i];
                if (d && d->iscomplex() && d->size() == sz)
                {
                    return d;
                }
            }
            break;
        }
        case VOID_TYPE:
        {
            return Type::tvoid;
        }
        case ARRAY_TYPE:
        {
            d = gcc_type_to_d_type(TREE_TYPE(t));
            if (d)
            {
                tree index = TYPE_DOMAIN (t);
                tree ub = TYPE_MAX_VALUE (index);
                tree lb = TYPE_MIN_VALUE (index);
                tree length
                    = size_binop(PLUS_EXPR, size_one_node,
                            convert (sizetype,
                                fold_build2 (MINUS_EXPR, TREE_TYPE (lb),
                                             ub, lb)));
                d = new TypeSArray(d,
                        new IntegerExp(0, gen.getTargetSizeConst(length),
                            Type::tindex));
                d = d->semantic(0, NULL);
                d->ctype = t;
                return d;
            }
            break;
        }
        case RECORD_TYPE:
        {
            for (size_t i = 0; i < builtin_converted_types.dim; i += 2)
            {
                tree ti = (tree) builtin_converted_types.data[i];
                if (TYPE_MAIN_VARIANT(ti) == TYPE_MAIN_VARIANT(t))
                    return (Type *) builtin_converted_types.data[i + 1];
            }

            const char * name;
            char name_buf[64];
            static int serial;

            if (TYPE_NAME(t))
                name = IDENTIFIER_POINTER(DECL_NAME(TYPE_NAME(t)));
            else
            {
                snprintf(name_buf, sizeof(name_buf), "__bi_type_%d", ++serial);
                name = name_buf;
            }

            StructDeclaration * sd = new StructDeclaration(0, Lexer::idPool(name));
            /* The gcc.builtins module may not exist yet, so cannot set
               sd->parent here. If it is va_list, the parent needs to
               be set to the object module which will not exist when
               this is called.  */
            sd->structsize = int_size_in_bytes(t);
            sd->alignsize = TYPE_ALIGN_UNIT(t);
            sd->sizeok = 1;

            d = new TypeStruct(sd);
            d->ctype = t;

            sd->type = d;
#if STRUCTTHISREF
            sd->handle = d;
#else
            sd->handle = new TypePointer(d);
#endif
            /* Does not seem necessary to convert fields, but the
               members field must be non-null for the above size
               setting to stick. */
            sd->members = new Dsymbols;

            builtin_converted_types.push(t);
            builtin_converted_types.push(d);
            builtin_converted_decls.push(sd);
            return d;
        }
        case FUNCTION_TYPE:
        {
            Type * ret = gcc_type_to_d_type(TREE_TYPE(t));
            if (! ret)
                return NULL;

            tree t_arg_types = TYPE_ARG_TYPES(t);
            int varargs = t_arg_types != NULL_TREE;
            Parameters * args = new Parameters;

            args->reserve(list_length(t_arg_types));
            for (tree tl = t_arg_types; tl != NULL_TREE; tl = TREE_CHAIN(tl))
            {
                tree ta = TREE_VALUE(tl);
                if (ta != void_type_node)
                {
                    Type * d_arg_type;
                    unsigned io = STCin;

                    if (TREE_CODE(ta) == REFERENCE_TYPE)
                    {
                        ta = TREE_TYPE(ta);
                        io = STCref;
                    }
#if D_VA_LIST_TYPE_VOIDPTR
                    // C-type va_list, but require D-type void*
                    if (ta == va_list_type_node)
                        d_arg_type = d_gcc_builtin_va_list_d_type;
                    else
#endif
                    {
                        d_arg_type = gcc_type_to_d_type(ta);
                    }
                    if (! d_arg_type)
                        goto Lfail;

                    args->push(new Parameter(io, d_arg_type, NULL, NULL));
                }
                else
                    varargs = 0;
            }
            d = new TypeFunction(args, ret, varargs, LINKc);
            return d;

        Lfail:
            delete args;
            break;
        }
        default:
        {
            break;
        }
    }
    return NULL;
}

void
d_bi_builtin_func(tree decl)
{
    bi_fn_list.cons(NULL_TREE, decl);
}

void
d_bi_builtin_type(tree decl)
{
    bi_type_list.cons(NULL_TREE, decl);
}

// helper function for d_gcc_magic_stdarg_module
/*
  In D2, the members of std.stdarg are hidden via @system attributes.
  This function should be sufficient in looking through all members.
*/
static void
d_gcc_magic_stdarg_check(Dsymbol *m, bool is_c_std_arg)
{
    Identifier * id_arg = Lexer::idPool("va_arg");
    Identifier * id_start = Lexer::idPool("va_start");

    AttribDeclaration * ad = NULL;
    TemplateDeclaration * td = NULL;

    if ((ad = m->isAttribDeclaration()))
    {
        // Recursively search through attribute decls
        Dsymbols * decl = ad->include(NULL, NULL);
        if (decl && decl->dim)
        {
            for (size_t i = 0; i < decl->dim; i++)
            {
                Dsymbol * sym = decl->tdata()[i];
                d_gcc_magic_stdarg_check(sym, is_c_std_arg);
            }
        }
    }
    else if ((td = m->isTemplateDeclaration()))
    {
        if (td->ident == id_arg)
        {
            if (is_c_std_arg)
                IRState::setCStdArgArg(td);
            else
                IRState::setStdArg(td);
        }
        else if (td->ident == id_start && is_c_std_arg)
            IRState::setCStdArgStart(td);
        else
            td = NULL;
    }

    if (td == NULL)     // Not handled.
        return;

#ifndef D_VA_LIST_TYPE_VOIDPTR
    if (TREE_CODE(va_list_type_node) == ARRAY_TYPE)
    {   /* For GCC, a va_list can be an array.  D static arrays are
           automatically passed by reference, but the 'inout'
           modifier is not allowed. */
        gcc_assert(td->members);
        for (size_t j = 0; j < td->members->dim; j++)
        {
            FuncDeclaration * fd = (td->members->tdata()[j])->isFuncDeclaration();
            if (fd && (fd->ident == id_arg || fd->ident == id_start))
            {
                TypeFunction * tf;
                // Should have nice error message instead of ICE in case some tries
                // to tweak the file.
                gcc_assert(! fd->parameters);
                tf = (TypeFunction *) fd->type;
                gcc_assert(tf->ty == Tfunction &&
                        tf->parameters && tf->parameters->dim >= 1);
                (tf->parameters->tdata()[0])->storageClass &= ~(STCin|STCout|STCref);
                (tf->parameters->tdata()[0])->storageClass |= STCin;
            }
        }
    }
#endif
}

// std.stdarg is different: it expects pointer types (i.e. _argptr)
/*
  We can make it work fine as long as the argument to va_varg is _argptr,
  we just call va_arg on the hidden va_list.  As long _argptr is not
  otherwise modified, it will work. */

static void
d_gcc_magic_stdarg_module(Module *m, bool is_c_std_arg)
{
    Dsymbols * members = m->members;
    for (size_t i = 0; i < members->dim; i++)
    {
        Dsymbol * sym = members->tdata()[i];
        d_gcc_magic_stdarg_check(sym, is_c_std_arg);
    }
}

static void
d_gcc_magic_builtins_module(Module *m)
{
    Dsymbols * funcs = new Dsymbols;

    for (tree n = bi_fn_list.head; n; n = TREE_CHAIN(n))
    {
        tree decl = TREE_VALUE(n);
        const char * name = IDENTIFIER_POINTER(DECL_NAME(decl));
        TypeFunction * dtf = (TypeFunction *) gcc_type_to_d_type(TREE_TYPE(decl));
        if (! dtf)
        {   //warning(0, "cannot create built in function type for %s", name);
            continue;
        }
        if (dtf->parameters && dtf->parameters->dim == 0 && dtf->varargs)
        {   //warning(0, "one-arg va problem: %s", name);
            continue;
        }
#if V2
        /* %% D2 - builtins are trusted and optionally nothrow.
           The purity of a builtins can vary depending on compiler flags set at
           init, or by the -foptions passed, such as flag_unsafe_math_optimizations
         */
        dtf->trust = TREE_NOTHROW(decl) ? TRUSTtrusted : TRUSTsystem;
        dtf->isnothrow = TREE_NOTHROW(decl);
        dtf->purity = DECL_PURE_P(decl) ?   PUREstrong :
                      TREE_READONLY(decl) ? PUREconst :
                      DECL_IS_NOVOPS(decl) ? PUREweak :
                      PUREimpure;
#endif
        FuncDeclaration * func = new FuncDeclaration(0, 0,
            Lexer::idPool(name), STCextern, dtf);
        func->isym = new Symbol;
        func->isym->Stree = decl;

        funcs->push(func);
    }

    for (tree n = bi_type_list.head; n; n = TREE_CHAIN(n))
    {
        tree decl = TREE_VALUE(n);
        tree type = TREE_TYPE(decl);
        const char * name = IDENTIFIER_POINTER(DECL_NAME(decl));
        Type * dt = gcc_type_to_d_type(type);
        if (! dt)
        {   //warning(0, "cannot create built in type for %s", name);
            continue;
        }
        funcs->push(new AliasDeclaration(0, Lexer::idPool(name), dt));
    }

#if D_GCC_VER >= 46
    /* Iterate through the target-specific builtin types for va_list. */
    if (targetm.enum_va_list_p)
    {
        int l;
        const char* name;
        tree type;

        for (l = 0; targetm.enum_va_list_p(l, &name, &type); ++l)
        {
            Type * dt = gcc_type_to_d_type(type);
            if (! dt)
            {   //warning(0, "cannot create built in type for "%s", name);
                continue;
            }
            funcs->push(new AliasDeclaration(0, Lexer::idPool(name), dt));
        }
    }
#endif

    for (size_t i = 0; i < builtin_converted_decls.dim ; ++i)
    {
        Dsymbol * sym = builtin_converted_decls.tdata()[i];
        /* va_list is a pain.  It can be referenced without importing
           gcc.builtins so it really needs to go in the object module. */
        if (! sym->parent)
        {
            Declaration * decl = sym->isDeclaration();
            if (! decl || decl->type != d_gcc_builtin_va_list_d_type)
            {
                sym->parent = m;
                /* Currently, there is no need to run semantic, but we do
                   want to output inits, etc. */
                funcs->push(sym);
            }
        }
    }

    Type * d = NULL;

    /* va_list should already be built, so no need to convert to D type again. */
    d = d_gcc_builtin_va_list_d_type;
    if (d)
    {
        funcs->push(new AliasDeclaration(0,
                           Lexer::idPool("__builtin_va_list"), d));
    }

    /* Provide access to target-specific integer types. */
    d = gcc_type_to_d_type(long_integer_type_node);
    if (d)
    {
        funcs->push(new AliasDeclaration(0,
                         Lexer::idPool("__builtin_Clong"), d));
    }
    d = gcc_type_to_d_type(long_unsigned_type_node);
    if (d)
    {
        funcs->push(new AliasDeclaration(0,
                         Lexer::idPool("__builtin_Culong"), d));
    }
    d = gcc_type_to_d_type(d_type_for_mode(word_mode, 0));
    if (d)
    {
        funcs->push(new AliasDeclaration(0,
                         Lexer::idPool("__builtin_machine_int"), d));
    }
    d = gcc_type_to_d_type(d_type_for_mode(word_mode, 1));
    if (d)
    {
        funcs->push(new AliasDeclaration(0,
                         Lexer::idPool("__builtin_machine_uint"), d));
    }
    d = gcc_type_to_d_type(d_type_for_mode(ptr_mode, 0));
    if (d)
    {
        funcs->push(new AliasDeclaration(0,
                         Lexer::idPool("__builtin_pointer_int"), d));
    }
    d = gcc_type_to_d_type(d_type_for_mode(ptr_mode, 1));
    if (d)
    {
        funcs->push(new AliasDeclaration(0,
                         Lexer::idPool("__builtin_pointer_uint"), d));
    }
    m->members->push(new LinkDeclaration(LINKc, funcs));
}


void
d_gcc_magic_module(Module *m)
{
    ModuleDeclaration * md = m->md;
    if (!md || !md->packages || !md->id)
        return;

    if (md->packages->dim == 1)
    {
        if (! strcmp((md->packages->tdata()[0])->string, "gcc"))
        {
            if (! strcmp(md->id->string, "builtins"))
                d_gcc_magic_builtins_module(m);
        }
#if V2
        else if (! strcmp((md->packages->tdata()[0])->string, "core"))
        {
            if (! strcmp(md->id->string, "vararg"))
                d_gcc_magic_stdarg_module(m, false);
            else if (! strcmp(md->id->string, "bitop"))
                IRState::setIntrinsicModule(m, true);
            else if (! strcmp(md->id->string, "math"))
                IRState::setMathModule(m, true);
        }
        else if (! strcmp((md->packages->tdata()[0])->string, "std"))
        {
            if (! strcmp(md->id->string, "intrinsic"))
                IRState::setIntrinsicModule(m, false);
            else if (! strcmp(md->id->string, "math"))
                IRState::setMathModule(m, false);
        }
#else
        else if (! strcmp(((Identifier *) md->packages->data[0])->string, "std"))
        {
            if (! strcmp(md->id->string, "stdarg"))
                d_gcc_magic_stdarg_module(m, false);
            else if (! strcmp(md->id->string, "intrinsic"))
                IRState::setIntrinsicModule(m, false);
            else if (! strcmp(md->id->string, "math"))
                IRState::setMathModule(m, false);
        }
#endif
    }
    else if (md->packages->dim == 2)
    {
#if V2
        if (! strcmp((md->packages->tdata()[0])->string, "core") &&
            ! strcmp((md->packages->tdata()[1])->string, "stdc"))
        {
            if (! strcmp(md->id->string, "stdarg"))
                d_gcc_magic_stdarg_module(m, true);
        }
#else
        if (! strcmp((md->packages->tdata()[0])->string, "std") &&
            ! strcmp((md->packages->tdata()[1])->string, "c"))
        {
            if (! strcmp(md->id->string, "stdarg"))
                d_gcc_magic_stdarg_module(m, true);
        }
#endif
    }
}

#if V2
// Convert backend evaluated trees to D Frontend Expressions for CTFE
static Expression *
gcc_cst_to_d_expr(tree cst)
{
    STRIP_TYPE_NOPS(cst);
    Type * type = gcc_type_to_d_type(TREE_TYPE(cst));

    if (type)
    {   /* Convert our GCC CST tree into a D Expression. This is kinda exper,
           as it will only be converted back to a tree again later, but this
           satisifies a need to have gcc builtins CTFE'able.
         */
        tree_code code = TREE_CODE(cst);
        if (code == COMPLEX_CST)
        {
            complex_t value;
            value.re = TREE_REAL_CST(TREE_REALPART(cst));
            value.im = TREE_REAL_CST(TREE_IMAGPART(cst));
            return new ComplexExp(0, value, type);
        }
        else if (code == INTEGER_CST)
        {
            dinteger_t value = IRState::hwi2toli(TREE_INT_CST(cst));
            return new IntegerExp(0, value, type);
        }
        else if (code == REAL_CST)
        {
            real_t value = TREE_REAL_CST(cst);
            return new RealExp(0, value, type);
        }
        else if (code == STRING_CST)
        {
            const void * string = TREE_STRING_POINTER(cst);
            size_t len = TREE_STRING_LENGTH(cst);
            return new StringExp(0, CONST_CAST(void*, string), len);
        }
        // TODO: VECTOR... ?
    }
    return NULL;
}

/*
   Evaluate builtin function.
   Return result; NULL if cannot evaluate it.
 */
Expression *
eval_builtin(BUILTIN builtin, Expressions * arguments)
{
    Expression *e = NULL;
    Expression *arg0 = arguments->tdata()[0];

    static IRState irs;
    tree callee = NULL_TREE;
    tree result;

    switch (builtin)
    {
        case BUILTINsin:
            callee = built_in_decls[BUILT_IN_SINL];
            break;

        case BUILTINcos:
            callee = built_in_decls[BUILT_IN_COSL];
            break;

        case BUILTINtan:
            callee = built_in_decls[BUILT_IN_TANL];
            break;

        case BUILTINsqrt:
            if (arg0->type->ty == Tfloat32)
                callee = built_in_decls[BUILT_IN_SQRTF];
            else if (arg0->type->ty == Tfloat64)
                callee = built_in_decls[BUILT_IN_SQRT];
            else if (arg0->type->ty == Tfloat80)
                callee = built_in_decls[BUILT_IN_SQRTL];
            gcc_assert(callee);
            break;

        case BUILTINfabs:
            callee = built_in_decls[BUILT_IN_FABSL];
            break;

        default:
            gcc_unreachable();
    }

    TypeFunction * tf = (TypeFunction *) gcc_type_to_d_type(TREE_TYPE(callee));
    result = irs.call(tf, callee, NULL, arguments);
    result = fold(result);

    if (TREE_CONSTANT(result) && TREE_CODE(result) != CALL_EXPR)
    {   // Builtin should be successfully evaluated.
        // Will only return NULL if we can't convert it.
        e = gcc_cst_to_d_expr(result);
    }
    return e;

}

Expression *
d_gcc_eval_builtin(FuncDeclaration *fd, Expressions *arguments)
{
    gcc_assert(arguments && arguments->dim);

    if (fd->builtin != BUILTINgcc)
        return eval_builtin(fd->builtin, arguments);
    else
    {
        Expression * e = NULL;
        TypeFunction * tf = (TypeFunction *) fd->type;
        tree callee = NULL_TREE;

        // g.irs is not available.
        static IRState irs;
        tree result = irs.call(tf, callee, NULL, arguments);
        result = fold(result);

        if (TREE_CONSTANT(result) && TREE_CODE(result) != CALL_EXPR)
        {   // Builtin should be successfully evaluated.
            // Will only return NULL if we can't convert it.
            e = gcc_cst_to_d_expr(result);
        }
        return e;
    }
}
#endif
