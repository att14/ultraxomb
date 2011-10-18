/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc-4.6.1/gcc/config/sparc/sparc.md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tree.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"

int
const_zero_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 25 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(op == CONST0_RTX (mode));
}

int
const_one_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 30 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(op == CONST1_RTX (mode));
}

int
const_4096_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 35 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(INTVAL (op) == 4096));
}

int
small_int_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 42 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(SPARC_SIMM13_P (INTVAL (op))));
}

static inline int
uns_small_int_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 49 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
#if HOST_BITS_PER_WIDE_INT == 32
  return ((GET_CODE (op) == CONST_INT && (unsigned) INTVAL (op) < 0x1000)
	  || (GET_CODE (op) == CONST_DOUBLE
	      && CONST_DOUBLE_HIGH (op) == 0
	      && (unsigned) CONST_DOUBLE_LOW (op) - 0xFFFFF000 < 0x1000));
#else
  return (GET_CODE (op) == CONST_INT
	  && ((INTVAL (op) >= 0 && INTVAL (op) < 0x1000)
	      || (INTVAL (op) >= 0xFFFFF000
                  && INTVAL (op) <= 0xFFFFFFFF)));
#endif
}

int
uns_small_int_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
      break;
    default:
      return false;
    }
  return 
(uns_small_int_operand_1 (op, mode));
}

int
const_high_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((!(small_int_operand (op, mode))) && (
#line 68 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(SPARC_SETHI_P (INTVAL (op) & GET_MODE_MASK (mode)))));
}

int
const_compl_high_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((!(small_int_operand (op, mode))) && (
#line 75 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(SPARC_SETHI_P (~INTVAL (op) & GET_MODE_MASK (mode)))));
}

static inline int
fp_const_high_losum_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 81 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  gcc_assert (mode == SFmode);
  return fp_high_losum_p (op);
}

int
fp_const_high_losum_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_double_operand (op, mode)) && (
(fp_const_high_losum_operand_1 (op, mode)));
}

int
const_double_or_vector_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_VECTOR:
      return true;
    default:
      break;
    }
  return false;
}

static inline int
symbolic_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 97 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  enum machine_mode omode = GET_MODE (op);

  if (omode != mode && omode != VOIDmode && mode != VOIDmode)
    return false;

  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
      return !SYMBOL_REF_TLS_MODEL (op);

    case LABEL_REF:
      return true;

    case CONST:
      op = XEXP (op, 0);
      return (((GET_CODE (XEXP (op, 0)) == SYMBOL_REF
		&& !SYMBOL_REF_TLS_MODEL (XEXP (op, 0)))
	       || GET_CODE (XEXP (op, 0)) == LABEL_REF)
	      && GET_CODE (XEXP (op, 1)) == CONST_INT);

    default:
      gcc_unreachable ();
    }
}

int
symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case LABEL_REF:
    case CONST:
      break;
    default:
      return false;
    }
  return (
(symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
tgd_symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 126 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(SYMBOL_REF_TLS_MODEL (op) == TLS_MODEL_GLOBAL_DYNAMIC))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
tld_symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 131 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(SYMBOL_REF_TLS_MODEL (op) == TLS_MODEL_LOCAL_DYNAMIC))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
tie_symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 136 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(SYMBOL_REF_TLS_MODEL (op) == TLS_MODEL_INITIAL_EXEC))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
tle_symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 141 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(SYMBOL_REF_TLS_MODEL (op) == TLS_MODEL_LOCAL_EXEC))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
medium_pic_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 149 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  /* Check for (const (minus (symbol_ref:GOT)
                             (const (minus (label) (pc))))).  */
  op = XEXP (op, 0);
  return GET_CODE (op) == MINUS
         && GET_CODE (XEXP (op, 0)) == SYMBOL_REF
         && GET_CODE (XEXP (op, 1)) == CONST
         && GET_CODE (XEXP (XEXP (op, 1), 0)) == MINUS;
}

int
medium_pic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST) && (
(medium_pic_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
label_ref_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == LABEL_REF) && (
#line 162 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(GET_MODE (op) == mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
data_segment_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 170 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF :
      return ! SYMBOL_REF_FUNCTION_P (op);
    case PLUS :
      /* Assume canonical format of symbol + constant.
	 Fall through.  */
    case CONST :
      return data_segment_operand (XEXP (op, 0), VOIDmode);
    default :
      gcc_unreachable ();
    }
}

