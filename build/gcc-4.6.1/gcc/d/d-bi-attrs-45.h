static tree handle_packed_attribute (tree *, tree, tree, int, bool *);
static tree handle_nocommon_attribute (tree *, tree, tree, int, bool *);
static tree handle_common_attribute (tree *, tree, tree, int, bool *);
static tree handle_noreturn_attribute (tree *, tree, tree, int, bool *);
static tree handle_hot_attribute (tree *, tree, tree, int, bool *);
static tree handle_cold_attribute (tree *, tree, tree, int, bool *);
static tree handle_noinline_attribute (tree *, tree, tree, int, bool *);
static tree handle_noclone_attribute (tree *, tree, tree, int, bool *);
static tree handle_always_inline_attribute (tree *, tree, tree, int,
                                            bool *);
static tree handle_flatten_attribute (tree *, tree, tree, int, bool *);
static tree handle_error_attribute (tree *, tree, tree, int, bool *);
static tree handle_used_attribute (tree *, tree, tree, int, bool *);
static tree handle_unused_attribute (tree *, tree, tree, int, bool *);
static tree handle_externally_visible_attribute (tree *, tree, tree, int,
                                                 bool *);
static tree handle_const_attribute (tree *, tree, tree, int, bool *);
static tree handle_transparent_union_attribute (tree *, tree, tree,
                                                int, bool *);
static tree handle_constructor_attribute (tree *, tree, tree, int, bool *);
static tree handle_destructor_attribute (tree *, tree, tree, int, bool *);
static tree handle_mode_attribute (tree *, tree, tree, int, bool *);
static tree handle_section_attribute (tree *, tree, tree, int, bool *);
static tree handle_aligned_attribute (tree *, tree, tree, int, bool *);
static tree handle_weak_attribute (tree *, tree, tree, int, bool *) ;
static tree handle_alias_attribute (tree *, tree, tree, int, bool *);
static tree handle_weakref_attribute (tree *, tree, tree, int, bool *) ;
static tree handle_visibility_attribute (tree *, tree, tree, int,
                                         bool *);
static tree handle_tls_model_attribute (tree *, tree, tree, int,
                                        bool *);
static tree handle_no_instrument_function_attribute (tree *, tree,
                                                     tree, int, bool *);
static tree handle_malloc_attribute (tree *, tree, tree, int, bool *);
static tree handle_returns_twice_attribute (tree *, tree, tree, int, bool *);
static tree handle_no_limit_stack_attribute (tree *, tree, tree, int,
                                             bool *);
static tree handle_pure_attribute (tree *, tree, tree, int, bool *);
static tree handle_novops_attribute (tree *, tree, tree, int, bool *);
static tree handle_deprecated_attribute (tree *, tree, tree, int,
                                         bool *);
static tree handle_vector_size_attribute (tree *, tree, tree, int,
                                          bool *);
static tree handle_nonnull_attribute (tree *, tree, tree, int, bool *);
static tree handle_nothrow_attribute (tree *, tree, tree, int, bool *);
static tree handle_warn_unused_result_attribute (tree *, tree, tree, int,
                                                 bool *);
static tree handle_sentinel_attribute (tree *, tree, tree, int, bool *);
static tree handle_type_generic_attribute (tree *, tree, tree, int, bool *);
static tree handle_alloc_size_attribute (tree *, tree, tree, int, bool *);
static tree handle_target_attribute (tree *, tree, tree, int, bool *);
static tree handle_optimize_attribute (tree *, tree, tree, int, bool *);

static bool get_nonnull_operand (tree, unsigned HOST_WIDE_INT *);

extern void decode_options (unsigned int argc, const char **argv);

/* extra for gdc copy: */
static tree
handle_format_arg_attribute (tree *node ATTRIBUTE_UNUSED, tree name ATTRIBUTE_UNUSED,
                             tree args ATTRIBUTE_UNUSED, int flags ATTRIBUTE_UNUSED,
                             bool *no_add_attrs ATTRIBUTE_UNUSED)
{
    return NULL_TREE;
}

static tree
handle_format_attribute (tree *node ATTRIBUTE_UNUSED, tree name ATTRIBUTE_UNUSED, tree args ATTRIBUTE_UNUSED,
                         int flags ATTRIBUTE_UNUSED, bool *no_add_attrs ATTRIBUTE_UNUSED)
{
    return NULL_TREE;
}
/* -- end extra */

/* Table of machine-independent attributes common to all C-like languages.  */
const struct attribute_spec d_common_attribute_table[] =
{
  /* { name, min_len, max_len, decl_req, type_req, fn_type_req, handler } */
  { "packed",                 0, 0, false, false, false,
                              handle_packed_attribute },
  { "nocommon",               0, 0, true,  false, false,
                              handle_nocommon_attribute },
  { "common",                 0, 0, true,  false, false,
                              handle_common_attribute },
  /* FIXME: logically, noreturn attributes should be listed as
     "false, true, true" and apply to function types.  But implementing this
     would require all the places in the compiler that use TREE_THIS_VOLATILE
     on a decl to identify non-returning functions to be located and fixed
     to check the function type instead.  */
  { "noreturn",               0, 0, true,  false, false,
                              handle_noreturn_attribute },
  { "volatile",               0, 0, true,  false, false,
                              handle_noreturn_attribute },
  { "noinline",               0, 0, true,  false, false,
                              handle_noinline_attribute },
  { "noclone",                0, 0, true,  false, false,
                              handle_noclone_attribute },
  { "always_inline",          0, 0, true,  false, false,
                              handle_always_inline_attribute },
/* not in gdc
  { "gnu_inline",             0, 0, true,  false, false,
                              handle_gnu_inline_attribute },
  { "artificial",             0, 0, true,  false, false,
                              handle_artificial_attribute },*/
  { "flatten",                0, 0, true,  false, false,
                              handle_flatten_attribute },
  { "used",                   0, 0, true,  false, false,
                              handle_used_attribute },
  { "unused",                 0, 0, false, false, false,
                              handle_unused_attribute },
  { "externally_visible",     0, 0, true,  false, false,
                              handle_externally_visible_attribute },
  /* The same comments as for noreturn attributes apply to const ones.  */
  { "const",                  0, 0, true,  false, false,
                              handle_const_attribute },
  { "transparent_union",      0, 0, false, false, false,
                              handle_transparent_union_attribute },
  { "constructor",            0, 1, true,  false, false,
                              handle_constructor_attribute },
  { "destructor",             0, 1, true,  false, false,
                              handle_destructor_attribute },
  { "mode",                   1, 1, false,  true, false,
                              handle_mode_attribute },
  { "section",                1, 1, true,  false, false,
                              handle_section_attribute },
  { "aligned",                0, 1, false, false, false,
                              handle_aligned_attribute },
  { "weak",                   0, 0, true,  false, false,
                              handle_weak_attribute },
  { "alias",                  1, 1, true,  false, false,
                              handle_alias_attribute },
  { "weakref",                0, 1, true,  false, false,
                              handle_weakref_attribute },
  { "no_instrument_function", 0, 0, true,  false, false,
                              handle_no_instrument_function_attribute },
  { "malloc",                 0, 0, true,  false, false,
                              handle_malloc_attribute },
  { "returns_twice",          0, 0, true,  false, false,
                              handle_returns_twice_attribute },
  { "no_stack_limit",         0, 0, true,  false, false,
                              handle_no_limit_stack_attribute },
  { "pure",                   0, 0, true,  false, false,
                              handle_pure_attribute },
  /* For internal use (marking of builtins) only.  The name contains space
     to prevent its usage in source code.  */
  { "no vops",                0, 0, true,  false, false,
                              handle_novops_attribute },
  { "deprecated",             0, 1, false, false, false,
                              handle_deprecated_attribute },
  { "vector_size",            1, 1, false, true, false,
                              handle_vector_size_attribute },
  { "visibility",             1, 1, false, false, false,
                              handle_visibility_attribute },
  { "tls_model",              1, 1, true,  false, false,
                              handle_tls_model_attribute },
  { "nonnull",                0, -1, false, true, true,
                              handle_nonnull_attribute },
  { "nothrow",                0, 0, true,  false, false,
                              handle_nothrow_attribute },
  { "may_alias",              0, 0, false, true, false, NULL },
/* not in gdc
  { "cleanup",                1, 1, true, false, false,
                              handle_cleanup_attribute },*/
  { "warn_unused_result",     0, 0, false, true, true,
                              handle_warn_unused_result_attribute },
  { "sentinel",               0, 1, false, true, true,
                              handle_sentinel_attribute },
  /* For internal use (marking of builtins) only.  The name contains space
     to prevent its usage in source code.  */
  { "type generic",           0, 0, false, true, true,
                              handle_type_generic_attribute },
  { "alloc_size",             1, 2, false, true, true,
                              handle_alloc_size_attribute },
  { "cold",                   0, 0, true,  false, false,
                              handle_cold_attribute },
  { "hot",                    0, 0, true,  false, false,
                              handle_hot_attribute },
  { "warning",                1, 1, true,  false, false,
                              handle_error_attribute },
  { "error",                  1, 1, true,  false, false,
                              handle_error_attribute },
  { "target",                 1, -1, true, false, false,
                              handle_target_attribute },
  { "optimize",               1, -1, true, false, false,
                              handle_optimize_attribute },
  { NULL,                     0, 0, false, false, false, NULL }
};

