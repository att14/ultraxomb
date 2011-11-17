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
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char *
output_2 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 383 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmpes\t%0, %1, %2";
  return "fcmpes\t%1, %2";
}
}

static const char *
output_3 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 395 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmped\t%0, %1, %2";
  return "fcmped\t%1, %2";
}
}

static const char *
output_4 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 408 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmpeq\t%0, %1, %2";
  return "fcmpeq\t%1, %2";
}
}

static const char *
output_5 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 420 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmps\t%0, %1, %2";
  return "fcmps\t%1, %2";
}
}

static const char *
output_6 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 432 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmpd\t%0, %1, %2";
  return "fcmpd\t%1, %2";
}
}

static const char *
output_7 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 445 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmpq\t%0, %1, %2";
  return "fcmpq\t%1, %2";
}
}

static const char *
output_37 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 975 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[0], operands[1], 1, 0,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_38 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 991 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[0], operands[1], 1, 1,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_39 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1008 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[1], operands[2], 2, 0,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_40 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1025 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[1], operands[2], 2, 1,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_41 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1042 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[1], operands[2], 2, 0,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_42 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1059 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[1], operands[2], 2, 1,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_43 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1081 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  return output_v9branch (operands[0], operands[2], 1, 2, 0,
			  final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			  insn);
}
}

static const char *
output_44 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1098 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  return output_v9branch (operands[0], operands[2], 1, 2, 1,
			  final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			  insn);
}
}

static const char *
output_45 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1118 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1118 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1229 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1241 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1255 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1462 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1474 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1488 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1814 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1814 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1814 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1862 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1901 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 1915 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 3208 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 3225 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 3881 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 4403 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 4493 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 5606 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "sll\t%1, %2, %0";
}
}

static const char *
output_302 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5635 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);
  return "sllx\t%1, %2, %0";
}
}

static const char *
output_303 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5651 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
 return output_v8plus_shift (operands, insn, "sllx");
}

static const char *
output_306 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5697 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
     if (GET_CODE (operands[2]) == CONST_INT)
       operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
     return "sra\t%1, %2, %0";
  }
}

static const char *
output_308 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5720 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) - 32);
  return "sra\t%1, %2, %0";
}
}

static const char *
output_309 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5747 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
    if (GET_CODE (operands[2]) == CONST_INT)
      operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);
    return "srax\t%1, %2, %0";
  }
}

static const char *
output_310 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5761 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
 return output_v8plus_shift (operands, insn, "srax");
}

static const char *
output_311 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5770 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
    if (GET_CODE (operands[2]) == CONST_INT)
      operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
    return "srl\t%1, %2, %0";
  }
}

static const char *
output_313 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5798 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (32 - INTVAL (operands[2]));
  return "srl\t%1, %2, %0";
}
}

static const char *
output_314 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5824 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
    if (GET_CODE (operands[2]) == CONST_INT)
      operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);
    return "srlx\t%1, %2, %0";
  }
}

static const char *
output_315 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5838 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
 return output_v8plus_shift (operands, insn, "srlx");
}

static const char *
output_316 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5848 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 32);
  return "srax\t%1, %2, %0";
}
}

static const char *
output_317 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5860 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 32);
  return "srlx\t%1, %2, %0";
}
}

static const char *
output_318 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5875 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + INTVAL (operands[3]));

  return "srax\t%1, %2, %0";
}
}

static const char *
output_319 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5891 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + INTVAL (operands[3]));

  return "srlx\t%1, %2, %0";
}
}

static const char *
output_320 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5904 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
 return output_ubranch (operands[0], 0, insn);
}

static const char *
output_326 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6227 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
 return output_sibcall(insn, operands[0]);
}

static const char *
output_327 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6252 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
 return output_sibcall(insn, operands[1]);
}

static const char *
output_329 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6306 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
 return output_return (insn);
}

static const char *
output_333 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6475 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ return TARGET_V9 ? "flushw" : "ta\t3"; }
}

static const char *
output_334 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6481 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (flag_delayed_branch)
    return "jmp\t%0\n\t restore";
  else
    return "mov\t%0,%%g1\n\trestore\n\tjmp\t%%g1\n\t nop";
}
}

