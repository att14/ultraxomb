/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char *
output_2 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 390 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmpes\t%0, %1, %2";
  return "fcmpes\t%1, %2";
}
}

static const char *
output_3 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 402 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmped\t%0, %1, %2";
  return "fcmped\t%1, %2";
}
}

static const char *
output_4 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 415 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmpeq\t%0, %1, %2";
  return "fcmpeq\t%1, %2";
}
}

static const char *
output_5 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmps\t%0, %1, %2";
  return "fcmps\t%1, %2";
}
}

static const char *
output_6 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 439 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmpd\t%0, %1, %2";
  return "fcmpd\t%1, %2";
}
}

static const char *
output_7 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 452 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmpq\t%0, %1, %2";
  return "fcmpq\t%1, %2";
}
}

static const char *
output_37 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 982 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[0], operands[1], 1, 0,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_38 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 998 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[0], operands[1], 1, 1,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_39 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1015 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[1], operands[2], 2, 0,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_40 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[1], operands[2], 2, 1,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_41 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1049 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[1], operands[2], 2, 0,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_42 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1066 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[1], operands[2], 2, 1,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_43 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1088 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  return output_v9branch (operands[0], operands[2], 1, 2, 0,
			  final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			  insn);
}
}

static const char *
output_44 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1105 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  return output_v9branch (operands[0], operands[2], 1, 2, 1,
			  final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			  insn);
}
}

static const char *
output_45 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1125 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (flag_delayed_branch)
    return "sethi\t%%hi(%a1-4), %0\n\tcall\t%a2\n\t add\t%0, %%lo(%a1+4), %0";
  else
    return "sethi\t%%hi(%a1-8), %0\n\tadd\t%0, %%lo(%a1-4), %0\n\tcall\t%a2\n\t nop";
}
}

static const char *
output_46 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1125 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (flag_delayed_branch)
    return "sethi\t%%hi(%a1-4), %0\n\tcall\t%a2\n\t add\t%0, %%lo(%a1+4), %0";
  else
    return "sethi\t%%hi(%a1-8), %0\n\tadd\t%0, %%lo(%a1-4), %0\n\tcall\t%a2\n\t nop";
}
}

static const char * const output_47[] = {
  "mov\t%1, %0",
  "ldub\t%1, %0",
  "stb\t%r1, %0",
};

static const char * const output_48[] = {
  "mov\t%1, %0",
  "sethi\t%%hi(%a1), %0",
  "lduh\t%1, %0",
  "sth\t%r1, %0",
};

static const char * const output_50[] = {
  "mov\t%1, %0",
  "sethi\t%%hi(%a1), %0",
  "ld\t%1, %0",
  "st\t%r1, %0",
  "fmovs\t%1, %0",
  "ld\t%1, %0",
  "st\t%1, %0",
  "fzeros\t%0",
};

static const char *
output_53 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1236 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
#ifdef HAVE_AS_SPARC_GOTDATA_OP
  return "xor\t%1, %%gdop_lox10(%a2), %0";
#else
  return "or\t%1, %%lo(%a2), %0";
#endif
}
}

static const char *
output_54 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1248 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
#ifdef HAVE_AS_SPARC_GOTDATA_OP
  return "sethi\t%%gdop_hix22(%a1), %0";
#else
  return "sethi\t%%hi(%a1), %0";
#endif
}
}

static const char *
output_55 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1262 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
#ifdef HAVE_AS_SPARC_GOTDATA_OP
  return "ld\t[%1 + %2], %0, %%gdop(%a3)";
#else
  return "ld\t[%1 + %2], %0";
#endif
}
}

static const char * const output_58[] = {
  "#",
  "std\t%1, %0",
  "ldd\t%1, %0",
  "#",
  "#",
  "#",
  "#",
  "std\t%1, %0",
  "ldd\t%1, %0",
  "#",
  "#",
  "#",
};

static const char * const output_59[] = {
  "mov\t%1, %0",
  "sethi\t%%hi(%a1), %0",
  "ldx\t%1, %0",
  "stx\t%r1, %0",
  "fmovd\t%1, %0",
  "ldd\t%1, %0",
  "std\t%1, %0",
  "fzero\t%0",
};

static const char *
output_62 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1469 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
#ifdef HAVE_AS_SPARC_GOTDATA_OP
  return "xor\t%1, %%gdop_lox10(%a2), %0";
#else
  return "or\t%1, %%lo(%a2), %0";
#endif
}
}

static const char *
output_63 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1481 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
#ifdef HAVE_AS_SPARC_GOTDATA_OP
  return "sethi\t%%gdop_hix22(%a1), %0";
#else
  return "sethi\t%%hi(%a1), %0";
#endif
}
}

static const char *
output_64 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1495 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
#ifdef HAVE_AS_SPARC_GOTDATA_OP
  return "ldx\t[%1 + %2], %0, %%gdop(%a3)";
#else
  return "ldx\t[%1 + %2], %0";
#endif
}
}

static const char *
output_82 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1821 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[1]) == CONST_DOUBLE
      && (which_alternative == 2
          || which_alternative == 3
          || which_alternative == 4))
    {
      REAL_VALUE_TYPE r;
      long i;

      REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
      REAL_VALUE_TO_TARGET_SINGLE (r, i);
      operands[1] = GEN_INT (i);
    }

  switch (which_alternative)
    {
    case 0:
      return "fzeros\t%0";
    case 1:
      return "fmovs\t%1, %0";
    case 2:
      return "mov\t%1, %0";
    case 3:
      return "sethi\t%%hi(%a1), %0";
    case 4:
      return "#";
    case 5:
    case 6:
      return "ld\t%1, %0";
    case 7:
    case 8:
      return "st\t%r1, %0";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_83 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1821 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[1]) == CONST_DOUBLE
      && (which_alternative == 2
          || which_alternative == 3
          || which_alternative == 4))
    {
      REAL_VALUE_TYPE r;
      long i;

      REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
      REAL_VALUE_TO_TARGET_SINGLE (r, i);
      operands[1] = GEN_INT (i);
    }

  switch (which_alternative)
    {
    case 0:
      return "fzeros\t%0";
    case 1:
      return "fmovs\t%1, %0";
    case 2:
      return "mov\t%1, %0";
    case 3:
      return "sethi\t%%hi(%a1), %0";
    case 4:
      return "#";
    case 5:
    case 6:
      return "ld\t%1, %0";
    case 7:
    case 8:
      return "st\t%r1, %0";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_84 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1821 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[1]) == CONST_DOUBLE
      && (which_alternative == 2
          || which_alternative == 3
          || which_alternative == 4))
    {
      REAL_VALUE_TYPE r;
      long i;

      REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
      REAL_VALUE_TO_TARGET_SINGLE (r, i);
      operands[1] = GEN_INT (i);
    }

  switch (which_alternative)
    {
    case 0:
      return "fzeros\t%0";
    case 1:
      return "fmovs\t%1, %0";
    case 2:
      return "mov\t%1, %0";
    case 3:
      return "sethi\t%%hi(%a1), %0";
    case 4:
      return "#";
    case 5:
    case 6:
      return "ld\t%1, %0";
    case 7:
    case 8:
      return "st\t%r1, %0";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_85 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1869 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[1]) == CONST_DOUBLE
      && (which_alternative == 0
          || which_alternative == 1
          || which_alternative == 2))
    {
      REAL_VALUE_TYPE r;
      long i;

      REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
      REAL_VALUE_TO_TARGET_SINGLE (r, i);
      operands[1] = GEN_INT (i);
    }

  switch (which_alternative)
    {
    case 0:
      return "mov\t%1, %0";
    case 1:
      return "sethi\t%%hi(%a1), %0";
    case 2:
      return "#";
    case 3:
      return "ld\t%1, %0";
    case 4:
      return "st\t%r1, %0";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_86 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1908 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  REAL_VALUE_TYPE r;
  long i;

  REAL_VALUE_FROM_CONST_DOUBLE (r, operands[2]);
  REAL_VALUE_TO_TARGET_SINGLE (r, i);
  operands[2] = GEN_INT (i);
  return "or\t%1, %%lo(%a2), %0";
}
}

static const char *
output_87 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1922 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  REAL_VALUE_TYPE r;
  long i;

  REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
  REAL_VALUE_TO_TARGET_SINGLE (r, i);
  operands[1] = GEN_INT (i);
  return "sethi\t%%hi(%1), %0";
}
}

static const char * const output_88[] = {
  "ldd\t%1, %0",
  "std\t%1, %0",
  "ldd\t%1, %0",
  "std\t%1, %0",
  "#",
  "#",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_89[] = {
  "ldd\t%1, %0",
  "std\t%1, %0",
  "#",
  "#",
  "#",
};

static const char * const output_90[] = {
  "fzero\t%0",
  "fmovd\t%1, %0",
  "ldd\t%1, %0",
  "std\t%1, %0",
  "mov\t%r1, %0",
  "ldx\t%1, %0",
  "stx\t%r1, %0",
  "#",
};

static const char * const output_91[] = {
  "fzero\t%0",
  "fmovd\t%1, %0",
  "ldd\t%1, %0",
  "std\t%1, %0",
  "mov\t%r1, %0",
  "ldx\t%1, %0",
  "stx\t%r1, %0",
  "#",
};

static const char * const output_92[] = {
  "fzero\t%0",
  "fmovd\t%1, %0",
  "ldd\t%1, %0",
  "std\t%1, %0",
  "mov\t%r1, %0",
  "ldx\t%1, %0",
  "stx\t%r1, %0",
  "#",
};

static const char * const output_93[] = {
  "fzero\t%0",
  "fmovd\t%1, %0",
  "ldd\t%1, %0",
  "std\t%1, %0",
  "mov\t%r1, %0",
  "ldx\t%1, %0",
  "stx\t%r1, %0",
  "#",
};

static const char * const output_94[] = {
  "mov\t%1, %0",
  "ldx\t%1, %0",
  "stx\t%r1, %0",
};

static const char * const output_96[] = {
  "#",
  "fmovq\t%1, %0",
  "ldq\t%1, %0",
  "stq\t%1, %0",
  "#",
  "#",
};

static const char * const output_98[] = {
  "mov%C1\t%x2, %3, %0",
  "mov%c1\t%x2, %4, %0",
};

static const char * const output_99[] = {
  "mov%C1\t%x2, %3, %0",
  "mov%c1\t%x2, %4, %0",
};

static const char * const output_100[] = {
  "mov%C1\t%x2, %3, %0",
  "mov%c1\t%x2, %4, %0",
};

static const char * const output_101[] = {
  "mov%C1\t%x2, %3, %0",
  "mov%c1\t%x2, %4, %0",
};

static const char * const output_102[] = {
  "movr%D1\t%2, %r3, %0",
  "movr%d1\t%2, %r4, %0",
};

static const char * const output_103[] = {
  "movr%D1\t%2, %r3, %0",
  "movr%d1\t%2, %r4, %0",
};

static const char * const output_104[] = {
  "movr%D1\t%2, %r3, %0",
  "movr%d1\t%2, %r4, %0",
};

static const char * const output_105[] = {
  "movr%D1\t%2, %r3, %0",
  "movr%d1\t%2, %r4, %0",
};

static const char * const output_106[] = {
  "fmovs%C1\t%x2, %3, %0",
  "fmovs%c1\t%x2, %4, %0",
};

static const char * const output_107[] = {
  "fmovrs%D1\t%2, %3, %0",
  "fmovrs%d1\t%2, %4, %0",
};

static const char * const output_108[] = {
  "fmovd%C1\t%x2, %3, %0",
  "fmovd%c1\t%x2, %4, %0",
};

static const char * const output_109[] = {
  "fmovrd%D1\t%2, %3, %0",
  "fmovrd%d1\t%2, %4, %0",
};

static const char * const output_110[] = {
  "fmovq%C1\t%x2, %3, %0",
  "fmovq%c1\t%x2, %4, %0",
};

static const char * const output_111[] = {
  "fmovrq%D1\t%2, %3, %0",
  "fmovrq%d1\t%2, %4, %0",
};

static const char * const output_115[] = {
  "and\t%1, 0xff, %0",
  "ldub\t%1, %0",
};

static const char * const output_116[] = {
  "and\t%1, 0xff, %0",
  "ldub\t%1, %0",
};

static const char * const output_117[] = {
  "and\t%1, 0xff, %0",
  "ldub\t%1, %0",
};

static const char * const output_119[] = {
  "srl\t%1, 0, %0",
  "lduw\t%1, %0",
};

static const char * const output_137[] = {
  "sra\t%1, 0, %0",
  "ldsw\t%1, %0",
};

static const char *
output_138 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3215 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  int len = INTVAL (operands[1]);
  int pos = 32 - INTVAL (operands[2]) - len;
  HOST_WIDE_INT mask = ((1 << len) - 1) << pos;
  operands[1] = GEN_INT (mask);
  return "andcc\t%0, %1, %%g0";
}
}