/* Give the specifications for the format attributes, used by C and all
   descendants.  */

const struct attribute_spec d_common_format_attribute_table[] =
{
  /* { name, min_len, max_len, decl_req, type_req, fn_type_req, handler } */
  { "format",                 3, 3, false, true,  true,
                              handle_format_attribute },
  { "format_arg",             1, 1, false, true,  true,
                              handle_format_arg_attribute },
  { NULL,                     0, 0, false, false, false, NULL }
};

/* Attribute handlers common to C front ends.  */

/* Handle a "packed" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_packed_attribute (tree *node, tree name, tree ARG_UNUSED (args),
                         int flags, bool *no_add_attrs)
{
  if (TYPE_P (*node))
    {
      if (!(flags & (int) ATTR_FLAG_TYPE_IN_PLACE))
        *node = build_variant_type_copy (*node);
      TYPE_PACKED (*node) = 1;
    }
  else if (TREE_CODE (*node) == FIELD_DECL)
    {
      if (TYPE_ALIGN (TREE_TYPE (*node)) <= BITS_PER_UNIT
          /* Still pack bitfields.  */
          && ! DECL_INITIAL (*node))
        warning (OPT_Wattributes,
                 "%qE attribute ignored for field of type %qT",
                 name, TREE_TYPE (*node));
      else
        DECL_PACKED (*node) = 1;
    }
  /* We can't set DECL_PACKED for a VAR_DECL, because the bit is
     used for DECL_REGISTER.  It wouldn't mean anything anyway.
     We can't set DECL_PACKED on the type of a TYPE_DECL, because
     that changes what the typedef is typing.  */
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "nocommon" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_nocommon_attribute (tree *node, tree name,
                           tree ARG_UNUSED (args),
                           int ARG_UNUSED (flags), bool *no_add_attrs)
{
  if (TREE_CODE (*node) == VAR_DECL)
    DECL_COMMON (*node) = 0;
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "common" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_common_attribute (tree *node, tree name, tree ARG_UNUSED (args),
                         int ARG_UNUSED (flags), bool *no_add_attrs)
{
  if (TREE_CODE (*node) == VAR_DECL)
    DECL_COMMON (*node) = 1;
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "noreturn" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_noreturn_attribute (tree *node, tree name, tree ARG_UNUSED (args),
                           int ARG_UNUSED (flags), bool *no_add_attrs)
{
  tree type = TREE_TYPE (*node);

  /* See FIXME comment in c_common_attribute_table.  */
  if (TREE_CODE (*node) == FUNCTION_DECL)
    TREE_THIS_VOLATILE (*node) = 1;
  else if (TREE_CODE (type) == POINTER_TYPE
           && TREE_CODE (TREE_TYPE (type)) == FUNCTION_TYPE)
    TREE_TYPE (*node)
      = build_pointer_type
        (build_type_variant (TREE_TYPE (type),
                             TYPE_READONLY (TREE_TYPE (type)), 1));
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "hot" and attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_hot_attribute (tree *node, tree name, tree ARG_UNUSED (args),
                      int ARG_UNUSED (flags), bool *no_add_attrs)
{
  if (TREE_CODE (*node) == FUNCTION_DECL)
    {
      if (lookup_attribute ("cold", DECL_ATTRIBUTES (*node)) != NULL)
        {
          warning (OPT_Wattributes, "%qE attribute conflicts with attribute %s",
                   name, "cold");
          *no_add_attrs = true;
        }
      /* Most of the rest of the hot processing is done later with
         lookup_attribute.  */
    }
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}
/* Handle a "cold" and attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_cold_attribute (tree *node, tree name, tree ARG_UNUSED (args),
                       int ARG_UNUSED (flags), bool *no_add_attrs)
{
  if (TREE_CODE (*node) == FUNCTION_DECL)
    {
      if (lookup_attribute ("hot", DECL_ATTRIBUTES (*node)) != NULL)
        {
          warning (OPT_Wattributes, "%qE attribute conflicts with attribute %s",
                   name, "hot");
          *no_add_attrs = true;
        }
      /* Most of the rest of the cold processing is done later with
         lookup_attribute.  */
    }
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "noinline" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_noinline_attribute (tree *node, tree name,
                           tree ARG_UNUSED (args),
                           int ARG_UNUSED (flags), bool *no_add_attrs)
{
  if (TREE_CODE (*node) == FUNCTION_DECL)
    DECL_UNINLINABLE (*node) = 1;
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "noclone" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_noclone_attribute (tree *node, tree name,
                          tree ARG_UNUSED (args),
                          int ARG_UNUSED (flags), bool *no_add_attrs)
{
  if (TREE_CODE (*node) != FUNCTION_DECL)
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "always_inline" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_always_inline_attribute (tree *node, tree name,
                                tree ARG_UNUSED (args),
                                int ARG_UNUSED (flags),
                                bool *no_add_attrs)
{
  if (TREE_CODE (*node) == FUNCTION_DECL)
    {
      /* Set the attribute and mark it for disregarding inline
         limits.  */
      DECL_DISREGARD_INLINE_LIMITS (*node) = 1;
    }
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "flatten" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_flatten_attribute (tree *node, tree name,
                          tree args ATTRIBUTE_UNUSED,
                          int flags ATTRIBUTE_UNUSED, bool *no_add_attrs)
{
  if (TREE_CODE (*node) == FUNCTION_DECL)
    /* Do nothing else, just set the attribute.  We'll get at
       it later with lookup_attribute.  */
    ;
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "warning" or "error" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_error_attribute (tree *node, tree name, tree args,
                        int ARG_UNUSED (flags), bool *no_add_attrs)
{
  if (TREE_CODE (*node) == FUNCTION_DECL
      || TREE_CODE (TREE_VALUE (args)) == STRING_CST)
    /* Do nothing else, just set the attribute.  We'll get at
       it later with lookup_attribute.  */
    ;
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "used" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_used_attribute (tree *pnode, tree name, tree ARG_UNUSED (args),
                       int ARG_UNUSED (flags), bool *no_add_attrs)
{
  tree node = *pnode;

  if (TREE_CODE (node) == FUNCTION_DECL
      || (TREE_CODE (node) == VAR_DECL && TREE_STATIC (node)))
    {
      TREE_USED (node) = 1;
      DECL_PRESERVE_P (node) = 1;
    }
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "unused" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_unused_attribute (tree *node, tree name, tree ARG_UNUSED (args),
                         int flags, bool *no_add_attrs)
{
  if (DECL_P (*node))
    {
      tree decl = *node;

      if (TREE_CODE (decl) == PARM_DECL
          || TREE_CODE (decl) == VAR_DECL
          || TREE_CODE (decl) == FUNCTION_DECL
          || TREE_CODE (decl) == LABEL_DECL
          || TREE_CODE (decl) == TYPE_DECL)
        TREE_USED (decl) = 1;
      else
        {
          warning (OPT_Wattributes, "%qE attribute ignored", name);
          *no_add_attrs = true;
        }
    }
  else
    {
      if (!(flags & (int) ATTR_FLAG_TYPE_IN_PLACE))
        *node = build_variant_type_copy (*node);
      TREE_USED (*node) = 1;
    }

  return NULL_TREE;
}

/* Handle a "externally_visible" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_externally_visible_attribute (tree *pnode, tree name,
                                     tree ARG_UNUSED (args),
                                     int ARG_UNUSED (flags),
                                     bool *no_add_attrs)
{
  tree node = *pnode;

  if (TREE_CODE (node) == FUNCTION_DECL || TREE_CODE (node) == VAR_DECL)
    {
      if ((!TREE_STATIC (node) && TREE_CODE (node) != FUNCTION_DECL
           && !DECL_EXTERNAL (node)) || !TREE_PUBLIC (node))
        {
          warning (OPT_Wattributes,
                   "%qE attribute have effect only on public objects", name);
          *no_add_attrs = true;
        }
    }
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "const" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_const_attribute (tree *node, tree name, tree ARG_UNUSED (args),
                        int ARG_UNUSED (flags), bool *no_add_attrs)
{
  tree type = TREE_TYPE (*node);

  /* See FIXME comment on noreturn in c_common_attribute_table.  */
  if (TREE_CODE (*node) == FUNCTION_DECL)
    TREE_READONLY (*node) = 1;
  else if (TREE_CODE (type) == POINTER_TYPE
           && TREE_CODE (TREE_TYPE (type)) == FUNCTION_TYPE)
    TREE_TYPE (*node)
      = build_pointer_type
        (build_type_variant (TREE_TYPE (type), 1,
                             TREE_THIS_VOLATILE (TREE_TYPE (type))));
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "transparent_union" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_transparent_union_attribute (tree *node, tree name,
                                    tree ARG_UNUSED (args), int flags,
                                    bool *no_add_attrs)
{
  tree type;

  *no_add_attrs = true;

  if (TREE_CODE (*node) == TYPE_DECL)
    node = &TREE_TYPE (*node);
  type = *node;

  if (TREE_CODE (type) == UNION_TYPE)
    {
      /* When IN_PLACE is set, leave the check for FIELDS and MODE to
         the code in finish_struct.  */
      if (!(flags & (int) ATTR_FLAG_TYPE_IN_PLACE))
        {
          if (TYPE_FIELDS (type) == NULL_TREE
              || TYPE_MODE (type) != DECL_MODE (TYPE_FIELDS (type)))
            goto ignored;

          /* A type variant isn't good enough, since we don't a cast
             to such a type removed as a no-op.  */
          *node = type = build_duplicate_type (type);
        }

      TYPE_TRANSPARENT_AGGR (type) = 1;
      return NULL_TREE;
    }

 ignored:
  warning (OPT_Wattributes, "%qE attribute ignored", name);
  return NULL_TREE;
}

/* Subroutine of handle_{con,de}structor_attribute.  Evaluate ARGS to
   get the requested priority for a constructor or destructor,
   possibly issuing diagnostics for invalid or reserved
   priorities.  */

static priority_type
get_priority (tree args, bool is_destructor)
{
  HOST_WIDE_INT pri;
  tree arg;

  if (!args)
    return DEFAULT_INIT_PRIORITY;

  if (!SUPPORTS_INIT_PRIORITY)
    {
      if (is_destructor)
        error ("destructor priorities are not supported");
      else
        error ("constructor priorities are not supported");
      return DEFAULT_INIT_PRIORITY;
    }

  arg = TREE_VALUE (args);
  if (!host_integerp (arg, /*pos=*/0)
      || !INTEGRAL_TYPE_P (TREE_TYPE (arg)))
    goto invalid;

  pri = tree_low_cst (TREE_VALUE (args), /*pos=*/0);
  if (pri < 0 || pri > MAX_INIT_PRIORITY)
    goto invalid;

  if (pri <= MAX_RESERVED_INIT_PRIORITY)
    {
      if (is_destructor)
        warning (0,
                 "destructor priorities from 0 to %d are reserved "
                 "for the implementation",
                 MAX_RESERVED_INIT_PRIORITY);
      else
        warning (0,
                 "constructor priorities from 0 to %d are reserved "
                 "for the implementation",
                 MAX_RESERVED_INIT_PRIORITY);
    }
  return pri;

 invalid:
  if (is_destructor)
    error ("destructor priorities must be integers from 0 to %d inclusive",
           MAX_INIT_PRIORITY);
  else
    error ("constructor priorities must be integers from 0 to %d inclusive",
           MAX_INIT_PRIORITY);
  return DEFAULT_INIT_PRIORITY;
}

/* Handle a "constructor" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_constructor_attribute (tree *node, tree name, tree args,
                              int ARG_UNUSED (flags),
                              bool *no_add_attrs)
{
  tree decl = *node;
  tree type = TREE_TYPE (decl);

  if (TREE_CODE (decl) == FUNCTION_DECL
      && TREE_CODE (type) == FUNCTION_TYPE
      && decl_function_context (decl) == 0)
    {
      priority_type priority;
      DECL_STATIC_CONSTRUCTOR (decl) = 1;
      priority = get_priority (args, /*is_destructor=*/false);
      SET_DECL_INIT_PRIORITY (decl, priority);
      TREE_USED (decl) = 1;
    }
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "destructor" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_destructor_attribute (tree *node, tree name, tree args,
                             int ARG_UNUSED (flags),
                             bool *no_add_attrs)
{
  tree decl = *node;
  tree type = TREE_TYPE (decl);

  if (TREE_CODE (decl) == FUNCTION_DECL
      && TREE_CODE (type) == FUNCTION_TYPE
      && decl_function_context (decl) == 0)
    {
      priority_type priority;
      DECL_STATIC_DESTRUCTOR (decl) = 1;
      priority = get_priority (args, /*is_destructor=*/true);
      SET_DECL_FINI_PRIORITY (decl, priority);
      TREE_USED (decl) = 1;
    }
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "mode" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_mode_attribute (tree *node, tree name, tree args,
                       int ARG_UNUSED (flags), bool *no_add_attrs)
{
  tree type = *node;
  tree ident = TREE_VALUE (args);

  *no_add_attrs = true;

  /* For gdc: accepts string argument instead of identifier. */
  if (TREE_CODE (ident) != STRING_CST)
    warning (OPT_Wattributes, "%qE attribute ignored", name);
  else
    {
      int j;
      const char *p = TREE_STRING_POINTER (ident);
      int len = TREE_STRING_LENGTH (ident);
      enum machine_mode mode = VOIDmode;
      tree typefm;
      bool valid_mode;

      if (len > 4 && p[0] == '_' && p[1] == '_'
          && p[len - 1] == '_' && p[len - 2] == '_')
        {
          char *newp = (char *) alloca (len - 1);

          strcpy (newp, &p[2]);
          newp[len - 4] = '\0';
          p = newp;
        }

      /* Change this type to have a type with the specified mode.
         First check for the special modes.  */
      if (!strcmp (p, "byte"))
        mode = byte_mode;
      else if (!strcmp (p, "word"))
        mode = word_mode;
      else if (!strcmp (p, "pointer"))
        mode = ptr_mode;
      else if (!strcmp (p, "libgcc_cmp_return"))
        mode = targetm.libgcc_cmp_return_mode ();
      else if (!strcmp (p, "libgcc_shift_count"))
        mode = targetm.libgcc_shift_count_mode ();
      else if (!strcmp (p, "unwind_word"))
        mode = targetm.unwind_word_mode ();
      else
        for (j = 0; j < NUM_MACHINE_MODES; j++)
          if (!strcmp (p, GET_MODE_NAME (j)))
            {
              mode = (enum machine_mode) j;
              break;
            }

      if (mode == VOIDmode)
        {
          error ("unknown machine mode %qE", ident);
          return NULL_TREE;
        }

      valid_mode = false;
      switch (GET_MODE_CLASS (mode))
        {
        case MODE_INT:
        case MODE_PARTIAL_INT:
        case MODE_FLOAT:
        case MODE_DECIMAL_FLOAT:
        case MODE_FRACT:
        case MODE_UFRACT:
        case MODE_ACCUM:
        case MODE_UACCUM:
          valid_mode = targetm.scalar_mode_supported_p (mode);
          break;

        case MODE_COMPLEX_INT:
        case MODE_COMPLEX_FLOAT:
          valid_mode = targetm.scalar_mode_supported_p (GET_MODE_INNER (mode));
          break;

        case MODE_VECTOR_INT:
        case MODE_VECTOR_FLOAT:
        case MODE_VECTOR_FRACT:
        case MODE_VECTOR_UFRACT:
        case MODE_VECTOR_ACCUM:
        case MODE_VECTOR_UACCUM:
          warning (OPT_Wattributes, "specifying vector types with "
                   "__attribute__ ((mode)) is deprecated");
          warning (OPT_Wattributes,
                   "use __attribute__ ((vector_size)) instead");
          valid_mode = vector_mode_valid_p (mode);
          break;

        default:
          break;
        }
      if (!valid_mode)
        {
          error ("unable to emulate %qs", p);
          return NULL_TREE;
        }

      if (POINTER_TYPE_P (type))
        {
          addr_space_t as = TYPE_ADDR_SPACE (TREE_TYPE (type));
          tree (*fn)(tree, enum machine_mode, bool);

          if (!targetm.addr_space.valid_pointer_mode (mode, as))
            {
              error ("invalid pointer mode %qs", p);
              return NULL_TREE;
            }

          if (TREE_CODE (type) == POINTER_TYPE)
            fn = build_pointer_type_for_mode;
          else
            fn = build_reference_type_for_mode;
          typefm = fn (TREE_TYPE (type), mode, false);
        }
      else
        {
          /* For fixed-point modes, we need to test if the signness of type
             and the machine mode are consistent.  */
          if (ALL_FIXED_POINT_MODE_P (mode)
              && TYPE_UNSIGNED (type) != UNSIGNED_FIXED_POINT_MODE_P (mode))
            {
              error ("signness of type and machine mode %qs don't match", p);
              return NULL_TREE;
            }
          /* For fixed-point modes, we need to pass saturating info.  */
          typefm = lang_hooks.types.type_for_mode (mode,
                        ALL_FIXED_POINT_MODE_P (mode) ? TYPE_SATURATING (type)
                                                      : TYPE_UNSIGNED (type));
        }

      if (typefm == NULL_TREE)
        {
          error ("no data type for mode %qs", p);
          return NULL_TREE;
        }
      else if (TREE_CODE (type) == ENUMERAL_TYPE)
        {
          /* For enumeral types, copy the precision from the integer
             type returned above.  If not an INTEGER_TYPE, we can't use
             this mode for this type.  */
          if (TREE_CODE (typefm) != INTEGER_TYPE)
            {
              error ("cannot use mode %qs for enumeral types", p);
              return NULL_TREE;
            }

          if (flags & ATTR_FLAG_TYPE_IN_PLACE)
            {
              TYPE_PRECISION (type) = TYPE_PRECISION (typefm);
              typefm = type;
            }
          else
            {
              /* We cannot build a type variant, as there's code that assumes
                 that TYPE_MAIN_VARIANT has the same mode.  This includes the
                 debug generators.  Instead, create a subrange type.  This
                 results in all of the enumeral values being emitted only once
                 in the original, and the subtype gets them by reference.  */
              if (TYPE_UNSIGNED (type))
                typefm = make_unsigned_type (TYPE_PRECISION (typefm));
              else
                typefm = make_signed_type (TYPE_PRECISION (typefm));
              TREE_TYPE (typefm) = type;
            }
        }
      else if (VECTOR_MODE_P (mode)
               ? TREE_CODE (type) != TREE_CODE (TREE_TYPE (typefm))
               : TREE_CODE (type) != TREE_CODE (typefm))
        {
          error ("mode %qs applied to inappropriate type", p);
          return NULL_TREE;
        }

      *node = typefm;
    }

  return NULL_TREE;
}

/* Handle a "section" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_section_attribute (tree *node, tree ARG_UNUSED (name), tree args,
                          int ARG_UNUSED (flags), bool *no_add_attrs)
{
  tree decl = *node;

  if (targetm.have_named_sections)
    {
      user_defined_section_attribute = true;

      if ((TREE_CODE (decl) == FUNCTION_DECL
           || TREE_CODE (decl) == VAR_DECL)
          && TREE_CODE (TREE_VALUE (args)) == STRING_CST)
        {
          if (TREE_CODE (decl) == VAR_DECL
              && current_function_decl != NULL_TREE
              && !TREE_STATIC (decl))
            {
              error_at (DECL_SOURCE_LOCATION (decl),
                        "section attribute cannot be specified for "
                        "local variables");
              *no_add_attrs = true;
            }

          /* The decl may have already been given a section attribute
             from a previous declaration.  Ensure they match.  */
          else if (DECL_SECTION_NAME (decl) != NULL_TREE
                   && strcmp (TREE_STRING_POINTER (DECL_SECTION_NAME (decl)),
                              TREE_STRING_POINTER (TREE_VALUE (args))) != 0)
            {
              error ("section of %q+D conflicts with previous declaration",
                     *node);
              *no_add_attrs = true;
            }
          else if (TREE_CODE (decl) == VAR_DECL
                   && !targetm.have_tls && targetm.emutls.tmpl_section
                   && DECL_THREAD_LOCAL_P (decl))
            {
              error ("section of %q+D cannot be overridden", *node);
              *no_add_attrs = true;
            }
          else
            DECL_SECTION_NAME (decl) = TREE_VALUE (args);
        }
      else
        {
          error ("section attribute not allowed for %q+D", *node);
          *no_add_attrs = true;
        }
    }
  else
    {
      error_at (DECL_SOURCE_LOCATION (*node),
                "section attributes are not supported for this target");
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "aligned" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_aligned_attribute (tree *node, tree ARG_UNUSED (name), tree args,
                          int flags, bool *no_add_attrs)
{
  tree decl = NULL_TREE;
  tree *type = NULL;
  int is_type = 0;
  tree align_expr = (args ? TREE_VALUE (args)
                     : size_int (ATTRIBUTE_ALIGNED_VALUE / BITS_PER_UNIT));
  int i;

  if (DECL_P (*node))
    {
      decl = *node;
      type = &TREE_TYPE (decl);
      is_type = TREE_CODE (*node) == TYPE_DECL;
    }
  else if (TYPE_P (*node))
    type = node, is_type = 1;

  if (TREE_CODE (align_expr) != INTEGER_CST)
    {
      error ("requested alignment is not a constant");
      *no_add_attrs = true;
    }
  else if ((i = tree_log2 (align_expr)) == -1)
    {
      error ("requested alignment is not a power of 2");
      *no_add_attrs = true;
    }
  else if (i >= HOST_BITS_PER_INT - BITS_PER_UNIT_LOG)
    {
      error ("requested alignment is too large");
      *no_add_attrs = true;
    }
  else if (is_type)
    {
      if ((flags & (int) ATTR_FLAG_TYPE_IN_PLACE))
        /* OK, modify the type in place.  */;
      /* If we have a TYPE_DECL, then copy the type, so that we
         don't accidentally modify a builtin type.  See pushdecl.  */
      else if (decl && TREE_TYPE (decl) != error_mark_node
               && DECL_ORIGINAL_TYPE (decl) == NULL_TREE)
        {
          tree tt = TREE_TYPE (decl);
          *type = build_variant_type_copy (*type);
          DECL_ORIGINAL_TYPE (decl) = tt;
          TYPE_NAME (*type) = decl;
          TREE_USED (*type) = TREE_USED (decl);
          TREE_TYPE (decl) = *type;
        }
      else
        *type = build_variant_type_copy (*type);

      TYPE_ALIGN (*type) = (1U << i) * BITS_PER_UNIT;
      TYPE_USER_ALIGN (*type) = 1;
    }
  else if (! VAR_OR_FUNCTION_DECL_P (decl)
           && TREE_CODE (decl) != FIELD_DECL)
    {
      error ("alignment may not be specified for %q+D", decl);
      *no_add_attrs = true;
    }
  else if (TREE_CODE (decl) == FUNCTION_DECL
           && DECL_ALIGN (decl) > (1U << i) * BITS_PER_UNIT)
    {
      if (DECL_USER_ALIGN (decl))
        error ("alignment for %q+D was previously specified as %d "
               "and may not be decreased", decl,
               DECL_ALIGN (decl) / BITS_PER_UNIT);
      else
        error ("alignment for %q+D must be at least %d", decl,
               DECL_ALIGN (decl) / BITS_PER_UNIT);
      *no_add_attrs = true;
    }
  else
    {
      DECL_ALIGN (decl) = (1U << i) * BITS_PER_UNIT;
      DECL_USER_ALIGN (decl) = 1;
    }

  return NULL_TREE;
}

/* Handle a "weak" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_weak_attribute (tree *node, tree name,
                       tree ARG_UNUSED (args),
                       int ARG_UNUSED (flags),
                       bool * ARG_UNUSED (no_add_attrs))
{
  if (TREE_CODE (*node) == FUNCTION_DECL
      && DECL_DECLARED_INLINE_P (*node))
    {
      error ("inline function %q+D cannot be declared weak", *node);
      *no_add_attrs = true;
    }
  else if (TREE_CODE (*node) == FUNCTION_DECL
           || TREE_CODE (*node) == VAR_DECL)
    declare_weak (*node);
  else
    warning (OPT_Wattributes, "%qE attribute ignored", name);

  return NULL_TREE;
}

/* Handle an "alias" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_alias_attribute (tree *node, tree name, tree args,
                        int ARG_UNUSED (flags), bool *no_add_attrs)
{
  tree decl = *node;

  if (TREE_CODE (decl) != FUNCTION_DECL && TREE_CODE (decl) != VAR_DECL)
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }
  else if ((TREE_CODE (decl) == FUNCTION_DECL && DECL_INITIAL (decl))
      || (TREE_CODE (decl) != FUNCTION_DECL
          && TREE_PUBLIC (decl) && !DECL_EXTERNAL (decl))
      /* A static variable declaration is always a tentative definition,
         but the alias is a non-tentative definition which overrides.  */
      || (TREE_CODE (decl) != FUNCTION_DECL
          && ! TREE_PUBLIC (decl) && DECL_INITIAL (decl)))
    {
      error ("%q+D defined both normally and as an alias", decl);
      *no_add_attrs = true;
    }

  /* Note that the very first time we process a nested declaration,
     decl_function_context will not be set.  Indeed, *would* never
     be set except for the DECL_INITIAL/DECL_EXTERNAL frobbery that
     we do below.  After such frobbery, pushdecl would set the context.
     In any case, this is never what we want.  */
  else if (decl_function_context (decl) == 0 && current_function_decl == NULL)
    {
      tree id;

      id = TREE_VALUE (args);
      if (TREE_CODE (id) != STRING_CST)
        {
          error ("alias argument not a string");
          *no_add_attrs = true;
          return NULL_TREE;
        }
      id = get_identifier (TREE_STRING_POINTER (id));
      /* This counts as a use of the object pointed to.  */
      TREE_USED (id) = 1;

      if (TREE_CODE (decl) == FUNCTION_DECL)
        DECL_INITIAL (decl) = error_mark_node;
      else
        {
          if (lookup_attribute ("weakref", DECL_ATTRIBUTES (decl)))
            DECL_EXTERNAL (decl) = 1;
          else
            DECL_EXTERNAL (decl) = 0;
          TREE_STATIC (decl) = 1;
        }
    }
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "weakref" attribute; arguments as in struct
   attribute_spec.handler.  */

static tree
handle_weakref_attribute (tree *node, tree ARG_UNUSED (name), tree args,
                          int flags, bool *no_add_attrs)
{
  tree attr = NULL_TREE;

  /* We must ignore the attribute when it is associated with
     local-scoped decls, since attribute alias is ignored and many
     such symbols do not even have a DECL_WEAK field.  */
  if (decl_function_context (*node)
      || current_function_decl
      || (TREE_CODE (*node) != VAR_DECL && TREE_CODE (*node) != FUNCTION_DECL))
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
      return NULL_TREE;
    }

  /* The idea here is that `weakref("name")' mutates into `weakref,
     alias("name")', and weakref without arguments, in turn,
     implicitly adds weak. */

  if (args)
    {
      attr = tree_cons (get_identifier ("alias"), args, attr);
      attr = tree_cons (get_identifier ("weakref"), NULL_TREE, attr);

      *no_add_attrs = true;

      decl_attributes (node, attr, flags);
    }
  else
    {
      if (lookup_attribute ("alias", DECL_ATTRIBUTES (*node)))
        error_at (DECL_SOURCE_LOCATION (*node),
                  "weakref attribute must appear before alias attribute");

      /* Can't call declare_weak because it wants this to be TREE_PUBLIC,
         and that isn't supported; and because it wants to add it to
         the list of weak decls, which isn't helpful.  */
      DECL_WEAK (*node) = 1;
    }

  return NULL_TREE;
}

/* Handle an "visibility" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_visibility_attribute (tree *node, tree name, tree args,
                             int ARG_UNUSED (flags),
                             bool *ARG_UNUSED (no_add_attrs))
{
  tree decl = *node;
  tree id = TREE_VALUE (args);
  enum symbol_visibility vis;

  if (TYPE_P (*node))
    {
      if (TREE_CODE (*node) == ENUMERAL_TYPE)
        /* OK */;
      else if (TREE_CODE (*node) != RECORD_TYPE && TREE_CODE (*node) != UNION_TYPE)
        {
          warning (OPT_Wattributes, "%qE attribute ignored on non-class types",
                   name);
          return NULL_TREE;
        }
      else if (TYPE_FIELDS (*node))
        {
          error ("%qE attribute ignored because %qT is already defined",
                 name, *node);
          return NULL_TREE;
        }
    }
  else if (decl_function_context (decl) != 0 || !TREE_PUBLIC (decl))
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      return NULL_TREE;
    }

  if (TREE_CODE (id) != STRING_CST)
    {
      error ("visibility argument not a string");
      return NULL_TREE;
    }

  /*  If this is a type, set the visibility on the type decl.  */
  if (TYPE_P (decl))
    {
      decl = TYPE_NAME (decl);
      if (!decl)
        return NULL_TREE;
      if (TREE_CODE (decl) == IDENTIFIER_NODE)
        {
           warning (OPT_Wattributes, "%qE attribute ignored on types",
                    name);
           return NULL_TREE;
        }
    }

  if (strcmp (TREE_STRING_POINTER (id), "default") == 0)
    vis = VISIBILITY_DEFAULT;
  else if (strcmp (TREE_STRING_POINTER (id), "internal") == 0)
    vis = VISIBILITY_INTERNAL;
  else if (strcmp (TREE_STRING_POINTER (id), "hidden") == 0)
    vis = VISIBILITY_HIDDEN;
  else if (strcmp (TREE_STRING_POINTER (id), "protected") == 0)
    vis = VISIBILITY_PROTECTED;
  else
    {
      error ("visibility argument must be one of \"default\", \"hidden\", \"protected\" or \"internal\"");
      vis = VISIBILITY_DEFAULT;
    }

  if (DECL_VISIBILITY_SPECIFIED (decl)
      && vis != DECL_VISIBILITY (decl))
    {
      tree attributes = (TYPE_P (*node)
                         ? TYPE_ATTRIBUTES (*node)
                         : DECL_ATTRIBUTES (decl));
      if (lookup_attribute ("visibility", attributes))
        error ("%qD redeclared with different visibility", decl);
      else if (TARGET_DLLIMPORT_DECL_ATTRIBUTES
               && lookup_attribute ("dllimport", attributes))
        error ("%qD was declared %qs which implies default visibility",
               decl, "dllimport");
      else if (TARGET_DLLIMPORT_DECL_ATTRIBUTES
               && lookup_attribute ("dllexport", attributes))
        error ("%qD was declared %qs which implies default visibility",
               decl, "dllexport");
    }

  DECL_VISIBILITY (decl) = vis;
  DECL_VISIBILITY_SPECIFIED (decl) = 1;

  /* Go ahead and attach the attribute to the node as well.  This is needed
     so we can determine whether we have VISIBILITY_DEFAULT because the
     visibility was not specified, or because it was explicitly overridden
     from the containing scope.  */

  return NULL_TREE;
}

/* Handle an "tls_model" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_tls_model_attribute (tree *node, tree name, tree args,
                            int ARG_UNUSED (flags), bool *no_add_attrs)
{
  tree id;
  tree decl = *node;
  enum tls_model kind;

  *no_add_attrs = true;

  if (TREE_CODE (decl) != VAR_DECL || !DECL_THREAD_LOCAL_P (decl))
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      return NULL_TREE;
    }

  kind = DECL_TLS_MODEL (decl);
  id = TREE_VALUE (args);
  if (TREE_CODE (id) != STRING_CST)
    {
      error ("tls_model argument not a string");
      return NULL_TREE;
    }

  if (!strcmp (TREE_STRING_POINTER (id), "local-exec"))
    kind = TLS_MODEL_LOCAL_EXEC;
  else if (!strcmp (TREE_STRING_POINTER (id), "initial-exec"))
    kind = TLS_MODEL_INITIAL_EXEC;
  else if (!strcmp (TREE_STRING_POINTER (id), "local-dynamic"))
    kind = optimize ? TLS_MODEL_LOCAL_DYNAMIC : TLS_MODEL_GLOBAL_DYNAMIC;
  else if (!strcmp (TREE_STRING_POINTER (id), "global-dynamic"))
    kind = TLS_MODEL_GLOBAL_DYNAMIC;
  else
    error ("tls_model argument must be one of \"local-exec\", \"initial-exec\", \"local-dynamic\" or \"global-dynamic\"");

  DECL_TLS_MODEL (decl) = kind;
  return NULL_TREE;
}

/* Handle a "no_instrument_function" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_no_instrument_function_attribute (tree *node, tree name,
                                         tree ARG_UNUSED (args),
                                         int ARG_UNUSED (flags),
                                         bool *no_add_attrs)
{
  tree decl = *node;

  if (TREE_CODE (decl) != FUNCTION_DECL)
    {
      error_at (DECL_SOURCE_LOCATION (decl),
                "%qE attribute applies only to functions", name);
      *no_add_attrs = true;
    }
  else if (DECL_INITIAL (decl))
    {
      error_at (DECL_SOURCE_LOCATION (decl),
                "can%'t set %qE attribute after definition", name);
      *no_add_attrs = true;
    }
  else
    DECL_NO_INSTRUMENT_FUNCTION_ENTRY_EXIT (decl) = 1;

  return NULL_TREE;
}

/* Handle a "malloc" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_malloc_attribute (tree *node, tree name, tree ARG_UNUSED (args),
                         int ARG_UNUSED (flags), bool *no_add_attrs)
{
  if (TREE_CODE (*node) == FUNCTION_DECL
      && POINTER_TYPE_P (TREE_TYPE (TREE_TYPE (*node))))
    DECL_IS_MALLOC (*node) = 1;
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "alloc_size" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_alloc_size_attribute (tree *node, tree ARG_UNUSED (name), tree args,
                             int ARG_UNUSED (flags), bool *no_add_attrs)
{
  unsigned arg_count = type_num_arguments (*node);
  for (; args; args = TREE_CHAIN (args))
    {
      tree position = TREE_VALUE (args);

      if (TREE_CODE (position) != INTEGER_CST
          || TREE_INT_CST_HIGH (position)
          || TREE_INT_CST_LOW (position) < 1
          || TREE_INT_CST_LOW (position) > arg_count )
        {
          warning (OPT_Wattributes,
                   "alloc_size parameter outside range");
          *no_add_attrs = true;
          return NULL_TREE;
        }
    }
  return NULL_TREE;
}

/* Handle a "returns_twice" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_returns_twice_attribute (tree *node, tree name, tree ARG_UNUSED (args),
                         int ARG_UNUSED (flags), bool *no_add_attrs)
{
  if (TREE_CODE (*node) == FUNCTION_DECL)
    DECL_IS_RETURNS_TWICE (*node) = 1;
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "no_limit_stack" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_no_limit_stack_attribute (tree *node, tree name,
                                 tree ARG_UNUSED (args),
                                 int ARG_UNUSED (flags),
                                 bool *no_add_attrs)
{
  tree decl = *node;

  if (TREE_CODE (decl) != FUNCTION_DECL)
    {
      error_at (DECL_SOURCE_LOCATION (decl),
             "%qE attribute applies only to functions", name);
      *no_add_attrs = true;
    }
  else if (DECL_INITIAL (decl))
    {
      error_at (DECL_SOURCE_LOCATION (decl),
                "can%'t set %qE attribute after definition", name);
      *no_add_attrs = true;
    }
  else
    DECL_NO_LIMIT_STACK (decl) = 1;

  return NULL_TREE;
}

/* Handle a "pure" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_pure_attribute (tree *node, tree name, tree ARG_UNUSED (args),
                       int ARG_UNUSED (flags), bool *no_add_attrs)
{
  if (TREE_CODE (*node) == FUNCTION_DECL)
    DECL_PURE_P (*node) = 1;
  /* ??? TODO: Support types.  */
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "no vops" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_novops_attribute (tree *node, tree ARG_UNUSED (name),
                         tree ARG_UNUSED (args), int ARG_UNUSED (flags),
                         bool *ARG_UNUSED (no_add_attrs))
{
  gcc_assert (TREE_CODE (*node) == FUNCTION_DECL);
  DECL_IS_NOVOPS (*node) = 1;
  return NULL_TREE;
}

/* Handle a "deprecated" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_deprecated_attribute (tree *node, tree name,
                             tree args, int flags,
                             bool *no_add_attrs)
{
  tree type = NULL_TREE;
  int warn = 0;
  tree what = NULL_TREE;

  if (!args)
    *no_add_attrs = true;
  else if (TREE_CODE (TREE_VALUE (args)) != STRING_CST)
    {
      error ("deprecated message is not a string");
      *no_add_attrs = true;
    }

  if (DECL_P (*node))
    {
      tree decl = *node;
      type = TREE_TYPE (decl);

      if (TREE_CODE (decl) == TYPE_DECL
          || TREE_CODE (decl) == PARM_DECL
          || TREE_CODE (decl) == VAR_DECL
          || TREE_CODE (decl) == FUNCTION_DECL
          || TREE_CODE (decl) == FIELD_DECL)
        TREE_DEPRECATED (decl) = 1;
      else
        warn = 1;
    }
  else if (TYPE_P (*node))
    {
      if (!(flags & (int) ATTR_FLAG_TYPE_IN_PLACE))
        *node = build_variant_type_copy (*node);
      TREE_DEPRECATED (*node) = 1;
      type = *node;
    }
  else
    warn = 1;

  if (warn)
    {
      *no_add_attrs = true;
      if (type && TYPE_NAME (type))
        {
          if (TREE_CODE (TYPE_NAME (type)) == IDENTIFIER_NODE)
            what = TYPE_NAME (*node);
          else if (TREE_CODE (TYPE_NAME (type)) == TYPE_DECL
                   && DECL_NAME (TYPE_NAME (type)))
            what = DECL_NAME (TYPE_NAME (type));
        }
      if (what)
        warning (OPT_Wattributes, "%qE attribute ignored for %qE", name, what);
      else
        warning (OPT_Wattributes, "%qE attribute ignored", name);
    }

  return NULL_TREE;
}

/* Handle a "vector_size" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_vector_size_attribute (tree *node, tree name, tree args,
                              int ARG_UNUSED (flags),
                              bool *no_add_attrs)
{
  unsigned HOST_WIDE_INT vecsize, nunits;
  enum machine_mode orig_mode;
  tree type = *node, new_type, size;

  *no_add_attrs = true;

  size = TREE_VALUE (args);

  if (!host_integerp (size, 1))
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      return NULL_TREE;
    }

  /* Get the vector size (in bytes).  */
  vecsize = tree_low_cst (size, 1);

  /* We need to provide for vector pointers, vector arrays, and
     functions returning vectors.  For example:

       __attribute__((vector_size(16))) short *foo;

     In this case, the mode is SI, but the type being modified is
     HI, so we need to look further.  */

  while (POINTER_TYPE_P (type)
         || TREE_CODE (type) == FUNCTION_TYPE
         || TREE_CODE (type) == METHOD_TYPE
         || TREE_CODE (type) == ARRAY_TYPE
         || TREE_CODE (type) == OFFSET_TYPE)
    type = TREE_TYPE (type);

  /* Get the mode of the type being modified.  */
  orig_mode = TYPE_MODE (type);

  if ((!INTEGRAL_TYPE_P (type)
       && !SCALAR_FLOAT_TYPE_P (type)
       && !FIXED_POINT_TYPE_P (type))
      || (!SCALAR_FLOAT_MODE_P (orig_mode)
          && GET_MODE_CLASS (orig_mode) != MODE_INT
          && !ALL_SCALAR_FIXED_POINT_MODE_P (orig_mode))
      || !host_integerp (TYPE_SIZE_UNIT (type), 1)
      || TREE_CODE (type) == BOOLEAN_TYPE)
    {
      error ("invalid vector type for attribute %qE", name);
      return NULL_TREE;
    }

  if (vecsize % tree_low_cst (TYPE_SIZE_UNIT (type), 1))
    {
      error ("vector size not an integral multiple of component size");
      return NULL;
    }

  if (vecsize == 0)
    {
      error ("zero vector size");
      return NULL;
    }

  /* Calculate how many units fit in the vector.  */
  nunits = vecsize / tree_low_cst (TYPE_SIZE_UNIT (type), 1);
  if (nunits & (nunits - 1))
    {
      error ("number of components of the vector not a power of two");
      return NULL_TREE;
    }

  new_type = build_vector_type (type, nunits);

  /* Build back pointers if needed.  */
  *node = lang_hooks.types.reconstruct_complex_type (*node, new_type);

  return NULL_TREE;
}