int
data_segment_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case PLUS:
    case CONST:
      break;
    default:
      return false;
    }
  return (
(data_segment_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
text_segment_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 189 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  switch (GET_CODE (op))
    {
    case LABEL_REF :
      return true;
    case SYMBOL_REF :
      return SYMBOL_REF_FUNCTION_P (op);
    case PLUS :
      /* Assume canonical format of symbol + constant.
	 Fall through.  */
    case CONST :
      return text_segment_operand (XEXP (op, 0), VOIDmode);
    default :
      gcc_unreachable ();
    }
}

int
text_segment_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LABEL_REF:
    case SYMBOL_REF:
    case PLUS:
    case CONST:
      break;
    default:
      return false;
    }
  return (
(text_segment_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
register_or_zero_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (const_zero_operand (op, mode));
}

static inline int
fp_register_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 217 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op); /* Possibly a MEM */
  return REG_P (op) && SPARC_FP_REG_P (REGNO (op));
}

int
fp_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(fp_register_operand_1 (op, mode)));
}

int
int_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 225 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(register_operand (op, SImode))) || (
#line 226 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(TARGET_ARCH64 && register_operand (op, DImode)));
}

static inline int
fcc_register_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 231 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  if (mode != VOIDmode && mode != GET_MODE (op))
    return false;
  if (mode == VOIDmode
      && (GET_MODE (op) != CCFPmode && GET_MODE (op) != CCFPEmode))
    return false;

#if 0 /* ??? 1 when %fcc0-3 are pseudos first.  See gen_compare_reg().  */
  if (reg_renumber == 0)
    return REGNO (op) >= FIRST_PSEUDO_REGISTER;
  return REGNO_OK_FOR_CCFP_P (REGNO (op));
#else
  return ((unsigned) REGNO (op) - SPARC_FIRST_V9_FCC_REG) < 4;
#endif
}

int
fcc_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
(fcc_register_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
fcc0_register_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 250 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  if (mode != VOIDmode && mode != GET_MODE (op))
    return false;
  if (mode == VOIDmode
      && (GET_MODE (op) != CCFPmode && GET_MODE (op) != CCFPEmode))
    return false;

  return REGNO (op) == SPARC_FCC_REG;
}

int
fcc0_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
(fcc0_register_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
icc_or_fcc_register_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 263 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  if (REGNO (op) == SPARC_ICC_REG)
    {
      if (mode != VOIDmode && mode != GET_MODE (op))
	return false;
      if (mode == VOIDmode
	  && GET_MODE (op) != CCmode && GET_MODE (op) != CCXmode)
	return false;

      return true;
    }

  return fcc_register_operand (op, mode);
}

int
icc_or_fcc_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
(icc_or_fcc_register_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (small_int_operand (op, mode));
}

static inline int
arith_double_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 294 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  bool arith_simple_operand = arith_operand (op, mode);
  HOST_WIDE_INT m1, m2;

  if (TARGET_ARCH64 || arith_simple_operand)
    return arith_simple_operand;

#if HOST_BITS_PER_WIDE_INT == 32
  if (GET_CODE (op) != CONST_DOUBLE)
    return false;
  m1 = CONST_DOUBLE_LOW (op);
  m2 = CONST_DOUBLE_HIGH (op);
#else
  if (GET_CODE (op) != CONST_INT)
    return false;
  m1 = trunc_int_for_mode (INTVAL (op), SImode);
  m2 = trunc_int_for_mode (INTVAL (op) >> 32, SImode);
#endif

  return SPARC_SIMM13_P (m1) && SPARC_SIMM13_P (m2);
}

int
arith_double_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return 
(arith_double_operand_1 (op, mode));
}

int
arith_add_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arith_operand (op, mode)) || (const_4096_operand (op, mode));
}

static inline int
arith_double_add_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 324 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  bool _arith_double_operand = arith_double_operand (op, mode);

  if (_arith_double_operand)
    return true;

  return TARGET_ARCH64 && const_4096_operand (op, mode);
}

int
arith_double_add_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return 
(arith_double_add_operand_1 (op, mode));
}

