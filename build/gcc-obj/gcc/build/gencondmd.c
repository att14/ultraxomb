/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 1709 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "reload_completed\n\
   && (! TARGET_V9\n\
       || (! TARGET_ARCH64\n\
           && ((GET_CODE (operands[0]) == REG\n\
                && REGNO (operands[0]) < 32)\n\
               || (GET_CODE (operands[0]) == SUBREG\n\
                   && GET_CODE (SUBREG_REG (operands[0])) == REG\n\
                   && REGNO (SUBREG_REG (operands[0])) < 32))))",
    __builtin_constant_p 
#line 1709 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
           && ((GET_CODE (operands[0]) == REG
                && REGNO (operands[0]) < 32)
               || (GET_CODE (operands[0]) == SUBREG
                   && GET_CODE (SUBREG_REG (operands[0])) == REG
                   && REGNO (SUBREG_REG (operands[0])) < 32)))))
    ? (int) 
#line 1709 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
           && ((GET_CODE (operands[0]) == REG
                && REGNO (operands[0]) < 32)
               || (GET_CODE (operands[0]) == SUBREG
                   && GET_CODE (SUBREG_REG (operands[0])) == REG
                   && REGNO (SUBREG_REG (operands[0])) < 32)))))
    : -1 },
#line 2864 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64 && GET_CODE (operands[1]) != CONST_INT",
    __builtin_constant_p 
#line 2864 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && GET_CODE (operands[1]) != CONST_INT)
    ? (int) 
#line 2864 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && GET_CODE (operands[1]) != CONST_INT)
    : -1 },
  { "(TARGET_ARCH64 && TARGET_FPU && ! TARGET_HARD_QUAD) && ( reload_completed)",
    __builtin_constant_p (
#line 2700 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU && ! TARGET_HARD_QUAD) && 
#line 2702 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed))
    ? (int) (
#line 2700 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU && ! TARGET_HARD_QUAD) && 
#line 2702 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed))
    : -1 },
#line 2799 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "GET_CODE (operands[1]) != CONST_INT",
    __builtin_constant_p 
#line 2799 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(GET_CODE (operands[1]) != CONST_INT)
    ? (int) 
#line 2799 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(GET_CODE (operands[1]) != CONST_INT)
    : -1 },
#line 1943 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "DFmode == DFmode || TARGET_VIS",
    __builtin_constant_p 
#line 1943 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(DFmode == DFmode || TARGET_VIS)
    ? (int) 
#line 1943 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(DFmode == DFmode || TARGET_VIS)
    : -1 },
  { "(TARGET_ARCH64) && ( ! reg_overlap_mentioned_p (operands[1], operands[0]))",
    __builtin_constant_p (
#line 715 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64) && 
#line 717 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( ! reg_overlap_mentioned_p (operands[1], operands[0])))
    ? (int) (
#line 715 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64) && 
#line 717 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( ! reg_overlap_mentioned_p (operands[1], operands[0])))
    : -1 },
#line 1866 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_FPU\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_or_zero_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 1866 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && (register_operand (operands[0], SFmode)
       || register_or_zero_operand (operands[1], SFmode)))
    ? (int) 
#line 1866 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && (register_operand (operands[0], SFmode)
       || register_or_zero_operand (operands[1], SFmode)))
    : -1 },
#line 2166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "reload_completed\n\
   && ! TARGET_ARCH64\n\
   && (((REGNO (operands[0]) % 2) != 0)\n\
       || ! mem_min_alignment (operands[1], 8))\n\
   && offsettable_memref_p (operands[1])",
    __builtin_constant_p 
#line 2166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[0]) % 2) != 0)
       || ! mem_min_alignment (operands[1], 8))
   && offsettable_memref_p (operands[1]))
    ? (int) 
#line 2166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[0]) % 2) != 0)
       || ! mem_min_alignment (operands[1], 8))
   && offsettable_memref_p (operands[1]))
    : -1 },
#line 5403 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && ! TARGET_V9",
    __builtin_constant_p 
#line 5403 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_V9)
    ? (int) 
#line 5403 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_V9)
    : -1 },
#line 1566 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_CM_MEDANY",
    __builtin_constant_p 
#line 1566 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDANY)
    ? (int) 
#line 1566 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDANY)
    : -1 },
#line 1953 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && ! TARGET_V9\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_or_zero_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 1953 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_V9
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode)))
    ? (int) 
#line 1953 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_V9
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode)))
    : -1 },
#line 2357 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "reload_completed\n\
   && (! TARGET_ARCH64\n\
       || (TARGET_FPU\n\
           && ! TARGET_HARD_QUAD)\n\
       || ! fp_register_operand (operands[0], TFmode))",
    __builtin_constant_p 
#line 2357 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_ARCH64
       || (TARGET_FPU
           && ! TARGET_HARD_QUAD)
       || ! fp_register_operand (operands[0], TFmode)))
    ? (int) 
#line 2357 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_ARCH64
       || (TARGET_FPU
           && ! TARGET_HARD_QUAD)
       || ! fp_register_operand (operands[0], TFmode)))
    : -1 },
  { "(TARGET_V9) && (TARGET_ARCH64 || TARGET_V8PLUS)",
    __builtin_constant_p (
#line 72 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V9) && 
#line 23 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_ARCH64 || TARGET_V8PLUS))
    ? (int) (
#line 72 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V9) && 
#line 23 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_ARCH64 || TARGET_V8PLUS))
    : -1 },
#line 3924 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V8 || TARGET_SPARCLITE || TARGET_DEPRECATED_V8_INSNS",
    __builtin_constant_p 
#line 3924 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8 || TARGET_SPARCLITE || TARGET_DEPRECATED_V8_INSNS)
    ? (int) 
#line 3924 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8 || TARGET_SPARCLITE || TARGET_DEPRECATED_V8_INSNS)
    : -1 },
#line 7474 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_TLS && TARGET_ARCH64",
    __builtin_constant_p 
#line 7474 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_TLS && TARGET_ARCH64)
    ? (int) 
#line 7474 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_TLS && TARGET_ARCH64)
    : -1 },
#line 6643 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V9\n\
   && mems_ok_for_ldd_peep (operands[0], operands[1], NULL_RTX)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9
   && mems_ok_for_ldd_peep (operands[0], operands[1], NULL_RTX))
    ? (int) 
#line 6643 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9
   && mems_ok_for_ldd_peep (operands[0], operands[1], NULL_RTX))
    : -1 },