static const char *
output_335 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6507 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
output_336 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6565 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ return TARGET_V9 ? "flush\t%f0" : "iflush\t%f0"; }
}

static const char *
output_337 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6571 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ return TARGET_V9 ? "flush\t%f0" : "iflush\t%f0"; }
}

static const char *
output_338 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6588 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  return "sub\t%%g0, %1, %0\n\tand\t%0, %1, %0\n\tscan\t%0, 0, %0\n\tmov\t32, %2\n\tsub\t%2, %0, %0\n\tsra\t%0, 31, %2\n\tand\t%2, 31, %2\n\tadd\t%2, %0, %0";
}
}

static const char *
output_339 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6796 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
output_340 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6821 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
output_342 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6877 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "t%C0\t%%icc, %1";
  else
    return "t%C0\t%1";
}
}

static const char *
output_418 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 103 "../../gcc-4.5.3/gcc/config/sparc/sync.md"
{
  if (sparc_check_64 (operands[3], insn) <= 0)
    output_asm_insn ("srl\t%L3, 0, %L3", operands);
  output_asm_insn ("sllx\t%H3, 32, %H3", operands);
  output_asm_insn ("or\t%L3, %H3, %L3", operands);
  if (sparc_check_64 (operands[2], insn) <= 0)
    output_asm_insn ("srl\t%L2, 0, %L2", operands);
  output_asm_insn ("sllx\t%H2, 32, %H3", operands);
  output_asm_insn ("or\t%L2, %H3, %H3", operands);
  output_asm_insn ("casx\t%1, %H3, %L3", operands);
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
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPEmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPEmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPEmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "c",
    CCFPmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "c",
    CCFPEmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_address_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    call_address_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    QImode,
    0,
    1
  },
  {
    input_operand,
    "rI,m,rJ",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    HImode,
    0,
    1
  },
  {
    input_operand,
    "rI,K,m,rJ",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,!f,!f,!m,d",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "rI,K,m,rJ,f,m,f,J",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "in",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "in",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    label_ref_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    label_ref_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=o,T,U,o,r,r,r,?T,?f,?f,?o,?f",
    DImode,
    0,
    1
  },
  {
    input_operand,
    "J,U,T,r,o,i,r,f,T,o,f,f",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,?e,?e,?W,b",
    DImode,
    0,
    1
  },
  {
    input_operand,
    "rI,N,m,rJ,e,W,e,J",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    label_ref_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    label_ref_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "in",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    medium_pic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    data_segment_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    data_segment_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    text_segment_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    text_segment_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,f,*r,*r,*r,f,*r,m,m",
    SFmode,
    0,
    1
  },
  {
    input_operand,
    "GY,f,*rRY,Q,S,m,m,f,*rGY",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,f,*r,*r,*r,f,*r,m,m",
    V2HImode,
    0,
    1
  },
  {
    input_operand,
    "GY,f,*rRY,Q,S,m,m,f,*rGY",
    V2HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,f,*r,*r,*r,f,*r,m,m",
    V4QImode,
    0,
    1
  },
  {
    input_operand,
    "GY,f,*rRY,Q,S,m,m,f,*rGY",
    V4QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,m",
    SFmode,
    0,
    1
  },
  {
    input_operand,
    "rR,Q,S,m,rG",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    fp_const_high_losum_operand,
    "S",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    fp_const_high_losum_operand,
    "S",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=e,W,U,T,o,e,*r,o,e,o",
    DFmode,
    0,
    1
  },
  {
    input_operand,
    "W#F,e,T,U,G,e,*rFo,*r,o#F,e",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=U,T,o,r,o",
    DFmode,
    0,
    1
  },
  {
    input_operand,
    "T,U,G,ro,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,W,*r,*r,m,*r",
    DFmode,
    0,
    1
  },
  {
    input_operand,
    "GY,e,W#F,e,*rGY,m,*rGY,DF",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,W,*r,*r,m,*r",
    V2SImode,
    0,
    1
  },
  {
    input_operand,
    "GY,e,W#F,e,*rGY,m,*rGY,DF",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,W,*r,*r,m,*r",
    V4HImode,
    0,
    1
  },
  {
    input_operand,
    "GY,e,W#F,e,*rGY,m,*rGY,DF",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,W,*r,*r,m,*r",
    V8QImode,
    0,
    1
  },
  {
    input_operand,
    "GY,e,W#F,e,*rGY,m,*rGY,DF",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    DFmode,
    0,
    1
  },
  {
    input_operand,
    "r,m,rG",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,o,r",
    TFmode,
    0,
    1
  },
  {
    input_operand,
    "G,oe,Ger,roG",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,m,o,r",
    TFmode,
    0,
    1
  },
  {
    input_operand,
    "G,e,m,e,rG,roG",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TFmode,
    0,
    1
  },
  {
    input_operand,
    "orG,rG",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    arith11_operand,
    "rL,0",
    QImode,
    0,
    1
  },
  {
    arith11_operand,
    "0,rL",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    arith11_operand,
    "rL,0",
    HImode,
    0,
    1
  },
  {
    arith11_operand,
    "0,rL",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    arith11_operand,
    "rL,0",
    SImode,
    0,
    1
  },
  {
    arith11_operand,
    "0,rL",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    arith11_operand,
    "rL,0",
    DImode,
    0,
    1
  },
  {
    arith11_operand,
    "0,rL",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    arith10_operand,
    "rM,0",
    QImode,
    0,
    1
  },
  {
    arith10_operand,
    "0,rM",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    arith10_operand,
    "rM,0",
    HImode,
    0,
    1
  },
  {
    arith10_operand,
    "0,rM",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    arith10_operand,
    "rM,0",
    SImode,
    0,
    1
  },
  {
    arith10_operand,
    "0,rM",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    arith10_operand,
    "rM,0",
    DImode,
    0,
    1
  },
  {
    arith10_operand,
    "0,rM",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "e,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    DFmode,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "e,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    TFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "e,0",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    TFmode,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "e,0",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    input_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    input_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    input_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "%rJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%r,r",
    DImode,
    0,
    1
  },
  {
    arith_add_operand,
    "rI,O",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r,r,d",
    SImode,
    0,
    1
  },
  {
    arith_add_operand,
    "rI,O,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    arith_add_operand,
    "rI,O",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,d",
    SImode,
    0,
    1
  },
  {
    arith_add_operand,
    "rI,O,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,h",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "%r,0",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,rI",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&h,X",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&h,X",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=h,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    DImode,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    uns_small_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=h,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    uns_small_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    uns_small_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "%r,b",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    1
  },
  {
    arith_operand,
    "%r,b",
    V2SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    1
  },
  {
    arith_operand,
    "%r,b",
    V4HImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    1
  },
  {
    arith_operand,
    "%r,b",
    V8QImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "%r,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "%r,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "%r,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%r,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "%r,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "%r,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "%r,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "%r,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "%r,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,b",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,b",
    V2SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,b",
    V4HImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,b",
    V8QImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,b",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,b",
    V2SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,b",
    V4HImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,b",
    V8QImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arith_operand,
    "%r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_arith_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    DImode,
    0,
    0
  },
  {
    cc_arith_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_or_zero_operand,
    "%rJ",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "%rJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "%rJ",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    cc_arith_not_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    DImode,
    0,
    1
  },
  {
    cc_arith_not_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    cc_arith_not_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_arith_not_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    DImode,
    0,
    1
  },
  {
    cc_arith_not_operator,
    "",
    DImode,
    0,
    0
  },
  {
    cc_arith_not_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&h,&h,r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,0,rI",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,rI,rI",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,&h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    symbolic_operand,
    "s",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    arith_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    tgd_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tgd_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tgd_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    symbolic_operand,
    "s",
    DImode,
    0,
    1
  },
  {
    tgd_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    symbolic_operand,
    "s",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    tie_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tie_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tie_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    tie_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    tle_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    tle_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=e",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    DImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_reg_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    memory_reg_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=h",
    DImode,
    0,
    1
  },
  {
    memory_reg_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "h",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    compare_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    compare_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    icc_or_fcc_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    SImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    compare_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    compare_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    compare_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    fp_const_high_losum_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_double_or_vector_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_double_or_vector_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_double_or_vector_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_double_or_vector_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    QImode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    HImode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    v9_register_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_double_add_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_compl_high_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=rf",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "p",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    compare_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    compare_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:362 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:370 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:378 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:390 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:403 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:415 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:427 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:440 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:537 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:551 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:565 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:583 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:598 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:613 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:628 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:642 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:656 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:674 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:689 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:704 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:723 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:739 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:755 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:771 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:791 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:798 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:806 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:814 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:822 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:829 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:840 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:848 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:857 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:866 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:875 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:884 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:892 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:968 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:984 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1000 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1017 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1034 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1051 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1073 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1090 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1111 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1111 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1142 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1163 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1177 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1193 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1209 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1216 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1224 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1237 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1249 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1289 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1297 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1342 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1395 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1438 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1446 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1457 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1470 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1482 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1497 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1503 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1509 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1516 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1522 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1529 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1536 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1542 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1548 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1555 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1562 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1568 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1575 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1581 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1587 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1593 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1600 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1808 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1808 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1808 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1856 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1896 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1911 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1943 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1964 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2022 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2022 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2022 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2022 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2042 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2307 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2318 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2336 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2535 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2535 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2535 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2535 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2548 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2548 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2548 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2548 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2561 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2574 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2588 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2603 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2617 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2630 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2643 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2686 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2759 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2773 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2789 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2805 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2838 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2854 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2897 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2905 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2913 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2923 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2934 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2942 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2950 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2960 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2973 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2981 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2991 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2999 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3039 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3079 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3110 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3141 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3172 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3186 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3200 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3217 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3237 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3253 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3268 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3276 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3292 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3307 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3318 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3326 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3340 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3355 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3369 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3389 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3405 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3413 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3427 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3442 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3456 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3476 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3549 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3574 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3604 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3613 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3625 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3634 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3643 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3654 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3722 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3731 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3776 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3785 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3797 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3806 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3815 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3826 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3843 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3864 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3874 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3910 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3950 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3963 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3993 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4021 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4059 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4075 */
  {
    "*sparc.md:4075",
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4092 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4157 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4187 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4215 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4224 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4266 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4281 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4376 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4386 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4394 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4468 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4477 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4485 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4508 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4517 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4528 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4564 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4564 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4564 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4564 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4575 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4575 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4575 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4624 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4624 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4624 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4624 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4635 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4635 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4635 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4665 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4665 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4665 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4665 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4676 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4676 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4676 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4725 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4725 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4725 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4725 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4736 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4736 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4736 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4766 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4766 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4766 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4766 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4777 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4777 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4777 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4874 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4874 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4874 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4874 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4885 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4885 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4885 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4899 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4910 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4921 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4934 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4947 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4957 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4967 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4979 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4991 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5002 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5013 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5027 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5082 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5088 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5094 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5102 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5110 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5120 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5161 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5161 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5161 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5161 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5171 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5171 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5171 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5181 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5189 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5197 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5207 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5217 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5227 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5247 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5255 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5264 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5279 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5287 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5296 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5311 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5319 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5328 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5336 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5345 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5361 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5369 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5378 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5392 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5415 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5441 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5459 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5467 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5480 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5502 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5512 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5537 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5555 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5563 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5576 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5583 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5591 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5601 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5630 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5645 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5672 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5681 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5692 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5704 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5714 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5741 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5755 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5765 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5780 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5792 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5819 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5832 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5842 */
  {
    "*sparc.md:5842",
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5854 */
  {
    "*sparc.md:5854",
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5866 */
  {
    "*sparc.md:5866",
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5882 */
  {
    "*sparc.md:5882",
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5901 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5936 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6034 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6043 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6157 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6167 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6222 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6246 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6274 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6303 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6330 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6409 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6425 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6472 */
  {
    "flush_register_windows",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_333 },
#else
    { 0, 0, output_333 },
#endif
    (insn_gen_fn) gen_flush_register_windows,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6478 */
  {
    "goto_handler_and_restore",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_334 },
#else
    { 0, 0, output_334 },
#endif
    (insn_gen_fn) gen_goto_handler_and_restore,
    &operand_data[594],
    1,
    0,
    1,
    3
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6504 */
  {
    "do_builtin_setjmp_setup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_335 },
#else
    { 0, 0, output_335 },
#endif
    (insn_gen_fn) gen_do_builtin_setjmp_setup,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6562 */
  {
    "flush",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_336 },
#else
    { 0, 0, output_336 },
#endif
    (insn_gen_fn) gen_flush,
    &operand_data[595],
    1,
    0,
    1,
    3
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6568 */
  {
    "flushdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_337 },
#else
    { 0, 0, output_337 },
#endif
    (insn_gen_fn) gen_flushdi,
    &operand_data[596],
    1,
    0,
    1,
    3
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6583 */
  {
    "ffssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_338 },
#else
    { 0, 0, output_338 },
#endif
    (insn_gen_fn) gen_ffssi2,
    &operand_data[597],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6791 */
  {
    "prefetch_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_339 },
#else
    { 0, 0, output_339 },
#endif
    (insn_gen_fn) gen_prefetch_64,
    &operand_data[600],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6816 */
  {
    "prefetch_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_340 },
#else
    { 0, 0, output_340 },
#endif
    (insn_gen_fn) gen_prefetch_32,
    &operand_data[603],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6844 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6873 */
  {
    "*sparc.md:6873",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_342 },
#else
    { 0, 0, output_342 },
#endif
    0,
    &operand_data[606],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6885 */
  {
    "*sparc.md:6885",
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
    &operand_data[606],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6895 */
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
    &operand_data[608],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6902 */
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
    &operand_data[610],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6919 */
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
    &operand_data[613],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6939 */
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
    &operand_data[617],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6950 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6956 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6971 */
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
    &operand_data[613],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6989 */
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
    &operand_data[621],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6999 */
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
    &operand_data[624],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7006 */
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
    &operand_data[626],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7023 */
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
    &operand_data[629],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7032 */
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
    &operand_data[633],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7039 */
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
    &operand_data[635],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7057 */
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
    &operand_data[638],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7076 */
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
    &operand_data[642],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7100 */
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
    &operand_data[646],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7107 */
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
    &operand_data[648],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7171 */
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
    &operand_data[651],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7182 */
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
    &operand_data[655],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7193 */
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
    &operand_data[659],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7204 */
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
    &operand_data[629],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7215 */
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
    &operand_data[655],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7226 */
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
    &operand_data[659],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7237 */
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
    &operand_data[629],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7281 */
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
    &operand_data[655],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7292 */
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
    &operand_data[659],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7303 */
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
    &operand_data[629],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7314 */
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
    &operand_data[659],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7325 */
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
    &operand_data[629],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7346 */
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
    &operand_data[659],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7356 */
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
    &operand_data[629],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7366 */
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
    &operand_data[629],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7377 */
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
    &operand_data[629],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7397 */
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
    &operand_data[651],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7417 */
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
    &operand_data[655],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7437 */
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
    &operand_data[659],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7447 */
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
    &operand_data[629],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7486 */
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
    &operand_data[663],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7536 */
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
    &operand_data[666],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7550 */
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
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7559 */
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
    &operand_data[673],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7570 */
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
    &operand_data[676],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7579 */
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
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7588 */
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
    &operand_data[673],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7599 */
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
    &operand_data[676],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7613 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7613 */
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
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7613 */
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
    &operand_data[673],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7613 */
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
    &operand_data[679],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7622 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7622 */
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
    &operand_data[676],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7622 */
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
    &operand_data[682],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7633 */
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
    &operand_data[685],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7642 */
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
    &operand_data[687],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7651 */
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
    &operand_data[689],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7661 */
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
    &operand_data[692],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7675 */
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
    &operand_data[694],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7686 */
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
    &operand_data[697],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7696 */
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
    &operand_data[700],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7705 */
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
    &operand_data[700],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7716 */
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
    &operand_data[703],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7725 */
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
    &operand_data[703],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7736 */
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
    &operand_data[706],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7745 */
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
    &operand_data[706],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7758 */
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
    &operand_data[709],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7758 */
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
    &operand_data[670],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7758 */
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
    &operand_data[673],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7758 */
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
    &operand_data[679],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7768 */
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
    &operand_data[712],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7776 */
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
    &operand_data[715],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:36 */
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
    &operand_data[719],
    1,
    1,
    0,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:44 */
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
    &operand_data[719],
    1,
    1,
    0,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:82 */
  {
    "*sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cas\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[720],
    4,
    1,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:82 */
  {
    "*sync_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "casx\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[724],
    4,
    1,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:94 */
  {
    "*sync_compare_and_swapdi_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_418 },
#else
    { 0, 0, output_418 },
#endif
    0,
    &operand_data[728],
    4,
    1,
    1,
    3
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:155 */
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
    &operand_data[732],
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:182 */
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
    &operand_data[735],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:191 */
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
    &operand_data[737],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:191 */
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
    &operand_data[739],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:454 */
  {
    "cstoresi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstoresi4,
    &operand_data[741],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:466 */
  {
    "cstoredi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstoredi4,
    &operand_data[745],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:478 */
  {
    "cstoresf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstoresf4,
    &operand_data[749],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:478 */
  {
    "cstoredf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstoredf4,
    &operand_data[753],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:478 */
  {
    "cstoretf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cstoretf4,
    &operand_data[757],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:491 */
  {
    "seqsi_special",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seqsi_special,
    &operand_data[761],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:501 */
  {
    "seqdi_special",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seqdi_special,
    &operand_data[763],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:510 */
  {
    "snesi_special",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_snesi_special,
    &operand_data[761],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:520 */
  {
    "snedi_special",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_snedi_special,
    &operand_data[763],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:537 */
  {
    "snedi_special+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[761],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:551 */
  {
    "snedi_special+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[761],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:565 */
  {
    "snedi_special+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[765],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:583 */
  {
    "snedi_special+4",
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:598 */
  {
    "snedi_special+5",
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:613 */
  {
    "snedi_special+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[763],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:628 */
  {
    "snedi_special+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[761],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:642 */
  {
    "snedi_special+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[761],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:656 */
  {
    "snedi_special+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[765],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:674 */
  {
    "cbranchcc4-8",
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:689 */
  {
    "cbranchcc4-7",
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:704 */
  {
    "cbranchcc4-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[763],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:723 */
  {
    "cbranchcc4-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[761],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:739 */
  {
    "cbranchcc4-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[761],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:755 */
  {
    "cbranchcc4-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[761],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:771 */
  {
    "cbranchcc4-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[761],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:900 */
  {
    "cbranchcc4-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[766],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:920 */
  {
    "cbranchcc4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchcc4,
    &operand_data[769],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:930 */
  {
    "cbranchsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchsi4,
    &operand_data[773],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:943 */
  {
    "cbranchdi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchdi4,
    &operand_data[777],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:956 */
  {
    "cbranchsf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchsf4,
    &operand_data[781],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:956 */
  {
    "cbranchdf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchdf4,
    &operand_data[785],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:956 */
  {
    "cbranchtf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchtf4,
    &operand_data[789],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1133 */
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[793],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1154 */
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[795],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1184 */
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[797],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1264 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1321 */
  {
    "movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdi,
    &operand_data[799],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1413 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1608 */
  {
    "reload_indi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_indi,
    &operand_data[801],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1620 */
  {
    "reload_outdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_outdi,
    &operand_data[801],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1666 */
  {
    "reload_outdi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[804],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1699 */
  {
    "reload_outdi+2",
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1780 */
  {
    "movsf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[806],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1799 */
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[808],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1799 */
  {
    "movv2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2hi,
    &operand_data[810],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1799 */
  {
    "movv4qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4qi,
    &operand_data[812],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1925 */
  {
    "movv4qi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[814],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1933 */
  {
    "movdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdf,
    &operand_data[816],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1933 */
  {
    "movv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2si,
    &operand_data[818],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1933 */
  {
    "movv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4hi,
    &operand_data[820],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1933 */
  {
    "movv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv8qi,
    &operand_data[822],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2056 */
  {
    "movv8qi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[824],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2056 */
  {
    "movv8qi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[826],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2056 */
  {
    "movv8qi+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[828],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2056 */
  {
    "movv8qi+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[830],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2111 */
  {
    "movv8qi+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[755],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2111 */
  {
    "movv8qi+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[832],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2111 */
  {
    "movtf-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[834],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2111 */
  {
    "movtf-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[836],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2218 */
  {
    "movtf-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[838],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2218 */
  {
    "movtf-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[840],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2218 */
  {
    "movtf-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[842],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2218 */
  {
    "movtf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[844],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2274 */
  {
    "movtf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movtf,
    &operand_data[846],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2347 */
  {
    "movtf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[759],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2382 */
  {
    "movtf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[848],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2410 */
  {
    "movqicc-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[850],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2445 */
  {
    "movqicc-1",
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2473 */
  {
    "movqicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqicc,
    &operand_data[853],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2473 */
  {
    "movhicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhicc,
    &operand_data[857],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2473 */
  {
    "movsicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsicc,
    &operand_data[861],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2473 */
  {
    "movdicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdicc,
    &operand_data[865],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2503 */
  {
    "movsfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsfcc,
    &operand_data[869],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2503 */
  {
    "movdfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdfcc,
    &operand_data[873],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2503 */
  {
    "movtfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movtfcc,
    &operand_data[877],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2643 */
  {
    "movtfcc+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[880],
    5,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2686 */
  {
    "zero_extendhisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[884],
    5,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2736 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[889],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2767 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[890],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2783 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[892],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2799 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqidi2,
    &operand_data[894],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2815 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhidi2,
    &operand_data[896],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2848 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[765],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3016 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[889],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3047 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[890],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3087 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[892],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3118 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqidi2,
    &operand_data[894],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3149 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhidi2,
    &operand_data[896],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3180 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsidi2,
    &operand_data[765],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3246 */
  {
    "extendsftf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsftf2,
    &operand_data[898],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3261 */
  {
    "extenddftf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extenddftf2,
    &operand_data[900],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3285 */
  {
    "trunctfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_trunctfsf2,
    &operand_data[902],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3300 */
  {
    "trunctfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_trunctfdf2,
    &operand_data[904],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3334 */
  {
    "floatsitf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatsitf2,
    &operand_data[906],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3347 */
  {
    "floatunssitf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunssitf2,
    &operand_data[906],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3363 */
  {
    "floatunsdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunsdisf2,
    &operand_data[908],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3377 */
  {
    "floatunsdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunsdidf2,
    &operand_data[910],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3383 */
  {
    "floatditf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatditf2,
    &operand_data[912],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3396 */
  {
    "floatunsditf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunsditf2,
    &operand_data[912],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3421 */
  {
    "fix_trunctfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunctfsi2,
    &operand_data[914],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3434 */
  {
    "fixuns_trunctfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_trunctfsi2,
    &operand_data[914],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3450 */
  {
    "fixuns_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfdi2,
    &operand_data[916],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3464 */
  {
    "fixuns_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfdi2,
    &operand_data[918],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3470 */
  {
    "fix_trunctfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunctfdi2,
    &operand_data[920],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3483 */
  {
    "fixuns_trunctfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_trunctfdi2,
    &operand_data[920],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3492 */
  {
    "adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddi3,
    &operand_data[922],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3665 */
  {
    "subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subdi3,
    &operand_data[922],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3851 */
  {
    "muldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldi3,
    &operand_data[925],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3921 */
  {
    "mulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3,
    &operand_data[928],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4130 */
  {
    "umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3,
    &operand_data[931],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4319 */
  {
    "divsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divsi3,
    &operand_data[934],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4418 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_udivsi3,
    &operand_data[938],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4545 */
  {
    "anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_anddi3,
    &operand_data[941],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4545 */
  {
    "andv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv2si3,
    &operand_data[944],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4545 */
  {
    "andv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv4hi3,
    &operand_data[947],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4545 */
  {
    "andv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv8qi3,
    &operand_data[950],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4586 */
  {
    "andv8qi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[953],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4646 */
  {
    "iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iordi3,
    &operand_data[941],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4646 */
  {
    "iorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv2si3,
    &operand_data[944],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4646 */
  {
    "iorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv4hi3,
    &operand_data[947],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4646 */
  {
    "iorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv8qi3,
    &operand_data[950],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4687 */
  {
    "iorv8qi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[953],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4747 */
  {
    "xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xordi3,
    &operand_data[941],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4747 */
  {
    "xorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv2si3,
    &operand_data[944],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4747 */
  {
    "xorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv4hi3,
    &operand_data[947],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4747 */
  {
    "xorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv8qi3,
    &operand_data[950],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4788 */
  {
    "xorv8qi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[953],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4800 */
  {
    "negdi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[953],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5044 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5132 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[764],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5132 */
  {
    "one_cmplv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv2si2,
    &operand_data[832],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5132 */
  {
    "one_cmplv4hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv4hi2,
    &operand_data[834],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5132 */
  {
    "one_cmplv8qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv8qi2,
    &operand_data[836],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5240 */
  {
    "addtf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addtf3,
    &operand_data[957],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5272 */
  {
    "subtf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subtf3,
    &operand_data[957],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5304 */
  {
    "multf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_multf3,
    &operand_data[957],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5353 */
  {
    "divtf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divtf3,
    &operand_data[957],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5386 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5392 */
  {
    "negtf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[759],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5415 */
  {
    "negdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[759],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5435 */
  {
    "negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdf2,
    &operand_data[755],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5441 */
  {
    "negdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[755],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5474 */
  {
    "abstf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abstf2,
    &operand_data[759],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5480 */
  {
    "abstf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[759],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5512 */
  {
    "absdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[759],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5531 */
  {
    "absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absdf2,
    &operand_data[755],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5537 */
  {
    "absdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[755],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5570 */
  {
    "sqrttf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sqrttf2,
    &operand_data[846],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5615 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5726 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5804 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5907 */
  {
    "tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump,
    &operand_data[960],
    2,
    0,
    1,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5946 */
  {
    "call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call,
    &operand_data[962],
    4,
    0,
    1,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6110 */
  {
    "call_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value,
    &operand_data[966],
    5,
    0,
    1,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6177 */
  {
    "untyped_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_call,
    &operand_data[970],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6208 */
  {
    "sibcall",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall,
    &operand_data[962],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6230 */
  {
    "sibcall_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value,
    &operand_data[966],
    2,
    0,
    1,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6258 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6283 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6290 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6298 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6336 */
  {
    "probe_stack",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_probe_stack,
    &operand_data[973],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6346 */
  {
    "untyped_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_return,
    &operand_data[971],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6414 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[974],
    1,
    0,
    1,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6431 */
  {
    "nonlocal_goto",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_nonlocal_goto,
    &operand_data[975],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6496 */
  {
    "builtin_setjmp_setup",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_builtin_setjmp_setup,
    &operand_data[960],
    1,
    0,
    1,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6537 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6617 */
  {
    "setjmp+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[979],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6628 */
  {
    "setjmp+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[979],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6639 */
  {
    "setjmp+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[981],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6651 */
  {
    "setjmp+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[980],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6663 */
  {
    "setjmp+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[985],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6675 */
  {
    "setjmp+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[986],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6687 */
  {
    "prefetch-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[981],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6699 */
  {
    "prefetch-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[980],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6712 */
  {
    "prefetch-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[985],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6724 */
  {
    "prefetch-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[986],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6740 */
  {
    "prefetch-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[761],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6755 */
  {
    "prefetch-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[990],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6778 */
  {
    "prefetch",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prefetch,
    &operand_data[993],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6850 */
  {
    "ctrapsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ctrapsi4,
    &operand_data[996],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6861 */
  {
    "ctrapdi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ctrapdi4,
    &operand_data[1000],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7460 */
  {
    "stack_protect_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set,
    &operand_data[1004],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7495 */
  {
    "stack_protect_test",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test,
    &operand_data[1004],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:21 */
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
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:51 */
  {
    "sync_compare_and_swapqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapqi,
    &operand_data[1007],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:51 */
  {
    "sync_compare_and_swaphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swaphi,
    &operand_data[1011],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:63 */
  {
    "sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapsi,
    &operand_data[1015],
    4,
    1,
    1,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:63 */
  {
    "sync_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapdi,
    &operand_data[1019],
    4,
    1,
    1,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:118 */
  {
    "sync_lock_test_and_setqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setqi,
    &operand_data[1023],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:118 */
  {
    "sync_lock_test_and_sethi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_sethi,
    &operand_data[1026],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:134 */
  {
    "sync_lock_test_and_setsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setsi,
    &operand_data[1029],
    3,
    1,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:165 */
  {
    "ldstubqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldstubqi,
    &operand_data[1007],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:173 */
  {
    "ldstubhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldstubhi,
    &operand_data[1032],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.5.3/gcc/config/sparc/sync.md:173 */
  {
    "ldstubsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldstubsi,
    &operand_data[1034],
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