/* Handle the "nonnull" attribute.  */
static tree
handle_nonnull_attribute (tree *node, tree ARG_UNUSED (name),
                          tree args, int ARG_UNUSED (flags),
                          bool *no_add_attrs)
{
  tree type = *node;
  unsigned HOST_WIDE_INT attr_arg_num;

  /* If no arguments are specified, all pointer arguments should be
     non-null.  Verify a full prototype is given so that the arguments
     will have the correct types when we actually check them later.  */
  if (!args)
    {
      if (!TYPE_ARG_TYPES (type))
        {
          error ("nonnull attribute without arguments on a non-prototype");
          *no_add_attrs = true;
        }
      return NULL_TREE;
    }

  /* Argument list specified.  Verify that each argument number references
     a pointer argument.  */
  for (attr_arg_num = 1; args; args = TREE_CHAIN (args))
    {
      tree argument;
      unsigned HOST_WIDE_INT arg_num = 0, ck_num;

      if (!get_nonnull_operand (TREE_VALUE (args), &arg_num))
        {
          error ("nonnull argument has invalid operand number (argument %lu)",
                 (unsigned long) attr_arg_num);
          *no_add_attrs = true;
          return NULL_TREE;
        }

      argument = TYPE_ARG_TYPES (type);
      if (argument)
        {
          for (ck_num = 1; ; ck_num++)
            {
              if (!argument || ck_num == arg_num)
                break;
              argument = TREE_CHAIN (argument);
            }

          if (!argument
              || TREE_CODE (TREE_VALUE (argument)) == VOID_TYPE)
            {
              error ("nonnull argument with out-of-range operand number (argument %lu, operand %lu)",
                     (unsigned long) attr_arg_num, (unsigned long) arg_num);
              *no_add_attrs = true;
              return NULL_TREE;
            }

          if (TREE_CODE (TREE_VALUE (argument)) != POINTER_TYPE)
            {
              error ("nonnull argument references non-pointer operand (argument %lu, operand %lu)",
                   (unsigned long) attr_arg_num, (unsigned long) arg_num);
              *no_add_attrs = true;
              return NULL_TREE;
            }
        }
    }

  return NULL_TREE;
}