#line 1974 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_FPU\n\
   && ! TARGET_V9\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_or_zero_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 1974 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && ! TARGET_V9
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode)))
    ? (int) 
#line 1974 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && ! TARGET_V9
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode)))
    : -1 },
  { "(TARGET_FPU && ! TARGET_V9) && ( reload_completed\n\
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))",
    __builtin_constant_p (
#line 5547 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9) && 
#line 5551 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1])))
    ? (int) (
#line 5547 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9) && 
#line 5551 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1])))
    : -1 },
#line 2201 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "reload_completed\n\
   && ! TARGET_ARCH64\n\
   && (((REGNO (operands[1]) % 2) != 0)\n\
       || ! mem_min_alignment (operands[0], 8))\n\
   && offsettable_memref_p (operands[0])",
    __builtin_constant_p 
#line 2201 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[1]) % 2) != 0)
       || ! mem_min_alignment (operands[0], 8))
   && offsettable_memref_p (operands[0]))
    ? (int) 
#line 2201 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[1]) % 2) != 0)
       || ! mem_min_alignment (operands[0], 8))
   && offsettable_memref_p (operands[0]))
    : -1 },
#line 1935 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "REG_P (operands[0]) && REGNO (operands[0]) < 32",
    __builtin_constant_p 
#line 1935 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(REG_P (operands[0]) && REGNO (operands[0]) < 32)
    ? (int) 
#line 1935 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(REG_P (operands[0]) && REGNO (operands[0]) < 32)
    : -1 },
#line 3486 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V9 && TARGET_FPU && TARGET_HARD_QUAD",
    __builtin_constant_p 
#line 3486 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && TARGET_HARD_QUAD)
    ? (int) 
#line 3486 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && TARGET_HARD_QUAD)
    : -1 },
#line 2307 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_FPU\n\
   && ! TARGET_ARCH64\n\
   && (register_operand (operands[0], TFmode)\n\
       || register_or_zero_operand (operands[1], TFmode))",
    __builtin_constant_p 
#line 2307 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && ! TARGET_ARCH64
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode)))
    ? (int) 
#line 2307 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && ! TARGET_ARCH64
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode)))
    : -1 },
#line 5726 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64 && INTVAL (operands[2]) >= 32 && INTVAL (operands[2]) < 64",
    __builtin_constant_p 
#line 5726 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && INTVAL (operands[2]) >= 32 && INTVAL (operands[2]) < 64)
    ? (int) 
#line 5726 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && INTVAL (operands[2]) >= 32 && INTVAL (operands[2]) < 64)
    : -1 },
#line 1354 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_V9\n\
   && (register_operand (operands[0], DImode)\n\
       || register_or_zero_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 1354 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_V9
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode)))
    ? (int) 
#line 1354 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_V9
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode)))
    : -1 },
#line 2700 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64 && TARGET_FPU && ! TARGET_HARD_QUAD",
    __builtin_constant_p 
#line 2700 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU && ! TARGET_HARD_QUAD)
    ? (int) 
#line 2700 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU && ! TARGET_HARD_QUAD)
    : -1 },
#line 29 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
  { "TARGET_V8 || TARGET_V9",
    __builtin_constant_p 
#line 29 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V8 || TARGET_V9)
    ? (int) 
#line 29 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V8 || TARGET_V9)
    : -1 },
#line 5866 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64 && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) < 32",
    __builtin_constant_p 
#line 5866 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) < 32)
    ? (int) 
#line 5866 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) < 32)
    : -1 },
#line 4141 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_HARD_MUL",
    __builtin_constant_p 
#line 4141 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL)
    ? (int) 
#line 4141 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL)
    : -1 },
#line 7094 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_SUN_TLS && TARGET_ARCH32",
    __builtin_constant_p 
#line 7094 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SUN_TLS && TARGET_ARCH32)
    ? (int) 
#line 7094 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SUN_TLS && TARGET_ARCH32)
    : -1 },
#line 5586 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU && TARGET_HARD_QUAD",
    __builtin_constant_p 
#line 5586 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD)
    ? (int) 
#line 5586 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD)
    : -1 },
#line 3214 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "INTVAL (operands[2]) > 19",
    __builtin_constant_p 
#line 3214 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(INTVAL (operands[2]) > 19)
    ? (int) 
#line 3214 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(INTVAL (operands[2]) > 19)
    : -1 },
#line 1643 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_ARCH64 && reload_completed",
    __builtin_constant_p 
#line 1643 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && reload_completed)
    ? (int) 
#line 1643 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && reload_completed)
    : -1 },
#line 2121 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(! TARGET_V9\n\
    || (! TARGET_ARCH64\n\
        && ((GET_CODE (operands[0]) == REG\n\
             && REGNO (operands[0]) < 32)\n\
            || (GET_CODE (operands[0]) == SUBREG\n\
                && GET_CODE (SUBREG_REG (operands[0])) == REG\n\
                && REGNO (SUBREG_REG (operands[0])) < 32))))\n\
   && reload_completed",
    __builtin_constant_p 
#line 2121 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((! TARGET_V9
    || (! TARGET_ARCH64
        && ((GET_CODE (operands[0]) == REG
             && REGNO (operands[0]) < 32)
            || (GET_CODE (operands[0]) == SUBREG
                && GET_CODE (SUBREG_REG (operands[0])) == REG
                && REGNO (SUBREG_REG (operands[0])) < 32))))
   && reload_completed)
    ? (int) 
#line 2121 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((! TARGET_V9
    || (! TARGET_ARCH64
        && ((GET_CODE (operands[0]) == REG
             && REGNO (operands[0]) < 32)
            || (GET_CODE (operands[0]) == SUBREG
                && GET_CODE (SUBREG_REG (operands[0])) == REG
                && REGNO (SUBREG_REG (operands[0])) < 32))))
   && reload_completed)
    : -1 },
  { "(TARGET_FPU && TARGET_V9) && ( reload_completed\n\
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))",
    __builtin_constant_p (
#line 5426 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9) && 
#line 5430 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1])))
    ? (int) (
#line 5426 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9) && 
#line 5430 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1])))
    : -1 },
#line 1520 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_CM_MEDLOW",
    __builtin_constant_p 
#line 1520 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDLOW)
    ? (int) 
#line 1520 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDLOW)
    : -1 },
#line 2485 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V9 && !(SImode == DImode && TARGET_ARCH32)",
    __builtin_constant_p 
#line 2485 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(SImode == DImode && TARGET_ARCH32))
    ? (int) 
#line 2485 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(SImode == DImode && TARGET_ARCH32))
    : -1 },