static const char *
output_139 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3232 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  int len = INTVAL (operands[1]);
  int pos = 64 - INTVAL (operands[2]) - len;
  HOST_WIDE_INT mask = (((unsigned HOST_WIDE_INT) 1 << len) - 1) << pos;
  operands[1] = GEN_INT (mask);
  return "andcc\t%0, %1, %%g0";
}
}

static const char * const output_160[] = {
  "add\t%1, %2, %0",
  "sub\t%1, -%2, %0",
};

static const char * const output_161[] = {
  "add\t%1, %2, %0",
  "sub\t%1, -%2, %0",
  "fpadd32s\t%1, %2, %0",
};

static const char * const output_168[] = {
  "sub\t%1, %2, %0",
  "add\t%1, -%2, %0",
};

static const char * const output_169[] = {
  "sub\t%1, %2, %0",
  "add\t%1, -%2, %0",
  "fpsub32s\t%1, %2, %0",
};

static const char *
output_176 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3888 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (sparc_check_64 (operands[1], insn) <= 0)
    output_asm_insn ("srl\t%L1, 0, %L1", operands);
  if (which_alternative == 1)
    output_asm_insn ("sllx\t%H1, 32, %H1", operands);
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      if (which_alternative == 1)
	return "or\t%L1, %H1, %H1\n\tmulx\t%H1, %2, %L0\n\tsrlx\t%L0, 32, %H0";
      else
	return "sllx\t%H1, 32, %3\n\tor\t%L1, %3, %3\n\tmulx\t%3, %2, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0";
    }
  else if (rtx_equal_p (operands[1], operands[2]))
    {
      if (which_alternative == 1)
	return "or\t%L1, %H1, %H1\n\tmulx\t%H1, %H1, %L0\n\tsrlx\t%L0, 32, %H0";
      else
	return "sllx\t%H1, 32, %3\n\tor\t%L1, %3, %3\n\tmulx\t%3, %3, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0";
    }
  if (sparc_check_64 (operands[2], insn) <= 0)
    output_asm_insn ("srl\t%L2, 0, %L2", operands);
  if (which_alternative == 1)
    return "or\t%L1, %H1, %H1\n\tsllx\t%H2, 32, %L1\n\tor\t%L2, %L1, %L1\n\tmulx\t%H1, %L1, %L0\n\tsrlx\t%L0, 32, %H0";
  else
    return "sllx\t%H1, 32, %3\n\tsllx\t%H2, 32, %4\n\tor\t%L1, %3, %3\n\tor\t%L2, %4, %4\n\tmulx\t%3, %4, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0";
}
}

static const char * const output_178[] = {
  "smul\t%1, %2, %L0\n\tsrlx\t%L0, 32, %H0",
  "smul\t%1, %2, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0",
};

static const char * const output_179[] = {
  "smul\t%1, %2, %L0\n\tsrlx\t%L0, 32, %H0",
  "smul\t%1, %2, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0",
};

static const char * const output_182[] = {
  "smul\t%1, %2, %0\n\tsrlx\t%0, %3, %0",
  "smul\t%1, %2, %4\n\tsrlx\t%4, %3, %0",
};

static const char * const output_183[] = {
  "smul\t%1, %2, %0\n\tsrlx\t%0, %3, %0",
  "smul\t%1, %2, %4\n\tsrlx\t%4, %3, %0",
};

static const char * const output_184[] = {
  "smul\t%1, %2, %0\n\tsrlx\t%0, %3, %0",
  "smul\t%1, %2, %4\n\tsrlx\t%4, %3, %0",
};

static const char * const output_185[] = {
  "umul\t%1, %2, %L0\n\tsrlx\t%L0, 32, %H0",
  "umul\t%1, %2, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0",
};

static const char * const output_188[] = {
  "umul\t%1, %s2, %L0\n\tsrlx\t%L0, 32, %H0",
  "umul\t%1, %s2, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0",
};

static const char * const output_189[] = {
  "umul\t%1, %2, %0\n\tsrlx\t%0, %3, %0",
  "umul\t%1, %2, %4\n\tsrlx\t%4, %3, %0",
};

static const char * const output_190[] = {
  "umul\t%1, %s2, %0\n\tsrlx\t%0, %3, %0",
  "umul\t%1, %s2, %4\n\tsrlx\t%4, %3, %0",
};

static const char *
output_193 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4410 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  output_asm_insn ("sra\t%1, 31, %3", operands);
  output_asm_insn ("wr\t%3, 0, %%y", operands);

  if (TARGET_V9)
    return "sdivcc\t%1, %2, %0";
  else
    return "nop\n\tnop\n\tnop\n\tsdivcc\t%1, %2, %0";
}
}

static const char *
output_196 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4500 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  output_asm_insn ("wr\t%%g0, 0, %%y", operands);

  if (TARGET_V9)
    return "udivcc\t%1, %2, %0";
  else
    return "nop\n\tnop\n\tnop\n\tudivcc\t%1, %2, %0";
}
}

static const char * const output_200[] = {
  "and\t%1, %2, %0",
  "fand\t%1, %2, %0",
};

static const char * const output_201[] = {
  "and\t%1, %2, %0",
  "fand\t%1, %2, %0",
};

static const char * const output_202[] = {
  "and\t%1, %2, %0",
  "fand\t%1, %2, %0",
};

static const char * const output_203[] = {
  "and\t%1, %2, %0",
  "fand\t%1, %2, %0",
};

static const char * const output_204[] = {
  "and\t%1, %2, %0",
  "fands\t%1, %2, %0",
};

static const char * const output_205[] = {
  "and\t%1, %2, %0",
  "fands\t%1, %2, %0",
};

static const char * const output_206[] = {
  "and\t%1, %2, %0",
  "fands\t%1, %2, %0",
};

static const char * const output_207[] = {
  "andn\t%2, %1, %0",
  "fandnot1\t%1, %2, %0",
};

static const char * const output_208[] = {
  "andn\t%2, %1, %0",
  "fandnot1\t%1, %2, %0",
};

static const char * const output_209[] = {
  "andn\t%2, %1, %0",
  "fandnot1\t%1, %2, %0",
};

static const char * const output_210[] = {
  "andn\t%2, %1, %0",
  "fandnot1\t%1, %2, %0",
};

static const char * const output_211[] = {
  "andn\t%2, %1, %0",
  "fandnot1s\t%1, %2, %0",
};

static const char * const output_212[] = {
  "andn\t%2, %1, %0",
  "fandnot1s\t%1, %2, %0",
};

static const char * const output_213[] = {
  "andn\t%2, %1, %0",
  "fandnot1s\t%1, %2, %0",
};

static const char * const output_214[] = {
  "or\t%1, %2, %0",
  "for\t%1, %2, %0",
};

static const char * const output_215[] = {
  "or\t%1, %2, %0",
  "for\t%1, %2, %0",
};

static const char * const output_216[] = {
  "or\t%1, %2, %0",
  "for\t%1, %2, %0",
};

static const char * const output_217[] = {
  "or\t%1, %2, %0",
  "for\t%1, %2, %0",
};

static const char * const output_218[] = {
  "or\t%1, %2, %0",
  "fors\t%1, %2, %0",
};

static const char * const output_219[] = {
  "or\t%1, %2, %0",
  "fors\t%1, %2, %0",
};

static const char * const output_220[] = {
  "or\t%1, %2, %0",
  "fors\t%1, %2, %0",
};

static const char * const output_221[] = {
  "orn\t%2, %1, %0",
  "fornot1\t%1, %2, %0",
};

static const char * const output_222[] = {
  "orn\t%2, %1, %0",
  "fornot1\t%1, %2, %0",
};

static const char * const output_223[] = {
  "orn\t%2, %1, %0",
  "fornot1\t%1, %2, %0",
};

static const char * const output_224[] = {
  "orn\t%2, %1, %0",
  "fornot1\t%1, %2, %0",
};

static const char * const output_225[] = {
  "orn\t%2, %1, %0",
  "fornot1s\t%1, %2, %0",
};

static const char * const output_226[] = {
  "orn\t%2, %1, %0",
  "fornot1s\t%1, %2, %0",
};

static const char * const output_227[] = {
  "orn\t%2, %1, %0",
  "fornot1s\t%1, %2, %0",
};

static const char * const output_228[] = {
  "xor\t%r1, %2, %0",
  "fxor\t%1, %2, %0",
};

static const char * const output_229[] = {
  "xor\t%r1, %2, %0",
  "fxor\t%1, %2, %0",
};

static const char * const output_230[] = {
  "xor\t%r1, %2, %0",
  "fxor\t%1, %2, %0",
};

static const char * const output_231[] = {
  "xor\t%r1, %2, %0",
  "fxor\t%1, %2, %0",
};

static const char * const output_232[] = {
  "xor\t%r1, %2, %0",
  "fxors\t%1, %2, %0",
};

static const char * const output_233[] = {
  "xor\t%r1, %2, %0",
  "fxors\t%1, %2, %0",
};

static const char * const output_234[] = {
  "xor\t%r1, %2, %0",
  "fxors\t%1, %2, %0",
};

static const char * const output_235[] = {
  "xnor\t%r1, %2, %0",
  "fxnor\t%1, %2, %0",
};

static const char * const output_236[] = {
  "xnor\t%r1, %2, %0",
  "fxnor\t%1, %2, %0",
};

static const char * const output_237[] = {
  "xnor\t%r1, %2, %0",
  "fxnor\t%1, %2, %0",
};

static const char * const output_238[] = {
  "xnor\t%r1, %2, %0",
  "fxnor\t%1, %2, %0",
};

static const char * const output_239[] = {
  "xnor\t%r1, %2, %0",
  "fxnors\t%1, %2, %0",
};

static const char * const output_240[] = {
  "xnor\t%r1, %2, %0",
  "fxnors\t%1, %2, %0",
};

static const char * const output_241[] = {
  "xnor\t%r1, %2, %0",
  "fxnors\t%1, %2, %0",
};

static const char * const output_260[] = {
  "xnor\t%%g0, %1, %0",
  "fnot1\t%1, %0",
};

static const char * const output_261[] = {
  "xnor\t%%g0, %1, %0",
  "fnot1\t%1, %0",
};

static const char * const output_262[] = {
  "xnor\t%%g0, %1, %0",
  "fnot1\t%1, %0",
};

static const char * const output_263[] = {
  "xnor\t%%g0, %1, %0",
  "fnot1\t%1, %0",
};

static const char * const output_264[] = {
  "xnor\t%%g0, %1, %0",
  "fnot1s\t%1, %0",
};

static const char * const output_265[] = {
  "xnor\t%%g0, %1, %0",
  "fnot1s\t%1, %0",
};

static const char * const output_266[] = {
  "xnor\t%%g0, %1, %0",
  "fnot1s\t%1, %0",
};

static const char * const output_287[] = {
  "fnegs\t%0, %0",
  "#",
};

static const char * const output_288[] = {
  "fnegd\t%0, %0",
  "#",
};

static const char * const output_289[] = {
  "fnegs\t%0, %0",
  "#",
};

static const char * const output_292[] = {
  "fabss\t%0, %0",
  "#",
};

static const char * const output_293[] = {
  "fabsd\t%0, %0",
  "fabsq\t%1, %0",
};

static const char * const output_294[] = {
  "fabsd\t%0, %0",
  "#",
};

static const char * const output_295[] = {
  "fabss\t%0, %0",
  "#",
};

static const char *
output_301 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5613 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "sll\t%1, %2, %0";
}
}

static const char *
output_302 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5642 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);
  return "sllx\t%1, %2, %0";
}
}

static const char *
output_303 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5658 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
 return output_v8plus_shift (operands, insn, "sllx");
}

static const char *
output_306 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5704 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
     if (GET_CODE (operands[2]) == CONST_INT)
       operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
     return "sra\t%1, %2, %0";
  }
}

static const char *
output_308 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5727 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) - 32);
  return "sra\t%1, %2, %0";
}
}