/* Helper for nonnull attribute handling; fetch the operand number
   from the attribute argument list.  */

static bool
get_nonnull_operand (tree arg_num_expr, unsigned HOST_WIDE_INT *valp)
{
  /* Verify the arg number is a constant.  */
  if (TREE_CODE (arg_num_expr) != INTEGER_CST
      || TREE_INT_CST_HIGH (arg_num_expr) != 0)
    return false;

  *valp = TREE_INT_CST_LOW (arg_num_expr);
  return true;
}

/* Handle a "nothrow" attribute; arguments as in
   struct attribute_spec.handler.  */

static tree
handle_nothrow_attribute (tree *node, tree name, tree ARG_UNUSED (args),
                          int ARG_UNUSED (flags), bool *no_add_attrs)
{
  if (TREE_CODE (*node) == FUNCTION_DECL)
    TREE_NOTHROW (*node) = 1;
  /* ??? TODO: Support types.  */
  else
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "warn_unused_result" attribute.  No special handling.  */

static tree
handle_warn_unused_result_attribute (tree *node, tree name,
                               tree ARG_UNUSED (args),
                               int ARG_UNUSED (flags), bool *no_add_attrs)
{
  /* Ignore the attribute for functions not returning any value.  */
  if (VOID_TYPE_P (TREE_TYPE (*node)))
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }

  return NULL_TREE;
}