#line 5541 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU",
    __builtin_constant_p 
#line 5541 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU)
    ? (int) 
#line 5541 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU)
    : -1 },
#line 3493 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU && TARGET_ARCH64 && ! TARGET_HARD_QUAD",
    __builtin_constant_p 
#line 3493 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_ARCH64 && ! TARGET_HARD_QUAD)
    ? (int) 
#line 3493 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_ARCH64 && ! TARGET_HARD_QUAD)
    : -1 },
#line 1597 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_CM_EMBMEDANY && check_pic (1)",
    __builtin_constant_p 
#line 1597 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY && check_pic (1))
    ? (int) 
#line 1597 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY && check_pic (1))
    : -1 },
  { "(REGNO (operands[0]) == INTVAL (operands[3])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 1124 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(REGNO (operands[0]) == INTVAL (operands[3])) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == DImode))
    ? (int) (
#line 1124 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(REGNO (operands[0]) == INTVAL (operands[3])) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == DImode))
    : -1 },
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && TARGET_ARCH64\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_or_zero_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode)))
    ? (int) 
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode)))
    : -1 },
  { "(TARGET_FPU\n\
   && ! TARGET_V9) && ( reload_completed\n\
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))",
    __builtin_constant_p (
#line 5403 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_V9) && 
#line 5408 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1])))
    ? (int) (
#line 5403 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_V9) && 
#line 5408 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1])))
    : -1 },
#line 6307 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "sparc_can_use_return_insn_p ()",
    __builtin_constant_p 
#line 6307 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_can_use_return_insn_p ())
    ? (int) 
#line 6307 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_can_use_return_insn_p ())
    : -1 },
#line 6701 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "registers_ok_for_ldd_peep (operands[1], operands[3]) \n\
  && mems_ok_for_ldd_peep (operands[0], operands[2], NULL_RTX)",
    __builtin_constant_p 
#line 6701 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[1], operands[3]) 
  && mems_ok_for_ldd_peep (operands[0], operands[2], NULL_RTX))
    ? (int) 
#line 6701 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[1], operands[3]) 
  && mems_ok_for_ldd_peep (operands[0], operands[2], NULL_RTX))
    : -1 },
#line 1507 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(TARGET_CM_MEDLOW || TARGET_CM_EMBMEDANY) && check_pic (1)",
    __builtin_constant_p 
#line 1507 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_CM_MEDLOW || TARGET_CM_EMBMEDANY) && check_pic (1))
    ? (int) 
#line 1507 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_CM_MEDLOW || TARGET_CM_EMBMEDANY) && check_pic (1))
    : -1 },
#line 6767 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(rtx_equal_p (operands[2], operands[0])\n\
    || rtx_equal_p (operands[2], operands[1]))\n\
    && ! SPARC_FP_REG_P (REGNO (operands[0]))\n\
    && ! SPARC_FP_REG_P (REGNO (operands[1]))",
    __builtin_constant_p 
#line 6767 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((rtx_equal_p (operands[2], operands[0])
    || rtx_equal_p (operands[2], operands[1]))
    && ! SPARC_FP_REG_P (REGNO (operands[0]))
    && ! SPARC_FP_REG_P (REGNO (operands[1])))
    ? (int) 
#line 6767 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((rtx_equal_p (operands[2], operands[0])
    || rtx_equal_p (operands[2], operands[1]))
    && ! SPARC_FP_REG_P (REGNO (operands[0]))
    && ! SPARC_FP_REG_P (REGNO (operands[1])))
    : -1 },
#line 2293 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && ! TARGET_ARCH64\n\
   && (register_operand (operands[0], TFmode)\n\
       || register_or_zero_operand (operands[1], TFmode))",
    __builtin_constant_p 
#line 2293 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_ARCH64
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode)))
    ? (int) 
#line 2293 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_ARCH64
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode)))
    : -1 },
#line 2317 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && TARGET_ARCH64\n\
   && ! TARGET_HARD_QUAD\n\
   && (register_operand (operands[0], TFmode)\n\
       || register_or_zero_operand (operands[1], TFmode))",
    __builtin_constant_p 
#line 2317 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && ! TARGET_HARD_QUAD
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode)))
    ? (int) 
#line 2317 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && ! TARGET_HARD_QUAD
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode)))
    : -1 },
#line 7065 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_TLS",
    __builtin_constant_p 
#line 7065 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_TLS)
    ? (int) 
#line 7065 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_TLS)
    : -1 },
#line 5547 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU && ! TARGET_V9",
    __builtin_constant_p 
#line 5547 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9)
    ? (int) 
#line 5547 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9)
    : -1 },
#line 39 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
  { "TARGET_V8",
    __builtin_constant_p 
#line 39 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V8)
    ? (int) 
#line 39 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V8)
    : -1 },
#line 6782 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64\n\
   && (rtx_equal_p (operands[2], operands[0])\n\
       || rtx_equal_p (operands[2], operands[1]))\n\
   && ! SPARC_FP_REG_P (REGNO (operands[0]))\n\
   && ! SPARC_FP_REG_P (REGNO (operands[1]))",
    __builtin_constant_p 
#line 6782 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64
   && (rtx_equal_p (operands[2], operands[0])
       || rtx_equal_p (operands[2], operands[1]))
   && ! SPARC_FP_REG_P (REGNO (operands[0]))
   && ! SPARC_FP_REG_P (REGNO (operands[1])))
    ? (int) 
#line 6782 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64
   && (rtx_equal_p (operands[2], operands[0])
       || rtx_equal_p (operands[2], operands[1]))
   && ! SPARC_FP_REG_P (REGNO (operands[0]))
   && ! SPARC_FP_REG_P (REGNO (operands[1])))
    : -1 },
#line 1809 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "V4QImode == SFmode || TARGET_VIS",
    __builtin_constant_p 
#line 1809 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(V4QImode == SFmode || TARGET_VIS)
    ? (int) 