static const char *
output_309 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5754 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
    if (GET_CODE (operands[2]) == CONST_INT)
      operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);
    return "srax\t%1, %2, %0";
  }
}

static const char *
output_310 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5768 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
 return output_v8plus_shift (operands, insn, "srax");
}

static const char *
output_311 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5777 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
    if (GET_CODE (operands[2]) == CONST_INT)
      operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
    return "srl\t%1, %2, %0";
  }
}

static const char *
output_313 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5805 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (32 - INTVAL (operands[2]));
  return "srl\t%1, %2, %0";
}
}

static const char *
output_314 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5831 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
    if (GET_CODE (operands[2]) == CONST_INT)
      operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);
    return "srlx\t%1, %2, %0";
  }
}

static const char *
output_315 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5845 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
 return output_v8plus_shift (operands, insn, "srlx");
}

static const char *
output_316 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5855 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 32);
  return "srax\t%1, %2, %0";
}
}

static const char *
output_317 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5867 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 32);
  return "srlx\t%1, %2, %0";
}
}

static const char *
output_318 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5882 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + INTVAL (operands[3]));

  return "srax\t%1, %2, %0";
}
}

static const char *
output_319 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5898 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + INTVAL (operands[3]));

  return "srlx\t%1, %2, %0";
}
}

static const char *
output_320 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5911 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
 return output_ubranch (operands[0], 0, insn);
}

static const char *
output_326 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6234 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
 return output_sibcall(insn, operands[0]);
}

static const char *
output_327 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6259 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
 return output_sibcall(insn, operands[1]);
}

static const char *
output_329 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6313 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
 return output_return (insn);
}

static const char *
output_331 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6355 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
 return output_probe_stack_range (operands[0], operands[2]);
}

static const char *
output_334 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6489 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{ return TARGET_V9 ? "flushw" : "ta\t3"; }
}

static const char *
output_335 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6495 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (flag_delayed_branch)
    return "jmp\t%0\n\t restore";
  else
    return "mov\t%0,%%g1\n\trestore\n\tjmp\t%%g1\n\t nop";
}
}

static const char *
output_336 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6521 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (!cfun->calls_alloca)
    return "";
  if (!TARGET_V9)
    return "ta\t3";
  fputs ("\tflushw\n", asm_out_file);
  if (flag_pic)
    fprintf (asm_out_file, "\tst%c\t%%l7, [%%sp+%d]\n",
	     TARGET_ARCH64 ? 'x' : 'w',
	     SPARC_STACK_BIAS + 7 * UNITS_PER_WORD);
  fprintf (asm_out_file, "\tst%c\t%%fp, [%%sp+%d]\n",
	   TARGET_ARCH64 ? 'x' : 'w',
	   SPARC_STACK_BIAS + 14 * UNITS_PER_WORD);
  fprintf (asm_out_file, "\tst%c\t%%i7, [%%sp+%d]\n",
	   TARGET_ARCH64 ? 'x' : 'w',
	   SPARC_STACK_BIAS + 15 * UNITS_PER_WORD);
  return "";
}
}

static const char *
output_337 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6586 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{ return TARGET_V9 ? "flush\t%f0" : "iflush\t%f0"; }
}

static const char *
output_338 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6592 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{ return TARGET_V9 ? "flush\t%f0" : "iflush\t%f0"; }
}

static const char *
output_339 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6609 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  return "sub\t%%g0, %1, %0\n\tand\t%0, %1, %0\n\tscan\t%0, 0, %0\n\tmov\t32, %2\n\tsub\t%2, %0, %0\n\tsra\t%0, 31, %2\n\tand\t%2, 31, %2\n\tadd\t%2, %0, %0";
}
}

static const char *
output_340 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6817 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  static const char * const prefetch_instr[2][2] = {
    {
      "prefetch\t[%a0], 1", /* no locality: prefetch for one read */
      "prefetch\t[%a0], 0", /* medium to high locality: prefetch for several reads */
    },
    {
      "prefetch\t[%a0], 3", /* no locality: prefetch for one write */
      "prefetch\t[%a0], 2", /* medium to high locality: prefetch for several writes */
    }
  };
  int read_or_write = INTVAL (operands[1]);
  int locality = INTVAL (operands[2]);

  gcc_assert (read_or_write == 0 || read_or_write == 1);
  gcc_assert (locality >= 0 && locality < 4);
  return prefetch_instr [read_or_write][locality == 0 ? 0 : 1];
}
}

static const char *
output_341 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6842 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  static const char * const prefetch_instr[2][2] = {
    {
      "prefetch\t[%a0], 1", /* no locality: prefetch for one read */
      "prefetch\t[%a0], 0", /* medium to high locality: prefetch for several reads */
    },
    {
      "prefetch\t[%a0], 3", /* no locality: prefetch for one write */
      "prefetch\t[%a0], 2", /* medium to high locality: prefetch for several writes */
    }
  };
  int read_or_write = INTVAL (operands[1]);
  int locality = INTVAL (operands[2]);

  gcc_assert (read_or_write == 0 || read_or_write == 1);
  gcc_assert (locality >= 0 && locality < 4);
  return prefetch_instr [read_or_write][locality == 0 ? 0 : 1];
}
}

static const char *
output_343 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6898 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "t%C0\t%%icc, %1";
  else
    return "t%C0\t%1";
}
}