/* Handle a "sentinel" attribute.  */

static tree
handle_sentinel_attribute (tree *node, tree name, tree args,
                           int ARG_UNUSED (flags), bool *no_add_attrs)
{
  tree params = TYPE_ARG_TYPES (*node);

  if (!params)
    {
      warning (OPT_Wattributes,
               "%qE attribute requires prototypes with named arguments", name);
      *no_add_attrs = true;
    }
  else
    {
      while (TREE_CHAIN (params))
        params = TREE_CHAIN (params);

      if (VOID_TYPE_P (TREE_VALUE (params)))
        {
          warning (OPT_Wattributes,
                   "%qE attribute only applies to variadic functions", name);
          *no_add_attrs = true;
        }
    }

  if (args)
    {
      tree position = TREE_VALUE (args);

      if (TREE_CODE (position) != INTEGER_CST)
        {
          warning (OPT_Wattributes,
                   "requested position is not an integer constant");
          *no_add_attrs = true;
        }
      else
        {
          if (tree_int_cst_lt (position, integer_zero_node))
            {
              warning (OPT_Wattributes,
                       "requested position is less than zero");
              *no_add_attrs = true;
            }
        }
    }

  return NULL_TREE;
}

/* Handle a "type_generic" attribute.  */

static tree
handle_type_generic_attribute (tree *node, tree ARG_UNUSED (name),
                               tree ARG_UNUSED (args), int ARG_UNUSED (flags),
                               bool * ARG_UNUSED (no_add_attrs))
{
  tree params;

  /* Ensure we have a function type.  */
  gcc_assert (TREE_CODE (*node) == FUNCTION_TYPE);

  params = TYPE_ARG_TYPES (*node);
  while (params && ! VOID_TYPE_P (TREE_VALUE (params)))
    params = TREE_CHAIN (params);

  /* Ensure we have a variadic function.  */
  gcc_assert (!params);

  return NULL_TREE;
}