#line 1809 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(V4QImode == SFmode || TARGET_VIS)
    : -1 },
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && TARGET_ARCH64\n\
   && (register_operand (operands[0], V4HImode)\n\
       || register_or_zero_operand (operands[1], V4HImode))",
    __builtin_constant_p 
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], V4HImode)
       || register_or_zero_operand (operands[1], V4HImode)))
    ? (int) 
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], V4HImode)
       || register_or_zero_operand (operands[1], V4HImode)))
    : -1 },
#line 7454 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_TLS && TARGET_ARCH32",
    __builtin_constant_p 
#line 7454 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_TLS && TARGET_ARCH32)
    ? (int) 
#line 7454 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_TLS && TARGET_ARCH32)
    : -1 },
#line 6887 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64",
    __builtin_constant_p 
#line 6887 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64)
    ? (int) 
#line 6887 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64)
    : -1 },
#line 1991 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && TARGET_V9\n\
   && ! TARGET_ARCH64\n\
   && (register_operand (operands[0], V2SImode)\n\
       || register_or_zero_operand (operands[1], V2SImode))",
    __builtin_constant_p 
#line 1991 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], V2SImode)
       || register_or_zero_operand (operands[1], V2SImode)))
    ? (int) 
#line 1991 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], V2SImode)
       || register_or_zero_operand (operands[1], V2SImode)))
    : -1 },
#line 1405 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64\n\
   && (register_operand (operands[0], DImode)\n\
       || register_or_zero_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 1405 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode)))
    ? (int) 
#line 1405 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode)))
    : -1 },
#line 1775 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(! TARGET_ARCH64\n\
    && reload_completed\n\
    && sparc_splitdi_legitimate (operands[1], operands[0]))",
    __builtin_constant_p 
#line 1775 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((! TARGET_ARCH64
    && reload_completed
    && sparc_splitdi_legitimate (operands[1], operands[0])))
    ? (int) 
#line 1775 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((! TARGET_ARCH64
    && reload_completed
    && sparc_splitdi_legitimate (operands[1], operands[0])))
    : -1 },
#line 1991 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && TARGET_V9\n\
   && ! TARGET_ARCH64\n\
   && (register_operand (operands[0], V4HImode)\n\
       || register_or_zero_operand (operands[1], V4HImode))",
    __builtin_constant_p 
#line 1991 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], V4HImode)
       || register_or_zero_operand (operands[1], V4HImode)))
    ? (int) 
#line 1991 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], V4HImode)
       || register_or_zero_operand (operands[1], V4HImode)))
    : -1 },
#line 6677 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "registers_ok_for_ldd_peep (operands[1], operands[3]) \n\
   && mems_ok_for_ldd_peep (operands[0], operands[2], NULL_RTX)",
    __builtin_constant_p 
#line 6677 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[1], operands[3]) 
   && mems_ok_for_ldd_peep (operands[0], operands[2], NULL_RTX))
    ? (int) 
#line 6677 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[1], operands[3]) 
   && mems_ok_for_ldd_peep (operands[0], operands[2], NULL_RTX))
    : -1 },
#line 1818 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && (register_operand (operands[0], V4QImode)\n\
       || register_or_zero_operand (operands[1], V4QImode))",
    __builtin_constant_p 
#line 1818 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (register_operand (operands[0], V4QImode)
       || register_or_zero_operand (operands[1], V4QImode)))
    ? (int) 
#line 1818 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (register_operand (operands[0], V4QImode)
       || register_or_zero_operand (operands[1], V4QImode)))
    : -1 },
#line 4479 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64",
    __builtin_constant_p 
#line 4479 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64)
    ? (int) 
#line 4479 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64)
    : -1 },
#line 2346 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_FPU\n\
   && TARGET_ARCH64\n\
   && (register_operand (operands[0], TFmode)\n\
       || register_or_zero_operand (operands[1], TFmode))",
    __builtin_constant_p 
#line 2346 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode)))
    ? (int) 
#line 2346 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode)))
    : -1 },
#line 4542 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_SPARCLET",
    __builtin_constant_p 
#line 4542 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)
    ? (int) 
#line 4542 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)
    : -1 },
#line 1279 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "flag_pic",
    __builtin_constant_p 
#line 1279 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(flag_pic)
    ? (int) 
#line 1279 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(flag_pic)
    : -1 },
#line 4440 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(TARGET_V8 || TARGET_DEPRECATED_V8_INSNS) && TARGET_ARCH32",
    __builtin_constant_p 
#line 4440 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_DEPRECATED_V8_INSNS) && TARGET_ARCH32)
    ? (int) 
#line 4440 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_DEPRECATED_V8_INSNS) && TARGET_ARCH32)
    : -1 },
  { "(! TARGET_ARCH64) && ( reload_completed)",
    __builtin_constant_p (
#line 5074 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5076 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed))
    ? (int) (
#line 5074 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5076 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed))
    : -1 },
#line 1513 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_CM_MEDLOW && check_pic (1)",
    __builtin_constant_p 
#line 1513 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDLOW && check_pic (1))
    ? (int) 
#line 1513 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDLOW && check_pic (1))
    : -1 },
  { "(TARGET_FPU && TARGET_V9 && !TARGET_HARD_QUAD) && ( reload_completed\n\
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))",
    __builtin_constant_p (
#line 5522 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && !TARGET_HARD_QUAD) && 
#line 5526 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1])))
    ? (int) (
#line 5522 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && !TARGET_HARD_QUAD) && 
#line 5526 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1])))
    : -1 },
#line 6738 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "registers_ok_for_ldd_peep (operands[2], operands[0]) \n\
  && mems_ok_for_ldd_peep (operands[3], operands[1], operands[0])",
    __builtin_constant_p 
#line 6738 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[2], operands[0]) 
  && mems_ok_for_ldd_peep (operands[3], operands[1], operands[0]))
    ? (int) 
#line 6738 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[2], operands[0]) 
  && mems_ok_for_ldd_peep (operands[3], operands[1], operands[0]))
    : -1 },
#line 2392 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "reload_completed",
    __builtin_constant_p 
#line 2392 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed)
    ? (int) 
#line 2392 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed)
    : -1 },
#line 1428 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64 && flag_pic",
    __builtin_constant_p 
#line 1428 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && flag_pic)
    ? (int) 
#line 1428 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && flag_pic)
    : -1 },
#line 2052 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_FPU\n\
   && TARGET_ARCH64\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_or_zero_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 2052 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode)))
    ? (int) 
#line 2052 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode)))
    : -1 },