int
arith10_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((GET_CODE (op) == CONST_INT) && (
#line 339 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(SPARC_SIMM10_P (INTVAL (op)))));
}

int
arith11_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((GET_CODE (op) == CONST_INT) && (
#line 347 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(SPARC_SIMM11_P (INTVAL (op)))));
}

int
uns_arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (uns_small_int_operand (op, mode));
}

static inline int
compare_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 360 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  if (GET_CODE (op) == ZERO_EXTRACT)
    return (register_operand (XEXP (op, 0), mode)
	    && small_int_operand (XEXP (op, 1), mode)
	    && small_int_operand (XEXP (op, 2), mode)
	    /* This matches cmp_zero_extract.  */
	    && ((mode == SImode
		 && INTVAL (XEXP (op, 2)) > 19)
		/* This matches cmp_zero_extract_sp64.  */
		|| (TARGET_ARCH64
		    && mode == DImode
		    && INTVAL (XEXP (op, 2)) > 51)));
  else
    return register_operand (op, mode);
}

int
compare_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case ZERO_EXTRACT:
      break;
    default:
      return false;
    }
  return (
(compare_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
input_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 379 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  enum mode_class mclass;

  /* If both modes are non-void they must be the same.  */
  if (mode != VOIDmode && GET_MODE (op) != VOIDmode && mode != GET_MODE (op))
    return false;

  mclass = GET_MODE_CLASS (mode);

  /* Allow any 1-instruction integer constant.  */
  if (mclass == MODE_INT
      && (small_int_operand (op, mode) || const_high_operand (op, mode)))
    return true;

  /* If 32-bit mode and this is a DImode constant, allow it
     so that the splits can be generated.  */
  if (TARGET_ARCH32
      && mode == DImode
      && (GET_CODE (op) == CONST_DOUBLE || GET_CODE (op) == CONST_INT))
    return true;

  if ((mclass == MODE_FLOAT && GET_CODE (op) == CONST_DOUBLE)
      || (mclass == MODE_VECTOR_INT && GET_CODE (op) == CONST_VECTOR))
    return true;

  if (register_operand (op, mode))
    return true;

  /* If this is a SUBREG, look inside so that we handle paradoxical ones.  */
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  /* Check for valid MEM forms.  */
  if (GET_CODE (op) == MEM)
    return memory_address_p (mode, XEXP (op, 0));

  return false;
}

int
input_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case REG:
    case SUBREG:
    case MEM:
      break;
    default:
      return false;
    }
  return 
(input_operand_1 (op, mode));
}