static const char *
output_419 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 103 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
{
  if (sparc_check_64 (operands[3], insn) <= 0)
    output_asm_insn ("srl\t%L3, 0, %L3", operands);
  output_asm_insn ("sllx\t%H3, 32, %H3", operands);
  output_asm_insn ("or\t%L3, %H3, %L3", operands);
  if (sparc_check_64 (operands[2], insn) <= 0)
    output_asm_insn ("srl\t%L2, 0, %L2", operands);
  output_asm_insn ("sllx\t%H2, 32, %H3", operands);
  output_asm_insn ("or\t%L2, %H3, %H3", operands);
  output_asm_insn ("casx\t[%1], %H3, %L3", operands);
  return "srlx\t%L3, 32, %H3";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPEmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPEmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPEmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    fcc_register_operand,
    "c",
    CCFPmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    fcc_register_operand,
    "c",
    CCFPEmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    call_address_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    call_address_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    QImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "rI,m,rJ",
    QImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    HImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "rI,K,m,rJ",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    HImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,!f,!f,!m,d",
    SImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "rI,K,m,rJ,f,m,f,J",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    immediate_operand,
    "in",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    immediate_operand,
    "in",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    label_ref_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    label_ref_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=o,T,U,o,r,r,r,?T,?f,?f,?o,?f",
    DImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "J,U,T,r,o,i,r,f,T,o,f,f",
    DImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,?e,?e,?W,b",
    DImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "rI,N,m,rJ,e,W,e,J",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    label_ref_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    label_ref_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    immediate_operand,
    "in",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    medium_pic_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    data_segment_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    data_segment_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    text_segment_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    text_segment_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,f,*r,*r,*r,f,*r,m,m",
    SFmode,
    0,
    0,
    1
  },
  {
    input_operand,
    "GY,f,*rRY,Q,S,m,m,f,*rGY",
    SFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,f,*r,*r,*r,f,*r,m,m",
    V2HImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "GY,f,*rRY,Q,S,m,m,f,*rGY",
    V2HImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,f,*r,*r,*r,f,*r,m,m",
    V4QImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "GY,f,*rRY,Q,S,m,m,f,*rGY",
    V4QImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,m",
    SFmode,
    0,
    0,
    1
  },
  {
    input_operand,
    "rR,Q,S,m,rG",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SFmode,
    0,
    0,
    1
  },
  {
    fp_const_high_losum_operand,
    "S",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    0,
    1
  },
  {
    fp_const_high_losum_operand,
    "S",
    SFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=e,W,U,T,o,e,*r,o,e,o",
    DFmode,
    0,
    0,
    1
  },
  {
    input_operand,
    "W#F,e,T,U,G,e,*rFo,*r,o#F,e",
    DFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=U,T,o,r,o",
    DFmode,
    0,
    0,
    1
  },
  {
    input_operand,
    "T,U,G,ro,r",
    DFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,W,*r,*r,m,*r",
    DFmode,
    0,
    0,
    1
  },
  {
    input_operand,
    "GY,e,W#F,e,*rGY,m,*rGY,DF",
    DFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,W,*r,*r,m,*r",
    V2SImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "GY,e,W#F,e,*rGY,m,*rGY,DF",
    V2SImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,W,*r,*r,m,*r",
    V4HImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "GY,e,W#F,e,*rGY,m,*rGY,DF",
    V4HImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,W,*r,*r,m,*r",
    V8QImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "GY,e,W#F,e,*rGY,m,*rGY,DF",
    V8QImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    DFmode,
    0,
    0,
    1
  },
  {
    input_operand,
    "r,m,rG",
    DFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,o,r",
    TFmode,
    0,
    0,
    1
  },
  {
    input_operand,
    "G,oe,Ger,roG",
    TFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,m,o,r",
    TFmode,
    0,
    0,
    1
  },
  {
    input_operand,
    "G,e,m,e,rG,roG",
    TFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TFmode,
    0,
    0,
    1
  },
  {
    input_operand,
    "orG,rG",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    0,
    1
  },
  {
    arith11_operand,
    "rL,0",
    QImode,
    0,
    0,
    1
  },
  {
    arith11_operand,
    "0,rL",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    0,
    1
  },
  {
    arith11_operand,
    "rL,0",
    HImode,
    0,
    0,
    1
  },
  {
    arith11_operand,
    "0,rL",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    0,
    1
  },
  {
    arith11_operand,
    "rL,0",
    SImode,
    0,
    0,
    1
  },
  {
    arith11_operand,
    "0,rL",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    0,
    1
  },
  {
    arith11_operand,
    "rL,0",
    DImode,
    0,
    0,
    1
  },
  {
    arith11_operand,
    "0,rL",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "rM,0",
    QImode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "0,rM",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "rM,0",
    HImode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "0,rM",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "rM,0",
    SImode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "0,rM",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "rM,0",
    DImode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "0,rM",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    DFmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e,0",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    DFmode,
    0,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e,0",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    TFmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e,0",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    TFmode,
    0,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e,0",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "r,m",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "r,m",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "r,m",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "r,m",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "%rJ",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "%r,r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_add_operand,
    "rI,O",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "%r,r,d",
    SImode,
    0,
    0,
    1
  },
  {
    arith_add_operand,
    "rI,O,d",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_add_operand,
    "rI,O",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,r,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,r,d",
    SImode,
    0,
    0,
    1
  },
  {
    arith_add_operand,
    "rI,O,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,h",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r,0",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,rI",
    DImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=&h,X",
    SImode,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&h,X",
    SImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&h",
    SImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    DImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&h",
    SImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=h,r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    SImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&h",
    SImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    DImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    SImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&h",
    SImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    uns_small_int_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=h,r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1
  },
  {
    uns_small_int_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=X,h",
    SImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    SImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=X,h",
    SImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1
  },
  {
    uns_small_int_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    SImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=X,h",
    SImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r,b",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r,d",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "%r,b",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "%r,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "%r,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "%r,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "%r,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "%r,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "%r,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,b",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,d",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,b",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,d",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    SImode,
    0,
    1,
    0
  },
  {
    arith_operand,
    "%r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    DImode,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    SImode,
    0,
    1,
    0
  },
  {
    cc_arith_operator,
    "",
    SImode,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    DImode,
    0,
    1,
    0
  },
  {
    cc_arith_operator,
    "",
    DImode,
    0,
    1,
    0
  },
  {
    register_or_zero_operand,
    "%rJ",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "%rJ",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "%rJ",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    0,
    1
  },
  {
    cc_arith_not_operator,
    "",
    SImode,
    0,
    1,
    0
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    DImode,
    0,
    0,
    1
  },
  {
    cc_arith_not_operator,
    "",
    DImode,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    0,
    1
  },
  {
    cc_arith_not_operator,
    "",
    SImode,
    0,
    1,
    0
  },
  {
    cc_arith_not_operator,
    "",
    SImode,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    DImode,
    0,
    0,
    1
  },
  {
    cc_arith_not_operator,
    "",
    DImode,
    0,
    1,
    0
  },
  {
    cc_arith_not_operator,
    "",
    DImode,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=&h,&h,r",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,0,rI",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "rI,rI,rI",
    SImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,&h",
    SImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    0,
    1
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    symbolic_operand,
    "s",
    DImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    arith_operand,
    "rM",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    tgd_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    tgd_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    tgd_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1
  },
  {
    symbolic_operand,
    "s",
    DImode,
    0,
    0,
    1
  },
  {
    tgd_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1
  },
  {
    symbolic_operand,
    "s",
    DImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    tie_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    tie_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    tie_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    tie_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    tle_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    tle_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "=&r",
    DImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "=e",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    DImode,
    0,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=h",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "h",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    compare_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    compare_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    icc_or_fcc_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    SImode,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    compare_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    compare_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    compare_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    TImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    const_double_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2HImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    V2HImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4QImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    V4QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    fp_const_high_losum_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    const_double_or_vector_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1
  },
  {
    const_double_or_vector_operand,
    "",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1
  },
  {
    const_double_or_vector_operand,
    "",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1
  },
  {
    const_double_or_vector_operand,
    "",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SImode,
    0,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    V2SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4HImode,
    0,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    V4HImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    V8QImode,
    0,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    V8QImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    arith10_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    icc_or_fcc_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    arith_double_add_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    uns_arith_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    input_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V2SImode,
    0,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V2SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V4HImode,
    0,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V4HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V8QImode,
    0,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V8QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    const_compl_high_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    call_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    0,
    "i",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "=rf",
    VOIDmode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    address_operand,
    "p",
    VOIDmode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    address_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    compare_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0
  },
  {
    compare_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:369 */
  {
    "*cmpsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:377 */
  {
    "*cmpdi_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[3],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:385 */
  {
    "*cmpsf_fpe",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_2 },
#else
    { 0, 0, output_2 },
#endif
    0,
    &operand_data[5],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:397 */
  {
    "*cmpdf_fpe",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_3 },
#else
    { 0, 0, output_3 },
#endif
    0,
    &operand_data[8],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:410 */
  {
    "*cmptf_fpe",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_4 },
#else
    { 0, 0, output_4 },
#endif
    0,
    &operand_data[11],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:422 */
  {
    "*cmpsf_fp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_5 },
#else
    { 0, 0, output_5 },
#endif
    0,
    &operand_data[14],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:434 */
  {
    "*cmpdf_fp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_6 },
#else
    { 0, 0, output_6 },
#endif
    0,
    &operand_data[17],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:447 */
  {
    "*cmptf_fp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_7 },
#else
    { 0, 0, output_7 },
#endif
    0,
    &operand_data[20],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:544 */
  {
    "*snesi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:558 */
  {
    "*neg_snesi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:572 */
  {
    "*snesi_zero_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:590 */
  {
    "*snedi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[27],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:605 */
  {
    "*neg_snedi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[27],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:620 */
  {
    "*snedi_zero_trunc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[29],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:635 */
  {
    "*seqsi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:649 */
  {
    "*neg_seqsi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:663 */
  {
    "*seqsi_zero_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:681 */
  {
    "*seqdi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[27],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:696 */
  {
    "*neg_seqdi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[27],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:711 */
  {
    "*seqdi_zero_trunc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[29],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:730 */
  {
    "*x_plus_i_ne_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[31],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:746 */
  {
    "*x_minus_i_ne_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[31],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:762 */
  {
    "*x_plus_i_eq_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[31],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:778 */
  {
    "*x_minus_i_eq_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[31],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:798 */
  {
    "*sltu_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%%g0, 0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:805 */
  {
    "*neg_sltu_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%%g0, 0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:813 */
  {
    "*neg_sltu_minus_x",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:821 */
  {
    "*neg_sltu_plus_x",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:829 */
  {
    "*sgeu_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%%g0, -1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:836 */
  {
    "*neg_sgeu_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%%g0, -1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:847 */
  {
    "*sltu_plus_x",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:855 */
  {
    "*sltu_plus_x_plus_y",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[36],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:864 */
  {
    "*x_minus_sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%1, 0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:873 */
  {
    "*x_minus_y_minus_sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[39],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:882 */
  {
    "*x_minus_sltu_plus_y",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[39],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:891 */
  {
    "*sgeu_plus_x",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%1, -1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:899 */
  {
    "*x_minus_sgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%1, -1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:975 */
  {
    "*normal_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_37 },
#else
    { 0, 0, output_37 },
#endif
    0,
    &operand_data[42],
    2,
    0,
    0,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:991 */
  {
    "*inverted_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_38 },
#else
    { 0, 0, output_38 },
#endif
    0,
    &operand_data[42],
    2,
    0,
    0,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1007 */
  {
    "*normal_fp_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_39 },
#else
    { 0, 0, output_39 },
#endif
    0,
    &operand_data[44],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1024 */
  {
    "*inverted_fp_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_40 },
#else
    { 0, 0, output_40 },
#endif
    0,
    &operand_data[44],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1041 */
  {
    "*normal_fpe_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_41 },
#else
    { 0, 0, output_41 },
#endif
    0,
    &operand_data[47],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1058 */
  {
    "*inverted_fpe_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_42 },
#else
    { 0, 0, output_42 },
#endif
    0,
    &operand_data[47],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1080 */
  {
    "*normal_int_branch_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_43 },
#else
    { 0, 0, output_43 },
#endif
    0,
    &operand_data[50],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1097 */
  {
    "*inverted_int_branch_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_44 },
#else
    { 0, 0, output_44 },
#endif
    0,
    &operand_data[50],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1118 */
  {
    "load_pcrel_symsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_45 },
#else
    { 0, 0, output_45 },
#endif
    (insn_gen_fn) gen_load_pcrel_symsi,
    &operand_data[53],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1118 */
  {
    "load_pcrel_symdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_46 },
#else
    { 0, 0, output_46 },
#endif
    (insn_gen_fn) gen_load_pcrel_symdi,
    &operand_data[57],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1149 */
  {
    "*movqi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_47 },
#else
    { 0, output_47, 0 },
#endif
    0,
    &operand_data[61],
    2,
    0,
    3,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1170 */
  {
    "*movhi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_48 },
#else
    { 0, output_48, 0 },
#endif
    0,
    &operand_data[63],
    2,
    0,
    4,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1184 */
  {
    "*movhi_lo_sum",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[65],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1200 */
  {
    "*movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_50 },
#else
    { 0, output_50, 0 },
#endif
    0,
    &operand_data[68],
    2,
    0,
    8,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1216 */
  {
    "*movsi_lo_sum",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%lo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[70],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1223 */
  {
    "*movsi_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[73],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1231 */
  {
    "movsi_lo_sum_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_53 },
#else
    { 0, 0, output_53 },
#endif
    (insn_gen_fn) gen_movsi_lo_sum_pic,
    &operand_data[70],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1244 */
  {
    "movsi_high_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_54 },
#else
    { 0, 0, output_54 },
#endif
    (insn_gen_fn) gen_movsi_high_pic,
    &operand_data[75],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1256 */
  {
    "movsi_pic_gotdata_op",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_55 },
#else
    { 0, 0, output_55 },
#endif
    (insn_gen_fn) gen_movsi_pic_gotdata_op,
    &operand_data[77],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1296 */
  {
    "*movsi_high_pic_label_ref",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a2-(%a1-.)), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[81],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1304 */
  {
    "*movsi_lo_sum_pic_label_ref",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%lo(%a3-(%a2-.)), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[84],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1349 */
  {
    "*movdi_insn_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_58 },
#else
    { 0, output_58, 0 },
#endif
    0,
    &operand_data[88],
    2,
    0,
    12,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1402 */
  {
    "*movdi_insn_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_59 },
#else
    { 0, output_59, 0 },
#endif
    0,
    &operand_data[90],
    2,
    0,
    8,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1445 */
  {
    "*movdi_high_pic_label_ref",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a2-(%a1-.)), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[92],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1453 */
  {
    "*movdi_lo_sum_pic_label_ref",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%lo(%a3-(%a2-.)), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[95],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1464 */
  {
    "movdi_lo_sum_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_62 },
#else
    { 0, 0, output_62 },
#endif
    (insn_gen_fn) gen_movdi_lo_sum_pic,
    &operand_data[99],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1477 */
  {
    "movdi_high_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_63 },
#else
    { 0, 0, output_63 },
#endif
    (insn_gen_fn) gen_movdi_high_pic,
    &operand_data[102],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1489 */
  {
    "movdi_pic_gotdata_op",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_64 },
#else
    { 0, 0, output_64 },
#endif
    (insn_gen_fn) gen_movdi_pic_gotdata_op,
    &operand_data[104],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1504 */
  {
    "*sethi_di_medlow_embmedany_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[108],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1510 */
  {
    "*sethi_di_medlow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[57],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1516 */
  {
    "*losum_di_medlow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%lo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[110],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1523 */
  {
    "seth44",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%h44(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_seth44,
    &operand_data[57],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1529 */
  {
    "setm44",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%m44(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_setm44,
    &operand_data[110],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1536 */
  {
    "setl44",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%l44(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_setl44,
    &operand_data[110],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1543 */
  {
    "sethh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hh(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sethh,
    &operand_data[57],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1549 */
  {
    "setlm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%lm(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_setlm,
    &operand_data[57],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1555 */
  {
    "sethm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%hm(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sethm,
    &operand_data[110],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1562 */
  {
    "setlo",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%lo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_setlo,
    &operand_data[110],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1569 */
  {
    "embmedany_sethi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_sethi,
    &operand_data[113],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1575 */
  {
    "embmedany_losum",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %%lo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_losum,
    &operand_data[115],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1582 */
  {
    "embmedany_brsum",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %_, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_brsum,
    &operand_data[95],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1588 */
  {
    "embmedany_textuhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%uhi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_textuhi,
    &operand_data[118],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1594 */
  {
    "embmedany_texthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_texthi,
    &operand_data[118],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1600 */
  {
    "embmedany_textulo",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%ulo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_textulo,
    &operand_data[120],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1607 */
  {
    "embmedany_textlo",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%lo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_textlo,
    &operand_data[120],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1815 */
  {
    "*movsf_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_82 },
#else
    { 0, 0, output_82 },
#endif
    0,
    &operand_data[123],
    2,
    0,
    9,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1815 */
  {
    "*movsf_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_83 },
#else
    { 0, 0, output_83 },
#endif
    0,
    &operand_data[125],
    2,
    0,
    9,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1815 */
  {
    "*movsf_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_84 },
#else
    { 0, 0, output_84 },
#endif
    0,
    &operand_data[127],
    2,
    0,
    9,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1863 */
  {
    "*movsf_insn_no_fpu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_85 },
#else
    { 0, 0, output_85 },
#endif
    0,
    &operand_data[129],
    2,
    0,
    5,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1903 */
  {
    "*movsf_lo_sum",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_86 },
#else
    { 0, 0, output_86 },
#endif
    0,
    &operand_data[131],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1918 */
  {
    "*movsf_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_87 },
#else
    { 0, 0, output_87 },
#endif
    0,
    &operand_data[134],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1950 */
  {
    "*movdf_insn_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_88 },
#else
    { 0, output_88, 0 },
#endif
    0,
    &operand_data[136],
    2,
    0,
    10,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1971 */
  {
    "*movdf_insn_sp32_no_fpu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_89 },
#else
    { 0, output_89, 0 },
#endif
    0,
    &operand_data[138],
    2,
    0,
    5,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2029 */
  {
    "*movdf_insn_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_90 },
#else
    { 0, output_90, 0 },
#endif
    0,
    &operand_data[140],
    2,
    0,
    8,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2029 */
  {
    "*movdf_insn_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_91 },
#else
    { 0, output_91, 0 },
#endif
    0,
    &operand_data[142],
    2,
    0,
    8,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2029 */
  {
    "*movdf_insn_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_92 },
#else
    { 0, output_92, 0 },
#endif
    0,
    &operand_data[144],
    2,
    0,
    8,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2029 */
  {
    "*movdf_insn_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_93 },
#else
    { 0, output_93, 0 },
#endif
    0,
    &operand_data[146],
    2,
    0,
    8,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2049 */
  {
    "*movdf_insn_sp64_no_fpu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_94 },
#else
    { 0, output_94, 0 },
#endif
    0,
    &operand_data[148],
    2,
    0,
    3,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2314 */
  {
    "*movtf_insn_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[150],
    2,
    0,
    4,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2325 */
  {
    "*movtf_insn_sp64_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_96 },
#else
    { 0, output_96, 0 },
#endif
    0,
    &operand_data[152],
    2,
    0,
    6,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2343 */
  {
    "*movtf_insn_sp64_no_fpu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[154],
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2542 */
  {
    "*movqi_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_98 },
#else
    { 0, output_98, 0 },
#endif
    0,
    &operand_data[156],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2542 */
  {
    "*movhi_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_99 },
#else
    { 0, output_99, 0 },
#endif
    0,
    &operand_data[161],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2542 */
  {
    "*movsi_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_100 },
#else
    { 0, output_100, 0 },
#endif
    0,
    &operand_data[166],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2542 */
  {
    "*movdi_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_101 },
#else
    { 0, output_101, 0 },
#endif
    0,
    &operand_data[171],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2555 */
  {
    "*movqi_cc_reg_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_102 },
#else
    { 0, output_102, 0 },
#endif
    0,
    &operand_data[176],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2555 */
  {
    "*movhi_cc_reg_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_103 },
#else
    { 0, output_103, 0 },
#endif
    0,
    &operand_data[181],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2555 */
  {
    "*movsi_cc_reg_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_104 },
#else
    { 0, output_104, 0 },
#endif
    0,
    &operand_data[186],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2555 */
  {
    "*movdi_cc_reg_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_105 },
#else
    { 0, output_105, 0 },
#endif
    0,
    &operand_data[191],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2568 */
  {
    "*movsf_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_106 },
#else
    { 0, output_106, 0 },
#endif
    0,
    &operand_data[196],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2581 */
  {
    "*movsf_cc_reg_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_107 },
#else
    { 0, output_107, 0 },
#endif
    0,
    &operand_data[201],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2595 */
  {
    "movdf_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_108 },
#else
    { 0, output_108, 0 },
#endif
    (insn_gen_fn) gen_movdf_cc_v9,
    &operand_data[206],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2610 */
  {
    "movdf_cc_reg_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_109 },
#else
    { 0, output_109, 0 },
#endif
    (insn_gen_fn) gen_movdf_cc_reg_sp64,
    &operand_data[211],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2624 */
  {
    "*movtf_cc_hq_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_110 },
#else
    { 0, output_110, 0 },
#endif
    0,
    &operand_data[216],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2637 */
  {
    "*movtf_cc_reg_hq_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_111 },
#else
    { 0, output_111, 0 },
#endif
    0,
    &operand_data[221],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2650 */
  {
    "*movtf_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[216],
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2693 */
  {
    "*movtf_cc_reg_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[221],
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2766 */
  {
    "*zero_extendhisi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lduh\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[226],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2780 */
  {
    "*zero_extendqihi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_115 },
#else
    { 0, output_115, 0 },
#endif
    0,
    &operand_data[228],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2796 */
  {
    "*zero_extendqisi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_116 },
#else
    { 0, output_116, 0 },
#endif
    0,
    &operand_data[230],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2812 */
  {
    "*zero_extendqidi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_117 },
#else
    { 0, output_117, 0 },
#endif
    0,
    &operand_data[232],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2845 */
  {
    "*zero_extendhidi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lduh\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[234],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2861 */
  {
    "*zero_extendsidi2_insn_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_119 },
#else
    { 0, output_119, 0 },
#endif
    0,
    &operand_data[236],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2904 */
  {
    "*cmp_zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%0, 0xff, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[238],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2912 */
  {
    "*cmp_zero_qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%0, 0xff, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[238],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2920 */
  {
    "*cmp_zero_extendqisi2_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%1, 0xff, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[239],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2930 */
  {
    "*cmp_zero_extendqisi2_andcc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%1, 0xff, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2941 */
  {
    "*cmp_zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%0, 0xff, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[238],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2949 */
  {
    "*cmp_zero_qi_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%0, 0xff, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[238],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2957 */
  {
    "*cmp_zero_extendqidi2_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%1, 0xff, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[241],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2967 */
  {
    "*cmp_zero_extendqidi2_andcc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%1, 0xff, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[95],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2980 */
  {
    "*cmp_siqi_trunc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%0, 0xff, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2988 */
  {
    "*cmp_siqi_trunc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%1, 0xff, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[243],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2998 */
  {
    "*cmp_diqi_trunc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%0, 0xff, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[3],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3006 */
  {
    "*cmp_diqi_trunc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%1, 0xff, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[245],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3046 */
  {
    "*sign_extendhisi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsh\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[226],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3086 */
  {
    "*sign_extendqihi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsb\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[247],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3117 */
  {
    "*sign_extendqisi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsb\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[249],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3148 */
  {
    "*sign_extendqidi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsb\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[251],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3179 */
  {
    "*sign_extendhidi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsh\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[234],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3193 */
  {
    "*sign_extendsidi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_137 },
#else
    { 0, output_137, 0 },
#endif
    0,
    &operand_data[236],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3207 */
  {
    "*cmp_zero_extract",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_138 },
#else
    { 0, 0, output_138 },
#endif
    0,
    &operand_data[253],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3224 */
  {
    "*cmp_zero_extract_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_139 },
#else
    { 0, 0, output_139 },
#endif
    0,
    &operand_data[256],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3244 */
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fstod\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendsfdf2,
    &operand_data[259],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3260 */
  {
    "*extendsftf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fstoq\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[261],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3275 */
  {
    "*extenddftf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdtoq\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[263],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3283 */
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdtos\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2,
    &operand_data[265],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3299 */
  {
    "*trunctfsf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fqtos\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[267],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3314 */
  {
    "*trunctfdf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fqtod\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[269],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3325 */
  {
    "floatsisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fitos\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatsisf2,
    &operand_data[271],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3333 */
  {
    "floatsidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fitod\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatsidf2,
    &operand_data[273],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3347 */
  {
    "*floatsitf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fitoq\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[275],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3362 */
  {
    "floatdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtos\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2,
    &operand_data[277],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3376 */
  {
    "floatdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtod\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2,
    &operand_data[279],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3396 */
  {
    "*floatditf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtoq\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[281],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3412 */
  {
    "fix_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fstoi\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2,
    &operand_data[283],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3420 */
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdtoi\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2,
    &operand_data[285],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3434 */
  {
    "*fix_trunctfsi2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fqtoi\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[287],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3449 */
  {
    "fix_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fstox\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfdi2,
    &operand_data[289],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3463 */
  {
    "fix_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdtox\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfdi2,
    &operand_data[291],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3483 */
  {
    "*fix_trunctfdi2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fqtox\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[293],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3556 */
  {
    "addx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addx,
    &operand_data[36],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3581 */
  {
    "*addx_extend_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[295],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3611 */
  {
    "*adddi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_160 },
#else
    { 0, output_160, 0 },
#endif
    0,
    &operand_data[298],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3620 */
  {
    "addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_161 },
#else
    { 0, output_161, 0 },
#endif
    (insn_gen_fn) gen_addsi3,
    &operand_data[301],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3632 */
  {
    "*cmp_cc_plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addcc\t%0, %1, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3641 */
  {
    "*cmp_ccx_plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addcc\t%0, %1, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[304],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3650 */
  {
    "*cmp_cc_plus_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addcc\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[36],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3661 */
  {
    "*cmp_ccx_plus_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addcc\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[306],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3729 */
  {
    "subx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subx,
    &operand_data[39],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3738 */
  {
    "*subx_extend_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[309],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3783 */
  {
    "*subdi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_168 },
#else
    { 0, output_168, 0 },
#endif
    0,
    &operand_data[312],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3792 */
  {
    "subsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_169 },
#else
    { 0, output_169, 0 },
#endif
    (insn_gen_fn) gen_subsi3,
    &operand_data[315],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3804 */
  {
    "*cmp_minus_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subcc\t%r0, %1, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3813 */
  {
    "*cmp_minus_ccx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subcc\t%0, %1, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[3],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3822 */
  {
    "cmp_minus_cc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subcc\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cmp_minus_cc_set,
    &operand_data[39],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3833 */
  {
    "*cmp_minus_ccx_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subcc\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[318],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3850 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smul\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3,
    &operand_data[36],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3871 */
  {
    "*muldi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulx\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[306],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3881 */
  {
    "muldi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_176 },
#else
    { 0, 0, output_176 },
#endif
    (insn_gen_fn) gen_muldi3_v8plus,
    &operand_data[321],
    5,
    0,
    2,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3917 */
  {
    "*cmp_mul_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulcc\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[36],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3957 */
  {
    "mulsidi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_178 },
#else
    { 0, output_178, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3_v8plus,
    &operand_data[326],
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3970 */
  {
    "const_mulsidi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_179 },
#else
    { 0, output_179, 0 },
#endif
    (insn_gen_fn) gen_const_mulsidi3_v8plus,
    &operand_data[330],
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4000 */
  {
    "*mulsidi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smul\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[334],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4028 */
  {
    "const_mulsidi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smul\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_const_mulsidi3_sp64,
    &operand_data[337],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4066 */
  {
    "smulsi3_highpart_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_182 },
#else
    { 0, output_182, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart_v8plus,
    &operand_data[340],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4082 */
  {
    "*sparc.md:4082",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_183 },
#else
    { 0, output_183, 0 },
#endif
    0,
    &operand_data[340],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4099 */
  {
    "const_smulsi3_highpart_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_184 },
#else
    { 0, output_184, 0 },
#endif
    (insn_gen_fn) gen_const_smulsi3_highpart_v8plus,
    &operand_data[345],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4164 */
  {
    "umulsidi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_185 },
#else
    { 0, output_185, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3_v8plus,
    &operand_data[326],
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4194 */
  {
    "*umulsidi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umul\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[334],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4222 */
  {
    "const_umulsidi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umul\t%1, %s2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_const_umulsidi3_sp64,
    &operand_data[350],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4231 */
  {
    "const_umulsidi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_188 },
#else
    { 0, output_188, 0 },
#endif
    (insn_gen_fn) gen_const_umulsidi3_v8plus,
    &operand_data[353],
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4273 */
  {
    "umulsi3_highpart_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_189 },
#else
    { 0, output_189, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart_v8plus,
    &operand_data[357],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4288 */
  {
    "const_umulsi3_highpart_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_190 },
#else
    { 0, output_190, 0 },
#endif
    (insn_gen_fn) gen_const_umulsi3_highpart_v8plus,
    &operand_data[362],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4383 */
  {
    "divsi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wr\t%%g0, %3, %%y\n\tsdiv\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divsi3_sp64,
    &operand_data[367],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4393 */
  {
    "divdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdivx\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divdi3,
    &operand_data[318],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4401 */
  {
    "*cmp_sdiv_cc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_193 },
#else
    { 0, 0, output_193 },
#endif
    0,
    &operand_data[371],
    4,
    2,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4475 */
  {
    "udivsi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wr\t%%g0, 0, %%y\n\tudiv\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivsi3_sp64,
    &operand_data[375],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4484 */
  {
    "udivdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "udivx\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivdi3,
    &operand_data[318],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4492 */
  {
    "*cmp_udiv_cc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_196 },
#else
    { 0, 0, output_196 },
#endif
    0,
    &operand_data[371],
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4515 */
  {
    "*smacsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smac\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[378],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4524 */
  {
    "*smacdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smacd\t%1, %2, %L0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[382],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4535 */
  {
    "*umacdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umacd\t%1, %2, %L0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[382],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4571 */
  {
    "*anddi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_200 },
#else
    { 0, output_200, 0 },
#endif
    0,
    &operand_data[386],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4571 */
  {
    "*andv2si3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_201 },
#else
    { 0, output_201, 0 },
#endif
    0,
    &operand_data[389],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4571 */
  {
    "*andv4hi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_202 },
#else
    { 0, output_202, 0 },
#endif
    0,
    &operand_data[392],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4571 */
  {
    "*andv8qi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_203 },
#else
    { 0, output_203, 0 },
#endif
    0,
    &operand_data[395],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4582 */
  {
    "andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_204 },
#else
    { 0, output_204, 0 },
#endif
    (insn_gen_fn) gen_andsi3,
    &operand_data[398],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4582 */
  {
    "andv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_205 },
#else
    { 0, output_205, 0 },
#endif
    (insn_gen_fn) gen_andv2hi3,
    &operand_data[401],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4582 */
  {
    "andv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_206 },
#else
    { 0, output_206, 0 },
#endif
    (insn_gen_fn) gen_andv4qi3,
    &operand_data[404],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4631 */
  {
    "*and_not_di_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_207 },
#else
    { 0, output_207, 0 },
#endif
    0,
    &operand_data[407],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4631 */
  {
    "*and_not_v2si_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_208 },
#else
    { 0, output_208, 0 },
#endif
    0,
    &operand_data[410],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4631 */
  {
    "*and_not_v4hi_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_209 },
#else
    { 0, output_209, 0 },
#endif
    0,
    &operand_data[413],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4631 */
  {
    "*and_not_v8qi_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_210 },
#else
    { 0, output_210, 0 },
#endif
    0,
    &operand_data[416],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4642 */
  {
    "*and_not_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_211 },
#else
    { 0, output_211, 0 },
#endif
    0,
    &operand_data[419],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4642 */
  {
    "*and_not_v2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_212 },
#else
    { 0, output_212, 0 },
#endif
    0,
    &operand_data[422],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4642 */
  {
    "*and_not_v4qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_213 },
#else
    { 0, output_213, 0 },
#endif
    0,
    &operand_data[425],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4672 */
  {
    "*iordi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_214 },
#else
    { 0, output_214, 0 },
#endif
    0,
    &operand_data[386],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4672 */
  {
    "*iorv2si3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_215 },
#else
    { 0, output_215, 0 },
#endif
    0,
    &operand_data[389],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4672 */
  {
    "*iorv4hi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_216 },
#else
    { 0, output_216, 0 },
#endif
    0,
    &operand_data[392],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4672 */
  {
    "*iorv8qi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_217 },
#else
    { 0, output_217, 0 },
#endif
    0,
    &operand_data[395],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4683 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_218 },
#else
    { 0, output_218, 0 },
#endif
    (insn_gen_fn) gen_iorsi3,
    &operand_data[398],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4683 */
  {
    "iorv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_219 },
#else
    { 0, output_219, 0 },
#endif
    (insn_gen_fn) gen_iorv2hi3,
    &operand_data[401],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4683 */
  {
    "iorv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_220 },
#else
    { 0, output_220, 0 },
#endif
    (insn_gen_fn) gen_iorv4qi3,
    &operand_data[404],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4732 */
  {
    "*or_not_di_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_221 },
#else
    { 0, output_221, 0 },
#endif
    0,
    &operand_data[428],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4732 */
  {
    "*or_not_v2si_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_222 },
#else
    { 0, output_222, 0 },
#endif
    0,
    &operand_data[431],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4732 */
  {
    "*or_not_v4hi_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_223 },
#else
    { 0, output_223, 0 },
#endif
    0,
    &operand_data[434],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4732 */
  {
    "*or_not_v8qi_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_224 },
#else
    { 0, output_224, 0 },
#endif
    0,
    &operand_data[437],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4743 */
  {
    "*or_not_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_225 },
#else
    { 0, output_225, 0 },
#endif
    0,
    &operand_data[440],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4743 */
  {
    "*or_not_v2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_226 },
#else
    { 0, output_226, 0 },
#endif
    0,
    &operand_data[443],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4743 */
  {
    "*or_not_v4qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_227 },
#else
    { 0, output_227, 0 },
#endif
    0,
    &operand_data[446],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4773 */
  {
    "*xordi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_228 },
#else
    { 0, output_228, 0 },
#endif
    0,
    &operand_data[449],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4773 */
  {
    "*xorv2si3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_229 },
#else
    { 0, output_229, 0 },
#endif
    0,
    &operand_data[452],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4773 */
  {
    "*xorv4hi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_230 },
#else
    { 0, output_230, 0 },
#endif
    0,
    &operand_data[455],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4773 */
  {
    "*xorv8qi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_231 },
#else
    { 0, output_231, 0 },
#endif
    0,
    &operand_data[458],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4784 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_232 },
#else
    { 0, output_232, 0 },
#endif
    (insn_gen_fn) gen_xorsi3,
    &operand_data[461],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4784 */
  {
    "xorv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_233 },
#else
    { 0, output_233, 0 },
#endif
    (insn_gen_fn) gen_xorv2hi3,
    &operand_data[464],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4784 */
  {
    "xorv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_234 },
#else
    { 0, output_234, 0 },
#endif
    (insn_gen_fn) gen_xorv4qi3,
    &operand_data[467],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4881 */
  {
    "*xor_not_di_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_235 },
#else
    { 0, output_235, 0 },
#endif
    0,
    &operand_data[470],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4881 */
  {
    "*xor_not_v2si_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_236 },
#else
    { 0, output_236, 0 },
#endif
    0,
    &operand_data[473],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4881 */
  {
    "*xor_not_v4hi_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_237 },
#else
    { 0, output_237, 0 },
#endif
    0,
    &operand_data[476],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4881 */
  {
    "*xor_not_v8qi_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_238 },
#else
    { 0, output_238, 0 },
#endif
    0,
    &operand_data[479],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4892 */
  {
    "*xor_not_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_239 },
#else
    { 0, output_239, 0 },
#endif
    0,
    &operand_data[482],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4892 */
  {
    "*xor_not_v2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_240 },
#else
    { 0, output_240, 0 },
#endif
    0,
    &operand_data[485],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4892 */
  {
    "*xor_not_v4qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_241 },
#else
    { 0, output_241, 0 },
#endif
    0,
    &operand_data[488],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4906 */
  {
    "*cmp_cc_arith_op",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%A2cc\t%0, %1, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[491],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4917 */
  {
    "*cmp_ccx_arith_op",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%A2cc\t%0, %1, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[494],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4928 */
  {
    "*cmp_cc_arith_op_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%A3cc\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[497],
    5,
    2,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4941 */
  {
    "*cmp_ccx_arith_op_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%A3cc\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[502],
    5,
    2,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4954 */
  {
    "*cmp_cc_xor_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xnorcc\t%r0, %1, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[296],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4964 */
  {
    "*cmp_ccx_xor_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xnorcc\t%r0, %1, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[507],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4974 */
  {
    "*cmp_cc_xor_not_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xnorcc\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[509],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4986 */
  {
    "*cmp_ccx_xor_not_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xnorcc\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[512],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4998 */
  {
    "*cmp_cc_arith_op_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%B2cc\t%r1, %0, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[515],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5009 */
  {
    "*cmp_ccx_arith_op_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%B2cc\t%r1, %0, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[518],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5020 */
  {
    "*cmp_cc_arith_op_not_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%B3cc\t%r2, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[521],
    5,
    2,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5034 */
  {
    "*cmp_ccx_arith_op_not_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%B3cc\t%r2, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[526],
    5,
    2,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5089 */
  {
    "*negdi2_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[95],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5095 */
  {
    "negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negsi2,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5101 */
  {
    "*cmp_cc_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subcc\t%%g0, %0, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5109 */
  {
    "*cmp_ccx_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subcc\t%%g0, %0, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[4],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5117 */
  {
    "*cmp_cc_set_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subcc\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5127 */
  {
    "*cmp_ccx_set_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subcc\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[526],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5168 */
  {
    "*one_cmpldi2_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_260 },
#else
    { 0, output_260, 0 },
#endif
    0,
    &operand_data[531],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5168 */
  {
    "*one_cmplv2si2_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_261 },
#else
    { 0, output_261, 0 },
#endif
    0,
    &operand_data[533],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5168 */
  {
    "*one_cmplv4hi2_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_262 },
#else
    { 0, output_262, 0 },
#endif
    0,
    &operand_data[535],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5168 */
  {
    "*one_cmplv8qi2_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_263 },
#else
    { 0, output_263, 0 },
#endif
    0,
    &operand_data[537],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5178 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_264 },
#else
    { 0, output_264, 0 },
#endif
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[539],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5178 */
  {
    "one_cmplv2hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_265 },
#else
    { 0, output_265, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv2hi2,
    &operand_data[541],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5178 */
  {
    "one_cmplv4qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_266 },
#else
    { 0, output_266, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv4qi2,
    &operand_data[543],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5188 */
  {
    "*cmp_cc_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xnorcc\t%%g0, %0, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5196 */
  {
    "*cmp_ccx_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xnorcc\t%%g0, %0, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[4],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5204 */
  {
    "*cmp_cc_set_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xnorcc\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5214 */
  {
    "*cmp_ccx_set_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xnorcc\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[526],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5224 */
  {
    "*cmp_cc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orcc\t%1, 0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5234 */
  {
    "*cmp_ccx_set64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orcc\t%1, 0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[95],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5254 */
  {
    "*addtf3_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faddq\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[545],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5262 */
  {
    "adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faddd\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adddf3,
    &operand_data[548],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5271 */
  {
    "addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fadds\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addsf3,
    &operand_data[551],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5286 */
  {
    "*subtf3_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsubq\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[545],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5294 */
  {
    "subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsubd\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdf3,
    &operand_data[548],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5303 */
  {
    "subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsubs\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsf3,
    &operand_data[551],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5318 */
  {
    "*multf3_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmulq\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[545],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5326 */
  {
    "muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuld\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldf3,
    &operand_data[548],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5335 */
  {
    "mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuls\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsf3,
    &operand_data[551],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5343 */
  {
    "*muldf3_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsmuld\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[554],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5352 */
  {
    "*multf3_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdmulq\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[557],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5368 */
  {
    "*divtf3_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdivq\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[545],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5376 */
  {
    "divdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdivd\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divdf3,
    &operand_data[548],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5385 */
  {
    "divsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdivs\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divsf3,
    &operand_data[551],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5399 */
  {
    "*negtf2_notv9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_287 },
#else
    { 0, output_287, 0 },
#endif
    0,
    &operand_data[560],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5422 */
  {
    "*negtf2_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_288 },
#else
    { 0, output_288, 0 },
#endif
    0,
    &operand_data[560],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5448 */
  {
    "*negdf2_notv9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_289 },
#else
    { 0, output_289, 0 },
#endif
    0,
    &operand_data[562],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5466 */
  {
    "*negdf2_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnegd\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[548],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5474 */
  {
    "negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnegs\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negsf2,
    &operand_data[551],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5487 */
  {
    "*abstf2_notv9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_292 },
#else
    { 0, output_292, 0 },
#endif
    0,
    &operand_data[560],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5509 */
  {
    "*abstf2_hq_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_293 },
#else
    { 0, output_293, 0 },
#endif
    0,
    &operand_data[560],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5519 */
  {
    "*abstf2_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_294 },
#else
    { 0, output_294, 0 },
#endif
    0,
    &operand_data[560],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5544 */
  {
    "*absdf2_notv9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_295 },
#else
    { 0, output_295, 0 },
#endif
    0,
    &operand_data[562],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5562 */
  {
    "*absdf2_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabsd\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[548],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5570 */
  {
    "abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabss\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_abssf2,
    &operand_data[551],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5583 */
  {
    "*sqrttf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrtq\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[545],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5590 */
  {
    "sqrtdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrtd\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtdf2,
    &operand_data[548],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5598 */
  {
    "sqrtsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrts\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtsf2,
    &operand_data[551],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5608 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_301 },
#else
    { 0, 0, output_301 },
#endif
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[371],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5637 */
  {
    "*ashldi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_302 },
#else
    { 0, 0, output_302 },
#endif
    0,
    &operand_data[564],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5652 */
  {
    "ashldi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_303 },
#else
    { 0, 0, output_303 },
#endif
    (insn_gen_fn) gen_ashldi3_v8plus,
    &operand_data[567],
    4,
    0,
    3,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5679 */
  {
    "*cmp_cc_ashift_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addcc\t%0, %0, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5688 */
  {
    "*cmp_cc_set_ashift_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addcc\t%1, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5699 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_306 },
#else
    { 0, 0, output_306 },
#endif
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[371],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5711 */
  {
    "*ashrsi3_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sra\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[571],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5721 */
  {
    "*ashrsi3_extend2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_308 },
#else
    { 0, 0, output_308 },
#endif
    0,
    &operand_data[574],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5748 */
  {
    "*ashrdi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_309 },
#else
    { 0, 0, output_309 },
#endif
    0,
    &operand_data[564],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5762 */
  {
    "ashrdi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_310 },
#else
    { 0, 0, output_310 },
#endif
    (insn_gen_fn) gen_ashrdi3_v8plus,
    &operand_data[567],
    4,
    0,
    3,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5772 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_311 },
#else
    { 0, 0, output_311 },
#endif
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[371],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5787 */
  {
    "*lshrsi3_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srl\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[577],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5799 */
  {
    "*lshrsi3_extend2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_313 },
#else
    { 0, 0, output_313 },
#endif
    0,
    &operand_data[581],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5826 */
  {
    "*lshrdi3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_314 },
#else
    { 0, 0, output_314 },
#endif
    0,
    &operand_data[564],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5839 */
  {
    "lshrdi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_315 },
#else
    { 0, 0, output_315 },
#endif
    (insn_gen_fn) gen_lshrdi3_v8plus,
    &operand_data[567],
    4,
    0,
    3,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5849 */
  {
    "*sparc.md:5849",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_316 },
#else
    { 0, 0, output_316 },
#endif
    0,
    &operand_data[584],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5861 */
  {
    "*sparc.md:5861",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_317 },
#else
    { 0, 0, output_317 },
#endif
    0,
    &operand_data[584],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5873 */
  {
    "*sparc.md:5873",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_318 },
#else
    { 0, 0, output_318 },
#endif
    0,
    &operand_data[584],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5889 */
  {
    "*sparc.md:5889",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_319 },
#else
    { 0, 0, output_319 },
#endif
    0,
    &operand_data[584],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5908 */
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_320 },
#else
    { 0, 0, output_320 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[43],
    1,
    0,
    0,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5943 */
  {
    "*tablejump_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%a0%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[588],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6041 */
  {
    "*call_address_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a0, %1%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[588],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6050 */
  {
    "*call_symbolic_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a0, %1%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[590],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6164 */
  {
    "*call_value_address_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a1, %2%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[591],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6174 */
  {
    "*call_value_symbolic_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a1, %2%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[589],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6229 */
  {
    "*sibcall_symbolic_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_326 },
#else
    { 0, 0, output_326 },
#endif
    0,
    &operand_data[590],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6253 */
  {
    "*sibcall_value_symbolic_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_327 },
#else
    { 0, 0, output_327 },
#endif
    0,
    &operand_data[589],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6281 */
  {
    "save_register_windowdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "save\t%%sp, %0, %%sp",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_save_register_windowdi,
    &operand_data[4],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6310 */
  {
    "*return_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_329 },
#else
    { 0, 0, output_329 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6335 */
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6349 */
  {
    "probe_stack_rangedi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_331 },
#else
    { 0, 0, output_331 },
#endif
    (insn_gen_fn) gen_probe_stack_rangedi,
    &operand_data[594],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6423 */
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6439 */
  {
    "*branch_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%a0%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[588],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6486 */
  {
    "flush_register_windows",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_334 },
#else
    { 0, 0, output_334 },
#endif
    (insn_gen_fn) gen_flush_register_windows,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6492 */
  {
    "goto_handler_and_restore",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_335 },
#else
    { 0, 0, output_335 },
#endif
    (insn_gen_fn) gen_goto_handler_and_restore,
    &operand_data[597],
    1,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6518 */
  {
    "do_builtin_setjmp_setup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_336 },
#else
    { 0, 0, output_336 },
#endif
    (insn_gen_fn) gen_do_builtin_setjmp_setup,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6583 */
  {
    "flush",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_337 },
#else
    { 0, 0, output_337 },
#endif
    (insn_gen_fn) gen_flush,
    &operand_data[598],
    1,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6589 */
  {
    "flushdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_338 },
#else
    { 0, 0, output_338 },
#endif
    (insn_gen_fn) gen_flushdi,
    &operand_data[599],
    1,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6604 */
  {
    "ffssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_339 },
#else
    { 0, 0, output_339 },
#endif
    (insn_gen_fn) gen_ffssi2,
    &operand_data[600],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6812 */
  {
    "prefetch_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_340 },
#else
    { 0, 0, output_340 },
#endif
    (insn_gen_fn) gen_prefetch_64,
    &operand_data[603],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6837 */
  {
    "prefetch_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_341 },
#else
    { 0, 0, output_341 },
#endif
    (insn_gen_fn) gen_prefetch_32,
    &operand_data[606],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6865 */
  {
    "trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ta\t5",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_trap,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6894 */
  {
    "*sparc.md:6894",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_343 },
#else
    { 0, 0, output_343 },
#endif
    0,
    &operand_data[609],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6906 */
  {
    "*sparc.md:6906",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "t%C0\t%%xcc, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[609],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6916 */
  {
    "tgd_hi22",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%tgd_hi22(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tgd_hi22,
    &operand_data[611],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6923 */
  {
    "tgd_lo10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %%tgd_lo10(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tgd_lo10,
    &operand_data[613],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6940 */
  {
    "tgd_add64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %2, %0, %%tgd_add(%a3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tgd_add64,
    &operand_data[616],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6960 */
  {
    "tgd_call64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a1, %%tgd_call(%a2)%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tgd_call64,
    &operand_data[620],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6971 */
  {
    "tldm_hi22",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%tldm_hi22(%&), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldm_hi22,
    &operand_data[23],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6977 */
  {
    "tldm_lo10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %%tldm_lo10(%&), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldm_lo10,
    &operand_data[23],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6992 */
  {
    "tldm_add64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %2, %0, %%tldm_add(%&)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldm_add64,
    &operand_data[616],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7010 */
  {
    "tldm_call64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a1, %%tldm_call(%&)%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldm_call64,
    &operand_data[624],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7020 */
  {
    "tldo_hix22",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%tldo_hix22(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldo_hix22,
    &operand_data[627],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7027 */
  {
    "tldo_lox10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%1, %%tldo_lox10(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldo_lox10,
    &operand_data[629],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7044 */
  {
    "tldo_add64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %2, %0, %%tldo_add(%a3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldo_add64,
    &operand_data[632],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7053 */
  {
    "tie_hi22",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%tie_hi22(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tie_hi22,
    &operand_data[636],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7060 */
  {
    "tie_lo10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %%tie_lo10(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tie_lo10,
    &operand_data[638],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7078 */
  {
    "tie_ld64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldx\t[%1 + %2], %0, %%tie_ldx(%a3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tie_ld64,
    &operand_data[641],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7097 */
  {
    "tie_add64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %2, %0, %%tie_add(%a3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tie_add64,
    &operand_data[645],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7121 */
  {
    "tle_hix22_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%tle_hix22(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tle_hix22_sp64,
    &operand_data[649],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7128 */
  {
    "tle_lox10_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%1, %%tle_lox10(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tle_lox10_sp64,
    &operand_data[651],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7192 */
  {
    "*tldo_ldub_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldub\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[654],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7203 */
  {
    "*tldo_ldub1_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldub\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[658],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7214 */
  {
    "*tldo_ldub2_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldub\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[662],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7225 */
  {
    "*tldo_ldub3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldub\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[632],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7236 */
  {
    "*tldo_ldsb1_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsb\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[658],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7247 */
  {
    "*tldo_ldsb2_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsb\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[662],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7258 */
  {
    "*tldo_ldsb3_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsb\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[632],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7302 */
  {
    "*tldo_lduh_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lduh\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[658],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7313 */
  {
    "*tldo_lduh1_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lduh\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[662],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7324 */
  {
    "*tldo_lduh2_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lduh\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[632],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7335 */
  {
    "*tldo_ldsh1_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsh\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[662],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7346 */
  {
    "*tldo_ldsh2_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsh\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[632],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7367 */
  {
    "*tldo_lduw_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lduw\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[662],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7377 */
  {
    "*tldo_lduw1_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lduw\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[632],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7387 */
  {
    "*tldo_ldsw1_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsw\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[632],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7398 */
  {
    "*tldo_ldx_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldx\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[632],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7418 */
  {
    "*tldo_stb_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stb\t%0, [%1 + %2], %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[654],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7438 */
  {
    "*tldo_sth_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sth\t%0, [%1 + %2], %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[658],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7458 */
  {
    "*tldo_stw_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stw\t%0, [%1 + %2], %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[662],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7468 */
  {
    "*tldo_stx_sp64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stx\t%0, [%1 + %2], %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[632],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7507 */
  {
    "stack_protect_setdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldx\t%1, %2\n\tstx\t%2, %0\n\tmov\t0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_setdi,
    &operand_data[666],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7557 */
  {
    "stack_protect_testdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldx\t%1, %0\n\tldx\t%2, %3\n\txor\t%0, %3, %0\n\tmov\t0, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_testdi,
    &operand_data[669],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7571 */
  {
    "addv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpadd32\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv2si3,
    &operand_data[673],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7580 */
  {
    "addv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpadd16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv4hi3,
    &operand_data[676],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7591 */
  {
    "addv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpadd16s\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv2hi3,
    &operand_data[679],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7600 */
  {
    "subv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpsub32\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv2si3,
    &operand_data[673],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7609 */
  {
    "subv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpsub16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv4hi3,
    &operand_data[676],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7620 */
  {
    "subv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpsub16s\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv2hi3,
    &operand_data[679],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7634 */
  {
    "*nanddf_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnand\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[548],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7634 */
  {
    "*nandv2si_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnand\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[673],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7634 */
  {
    "*nandv4hi_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnand\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[676],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7634 */
  {
    "*nandv8qi_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnand\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[682],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7643 */
  {
    "*nandsf_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnands\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[551],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7643 */
  {
    "*nandv2hi_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnands\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[679],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7643 */
  {
    "*nandv4qi_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnands\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[685],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7654 */
  {
    "fpack16_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpack16\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpack16_vis,
    &operand_data[688],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7663 */
  {
    "fpackfix_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpackfix\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpackfix_vis,
    &operand_data[690],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7672 */
  {
    "fpack32_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpack32\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpack32_vis,
    &operand_data[692],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7682 */
  {
    "fexpand_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fexpand\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fexpand_vis,
    &operand_data[695],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7696 */
  {
    "fpmerge_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpmerge\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpmerge_vis,
    &operand_data[697],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7707 */
  {
    "fmul8x16_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul8x16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmul8x16_vis,
    &operand_data[700],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7717 */
  {
    "fmul8x16au_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul8x16au\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmul8x16au_vis,
    &operand_data[703],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7726 */
  {
    "fmul8x16al_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul8x16al\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmul8x16al_vis,
    &operand_data[703],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7737 */
  {
    "fmul8sux16_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul8sux16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmul8sux16_vis,
    &operand_data[706],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7746 */
  {
    "fmul8ulx16_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul8ulx16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmul8ulx16_vis,
    &operand_data[706],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7757 */
  {
    "fmuld8sux16_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuld8sux16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmuld8sux16_vis,
    &operand_data[709],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7766 */
  {
    "fmuld8ulx16_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuld8ulx16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmuld8ulx16_vis,
    &operand_data[709],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7779 */
  {
    "faligndatadi_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faligndata\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_faligndatadi_vis,
    &operand_data[712],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7779 */
  {
    "faligndatav2si_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faligndata\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_faligndatav2si_vis,
    &operand_data[673],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7779 */
  {
    "faligndatav4hi_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faligndata\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_faligndatav4hi_vis,
    &operand_data[676],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7779 */
  {
    "faligndatav8qi_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faligndata\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_faligndatav8qi_vis,
    &operand_data[682],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7789 */
  {
    "alignaddrdi_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "alignaddr\t%r1, %r2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_alignaddrdi_vis,
    &operand_data[715],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7797 */
  {
    "pdist_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pdist\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pdist_vis,
    &operand_data[718],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:36 */
  {
    "*stbar",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stbar",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[722],
    1,
    1,
    0,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:44 */
  {
    "*membar",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "membar\t15",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[722],
    1,
    1,
    0,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:82 */
  {
    "*sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cas\t[%1], %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[723],
    4,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:82 */
  {
    "*sync_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "casx\t[%1], %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    4,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:94 */
  {
    "*sync_compare_and_swapdi_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_419 },
#else
    { 0, 0, output_419 },
#endif
    0,
    &operand_data[731],
    4,
    1,
    1,
    3
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:155 */
  {
    "*swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swap\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[735],
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:182 */
  {
    "*ldstubqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldstub\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[738],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:191 */
  {
    "*ldstubhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldstub\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[740],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:191 */
  {
    "*ldstubsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldstub\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[742],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:461 */
  {
    "cstoresi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstoresi4,
    &operand_data[744],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:473 */
  {
    "cstoredi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstoredi4,
    &operand_data[748],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:485 */
  {
    "cstoresf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstoresf4,
    &operand_data[752],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:485 */
  {
    "cstoredf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstoredf4,
    &operand_data[756],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:485 */
  {
    "cstoretf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstoretf4,
    &operand_data[760],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:498 */
  {
    "seqsi_special",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seqsi_special,
    &operand_data[764],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:508 */
  {
    "seqdi_special",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seqdi_special,
    &operand_data[766],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:517 */
  {
    "snesi_special",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_snesi_special,
    &operand_data[764],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:527 */
  {
    "snedi_special",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_snedi_special,
    &operand_data[766],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:544 */
  {
    "snedi_special+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[764],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:558 */
  {
    "snedi_special+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[764],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:572 */
  {
    "snedi_special+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[768],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:590 */
  {
    "snedi_special+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[767],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:605 */
  {
    "snedi_special+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[767],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:620 */
  {
    "snedi_special+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[766],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:635 */
  {
    "snedi_special+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[764],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:649 */
  {
    "snedi_special+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[764],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:663 */
  {
    "snedi_special+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[768],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:681 */
  {
    "cbranchcc4-8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[767],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:696 */
  {
    "cbranchcc4-7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[767],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:711 */
  {
    "cbranchcc4-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[766],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:730 */
  {
    "cbranchcc4-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[764],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:746 */
  {
    "cbranchcc4-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[764],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:762 */
  {
    "cbranchcc4-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[764],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:778 */
  {
    "cbranchcc4-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[764],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:907 */
  {
    "cbranchcc4-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[769],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:927 */
  {
    "cbranchcc4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchcc4,
    &operand_data[772],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:937 */
  {
    "cbranchsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchsi4,
    &operand_data[776],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:950 */
  {
    "cbranchdi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchdi4,
    &operand_data[780],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:963 */
  {
    "cbranchsf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchsf4,
    &operand_data[784],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:963 */
  {
    "cbranchdf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchdf4,
    &operand_data[788],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:963 */
  {
    "cbranchtf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchtf4,
    &operand_data[792],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1140 */
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[796],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1161 */
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[798],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1191 */
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[800],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1271 */
  {
    "movsi_pic_label_ref",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi_pic_label_ref,
    &operand_data[81],
    2,
    8,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1328 */
  {
    "movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdi,
    &operand_data[802],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1420 */
  {
    "movdi_pic_label_ref",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdi_pic_label_ref,
    &operand_data[92],
    2,
    8,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1615 */
  {
    "reload_indi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_indi,
    &operand_data[804],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1627 */
  {
    "reload_outdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_outdi,
    &operand_data[804],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1673 */
  {
    "reload_outdi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[807],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1706 */
  {
    "reload_outdi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[767],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1787 */
  {
    "movsf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[809],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1806 */
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[811],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1806 */
  {
    "movv2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2hi,
    &operand_data[813],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1806 */
  {
    "movv4qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4qi,
    &operand_data[815],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1932 */
  {
    "movv4qi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[817],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1940 */
  {
    "movdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdf,
    &operand_data[819],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1940 */
  {
    "movv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2si,
    &operand_data[821],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1940 */
  {
    "movv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4hi,
    &operand_data[823],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:1940 */
  {
    "movv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv8qi,
    &operand_data[825],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2063 */
  {
    "movv8qi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[827],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2063 */
  {
    "movv8qi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[829],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2063 */
  {
    "movv8qi+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[831],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2063 */
  {
    "movv8qi+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[833],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2118 */
  {
    "movv8qi+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[758],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2118 */
  {
    "movv8qi+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[835],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2118 */
  {
    "movtf-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[837],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2118 */
  {
    "movtf-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[839],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2225 */
  {
    "movtf-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[841],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2225 */
  {
    "movtf-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[843],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2225 */
  {
    "movtf-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[845],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2225 */
  {
    "movtf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[847],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2281 */
  {
    "movtf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movtf,
    &operand_data[849],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2354 */
  {
    "movtf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[762],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2389 */
  {
    "movtf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[851],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2417 */
  {
    "movqicc-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[853],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2452 */
  {
    "movqicc-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[854],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2480 */
  {
    "movqicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqicc,
    &operand_data[856],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2480 */
  {
    "movhicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhicc,
    &operand_data[860],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2480 */
  {
    "movsicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsicc,
    &operand_data[864],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2480 */
  {
    "movdicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdicc,
    &operand_data[868],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2510 */
  {
    "movsfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsfcc,
    &operand_data[872],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2510 */
  {
    "movdfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdfcc,
    &operand_data[876],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2510 */
  {
    "movtfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movtfcc,
    &operand_data[880],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2650 */
  {
    "movtfcc+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[883],
    5,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2693 */
  {
    "zero_extendhisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[887],
    5,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2743 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[892],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2774 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[893],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2790 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[895],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2806 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqidi2,
    &operand_data[897],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2822 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhidi2,
    &operand_data[899],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:2855 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[768],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3023 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[892],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3054 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[893],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3094 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[895],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3125 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqidi2,
    &operand_data[897],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3156 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhidi2,
    &operand_data[899],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3187 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsidi2,
    &operand_data[768],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3253 */
  {
    "extendsftf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsftf2,
    &operand_data[901],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3268 */
  {
    "extenddftf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extenddftf2,
    &operand_data[903],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3292 */
  {
    "trunctfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_trunctfsf2,
    &operand_data[905],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3307 */
  {
    "trunctfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_trunctfdf2,
    &operand_data[907],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3341 */
  {
    "floatsitf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatsitf2,
    &operand_data[909],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3354 */
  {
    "floatunssitf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunssitf2,
    &operand_data[909],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3370 */
  {
    "floatunsdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunsdisf2,
    &operand_data[911],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3384 */
  {
    "floatunsdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunsdidf2,
    &operand_data[913],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3390 */
  {
    "floatditf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatditf2,
    &operand_data[915],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3403 */
  {
    "floatunsditf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunsditf2,
    &operand_data[915],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3428 */
  {
    "fix_trunctfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunctfsi2,
    &operand_data[917],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3441 */
  {
    "fixuns_trunctfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_trunctfsi2,
    &operand_data[917],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3457 */
  {
    "fixuns_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfdi2,
    &operand_data[919],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3471 */
  {
    "fixuns_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfdi2,
    &operand_data[921],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3477 */
  {
    "fix_trunctfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunctfdi2,
    &operand_data[923],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3490 */
  {
    "fixuns_trunctfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_trunctfdi2,
    &operand_data[923],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3499 */
  {
    "adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddi3,
    &operand_data[925],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3672 */
  {
    "subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subdi3,
    &operand_data[925],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3858 */
  {
    "muldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldi3,
    &operand_data[928],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:3928 */
  {
    "mulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3,
    &operand_data[931],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4137 */
  {
    "umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3,
    &operand_data[934],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4326 */
  {
    "divsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divsi3,
    &operand_data[937],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4425 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_udivsi3,
    &operand_data[941],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4552 */
  {
    "anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_anddi3,
    &operand_data[944],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4552 */
  {
    "andv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv2si3,
    &operand_data[947],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4552 */
  {
    "andv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv4hi3,
    &operand_data[950],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4552 */
  {
    "andv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv8qi3,
    &operand_data[953],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4593 */
  {
    "andv8qi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[956],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4653 */
  {
    "iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iordi3,
    &operand_data[944],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4653 */
  {
    "iorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv2si3,
    &operand_data[947],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4653 */
  {
    "iorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv4hi3,
    &operand_data[950],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4653 */
  {
    "iorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv8qi3,
    &operand_data[953],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4694 */
  {
    "iorv8qi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[956],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4754 */
  {
    "xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xordi3,
    &operand_data[944],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4754 */
  {
    "xorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv2si3,
    &operand_data[947],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4754 */
  {
    "xorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv4hi3,
    &operand_data[950],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4754 */
  {
    "xorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv8qi3,
    &operand_data[953],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4795 */
  {
    "xorv8qi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[956],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:4807 */
  {
    "negdi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[956],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5051 */
  {
    "negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdi2,
    &operand_data[95],
    2,
    0,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5139 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[767],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5139 */
  {
    "one_cmplv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv2si2,
    &operand_data[835],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5139 */
  {
    "one_cmplv4hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv4hi2,
    &operand_data[837],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5139 */
  {
    "one_cmplv8qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv8qi2,
    &operand_data[839],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5247 */
  {
    "addtf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addtf3,
    &operand_data[960],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5279 */
  {
    "subtf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subtf3,
    &operand_data[960],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5311 */
  {
    "multf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_multf3,
    &operand_data[960],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5360 */
  {
    "divtf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divtf3,
    &operand_data[960],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5393 */
  {
    "negtf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negtf2,
    &operand_data[560],
    2,
    0,
    2,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5399 */
  {
    "negtf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[762],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5422 */
  {
    "negdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[762],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5442 */
  {
    "negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdf2,
    &operand_data[758],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5448 */
  {
    "negdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[758],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5481 */
  {
    "abstf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abstf2,
    &operand_data[762],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5487 */
  {
    "abstf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[762],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5519 */
  {
    "absdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[762],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5538 */
  {
    "absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absdf2,
    &operand_data[758],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5544 */
  {
    "absdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[758],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5577 */
  {
    "sqrttf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sqrttf2,
    &operand_data[849],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5622 */
  {
    "ashldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3,
    &operand_data[564],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5733 */
  {
    "ashrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3,
    &operand_data[564],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5811 */
  {
    "lshrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3,
    &operand_data[564],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5914 */
  {
    "tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump,
    &operand_data[963],
    2,
    0,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:5953 */
  {
    "call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call,
    &operand_data[965],
    4,
    0,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6117 */
  {
    "call_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value,
    &operand_data[969],
    5,
    0,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6184 */
  {
    "untyped_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_call,
    &operand_data[973],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6215 */
  {
    "sibcall",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall,
    &operand_data[965],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6237 */
  {
    "sibcall_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value,
    &operand_data[969],
    2,
    0,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6265 */
  {
    "prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6290 */
  {
    "epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6297 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6305 */
  {
    "return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6341 */
  {
    "probe_stack",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_probe_stack,
    &operand_data[976],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6360 */
  {
    "untyped_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_return,
    &operand_data[974],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6428 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[977],
    1,
    0,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6445 */
  {
    "nonlocal_goto",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_nonlocal_goto,
    &operand_data[978],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6510 */
  {
    "builtin_setjmp_setup",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_builtin_setjmp_setup,
    &operand_data[724],
    1,
    0,
    1,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6550 */
  {
    "setjmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_setjmp,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6638 */
  {
    "setjmp+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[982],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6649 */
  {
    "setjmp+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[982],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6660 */
  {
    "setjmp+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[984],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6672 */
  {
    "setjmp+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[983],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6684 */
  {
    "setjmp+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[988],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6696 */
  {
    "setjmp+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[989],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6708 */
  {
    "prefetch-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[984],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6720 */
  {
    "prefetch-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[983],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6733 */
  {
    "prefetch-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[988],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6745 */
  {
    "prefetch-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[989],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6761 */
  {
    "prefetch-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[764],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6776 */
  {
    "prefetch-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[993],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6799 */
  {
    "prefetch",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prefetch,
    &operand_data[996],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6871 */
  {
    "ctrapsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ctrapsi4,
    &operand_data[999],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:6882 */
  {
    "ctrapdi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ctrapdi4,
    &operand_data[1003],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7481 */
  {
    "stack_protect_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set,
    &operand_data[1007],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sparc.md:7516 */
  {
    "stack_protect_test",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test,
    &operand_data[1007],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:26 */
  {
    "memory_barrier",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_memory_barrier,
    &operand_data[0],
    0,
    2,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:51 */
  {
    "sync_compare_and_swapqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapqi,
    &operand_data[1010],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:51 */
  {
    "sync_compare_and_swaphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swaphi,
    &operand_data[1014],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:63 */
  {
    "sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapsi,
    &operand_data[1018],
    4,
    1,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:63 */
  {
    "sync_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapdi,
    &operand_data[1022],
    4,
    1,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:118 */
  {
    "sync_lock_test_and_setqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setqi,
    &operand_data[1026],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:118 */
  {
    "sync_lock_test_and_sethi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_sethi,
    &operand_data[1029],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:134 */
  {
    "sync_lock_test_and_setsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setsi,
    &operand_data[1032],
    3,
    1,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:165 */
  {
    "ldstubqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldstubqi,
    &operand_data[1010],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:173 */
  {
    "ldstubhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldstubhi,
    &operand_data[1035],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.6.1/gcc/config/sparc/sync.md:173 */
  {
    "ldstubsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldstubsi,
    &operand_data[1037],
    2,
    1,
    0,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