#line 4249 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_HARD_MUL && TARGET_ARCH32",
    __builtin_constant_p 
#line 4249 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL && TARGET_ARCH32)
    ? (int) 
#line 4249 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL && TARGET_ARCH32)
    : -1 },
  { "(TARGET_V9 && TARGET_FPU && !TARGET_HARD_QUAD) && ( reload_completed)",
    __builtin_constant_p (
#line 2657 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && !TARGET_HARD_QUAD) && 
#line 2659 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed))
    ? (int) (
#line 2657 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && !TARGET_HARD_QUAD) && 
#line 2659 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed))
    : -1 },
#line 122 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
  { "!TARGET_V9",
    __builtin_constant_p 
#line 122 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(!TARGET_V9)
    ? (int) 
#line 122 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(!TARGET_V9)
    : -1 },
#line 1540 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_CM_MEDMID",
    __builtin_constant_p 
#line 1540 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDMID)
    ? (int) 
#line 1540 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDMID)
    : -1 },
#line 5030 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "GET_CODE (operands[3]) == GET_CODE (operands[4])",
    __builtin_constant_p 
#line 5030 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(GET_CODE (operands[3]) == GET_CODE (operands[4]))
    ? (int) 
#line 5030 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(GET_CODE (operands[3]) == GET_CODE (operands[4]))
    : -1 },
#line 2485 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V9 && !(QImode == DImode && TARGET_ARCH32)",
    __builtin_constant_p 
#line 2485 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(QImode == DImode && TARGET_ARCH32))
    ? (int) 
#line 2485 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(QImode == DImode && TARGET_ARCH32))
    : -1 },
#line 1494 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64 && flag_pic && check_pic (1)",
    __builtin_constant_p 
#line 1494 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && flag_pic && check_pic (1))
    ? (int) 
#line 1494 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && flag_pic && check_pic (1))
    : -1 },
  { "(REGNO (operands[0]) == INTVAL (operands[3])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 1124 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(REGNO (operands[0]) == INTVAL (operands[3])) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == SImode))
    ? (int) (
#line 1124 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(REGNO (operands[0]) == INTVAL (operands[3])) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == SImode))
    : -1 },
#line 3231 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64 && INTVAL (operands[2]) > 51",
    __builtin_constant_p 
#line 3231 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && INTVAL (operands[2]) > 51)
    ? (int) 
#line 3231 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && INTVAL (operands[2]) > 51)
    : -1 },
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && TARGET_ARCH64\n\
   && (register_operand (operands[0], V8QImode)\n\
       || register_or_zero_operand (operands[1], V8QImode))",
    __builtin_constant_p 
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], V8QImode)
       || register_or_zero_operand (operands[1], V8QImode)))
    ? (int) 
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], V8QImode)
       || register_or_zero_operand (operands[1], V8QImode)))
    : -1 },
#line 2066 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && (GET_CODE (operands[0]) == REG\n\
       && REGNO (operands[0]) < 32)\n\
   && ! const_zero_operand (operands[1], GET_MODE (operands[0]))\n\
   && reload_completed",
    __builtin_constant_p 
#line 2066 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (GET_CODE (operands[0]) == REG
       && REGNO (operands[0]) < 32)
   && ! const_zero_operand (operands[1], GET_MODE (operands[0]))
   && reload_completed)
    ? (int) 
#line 2066 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (GET_CODE (operands[0]) == REG
       && REGNO (operands[0]) < 32)
   && ! const_zero_operand (operands[1], GET_MODE (operands[0]))
   && reload_completed)
    : -1 },
#line 2228 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "reload_completed\n\
   && (! TARGET_V9\n\
       || (! TARGET_ARCH64\n\
	   && ! mem_min_alignment (operands[0], 8)))\n\
   && offsettable_memref_p (operands[0])",
    __builtin_constant_p 
#line 2228 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0]))
    ? (int) 
#line 2228 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0]))
    : -1 },
#line 1809 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "SFmode == SFmode || TARGET_VIS",
    __builtin_constant_p 
#line 1809 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(SFmode == SFmode || TARGET_VIS)
    ? (int) 
#line 1809 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(SFmode == SFmode || TARGET_VIS)
    : -1 },
#line 1749 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(! TARGET_ARCH64\n\
    && reload_completed\n\
    && sparc_splitdi_legitimate (operands[0], operands[1]))",
    __builtin_constant_p 
#line 1749 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((! TARGET_ARCH64
    && reload_completed
    && sparc_splitdi_legitimate (operands[0], operands[1])))
    ? (int) 
#line 1749 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((! TARGET_ARCH64
    && reload_completed
    && sparc_splitdi_legitimate (operands[0], operands[1])))
    : -1 },
#line 72 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
  { "TARGET_V9",
    __builtin_constant_p 
#line 72 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V9)
    ? (int) 
#line 72 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V9)
    : -1 },
#line 912 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V9\n\
   && REGNO (operands[1]) == SPARC_ICC_REG\n\
   && (GET_MODE (operands[1]) == CCXmode\n\
       /* 32-bit LTU/GEU are better implemented using addx/subx.  */\n\
       || (GET_CODE (operands[2]) != LTU && GET_CODE (operands[2]) != GEU))",
    __builtin_constant_p 
#line 912 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9
   && REGNO (operands[1]) == SPARC_ICC_REG
   && (GET_MODE (operands[1]) == CCXmode
       /* 32-bit LTU/GEU are better implemented using addx/subx.  */
       || (GET_CODE (operands[2]) != LTU && GET_CODE (operands[2]) != GEU)))
    ? (int) 
#line 912 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9
   && REGNO (operands[1]) == SPARC_ICC_REG
   && (GET_MODE (operands[1]) == CCXmode
       /* 32-bit LTU/GEU are better implemented using addx/subx.  */
       || (GET_CODE (operands[2]) != LTU && GET_CODE (operands[2]) != GEU)))
    : -1 },
#line 1943 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "V2SImode == DFmode || TARGET_VIS",
    __builtin_constant_p 
#line 1943 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(V2SImode == DFmode || TARGET_VIS)
    ? (int) 
#line 1943 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(V2SImode == DFmode || TARGET_VIS)
    : -1 },
#line 4825 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_ARCH64\n\
   && reload_completed\n\
   && ((GET_CODE (operands[0]) == REG\n\
        && REGNO (operands[0]) < 32)\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
           && GET_CODE (SUBREG_REG (operands[0])) == REG\n\
           && REGNO (SUBREG_REG (operands[0])) < 32))",
    __builtin_constant_p 