int
call_address_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (symbolic_operand (op, mode)) || ((
#line 423 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(memory_address_p (Pmode, op))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

int
call_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 428 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(call_address_operand (XEXP (op, 0), mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
noov_compare_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 437 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  enum rtx_code code = GET_CODE (op);
  if (GET_MODE (XEXP (op, 0)) == CC_NOOVmode
      || GET_MODE (XEXP (op, 0)) == CCX_NOOVmode)
    /* These are the only branches which work with CC_NOOVmode.  */
    return (code == EQ || code == NE || code == GE || code == LT);
  return true;
}

int
noov_compare_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
      break;
    default:
      return false;
    }
  return (
(noov_compare_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
noov_compare64_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 451 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
{
  enum rtx_code code = GET_CODE (op);
  if (GET_MODE (XEXP (op, 0)) == CCX_NOOVmode)
    /* These are the only branches which work with CCX_NOOVmode.  */
    return (code == EQ || code == NE || code == GE || code == LT);
  return (GET_MODE (XEXP (op, 0)) == CCXmode);
}

int
noov_compare64_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == NE || GET_CODE (op) == EQ || GET_CODE (op) == GE || GET_CODE (op) == GT || GET_CODE (op) == LE || GET_CODE (op) == LT || GET_CODE (op) == GEU || GET_CODE (op) == GTU || GET_CODE (op) == LEU || GET_CODE (op) == LTU) && (
#line 450 "../../gcc-4.6.1/gcc/config/sparc/predicates.md"
(TARGET_V9))) && (
(noov_compare64_operator_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
v9_register_compare_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case GE:
    case LT:
    case LE:
    case GT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
cc_arith_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case AND:
    case IOR:
    case XOR:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
cc_arith_not_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case AND:
    case IOR:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

enum constraint_num
lookup_constraint (const char *str)
{
  switch (str[0])
    {
    case 'D':
      return CONSTRAINT_D;
    case 'G':
      return CONSTRAINT_G;
    case 'H':
      return CONSTRAINT_H;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'Q':
      return CONSTRAINT_Q;
    case 'R':
      return CONSTRAINT_R;
    case 'S':
      return CONSTRAINT_S;
    case 'T':
      return CONSTRAINT_T;
    case 'U':
      return CONSTRAINT_U;
    case 'W':
      return CONSTRAINT_W;
    case 'Y':
      return CONSTRAINT_Y;
    case 'b':
      return CONSTRAINT_b;
    case 'c':
      return CONSTRAINT_c;
    case 'd':
      return CONSTRAINT_d;
    case 'e':
      return CONSTRAINT_e;
    case 'f':
      return CONSTRAINT_f;
    case 'h':
      return CONSTRAINT_h;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

enum reg_class
regclass_for_constraint (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_b: return (TARGET_V9 && TARGET_VIS ? EXTRA_FP_REGS : NO_REGS);
    case CONSTRAINT_c: return FPCC_REGS;
    case CONSTRAINT_d: return (TARGET_V9 && TARGET_VIS ? FP_REGS : NO_REGS);
    case CONSTRAINT_e: return (TARGET_FPU ? (TARGET_V9 ? EXTRA_FP_REGS : FP_REGS) : NO_REGS);
    case CONSTRAINT_f: return (TARGET_FPU ? FP_REGS : NO_REGS);
    case CONSTRAINT_h: return (TARGET_V9 && TARGET_V8PLUS ? I64_REGS : NO_REGS);
    default: break;
    }
  return NO_REGS;
}

bool
constraint_satisfied_p (rtx op, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_G: return satisfies_constraint_G (op);
    case CONSTRAINT_H: return satisfies_constraint_H (op);
    case CONSTRAINT_I: return satisfies_constraint_I (op);
    case CONSTRAINT_J: return satisfies_constraint_J (op);
    case CONSTRAINT_K: return satisfies_constraint_K (op);
    case CONSTRAINT_L: return satisfies_constraint_L (op);
    case CONSTRAINT_M: return satisfies_constraint_M (op);
    case CONSTRAINT_N: return satisfies_constraint_N (op);
    case CONSTRAINT_O: return satisfies_constraint_O (op);
    case CONSTRAINT_D: return satisfies_constraint_D (op);
    case CONSTRAINT_Q: return satisfies_constraint_Q (op);
    case CONSTRAINT_R: return satisfies_constraint_R (op);
    case CONSTRAINT_S: return satisfies_constraint_S (op);
    case CONSTRAINT_T: return satisfies_constraint_T (op);
    case CONSTRAINT_U: return satisfies_constraint_U (op);
    case CONSTRAINT_W: return satisfies_constraint_W (op);
    case CONSTRAINT_Y: return satisfies_constraint_Y (op);
    default: break;
    }
  return false;
}

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I:
      return 
#line 66 "../../gcc-4.6.1/gcc/config/sparc/constraints.md"
(SPARC_SIMM13_P (ival));

    case CONSTRAINT_J:
      return 
#line 71 "../../gcc-4.6.1/gcc/config/sparc/constraints.md"
(ival == 0);

    case CONSTRAINT_K:
      return 
#line 76 "../../gcc-4.6.1/gcc/config/sparc/constraints.md"
(SPARC_SETHI32_P (ival));

    case CONSTRAINT_L:
      return 
#line 81 "../../gcc-4.6.1/gcc/config/sparc/constraints.md"
(SPARC_SIMM11_P (ival));

    case CONSTRAINT_M:
      return 
#line 86 "../../gcc-4.6.1/gcc/config/sparc/constraints.md"
(SPARC_SIMM10_P (ival));

    case CONSTRAINT_N:
      return 
#line 91 "../../gcc-4.6.1/gcc/config/sparc/constraints.md"
(SPARC_SETHI_P (ival));

    case CONSTRAINT_O:
      return 
#line 96 "../../gcc-4.6.1/gcc/config/sparc/constraints.md"
(ival == 4096);

    default: break;
    }
  return false;
}

