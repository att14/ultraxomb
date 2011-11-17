/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc-4.5.3/gcc/config/sparc/sparc.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_G (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 53 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(const_zero_operand (op, mode)));
}
static inline bool
satisfies_constraint_H (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 61 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(arith_double_operand (op, DImode)));
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 66 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(SPARC_SIMM13_P (ival)));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 71 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(ival == 0));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 76 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(SPARC_SETHI32_P (ival)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 81 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(SPARC_SIMM11_P (ival)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 86 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(SPARC_SIMM10_P (ival)));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 91 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(SPARC_SETHI_P (ival)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 96 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(ival == 4096));
}
static inline bool
satisfies_constraint_D (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 106 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_INT));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 111 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(fp_sethi_p (op)));
}
static inline bool
satisfies_constraint_R (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 116 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(fp_mov_p (op)));
}
static inline bool
satisfies_constraint_S (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 121 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(fp_high_losum_p (op)));
}
static inline bool
satisfies_constraint_T (rtx op)
{
  return (
#line 126 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(TARGET_ARCH32)) && ((GET_CODE (op) == MEM || GET_CODE (op) == REG) && (
#line 128 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(memory_ok_for_ldd (op))));
}
static inline bool
satisfies_constraint_U (rtx op)
{
  return (
#line 133 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(TARGET_ARCH32)) && ((GET_CODE (op) == REG) && (((
#line 135 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(REGNO (op) < FIRST_PSEUDO_REGISTER)) || (!(
#line 136 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(reload_in_progress && reg_renumber [REGNO (op)] < 0)))) && (
#line 137 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(register_ok_for_ldd (op)))));
}
static inline bool
satisfies_constraint_W (rtx op)
{
  switch (GET_CODE (op))
    {
    case MEM:
    case REG:
      break;
    default:
      return false;
    }
  return 
#line 143 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(memory_ok_for_ldd (op));
}
static inline bool
satisfies_constraint_Y (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 148 "../../gcc-4.5.3/gcc/config/sparc/constraints.md"
(const_zero_operand (op, mode)));
}
#endif /* tm-constrs.h */