#line 4825 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64
   && reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))
    ? (int) 
#line 4825 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64
   && reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))
    : -1 },
#line 2014 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_FPU\n\
   && TARGET_V9\n\
   && ! TARGET_ARCH64\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_or_zero_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 2014 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode)))
    ? (int) 
#line 2014 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode)))
    : -1 },
#line 1203 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(register_operand (operands[0], SImode)\n\
    || register_or_zero_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 1203 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((register_operand (operands[0], SImode)
    || register_or_zero_operand (operands[1], SImode)))
    ? (int) 
#line 1203 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((register_operand (operands[0], SImode)
    || register_or_zero_operand (operands[1], SImode)))
    : -1 },
#line 7803 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_VIS",
    __builtin_constant_p 
#line 7803 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS)
    ? (int) 
#line 7803 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS)
    : -1 },
#line 2485 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V9 && !(HImode == DImode && TARGET_ARCH32)",
    __builtin_constant_p 
#line 2485 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(HImode == DImode && TARGET_ARCH32))
    ? (int) 
#line 2485 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(HImode == DImode && TARGET_ARCH32))
    : -1 },
#line 1943 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "V8QImode == DFmode || TARGET_VIS",
    __builtin_constant_p 
#line 1943 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(V8QImode == DFmode || TARGET_VIS)
    ? (int) 
#line 1943 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(V8QImode == DFmode || TARGET_VIS)
    : -1 },
#line 6689 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "registers_ok_for_ldd_peep (operands[0], operands[2]) \n\
   && mems_ok_for_ldd_peep (operands[1], operands[3], operands[0])",
    __builtin_constant_p 
#line 6689 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[0], operands[2]) 
   && mems_ok_for_ldd_peep (operands[1], operands[3], operands[0]))
    ? (int) 
#line 6689 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[0], operands[2]) 
   && mems_ok_for_ldd_peep (operands[1], operands[3], operands[0]))
    : -1 },
#line 1152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(register_operand (operands[0], QImode)\n\
    || register_or_zero_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 1152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((register_operand (operands[0], QImode)
    || register_or_zero_operand (operands[1], QImode)))
    ? (int) 
#line 1152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((register_operand (operands[0], QImode)
    || register_or_zero_operand (operands[1], QImode)))
    : -1 },
  { "(! TARGET_ARCH64) && ( reload_completed\n\
   && ((GET_CODE (operands[0]) == REG\n\
        && REGNO (operands[0]) < 32)\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
           && GET_CODE (SUBREG_REG (operands[0])) == REG\n\
           && REGNO (SUBREG_REG (operands[0])) < 32)))",
    __builtin_constant_p (
#line 5148 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32))))
    ? (int) (
#line 5148 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32))))
    : -1 },
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && TARGET_ARCH64\n\
   && (register_operand (operands[0], V2SImode)\n\
       || register_or_zero_operand (operands[1], V2SImode))",
    __builtin_constant_p 
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], V2SImode)
       || register_or_zero_operand (operands[1], V2SImode)))
    ? (int) 
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], V2SImode)
       || register_or_zero_operand (operands[1], V2SImode)))
    : -1 },
  { "(TARGET_VIS) && (Pmode == SImode)",
    __builtin_constant_p (
#line 7794 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == SImode))
    ? (int) (
#line 7794 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == SImode))
    : -1 },
#line 4321 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_HARD_MUL32",
    __builtin_constant_p 
#line 4321 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL32)
    ? (int) 
#line 4321 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL32)
    : -1 },
#line 5347 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(TARGET_V8 || TARGET_V9) && TARGET_FPU",
    __builtin_constant_p 
#line 5347 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_V9) && TARGET_FPU)
    ? (int) 
#line 5347 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_V9) && TARGET_FPU)
    : -1 },
#line 2420 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(reload_completed\n\
    && offsettable_memref_p (operands[1])\n\
    && (! TARGET_ARCH64\n\
	|| ! TARGET_HARD_QUAD\n\
	|| ! fp_register_operand (operands[0], TFmode)))",
    __builtin_constant_p 
#line 2420 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((reload_completed
    && offsettable_memref_p (operands[1])
    && (! TARGET_ARCH64
	|| ! TARGET_HARD_QUAD
	|| ! fp_register_operand (operands[0], TFmode))))
    ? (int) 
#line 2420 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((reload_completed
    && offsettable_memref_p (operands[1])
    && (! TARGET_ARCH64
	|| ! TARGET_HARD_QUAD
	|| ! fp_register_operand (operands[0], TFmode))))
    : -1 },
#line 1818 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && (register_operand (operands[0], V2HImode)\n\
       || register_or_zero_operand (operands[1], V2HImode))",
    __builtin_constant_p 
#line 1818 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (register_operand (operands[0], V2HImode)
       || register_or_zero_operand (operands[1], V2HImode)))
    ? (int) 
#line 1818 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (register_operand (operands[0], V2HImode)
       || register_or_zero_operand (operands[1], V2HImode)))
    : -1 },
#line 2644 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64 && TARGET_FPU && TARGET_HARD_QUAD",
    __builtin_constant_p 
#line 2644 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU && TARGET_HARD_QUAD)
    ? (int) 
#line 2644 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU && TARGET_HARD_QUAD)
    : -1 },
#line 2255 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "reload_completed\n\
   && ! TARGET_ARCH64\n\
   && ((GET_CODE (operands[0]) == REG\n\
	&& REGNO (operands[0]) < 32)\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && GET_CODE (SUBREG_REG (operands[0])) == REG\n\
	   && REGNO (SUBREG_REG (operands[0])) < 32))",
    __builtin_constant_p 
#line 2255 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && ((GET_CODE (operands[0]) == REG
	&& REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) < 32)))
    ? (int) 
#line 2255 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && ((GET_CODE (operands[0]) == REG
	&& REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) < 32)))
    : -1 },
#line 1631 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(TARGET_CM_MEDANY\n\
    || TARGET_CM_EMBMEDANY)\n\
   && ! flag_pic",
    __builtin_constant_p 
#line 1631 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_CM_MEDANY
    || TARGET_CM_EMBMEDANY)
   && ! flag_pic)
    ? (int) 
#line 1631 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_CM_MEDANY
    || TARGET_CM_EMBMEDANY)
   && ! flag_pic)
    : -1 },