/* Handle a "target" attribute.  */

static tree
handle_target_attribute (tree *node, tree name, tree args, int flags,
                         bool *no_add_attrs)
{
  /* Ensure we have a function type.  */
  if (TREE_CODE (*node) != FUNCTION_DECL)
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }
  else if (! targetm.target_option.valid_attribute_p (*node, name, args,
                                                      flags))
    *no_add_attrs = true;

  return NULL_TREE;
}

/* Arguments being collected for optimization.  */
typedef const char *const_char_p;               /* For DEF_VEC_P.  */
DEF_VEC_P(const_char_p);
DEF_VEC_ALLOC_P(const_char_p, gc);
static GTY(()) VEC(const_char_p, gc) *optimize_args;

/* Inner function to convert a TREE_LIST to argv string to parse the optimize
   options in ARGS.  ATTR_P is true if this is for attribute(optimize), and
   false for #pragma GCC optimize.  */

bool
parse_optimize_options (tree args, bool attr_p)
{
  bool ret = true;
  unsigned opt_argc;
  unsigned i;
  int saved_flag_strict_aliasing;
  const char **opt_argv;
  tree ap;

  /* Build up argv vector.  Just in case the string is stored away, use garbage
     collected strings.  */
  VEC_truncate (const_char_p, optimize_args, 0);
  VEC_safe_push (const_char_p, gc, optimize_args, NULL);

  for (ap = args; ap != NULL_TREE; ap = TREE_CHAIN (ap))
    {
      tree value = TREE_VALUE (ap);

      if (TREE_CODE (value) == INTEGER_CST)
        {
          char buffer[20];
          sprintf (buffer, "-O%ld", (long) TREE_INT_CST_LOW (value));
          VEC_safe_push (const_char_p, gc, optimize_args, ggc_strdup (buffer));
        }

      else if (TREE_CODE (value) == STRING_CST)
        {
          /* Split string into multiple substrings.  */
          size_t len = TREE_STRING_LENGTH (value);
          char *p = ASTRDUP (TREE_STRING_POINTER (value));
          char *end = p + len;
          char *comma;
          char *next_p = p;

          while (next_p != NULL)
            {
              size_t len2;
              char *q, *r;

              p = next_p;
              comma = strchr (p, ',');
              if (comma)
                {
                  len2 = comma - p;
                  *comma = '\0';
                  next_p = comma+1;
                }
              else
                {
                  len2 = end - p;
                  next_p = NULL;
                }

              r = q = (char *) ggc_alloc (len2 + 3);

              /* If the user supplied -Oxxx or -fxxx, only allow -Oxxx or -fxxx
                 options.  */
              if (*p == '-' && p[1] != 'O' && p[1] != 'f')
                {
                  ret = false;
                  if (attr_p)
                    warning (OPT_Wattributes,
                             "Bad option %s to optimize attribute.", p);
                  else
                    warning (OPT_Wpragmas,
                             "Bad option %s to pragma attribute", p);
                  continue;
                }

              if (*p != '-')
                {
                  *r++ = '-';

                  /* Assume that Ox is -Ox, a numeric value is -Ox, a s by
                     itself is -Os, and any other switch begins with a -f.  */
                  if ((*p >= '0' && *p <= '9')
                      || (p[0] == 's' && p[1] == '\0'))
                    *r++ = 'O';
                  else if (*p != 'O')
                    *r++ = 'f';
                }

              memcpy (r, p, len2);
              r[len2] = '\0';
              VEC_safe_push (const_char_p, gc, optimize_args, q);
            }

        }
    }

  opt_argc = VEC_length (const_char_p, optimize_args);
  opt_argv = (const char **) alloca (sizeof (char *) * (opt_argc + 1));

  for (i = 1; i < opt_argc; i++)
    opt_argv[i] = VEC_index (const_char_p, optimize_args, i);

  saved_flag_strict_aliasing = flag_strict_aliasing;

  /* Now parse the options.  */
  decode_options (opt_argc, opt_argv);

  targetm.override_options_after_change();

  /* Don't allow changing -fstrict-aliasing.  */
  flag_strict_aliasing = saved_flag_strict_aliasing;

  VEC_truncate (const_char_p, optimize_args, 0);
  return ret;
}

/* For handling "optimize" attribute. arguments as in
   struct attribute_spec.handler.  */

static tree
handle_optimize_attribute (tree *node, tree name, tree args,
                           int ARG_UNUSED (flags), bool *no_add_attrs)
{
  /* Ensure we have a function type.  */
  if (TREE_CODE (*node) != FUNCTION_DECL)
    {
      warning (OPT_Wattributes, "%qE attribute ignored", name);
      *no_add_attrs = true;
    }
  else
    {
      struct cl_optimization cur_opts;
      tree old_opts = DECL_FUNCTION_SPECIFIC_OPTIMIZATION (*node);

      /* Save current options.  */
      cl_optimization_save (&cur_opts);

      /* If we previously had some optimization options, use them as the
         default.  */
      if (old_opts)
        cl_optimization_restore (TREE_OPTIMIZATION (old_opts));

      /* Parse options, and update the vector.  */
      parse_optimize_options (args, true);
      DECL_FUNCTION_SPECIFIC_OPTIMIZATION (*node)
        = build_optimization_node ();

      /* Restore current options.  */
      cl_optimization_restore (&cur_opts);
    }

  return NULL_TREE;
}