#line 1378 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_ARCH64\n\
   && TARGET_V9\n\
   && (register_operand (operands[0], DImode)\n\
       || register_or_zero_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 1378 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64
   && TARGET_V9
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode)))
    ? (int) 
#line 1378 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64
   && TARGET_V9
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode)))
    : -1 },
#line 6750 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "registers_ok_for_ldd_peep (operands[3], operands[1]) \n\
  && mems_ok_for_ldd_peep (operands[2], operands[0], NULL_RTX)",
    __builtin_constant_p 
#line 6750 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[3], operands[1]) 
  && mems_ok_for_ldd_peep (operands[2], operands[0], NULL_RTX))
    ? (int) 
#line 6750 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[3], operands[1]) 
  && mems_ok_for_ldd_peep (operands[2], operands[0], NULL_RTX))
    : -1 },
  { "(TARGET_ARCH64) && ( 1)",
    __builtin_constant_p (
#line 668 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64) && 
#line 670 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( 1))
    ? (int) (
#line 668 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64) && 
#line 670 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( 1))
    : -1 },
#line 1809 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "V2HImode == SFmode || TARGET_VIS",
    __builtin_constant_p 
#line 1809 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(V2HImode == SFmode || TARGET_VIS)
    ? (int) 
#line 1809 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(V2HImode == SFmode || TARGET_VIS)
    : -1 },
#line 2328 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && TARGET_ARCH64\n\
   && TARGET_HARD_QUAD\n\
   && (register_operand (operands[0], TFmode)\n\
       || register_or_zero_operand (operands[1], TFmode))",
    __builtin_constant_p 
#line 2328 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && TARGET_HARD_QUAD
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode)))
    ? (int) 
#line 2328 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && TARGET_HARD_QUAD
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode)))
    : -1 },
#line 102 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
  { "TARGET_V8PLUS",
    __builtin_constant_p 
#line 102 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V8PLUS)
    ? (int) 
#line 102 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V8PLUS)
    : -1 },
#line 1261 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "flag_pic && check_pic (1)",
    __builtin_constant_p 
#line 1261 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(flag_pic && check_pic (1))
    ? (int) 
#line 1261 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(flag_pic && check_pic (1))
    : -1 },
#line 5356 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(TARGET_V8 || TARGET_V9) && TARGET_FPU && TARGET_HARD_QUAD",
    __builtin_constant_p 
#line 5356 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_V9) && TARGET_FPU && TARGET_HARD_QUAD)
    ? (int) 
#line 5356 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_V9) && TARGET_FPU && TARGET_HARD_QUAD)
    : -1 },
#line 6494 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "GET_MODE (operands[0]) == Pmode",
    __builtin_constant_p 
#line 6494 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(GET_MODE (operands[0]) == Pmode)
    ? (int) 
#line 6494 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(GET_MODE (operands[0]) == Pmode)
    : -1 },
#line 3393 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU && TARGET_V9 && (TARGET_HARD_QUAD || TARGET_ARCH64)",
    __builtin_constant_p 
#line 3393 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && (TARGET_HARD_QUAD || TARGET_ARCH64))
    ? (int) 
#line 3393 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && (TARGET_HARD_QUAD || TARGET_ARCH64))
    : -1 },
#line 1991 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && TARGET_V9\n\
   && ! TARGET_ARCH64\n\
   && (register_operand (operands[0], V8QImode)\n\
       || register_or_zero_operand (operands[1], V8QImode))",
    __builtin_constant_p 
#line 1991 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], V8QImode)
       || register_or_zero_operand (operands[1], V8QImode)))
    ? (int) 
#line 1991 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], V8QImode)
       || register_or_zero_operand (operands[1], V8QImode)))
    : -1 },
  { "(TARGET_VIS) && (Pmode == DImode)",
    __builtin_constant_p (
#line 7794 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == DImode))
    ? (int) (
#line 7794 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == DImode))
    : -1 },
#line 1321 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_VXWORKS_RTP",
    __builtin_constant_p 
#line 1321 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VXWORKS_RTP)
    ? (int) 
#line 1321 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VXWORKS_RTP)
    : -1 },
#line 90 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
  { "TARGET_V9 && (SImode == SImode || TARGET_ARCH64)",
    __builtin_constant_p 
#line 90 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V9 && (SImode == SImode || TARGET_ARCH64))
    ? (int) 
#line 90 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V9 && (SImode == SImode || TARGET_ARCH64))
    : -1 },
#line 1943 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "V4HImode == DFmode || TARGET_VIS",
    __builtin_constant_p 
#line 1943 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(V4HImode == DFmode || TARGET_VIS)
    ? (int) 
#line 1943 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(V4HImode == DFmode || TARGET_VIS)
    : -1 },
#line 5580 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64)",
    __builtin_constant_p 
#line 5580 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
    ? (int) 
#line 5580 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
    : -1 },
#line 5792 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64 && (unsigned HOST_WIDE_INT) INTVAL (operands[3]) == 0xffffffff",
    __builtin_constant_p 
#line 5792 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && (unsigned HOST_WIDE_INT) INTVAL (operands[3]) == 0xffffffff)
    ? (int) 
#line 5792 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && (unsigned HOST_WIDE_INT) INTVAL (operands[3]) == 0xffffffff)
    : -1 },
#line 7103 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_SUN_TLS && TARGET_ARCH64",
    __builtin_constant_p 
#line 7103 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SUN_TLS && TARGET_ARCH64)
    ? (int) 
#line 7103 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SUN_TLS && TARGET_ARCH64)
    : -1 },
#line 2657 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V9 && TARGET_FPU && !TARGET_HARD_QUAD",
    __builtin_constant_p 
#line 2657 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && !TARGET_HARD_QUAD)
    ? (int) 
#line 2657 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && !TARGET_HARD_QUAD)
    : -1 },
#line 1173 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(register_operand (operands[0], HImode)\n\
    || register_or_zero_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 1173 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((register_operand (operands[0], HImode)
    || register_or_zero_operand (operands[1], HImode)))
    ? (int) 
#line 1173 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((register_operand (operands[0], HImode)
    || register_or_zero_operand (operands[1], HImode)))
    : -1 },
#line 1991 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && TARGET_V9\n\
   && ! TARGET_ARCH64\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_or_zero_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 1991 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode)))
    ? (int) 
#line 1991 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode)))
    : -1 },
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "Pmode == SImode",
    __builtin_constant_p 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == SImode)
    ? (int) 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == SImode)
    : -1 },
#line 6608 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_SPARCLITE || TARGET_SPARCLET",
    __builtin_constant_p 
#line 6608 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SPARCLITE || TARGET_SPARCLET)
    ? (int) 
#line 6608 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SPARCLITE || TARGET_SPARCLET)
    : -1 },
#line 3474 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64 && TARGET_FPU",
    __builtin_constant_p 
#line 3474 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU)
    ? (int) 
#line 3474 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU)
    : -1 },
#line 6654 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V9\n\
   && mems_ok_for_ldd_peep (operands[1], operands[0], NULL_RTX)",
    __builtin_constant_p 
#line 6654 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9
   && mems_ok_for_ldd_peep (operands[1], operands[0], NULL_RTX))
    ? (int) 
#line 6654 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9
   && mems_ok_for_ldd_peep (operands[1], operands[0], NULL_RTX))
    : -1 },
#line 3480 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V9 && TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64)",
    __builtin_constant_p 
#line 3480 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
    ? (int) 
#line 3480 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
    : -1 },
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "Pmode == DImode",
    __builtin_constant_p 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == DImode)
    ? (int) 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == DImode)
    : -1 },
#line 5044 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64 && GET_CODE (operands[3]) == GET_CODE (operands[4])",
    __builtin_constant_p 
#line 5044 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && GET_CODE (operands[3]) == GET_CODE (operands[4]))
    ? (int) 
#line 5044 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && GET_CODE (operands[3]) == GET_CODE (operands[4]))
    : -1 },
#line 5512 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU && TARGET_V9 && TARGET_HARD_QUAD",
    __builtin_constant_p 
#line 5512 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && TARGET_HARD_QUAD)
    ? (int) 
#line 5512 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && TARGET_HARD_QUAD)
    : -1 },
  { "(TARGET_V9 && (DImode == SImode || TARGET_ARCH64)) && (TARGET_ARCH64 || TARGET_V8PLUS)",
    __builtin_constant_p (
#line 90 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V9 && (DImode == SImode || TARGET_ARCH64)) && 
#line 23 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_ARCH64 || TARGET_V8PLUS))
    ? (int) (
#line 90 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V9 && (DImode == SImode || TARGET_ARCH64)) && 
#line 23 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_ARCH64 || TARGET_V8PLUS))
    : -1 },
#line 2515 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V9 && TARGET_FPU",
    __builtin_constant_p 
#line 2515 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU)
    ? (int) 
#line 2515 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU)
    : -1 },
#line 4429 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V8 || TARGET_DEPRECATED_V8_INSNS",
    __builtin_constant_p 
#line 4429 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8 || TARGET_DEPRECATED_V8_INSNS)
    ? (int) 
#line 4429 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8 || TARGET_DEPRECATED_V8_INSNS)
    : -1 },
#line 5894 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64\n\
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) >= 32\n\
   && (unsigned HOST_WIDE_INT) INTVAL (operands[3]) < 32\n\
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[2]) + INTVAL (operands[3])) < 64",
    __builtin_constant_p 
#line 5894 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) >= 32
   && (unsigned HOST_WIDE_INT) INTVAL (operands[3]) < 32
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[2]) + INTVAL (operands[3])) < 64)
    ? (int) 
#line 5894 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) >= 32
   && (unsigned HOST_WIDE_INT) INTVAL (operands[3]) < 32
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[2]) + INTVAL (operands[3])) < 64)
    : -1 },
#line 6112 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0",
    __builtin_constant_p 
#line 6112 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
    ? (int) 
#line 6112 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
    : -1 },
#line 6083 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) > 0",
    __builtin_constant_p 
#line 6083 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) > 0)
    ? (int) 
#line 6083 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) > 0)
    : -1 },
#line 7552 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH32",
    __builtin_constant_p 
#line 7552 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH32)
    ? (int) 
#line 7552 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH32)
    : -1 },
#line 2455 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "(reload_completed\n\
    && offsettable_memref_p (operands[0])\n\
    && (! TARGET_ARCH64\n\
	|| ! TARGET_HARD_QUAD\n\
	|| ! fp_register_operand (operands[1], TFmode)))",
    __builtin_constant_p 
#line 2455 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((reload_completed
    && offsettable_memref_p (operands[0])
    && (! TARGET_ARCH64
	|| ! TARGET_HARD_QUAD
	|| ! fp_register_operand (operands[1], TFmode))))
    ? (int) 
#line 2455 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((reload_completed
    && offsettable_memref_p (operands[0])
    && (! TARGET_ARCH64
	|| ! TARGET_HARD_QUAD
	|| ! fp_register_operand (operands[1], TFmode))))
    : -1 },
#line 6435 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "! TARGET_ARCH64",
    __builtin_constant_p 
#line 6435 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64)
    ? (int) 
#line 6435 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64)
    : -1 },
#line 5815 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_ARCH64 || TARGET_V8PLUS",
    __builtin_constant_p 
#line 5815 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 || TARGET_V8PLUS)
    ? (int) 
#line 5815 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 || TARGET_V8PLUS)
    : -1 },
#line 1611 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_CM_EMBMEDANY",
    __builtin_constant_p 
#line 1611 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY)
    ? (int) 
#line 1611 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY)
    : -1 },
#line 2485 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_V9 && !(DImode == DImode && TARGET_ARCH32)",
    __builtin_constant_p 
#line 2485 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(DImode == DImode && TARGET_ARCH32))
    ? (int) 
#line 2485 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(DImode == DImode && TARGET_ARCH32))
    : -1 },
#line 1818 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_or_zero_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 1818 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (register_operand (operands[0], SFmode)
       || register_or_zero_operand (operands[1], SFmode)))
    ? (int) 
#line 1818 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (register_operand (operands[0], SFmode)
       || register_or_zero_operand (operands[1], SFmode)))
    : -1 },
#line 5522 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU && TARGET_V9 && !TARGET_HARD_QUAD",
    __builtin_constant_p 
#line 5522 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && !TARGET_HARD_QUAD)
    ? (int) 
#line 5522 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && !TARGET_HARD_QUAD)
    : -1 },
#line 5565 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
  { "TARGET_FPU && TARGET_V9",
    __builtin_constant_p 
#line 5565 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9)
    ? (int) 
#line 5565 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9)
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
