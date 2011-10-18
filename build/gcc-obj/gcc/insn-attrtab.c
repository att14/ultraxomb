/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-attr.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "output.h"
#include "diagnostic-core.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

static int internal_dfa_insn_code_niagara2 (rtx);
static int insn_default_latency_niagara2 (rtx);
static int internal_dfa_insn_code_niagara (rtx);
static int insn_default_latency_niagara (rtx);
static int internal_dfa_insn_code_ultrasparc3 (rtx);
static int insn_default_latency_ultrasparc3 (rtx);
static int internal_dfa_insn_code_ultrasparc (rtx);
static int insn_default_latency_ultrasparc (rtx);
static int internal_dfa_insn_code_v9 (rtx);
static int insn_default_latency_v9 (rtx);
static int internal_dfa_insn_code_tsc701 (rtx);
static int insn_default_latency_tsc701 (rtx);
static int internal_dfa_insn_code_sparclet (rtx);
static int insn_default_latency_sparclet (rtx);
static int internal_dfa_insn_code_sparclite86x (rtx);
static int insn_default_latency_sparclite86x (rtx);
static int internal_dfa_insn_code_f934 (rtx);
static int insn_default_latency_f934 (rtx);
static int internal_dfa_insn_code_f930 (rtx);
static int insn_default_latency_f930 (rtx);
static int internal_dfa_insn_code_sparclite (rtx);
static int insn_default_latency_sparclite (rtx);
static int internal_dfa_insn_code_leon (rtx);
static int insn_default_latency_leon (rtx);
static int internal_dfa_insn_code_hypersparc (rtx);
static int insn_default_latency_hypersparc (rtx);
static int internal_dfa_insn_code_supersparc (rtx);
static int insn_default_latency_supersparc (rtx);
static int internal_dfa_insn_code_v8 (rtx);
static int insn_default_latency_v8 (rtx);
static int internal_dfa_insn_code_cypress (rtx);
static int insn_default_latency_cypress (rtx);
static int internal_dfa_insn_code_v7 (rtx);
static int insn_default_latency_v7 (rtx);

int (*internal_dfa_insn_code) (rtx);
int (*insn_default_latency) (rtx);

void
init_sched_attrs (void)
{
  if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_niagara2;
      insn_default_latency
        = insn_default_latency_niagara2;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_niagara;
      insn_default_latency
        = insn_default_latency_niagara;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ultrasparc3;
      insn_default_latency
        = insn_default_latency_ultrasparc3;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ultrasparc;
      insn_default_latency
        = insn_default_latency_ultrasparc;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_V9)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_v9;
      insn_default_latency
        = insn_default_latency_v9;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_tsc701;
      insn_default_latency
        = insn_default_latency_tsc701;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLET)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_sparclet;
      insn_default_latency
        = insn_default_latency_sparclet;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_sparclite86x;
      insn_default_latency
        = insn_default_latency_sparclite86x;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_F934)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_f934;
      insn_default_latency
        = insn_default_latency_f934;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_F930)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_f930;
      insn_default_latency
        = insn_default_latency_f930;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_sparclite;
      insn_default_latency
        = insn_default_latency_sparclite;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_LEON)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_leon;
      insn_default_latency
        = insn_default_latency_leon;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_hypersparc;
      insn_default_latency
        = insn_default_latency_hypersparc;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_supersparc;
      insn_default_latency
        = insn_default_latency_supersparc;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_V8)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_v8;
      insn_default_latency
        = insn_default_latency_v8;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_cypress;
      insn_default_latency
        = insn_default_latency_cypress;
    }
  else if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_V7)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_v7;
      insn_default_latency
        = insn_default_latency_v7;
    }
  else
    gcc_unreachable ();
}

int
insn_current_length (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_branch_type cached_branch_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
      extract_constrain_insn_cached (insn);
      if ((insn_current_reference_address (insn)) < (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0))
        {
	  if (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) < (32000))
	    {
	      if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 1;
	        }
	    }
	  else
	    {
	      if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	        {
		  return 4;
	        }
	      else
	        {
		  return 3;
	        }
	    }
        }
      else
        {
	  if (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0)) < (32000))
	    {
	      if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 1;
	        }
	    }
	  else
	    {
	      if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	        {
		  return 4;
	        }
	      else
	        {
		  return 3;
	        }
	    }
        }

    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
      extract_constrain_insn_cached (insn);
      if (fcc0_register_operand (operands[0], VOIDmode))
        {
	  return 0;
        }
      else
        {
	  if ((insn_current_reference_address (insn)) < (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0))
	    {
	      if (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) < (260000))
	        {
		  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 2;
		    }
		  else
		    {
		      return 1;
		    }
	        }
	      else
	        {
		  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 4;
		    }
		  else
		    {
		      return 3;
		    }
	        }
	    }
	  else
	    {
	      if (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0)) < (260000))
	        {
		  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 2;
		    }
		  else
		    {
		      return 1;
		    }
	        }
	      else
	        {
		  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 4;
		    }
		  else
		    {
		      return 3;
		    }
	        }
	    }
        }

    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      extract_constrain_insn_cached (insn);
      if (noov_compare64_operator (operands[0], VOIDmode))
        {
	  if ((insn_current_reference_address (insn)) < (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0))
	    {
	      if (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0) - (insn_current_reference_address (insn))) < (260000))
	        {
		  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 2;
		    }
		  else
		    {
		      return 1;
		    }
	        }
	      else
	        {
		  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 4;
		    }
		  else
		    {
		      return 3;
		    }
	        }
	    }
	  else
	    {
	      if (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0)) < (260000))
	        {
		  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 2;
		    }
		  else
		    {
		      return 1;
		    }
	        }
	      else
	        {
		  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 4;
		    }
		  else
		    {
		      return 3;
		    }
	        }
	    }
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_branch_type cached_branch_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
      return 1;

    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
      extract_insn_cached (insn);
      if (fcc0_register_operand (operands[0], VOIDmode))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      extract_insn_cached (insn);
      if (noov_compare64_operator (operands[0], VOIDmode))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_min_length (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_branch_type cached_branch_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 336:  /* do_builtin_setjmp_setup */
      extract_constrain_insn_cached (insn);
      if ((
#line 162 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((cfun->calls_alloca != 0
		? CALLS_ALLOCA_TRUE : CALLS_ALLOCA_FALSE))) == (
(CALLS_ALLOCA_FALSE)))
        {
	  return 0;
        }
      else if (! ((
#line 127 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9))))
        {
	  return 1;
        }
      else if ((
#line 159 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((flag_pic != 0 ? PIC_TRUE : PIC_FALSE))) == (
(PIC_TRUE)))
        {
	  return 4;
        }
      else
        {
	  return 3;
        }

    case 335:  /* goto_handler_and_restore */
      extract_constrain_insn_cached (insn);
      if ((
#line 174 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((flag_delayed_branch != 0
		? DELAYED_BRANCH_TRUE : DELAYED_BRANCH_FALSE))) == (
(DELAYED_BRANCH_TRUE)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 329:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))
        {
	  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else if ((
#line 166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))
        {
	  if ((
#line 174 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((flag_delayed_branch != 0
		? DELAYED_BRANCH_TRUE : DELAYED_BRANCH_FALSE))) == (
(DELAYED_BRANCH_TRUE)))
	    {
	      if ((
#line 127 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 3;
	        }
	    }
	  else
	    {
	      return 4;
	    }
        }
      else if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
        {
	  if ((
#line 174 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((flag_delayed_branch != 0
		? DELAYED_BRANCH_TRUE : DELAYED_BRANCH_FALSE))) == (
(DELAYED_BRANCH_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }
        }
      else
        {
	  return 1;
        }

    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
      extract_constrain_insn_cached (insn);
      if ((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))
        {
	  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else
        {
	  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }

    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 333:  /* *branch_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
      extract_constrain_insn_cached (insn);
      if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 5;
        }
      else
        {
	  return 6;
        }

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0xe))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x78))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x180))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
      extract_constrain_insn_cached (insn);
      if ((
#line 174 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((flag_delayed_branch != 0
		? DELAYED_BRANCH_TRUE : DELAYED_BRANCH_FALSE))) == (
(DELAYED_BRANCH_TRUE)))
        {
	  return 3;
        }
      else
        {
	  return 4;
        }

    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
      extract_constrain_insn_cached (insn);
      if (fcc0_register_operand (operands[0], VOIDmode))
        {
	  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      if ((
#line 216 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9)) == (0))
	        {
		  return 3;
	        }
	      else
	        {
		  return 2;
	        }
	    }
	  else
	    {
	      if ((
#line 219 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9)) == (0))
	        {
		  return 2;
	        }
	      else
	        {
		  return 1;
	        }
	    }
        }
      else
        {
	  return 1;
        }

    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      extract_constrain_insn_cached (insn);
      if (noov_compare64_operator (operands[0], VOIDmode))
        {
	  return 1;
        }
      else
        {
	  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 194:  /* udivsi3_sp64 */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 113:  /* *movtf_cc_reg_sp64 */
    case 112:  /* *movtf_cc_v9 */
    case 97:  /* *movtf_insn_sp64_no_fpu */
    case 95:  /* *movtf_insn_sp64 */
    case 23:  /* *x_minus_i_eq_0 */
    case 22:  /* *x_plus_i_eq_0 */
    case 21:  /* *x_minus_i_ne_0 */
    case 20:  /* *x_plus_i_ne_0 */
    case 19:  /* *seqdi_zero_trunc */
    case 18:  /* *neg_seqdi_zero */
    case 17:  /* *seqdi_zero */
    case 16:  /* *seqsi_zero_extend */
    case 15:  /* *neg_seqsi_zero */
    case 14:  /* *seqsi_zero */
    case 13:  /* *snedi_zero_trunc */
    case 12:  /* *neg_snedi_zero */
    case 11:  /* *snedi_zero */
    case 10:  /* *snesi_zero_extend */
    case 9:  /* *neg_snesi_zero */
    case 8:  /* *snesi_zero */
      return 2;

    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 339:  /* ffssi2 */
      return 8;

    case 383:  /* stack_protect_testdi */
      return 4;

    case 382:  /* stack_protect_setdi */
      return 3;

    case 330:  /* blockage */
      return 0;

    case 196:  /* *cmp_udiv_cc_set */
      if ((
#line 127 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9)))
        {
	  return 2;
        }
      else
        {
	  return 5;
        }

    case 193:  /* *cmp_sdiv_cc_set */
      if ((
#line 127 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9)))
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case 188:  /* const_umulsidi3_v8plus */
    case 185:  /* umulsidi3_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 176:  /* muldi3_v8plus */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 9;
        }
      else
        {
	  return 8;
        }

    default:
      return 1;

    }
}

int
insn_default_length (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_branch_type cached_branch_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 336:  /* do_builtin_setjmp_setup */
      extract_constrain_insn_cached (insn);
      if ((
#line 162 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((cfun->calls_alloca != 0
		? CALLS_ALLOCA_TRUE : CALLS_ALLOCA_FALSE))) == (
(CALLS_ALLOCA_FALSE)))
        {
	  return 0;
        }
      else if (! ((
#line 127 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9))))
        {
	  return 1;
        }
      else if ((
#line 159 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((flag_pic != 0 ? PIC_TRUE : PIC_FALSE))) == (
(PIC_TRUE)))
        {
	  return 4;
        }
      else
        {
	  return 3;
        }

    case 335:  /* goto_handler_and_restore */
      extract_constrain_insn_cached (insn);
      if ((
#line 174 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((flag_delayed_branch != 0
		? DELAYED_BRANCH_TRUE : DELAYED_BRANCH_FALSE))) == (
(DELAYED_BRANCH_TRUE)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 329:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))
        {
	  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else if ((
#line 166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))
        {
	  if ((
#line 174 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((flag_delayed_branch != 0
		? DELAYED_BRANCH_TRUE : DELAYED_BRANCH_FALSE))) == (
(DELAYED_BRANCH_TRUE)))
	    {
	      if ((
#line 127 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 3;
	        }
	    }
	  else
	    {
	      return 4;
	    }
        }
      else if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
        {
	  if ((
#line 174 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((flag_delayed_branch != 0
		? DELAYED_BRANCH_TRUE : DELAYED_BRANCH_FALSE))) == (
(DELAYED_BRANCH_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }
        }
      else
        {
	  return 1;
        }

    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
      extract_constrain_insn_cached (insn);
      if ((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))
        {
	  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else
        {
	  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }

    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 333:  /* *branch_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
      extract_constrain_insn_cached (insn);
      if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 5;
        }
      else
        {
	  return 6;
        }

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0xe))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x78))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x180))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
      extract_constrain_insn_cached (insn);
      if ((
#line 174 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((flag_delayed_branch != 0
		? DELAYED_BRANCH_TRUE : DELAYED_BRANCH_FALSE))) == (
(DELAYED_BRANCH_TRUE)))
        {
	  return 3;
        }
      else
        {
	  return 4;
        }

    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
      extract_constrain_insn_cached (insn);
      if (fcc0_register_operand (operands[0], VOIDmode))
        {
	  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      if ((
#line 216 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9)) == (0))
	        {
		  return 3;
	        }
	      else
	        {
		  return 2;
	        }
	    }
	  else
	    {
	      if ((
#line 219 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9)) == (0))
	        {
		  return 2;
	        }
	      else
	        {
		  return 1;
	        }
	    }
        }
      else
        {
	  return 4;
        }

    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      extract_constrain_insn_cached (insn);
      if (noov_compare64_operator (operands[0], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  if ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 194:  /* udivsi3_sp64 */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 113:  /* *movtf_cc_reg_sp64 */
    case 112:  /* *movtf_cc_v9 */
    case 97:  /* *movtf_insn_sp64_no_fpu */
    case 95:  /* *movtf_insn_sp64 */
    case 23:  /* *x_minus_i_eq_0 */
    case 22:  /* *x_plus_i_eq_0 */
    case 21:  /* *x_minus_i_ne_0 */
    case 20:  /* *x_plus_i_ne_0 */
    case 19:  /* *seqdi_zero_trunc */
    case 18:  /* *neg_seqdi_zero */
    case 17:  /* *seqdi_zero */
    case 16:  /* *seqsi_zero_extend */
    case 15:  /* *neg_seqsi_zero */
    case 14:  /* *seqsi_zero */
    case 13:  /* *snedi_zero_trunc */
    case 12:  /* *neg_snedi_zero */
    case 11:  /* *snedi_zero */
    case 10:  /* *snesi_zero_extend */
    case 9:  /* *neg_snesi_zero */
    case 8:  /* *snesi_zero */
      return 2;

    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 339:  /* ffssi2 */
      return 8;

    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 383:  /* stack_protect_testdi */
      return 4;

    case 382:  /* stack_protect_setdi */
      return 3;

    case 330:  /* blockage */
      return 0;

    case 196:  /* *cmp_udiv_cc_set */
      if ((
#line 127 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9)))
        {
	  return 2;
        }
      else
        {
	  return 5;
        }

    case 193:  /* *cmp_sdiv_cc_set */
      if ((
#line 127 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9)))
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case 188:  /* const_umulsidi3_v8plus */
    case 185:  /* umulsidi3_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 176:  /* muldi3_v8plus */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 9;
        }
      else
        {
	  return 8;
        }

    default:
      return 1;

    }
}

int
bypass_p (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_fptype cached_fptype ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 293:  /* *abstf2_hq_v9 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || (((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || (((which_alternative == 1) && (((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 266:  /* one_cmplv4qi2 */
    case 265:  /* one_cmplv2hi2 */
    case 264:  /* one_cmplsi2 */
    case 263:  /* *one_cmplv8qi2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 241:  /* *xor_not_v4qi */
    case 240:  /* *xor_not_v2hi */
    case 239:  /* *xor_not_si */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 234:  /* xorv4qi3 */
    case 233:  /* xorv2hi3 */
    case 232:  /* xorsi3 */
    case 231:  /* *xorv8qi3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 227:  /* *or_not_v4qi */
    case 226:  /* *or_not_v2hi */
    case 225:  /* *or_not_si */
    case 224:  /* *or_not_v8qi_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 220:  /* iorv4qi3 */
    case 219:  /* iorv2hi3 */
    case 218:  /* iorsi3 */
    case 217:  /* *iorv8qi3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 213:  /* *and_not_v4qi */
    case 212:  /* *and_not_v2hi */
    case 211:  /* *and_not_si */
    case 210:  /* *and_not_v8qi_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 206:  /* andv4qi3 */
    case 205:  /* andv2hi3 */
    case 204:  /* andsi3 */
    case 203:  /* *andv8qi3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 200:  /* *anddi3_sp64 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || (((which_alternative == 1) && (((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3))) || (((which_alternative == 2) && (((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 414:  /* pdist_vis */
    case 412:  /* faligndatav8qi_vis */
    case 411:  /* faligndatav4hi_vis */
    case 410:  /* faligndatav2si_vis */
    case 409:  /* faligndatadi_vis */
    case 401:  /* fpmerge_vis */
    case 400:  /* fexpand_vis */
    case 399:  /* fpack32_vis */
    case 398:  /* fpackfix_vis */
    case 397:  /* fpack16_vis */
    case 396:  /* *nandv4qi_vis */
    case 395:  /* *nandv2hi_vis */
    case 394:  /* *nandsf_vis */
    case 393:  /* *nandv8qi_vis */
    case 392:  /* *nandv4hi_vis */
    case 391:  /* *nandv2si_vis */
    case 390:  /* *nanddf_vis */
    case 389:  /* subv2hi3 */
    case 388:  /* subv4hi3 */
    case 387:  /* subv2si3 */
    case 386:  /* addv2hi3 */
    case 385:  /* addv4hi3 */
    case 384:  /* addv2si3 */
    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
    case 286:  /* divsf3 */
    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
    case 111:  /* *movtf_cc_reg_hq_sp64 */
    case 109:  /* movdf_cc_reg_sp64 */
    case 107:  /* *movsf_cc_reg_sp64 */
      if (((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2)) || (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0xc))) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0xc)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x6c))) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x6d))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x3))) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0)) || (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0xf))) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0xf)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x7))) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5)) || (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x1f))) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x1e)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 8)) || (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x187))) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x187)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5)) || (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x13))) || (((which_alternative == 7) && (((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x13))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3))) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 137:  /* *sign_extendsidi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 423:  /* *ldstubsi */
    case 422:  /* *ldstubhi */
    case 421:  /* *ldstubqi */
    case 420:  /* *swapsi */
    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 418:  /* *sync_compare_and_swapdi */
    case 417:  /* *sync_compare_and_swapsi */
    case 416:  /* *membar */
    case 415:  /* *stbar */
    case 383:  /* stack_protect_testdi */
    case 382:  /* stack_protect_setdi */
    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 344:  /* *sparc.md:6906 */
    case 343:  /* *sparc.md:6894 */
    case 342:  /* trap */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 339:  /* ffssi2 */
    case 338:  /* flushdi */
    case 337:  /* flush */
    case 336:  /* do_builtin_setjmp_setup */
    case 335:  /* goto_handler_and_restore */
    case 334:  /* flush_register_windows */
    case 333:  /* *branch_sp64 */
    case 331:  /* probe_stack_rangedi */
    case 329:  /* *return_internal */
    case 328:  /* save_register_windowdi */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 196:  /* *cmp_udiv_cc_set */
    case 195:  /* udivdi3 */
    case 194:  /* udivsi3_sp64 */
    case 193:  /* *cmp_sdiv_cc_set */
    case 192:  /* divdi3 */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 188:  /* const_umulsidi3_v8plus */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 185:  /* umulsidi3_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 177:  /* *cmp_mul_set */
    case 176:  /* muldi3_v8plus */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
    case 167:  /* *subx_extend_sp64 */
    case 166:  /* subx */
    case 159:  /* *addx_extend_sp64 */
    case 158:  /* addx */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 105:  /* *movdi_cc_reg_sp64 */
    case 104:  /* *movsi_cc_reg_sp64 */
    case 103:  /* *movhi_cc_reg_sp64 */
    case 102:  /* *movqi_cc_reg_sp64 */
    case 101:  /* *movdi_cc_v9 */
    case 100:  /* *movsi_cc_v9 */
    case 99:  /* *movhi_cc_v9 */
    case 98:  /* *movqi_cc_v9 */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
    case 36:  /* *x_minus_sgeu */
    case 35:  /* *sgeu_plus_x */
    case 34:  /* *x_minus_sltu_plus_y */
    case 33:  /* *x_minus_y_minus_sltu */
    case 32:  /* *x_minus_sltu */
    case 31:  /* *sltu_plus_x_plus_y */
    case 30:  /* *sltu_plus_x */
    case 29:  /* *neg_sgeu_insn */
    case 28:  /* *sgeu_insn */
    case 27:  /* *neg_sltu_plus_x */
    case 26:  /* *neg_sltu_minus_x */
    case 25:  /* *neg_sltu_insn */
    case 24:  /* *sltu_insn */
      return 0;

    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      if (((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((cached_type = get_attr_type (insn)) == TYPE_FPLOAD)) || (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((((cached_type = get_attr_type (insn)) == TYPE_IALU) || (cached_type == TYPE_SHIFT)) || (cached_type == TYPE_COMPARE))) || ((((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((cached_type = get_attr_type (insn)) == TYPE_FPMOVE)) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE))) || ((((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((cached_type = get_attr_type (insn)) == TYPE_FPCMOVE) || (cached_type == TYPE_FPCRMOVE))) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE))) || ((((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((cached_type = get_attr_type (insn)) == TYPE_FP)) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE))) || ((((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((cached_type = get_attr_type (insn)) == TYPE_FPMUL)) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE))) || (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FPDIVS) || (cached_type == TYPE_FPSQRTS)) || ((cached_type == TYPE_FPDIVD) || (cached_type == TYPE_FPSQRTD)))) || ((((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((cached_type = get_attr_type (insn)) == TYPE_FGA)) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE))) || ((((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((cached_type = get_attr_type (insn)) == TYPE_FGM_PACK) || ((cached_type == TYPE_FGM_MUL) || (cached_type == TYPE_FGM_CMP)))) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE))) || (((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((cached_type = get_attr_type (insn)) == TYPE_FGM_PDIST)) || ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((((((((cached_type = get_attr_type (insn)) == TYPE_IALU) || ((cached_type == TYPE_SHIFT) || (cached_type == TYPE_COMPARE))) || (cached_type == TYPE_FPMOVE)) || (cached_type == TYPE_FPCMOVE)) || (cached_type == TYPE_FP)) || (cached_type == TYPE_FPCMP)) || (cached_type == TYPE_FPMUL)) || (cached_type == TYPE_FGM_PDIST)))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      if ((((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 120 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    }
}

int
insn_default_latency_v7 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
internal_dfa_insn_code_v7 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_cypress (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
      return 63 /* 0x3f */;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 286:  /* divsf3 */
    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 37 /* 0x25 */;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
      return 7;

    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
      return 5;

    case 137:  /* *sign_extendsidi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x5))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x60))
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x104))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 2;

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_SLOAD) || (cached_type == TYPE_FPLOAD)))
        {
	  return 2;
        }
      else if ((cached_type == TYPE_FP) || (cached_type == TYPE_FPMOVE))
        {
	  return 5;
        }
      else if (cached_type == TYPE_FPMUL)
        {
	  return 7;
        }
      else if ((cached_type == TYPE_FPDIVS) || (cached_type == TYPE_FPDIVD))
        {
	  return 37 /* 0x25 */;
        }
      else if ((cached_type == TYPE_FPSQRTS) || (cached_type == TYPE_FPSQRTD))
        {
	  return 63 /* 0x3f */;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
internal_dfa_insn_code_cypress (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
      return 4;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 286:  /* divsf3 */
    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 3;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
      return 2;

    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
      return 1;

    case 137:  /* *sign_extendsidi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 0;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x5))
        {
	  return 0;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return 0;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x60))
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x104))
        {
	  return 0;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 0;

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 0;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 0;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 0;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_SLOAD) || (cached_type == TYPE_FPLOAD)))
        {
	  return 0;
        }
      else if ((cached_type == TYPE_FP) || (cached_type == TYPE_FPMOVE))
        {
	  return 1;
        }
      else if (cached_type == TYPE_FPMUL)
        {
	  return 2;
        }
      else if ((cached_type == TYPE_FPDIVS) || (cached_type == TYPE_FPDIVD))
        {
	  return 3;
        }
      else if ((cached_type == TYPE_FPSQRTS) || (cached_type == TYPE_FPSQRTD))
        {
	  return 4;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_v8 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
internal_dfa_insn_code_v8 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_supersparc (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
      return 12 /* 0xc */;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 286:  /* divsf3 */
      return 6;

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 9;

    case 266:  /* one_cmplv4qi2 */
    case 265:  /* one_cmplv2hi2 */
    case 264:  /* one_cmplsi2 */
    case 263:  /* *one_cmplv8qi2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 241:  /* *xor_not_v4qi */
    case 240:  /* *xor_not_v2hi */
    case 239:  /* *xor_not_si */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 234:  /* xorv4qi3 */
    case 233:  /* xorv2hi3 */
    case 232:  /* xorsi3 */
    case 231:  /* *xorv8qi3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 227:  /* *or_not_v4qi */
    case 226:  /* *or_not_v2hi */
    case 225:  /* *or_not_si */
    case 224:  /* *or_not_v8qi_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 220:  /* iorv4qi3 */
    case 219:  /* iorv2hi3 */
    case 218:  /* iorsi3 */
    case 217:  /* *iorv8qi3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 213:  /* *and_not_v4qi */
    case 212:  /* *and_not_v2hi */
    case 211:  /* *and_not_si */
    case 210:  /* *and_not_v8qi_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 206:  /* andv4qi3 */
    case 205:  /* andv2hi3 */
    case 204:  /* andsi3 */
    case 203:  /* *andv8qi3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 200:  /* *anddi3_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 4;

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 0;
        }
      else if (!((1 << which_alternative) & 0x6))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 6)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 0;
        }
      else if (!((1 << which_alternative) & 0x23))
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 8)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 0;
        }
      else if (((1 << which_alternative) & 0x4f))
        {
	  return 1;
        }
      else if (which_alternative == 4)
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 413:  /* alignaddrdi_vis */
    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 361:  /* tle_lox10_sp64 */
    case 360:  /* tle_hix22_sp64 */
    case 359:  /* tie_add64 */
    case 358:  /* tie_ld64 */
    case 357:  /* tie_lo10 */
    case 356:  /* tie_hi22 */
    case 355:  /* tldo_add64 */
    case 354:  /* tldo_lox10 */
    case 353:  /* tldo_hix22 */
    case 351:  /* tldm_add64 */
    case 350:  /* tldm_lo10 */
    case 349:  /* tldm_hi22 */
    case 347:  /* tgd_add64 */
    case 346:  /* tgd_lo10 */
    case 345:  /* tgd_hi22 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 332:  /* nop */
    case 330:  /* blockage */
    case 319:  /* *sparc.md:5889 */
    case 318:  /* *sparc.md:5873 */
    case 317:  /* *sparc.md:5861 */
    case 316:  /* *sparc.md:5849 */
    case 314:  /* *lshrdi3_sp64 */
    case 313:  /* *lshrsi3_extend2 */
    case 312:  /* *lshrsi3_extend */
    case 311:  /* lshrsi3 */
    case 309:  /* *ashrdi3_sp64 */
    case 308:  /* *ashrsi3_extend2 */
    case 307:  /* *ashrsi3_extend */
    case 306:  /* ashrsi3 */
    case 302:  /* *ashldi3_sp64 */
    case 301:  /* ashlsi3 */
    case 255:  /* negsi2 */
    case 254:  /* *negdi2_sp64 */
    case 168:  /* *subdi3_sp64 */
    case 160:  /* *adddi3_sp64 */
    case 137:  /* *sign_extendsidi2_insn */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 118:  /* *zero_extendhidi2_insn */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 113:  /* *movtf_cc_reg_sp64 */
    case 112:  /* *movtf_cc_v9 */
    case 97:  /* *movtf_insn_sp64_no_fpu */
    case 95:  /* *movtf_insn_sp64 */
    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 89:  /* *movdf_insn_sp32_no_fpu */
    case 87:  /* *movsf_high */
    case 86:  /* *movsf_lo_sum */
    case 85:  /* *movsf_insn_no_fpu */
    case 81:  /* embmedany_textlo */
    case 80:  /* embmedany_textulo */
    case 79:  /* embmedany_texthi */
    case 78:  /* embmedany_textuhi */
    case 77:  /* embmedany_brsum */
    case 76:  /* embmedany_losum */
    case 75:  /* embmedany_sethi */
    case 74:  /* setlo */
    case 73:  /* sethm */
    case 72:  /* setlm */
    case 71:  /* sethh */
    case 70:  /* setl44 */
    case 69:  /* setm44 */
    case 68:  /* seth44 */
    case 67:  /* *losum_di_medlow */
    case 66:  /* *sethi_di_medlow */
    case 65:  /* *sethi_di_medlow_embmedany_pic */
    case 64:  /* movdi_pic_gotdata_op */
    case 63:  /* movdi_high_pic */
    case 62:  /* movdi_lo_sum_pic */
    case 61:  /* *movdi_lo_sum_pic_label_ref */
    case 60:  /* *movdi_high_pic_label_ref */
    case 57:  /* *movsi_lo_sum_pic_label_ref */
    case 56:  /* *movsi_high_pic_label_ref */
    case 55:  /* movsi_pic_gotdata_op */
    case 54:  /* movsi_high_pic */
    case 53:  /* movsi_lo_sum_pic */
    case 52:  /* *movsi_high */
    case 51:  /* *movsi_lo_sum */
    case 49:  /* *movhi_lo_sum */
    case 48:  /* *movhi_insn */
    case 47:  /* *movqi_insn */
    case 23:  /* *x_minus_i_eq_0 */
    case 22:  /* *x_plus_i_eq_0 */
    case 21:  /* *x_minus_i_ne_0 */
    case 20:  /* *x_plus_i_ne_0 */
    case 19:  /* *seqdi_zero_trunc */
    case 18:  /* *neg_seqdi_zero */
    case 17:  /* *seqdi_zero */
    case 16:  /* *seqsi_zero_extend */
    case 15:  /* *neg_seqsi_zero */
    case 14:  /* *seqsi_zero */
    case 13:  /* *snedi_zero_trunc */
    case 12:  /* *neg_snedi_zero */
    case 11:  /* *snedi_zero */
    case 10:  /* *snesi_zero_extend */
    case 9:  /* *neg_snesi_zero */
    case 8:  /* *snesi_zero */
      return 1;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 3;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_SLOAD))
        {
	  return 1;
        }
      else if (cached_type == TYPE_FPLOAD)
        {
	  return 0;
        }
      else if ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || ((cached_type == TYPE_SHIFT) || (cached_type == TYPE_IALU))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_FP) || ((cached_type == TYPE_FPMOVE) || ((cached_type == TYPE_FPCMP) || (cached_type == TYPE_FPMUL))))
        {
	  return 3;
        }
      else if (cached_type == TYPE_FPDIVS)
        {
	  return 6;
        }
      else if (cached_type == TYPE_FPDIVD)
        {
	  return 9;
        }
      else if ((cached_type == TYPE_FPSQRTS) || (cached_type == TYPE_FPSQRTD))
        {
	  return 12 /* 0xc */;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
internal_dfa_insn_code_supersparc (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
      return 7;

    case 319:  /* *sparc.md:5889 */
    case 318:  /* *sparc.md:5873 */
    case 317:  /* *sparc.md:5861 */
    case 316:  /* *sparc.md:5849 */
    case 314:  /* *lshrdi3_sp64 */
    case 313:  /* *lshrsi3_extend2 */
    case 312:  /* *lshrsi3_extend */
    case 311:  /* lshrsi3 */
    case 309:  /* *ashrdi3_sp64 */
    case 308:  /* *ashrsi3_extend2 */
    case 307:  /* *ashrsi3_extend */
    case 306:  /* ashrsi3 */
      return 8;

    case 302:  /* *ashldi3_sp64 */
    case 301:  /* ashlsi3 */
      extract_insn_cached (insn);
      if (! (const_one_operand (operands[2], VOIDmode)))
        {
	  return 8;
        }
      else
        {
	  return 9;
        }

    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
      return 14 /* 0xe */;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 9;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 286:  /* divsf3 */
      return 12 /* 0xc */;

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 13 /* 0xd */;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
      return 11 /* 0xb */;

    case 266:  /* one_cmplv4qi2 */
    case 265:  /* one_cmplv2hi2 */
    case 264:  /* one_cmplsi2 */
    case 263:  /* *one_cmplv8qi2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 241:  /* *xor_not_v4qi */
    case 240:  /* *xor_not_v2hi */
    case 239:  /* *xor_not_si */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 234:  /* xorv4qi3 */
    case 233:  /* xorv2hi3 */
    case 232:  /* xorsi3 */
    case 231:  /* *xorv8qi3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 227:  /* *or_not_v4qi */
    case 226:  /* *or_not_v2hi */
    case 225:  /* *or_not_si */
    case 224:  /* *or_not_v8qi_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 220:  /* iorv4qi3 */
    case 219:  /* iorv2hi3 */
    case 218:  /* iorsi3 */
    case 217:  /* *iorv8qi3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 213:  /* *and_not_v4qi */
    case 212:  /* *and_not_v2hi */
    case 211:  /* *and_not_si */
    case 210:  /* *and_not_v8qi_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 206:  /* andv4qi3 */
    case 205:  /* andv2hi3 */
    case 204:  /* andsi3 */
    case 203:  /* *andv8qi3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 200:  /* *anddi3_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 9;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 15 /* 0xf */;

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 9;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 137:  /* *sign_extendsidi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 5;
        }
      else
        {
	  return 8;
        }

    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 5;
        }
      else
        {
	  return 9;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 6;
        }
      else if (which_alternative == 3)
        {
	  return 7;
        }
      else if (!((1 << which_alternative) & 0xe))
        {
	  return 9;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 5;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 7;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return 9;
        }
      else if (which_alternative == 1)
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 5;
        }
      else if (which_alternative == 1)
        {
	  return 7;
        }
      else
        {
	  return 9;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 5;
        }
      else if (which_alternative == 0)
        {
	  return 6;
        }
      else if (((1 << which_alternative) & 0xa))
        {
	  return 7;
        }
      else
        {
	  return 9;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return 5;
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  return 7;
        }
      else
        {
	  return 9;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 6)
        {
	  return 5;
        }
      else if (which_alternative == 5)
        {
	  return 6;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 7;
        }
      else if (!((1 << which_alternative) & 0xa3))
        {
	  return 9;
        }
      else if (which_alternative == 1)
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 5;
        }
      else if (which_alternative == 8)
        {
	  return 6;
        }
      else if (((1 << which_alternative) & 0x83))
        {
	  return 7;
        }
      else
        {
	  return 9;
        }

    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 5;

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 5;
        }
      else if (which_alternative == 5)
        {
	  return 6;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 7;
        }
      else if (((1 << which_alternative) & 0xf))
        {
	  return 9;
        }
      else if (which_alternative == 4)
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 5;
        }
      else if (!((1 << which_alternative) & 0x7))
        {
	  return 7;
        }
      else
        {
	  return 9;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 5;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return 7;
        }
      else
        {
	  return 9;
        }

    case 413:  /* alignaddrdi_vis */
    case 361:  /* tle_lox10_sp64 */
    case 360:  /* tle_hix22_sp64 */
    case 359:  /* tie_add64 */
    case 357:  /* tie_lo10 */
    case 356:  /* tie_hi22 */
    case 355:  /* tldo_add64 */
    case 354:  /* tldo_lox10 */
    case 353:  /* tldo_hix22 */
    case 351:  /* tldm_add64 */
    case 350:  /* tldm_lo10 */
    case 349:  /* tldm_hi22 */
    case 347:  /* tgd_add64 */
    case 346:  /* tgd_lo10 */
    case 345:  /* tgd_hi22 */
    case 332:  /* nop */
    case 330:  /* blockage */
    case 255:  /* negsi2 */
    case 254:  /* *negdi2_sp64 */
    case 168:  /* *subdi3_sp64 */
    case 160:  /* *adddi3_sp64 */
    case 113:  /* *movtf_cc_reg_sp64 */
    case 112:  /* *movtf_cc_v9 */
    case 97:  /* *movtf_insn_sp64_no_fpu */
    case 95:  /* *movtf_insn_sp64 */
    case 87:  /* *movsf_high */
    case 86:  /* *movsf_lo_sum */
    case 81:  /* embmedany_textlo */
    case 80:  /* embmedany_textulo */
    case 79:  /* embmedany_texthi */
    case 78:  /* embmedany_textuhi */
    case 77:  /* embmedany_brsum */
    case 76:  /* embmedany_losum */
    case 75:  /* embmedany_sethi */
    case 74:  /* setlo */
    case 73:  /* sethm */
    case 72:  /* setlm */
    case 71:  /* sethh */
    case 70:  /* setl44 */
    case 69:  /* setm44 */
    case 68:  /* seth44 */
    case 67:  /* *losum_di_medlow */
    case 66:  /* *sethi_di_medlow */
    case 65:  /* *sethi_di_medlow_embmedany_pic */
    case 63:  /* movdi_high_pic */
    case 62:  /* movdi_lo_sum_pic */
    case 61:  /* *movdi_lo_sum_pic_label_ref */
    case 60:  /* *movdi_high_pic_label_ref */
    case 57:  /* *movsi_lo_sum_pic_label_ref */
    case 56:  /* *movsi_high_pic_label_ref */
    case 54:  /* movsi_high_pic */
    case 53:  /* movsi_lo_sum_pic */
    case 52:  /* *movsi_high */
    case 51:  /* *movsi_lo_sum */
    case 49:  /* *movhi_lo_sum */
    case 23:  /* *x_minus_i_eq_0 */
    case 22:  /* *x_plus_i_eq_0 */
    case 21:  /* *x_minus_i_ne_0 */
    case 20:  /* *x_plus_i_ne_0 */
    case 19:  /* *seqdi_zero_trunc */
    case 18:  /* *neg_seqdi_zero */
    case 17:  /* *seqdi_zero */
    case 16:  /* *seqsi_zero_extend */
    case 15:  /* *neg_seqsi_zero */
    case 14:  /* *seqsi_zero */
    case 13:  /* *snedi_zero_trunc */
    case 12:  /* *neg_snedi_zero */
    case 11:  /* *snedi_zero */
    case 10:  /* *snesi_zero_extend */
    case 9:  /* *neg_snesi_zero */
    case 8:  /* *snesi_zero */
      return 9;

    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 10 /* 0xa */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_SLOAD))
        {
	  return 5;
        }
      else if (cached_type == TYPE_FPLOAD)
        {
	  return 6;
        }
      else if ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE))
        {
	  return 7;
        }
      else if (cached_type == TYPE_SHIFT)
        {
	  return 8;
        }
      else if (cached_type == TYPE_IALU)
        {
	  return 9;
        }
      else if ((cached_type == TYPE_FP) || ((cached_type == TYPE_FPMOVE) || (cached_type == TYPE_FPCMP)))
        {
	  return 10 /* 0xa */;
        }
      else if (cached_type == TYPE_FPMUL)
        {
	  return 11 /* 0xb */;
        }
      else if (cached_type == TYPE_FPDIVS)
        {
	  return 12 /* 0xc */;
        }
      else if (cached_type == TYPE_FPDIVD)
        {
	  return 13 /* 0xd */;
        }
      else if ((cached_type == TYPE_FPSQRTS) || (cached_type == TYPE_FPSQRTD))
        {
	  return 14 /* 0xe */;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 15 /* 0xf */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_hypersparc (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
      return 2;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 286:  /* divsf3 */
      return 8;

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 12 /* 0xc */;

    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 17 /* 0x11 */;

    case 137:  /* *sign_extendsidi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x5))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0xa))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return 1;
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x60))
        {
	  return 1;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x104))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x83))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 1;
        }
      else if (!((1 << which_alternative) & 0x7))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 1;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_SLOAD) || (cached_type == TYPE_FPLOAD)))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE))
        {
	  return 2;
        }
      else if ((cached_type == TYPE_FP) || ((cached_type == TYPE_FPMOVE) || ((cached_type == TYPE_FPCMP) || (cached_type == TYPE_FPMUL))))
        {
	  return 1;
        }
      else if (cached_type == TYPE_FPDIVS)
        {
	  return 8;
        }
      else if (cached_type == TYPE_FPDIVD)
        {
	  return 12 /* 0xc */;
        }
      else if ((cached_type == TYPE_FPSQRTS) || ((cached_type == TYPE_FPSQRTD) || (cached_type == TYPE_IMUL)))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
internal_dfa_insn_code_hypersparc (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
      return 17 /* 0x11 */;

    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
      return 24 /* 0x18 */;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 286:  /* divsf3 */
      return 22 /* 0x16 */;

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 23 /* 0x17 */;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
      return 21 /* 0x15 */;

    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 25 /* 0x19 */;

    case 137:  /* *sign_extendsidi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 3)
        {
	  return 17 /* 0x11 */;
        }
      else if (which_alternative == 1)
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 17 /* 0x11 */;
        }
      else if (which_alternative == 1)
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 1)
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x5))
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0xa))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return 16 /* 0x10 */;
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x60))
        {
	  return 16 /* 0x10 */;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 17 /* 0x11 */;
        }
      else if (which_alternative == 1)
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x104))
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0x83))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 16 /* 0x10 */;

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 17 /* 0x11 */;
        }
      else if (which_alternative == 4)
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 16 /* 0x10 */;
        }
      else if (!((1 << which_alternative) & 0x7))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 16 /* 0x10 */;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 20 /* 0x14 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_SLOAD) || (cached_type == TYPE_FPLOAD)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE))
        {
	  return 17 /* 0x11 */;
        }
      else if ((cached_type == TYPE_FP) || ((cached_type == TYPE_FPMOVE) || (cached_type == TYPE_FPCMP)))
        {
	  return 20 /* 0x14 */;
        }
      else if (cached_type == TYPE_FPMUL)
        {
	  return 21 /* 0x15 */;
        }
      else if (cached_type == TYPE_FPDIVS)
        {
	  return 22 /* 0x16 */;
        }
      else if (cached_type == TYPE_FPDIVD)
        {
	  return 23 /* 0x17 */;
        }
      else if ((cached_type == TYPE_FPSQRTS) || (cached_type == TYPE_FPSQRTD))
        {
	  return 24 /* 0x18 */;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 25 /* 0x19 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_leon (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
      return 23 /* 0x17 */;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 286:  /* divsf3 */
    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 16 /* 0x10 */;

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xe))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x6e))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x7))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x1d))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x187))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 1;

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7c))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 137:  /* *sign_extendsidi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_SLOAD) || ((cached_type == TYPE_FPLOAD) || ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || ((cached_type == TYPE_FP) || ((cached_type == TYPE_FPMOVE) || (cached_type == TYPE_FPMUL))))))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_FPDIVS) || (cached_type == TYPE_FPDIVD))
        {
	  return 16 /* 0x10 */;
        }
      else if ((cached_type == TYPE_FPSQRTS) || (cached_type == TYPE_FPSQRTD))
        {
	  return 23 /* 0x17 */;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
internal_dfa_insn_code_leon (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
      return 27 /* 0x1b */;

    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
      return 31 /* 0x1f */;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 28 /* 0x1c */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 286:  /* divsf3 */
    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 30 /* 0x1e */;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
      return 29 /* 0x1d */;

    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
      return 28 /* 0x1c */;

    case 137:  /* *sign_extendsidi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 26 /* 0x1a */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 26 /* 0x1a */;
        }
      else if (which_alternative == 3)
        {
	  return 27 /* 0x1b */;
        }
      else if (which_alternative == 1)
        {
	  return 28 /* 0x1c */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 26 /* 0x1a */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 27 /* 0x1b */;
        }
      else if (which_alternative == 1)
        {
	  return 28 /* 0x1c */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 26 /* 0x1a */;
        }
      else if (which_alternative == 1)
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x5))
        {
	  return 26 /* 0x1a */;
        }
      else if (((1 << which_alternative) & 0xa))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return 26 /* 0x1a */;
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x60))
        {
	  return 26 /* 0x1a */;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 27 /* 0x1b */;
        }
      else if (which_alternative == 1)
        {
	  return 28 /* 0x1c */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x104))
        {
	  return 26 /* 0x1a */;
        }
      else if (((1 << which_alternative) & 0x83))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 26 /* 0x1a */;

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 26 /* 0x1a */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 27 /* 0x1b */;
        }
      else if (which_alternative == 4)
        {
	  return 28 /* 0x1c */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 26 /* 0x1a */;
        }
      else if (!((1 << which_alternative) & 0x7))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 26 /* 0x1a */;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_SLOAD) || (cached_type == TYPE_FPLOAD)))
        {
	  return 26 /* 0x1a */;
        }
      else if ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE))
        {
	  return 27 /* 0x1b */;
        }
      else if ((cached_type == TYPE_FP) || (cached_type == TYPE_FPMOVE))
        {
	  return 28 /* 0x1c */;
        }
      else if (cached_type == TYPE_FPMUL)
        {
	  return 29 /* 0x1d */;
        }
      else if ((cached_type == TYPE_FPDIVS) || (cached_type == TYPE_FPDIVD))
        {
	  return 30 /* 0x1e */;
        }
      else if ((cached_type == TYPE_FPSQRTS) || (cached_type == TYPE_FPSQRTD))
        {
	  return 31 /* 0x1f */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_sparclite (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
internal_dfa_insn_code_sparclite (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_f930 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
internal_dfa_insn_code_f930 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_f934 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
internal_dfa_insn_code_f934 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_sparclite86x (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
      return 2;

    case 302:  /* *ashldi3_sp64 */
    case 301:  /* ashlsi3 */
      extract_insn_cached (insn);
      if (! (const_one_operand (operands[2], VOIDmode)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 286:  /* divsf3 */
      return 8;

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 12 /* 0xc */;

    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 17 /* 0x11 */;

    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x5))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0xa))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return 1;
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x60))
        {
	  return 1;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x104))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x83))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 1;
        }
      else if (!((1 << which_alternative) & 0x7))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 1;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 319:  /* *sparc.md:5889 */
    case 318:  /* *sparc.md:5873 */
    case 317:  /* *sparc.md:5861 */
    case 316:  /* *sparc.md:5849 */
    case 314:  /* *lshrdi3_sp64 */
    case 313:  /* *lshrsi3_extend2 */
    case 312:  /* *lshrsi3_extend */
    case 311:  /* lshrsi3 */
    case 309:  /* *ashrdi3_sp64 */
    case 308:  /* *ashrsi3_extend2 */
    case 307:  /* *ashrsi3_extend */
    case 306:  /* ashrsi3 */
    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
    case 137:  /* *sign_extendsidi2_insn */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_SLOAD) || (cached_type == TYPE_FPLOAD)))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE))
        {
	  return 2;
        }
      else if ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_FP) || ((cached_type == TYPE_FPMOVE) || ((cached_type == TYPE_FPCMP) || (cached_type == TYPE_FPMUL))))))
        {
	  return 1;
        }
      else if (cached_type == TYPE_FPDIVS)
        {
	  return 8;
        }
      else if (cached_type == TYPE_FPDIVD)
        {
	  return 12 /* 0xc */;
        }
      else if ((cached_type == TYPE_FPSQRTS) || ((cached_type == TYPE_FPSQRTD) || (cached_type == TYPE_IMUL)))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
internal_dfa_insn_code_sparclite86x (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
      return 17 /* 0x11 */;

    case 319:  /* *sparc.md:5889 */
    case 318:  /* *sparc.md:5873 */
    case 317:  /* *sparc.md:5861 */
    case 316:  /* *sparc.md:5849 */
    case 314:  /* *lshrdi3_sp64 */
    case 313:  /* *lshrsi3_extend2 */
    case 312:  /* *lshrsi3_extend */
    case 311:  /* lshrsi3 */
    case 309:  /* *ashrdi3_sp64 */
    case 308:  /* *ashrsi3_extend2 */
    case 307:  /* *ashrsi3_extend */
    case 306:  /* ashrsi3 */
      return 19 /* 0x13 */;

    case 302:  /* *ashldi3_sp64 */
    case 301:  /* ashlsi3 */
      extract_insn_cached (insn);
      if (! (const_one_operand (operands[2], VOIDmode)))
        {
	  return 19 /* 0x13 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
      return 24 /* 0x18 */;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 286:  /* divsf3 */
      return 22 /* 0x16 */;

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 23 /* 0x17 */;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
      return 21 /* 0x15 */;

    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 25 /* 0x19 */;

    case 137:  /* *sign_extendsidi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 19 /* 0x13 */;
        }

    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 3)
        {
	  return 17 /* 0x11 */;
        }
      else if (which_alternative == 1)
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 17 /* 0x11 */;
        }
      else if (which_alternative == 1)
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 1)
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x5))
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0xa))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return 16 /* 0x10 */;
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x60))
        {
	  return 16 /* 0x10 */;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 17 /* 0x11 */;
        }
      else if (which_alternative == 1)
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x104))
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0x83))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 16 /* 0x10 */;

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 17 /* 0x11 */;
        }
      else if (which_alternative == 4)
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 16 /* 0x10 */;
        }
      else if (!((1 << which_alternative) & 0x7))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 16 /* 0x10 */;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      return 18 /* 0x12 */;

    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 20 /* 0x14 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_SLOAD) || (cached_type == TYPE_FPLOAD)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE))
        {
	  return 17 /* 0x11 */;
        }
      else if (cached_type == TYPE_BRANCH)
        {
	  return 18 /* 0x12 */;
        }
      else if (cached_type == TYPE_SHIFT)
        {
	  return 19 /* 0x13 */;
        }
      else if ((cached_type == TYPE_FP) || ((cached_type == TYPE_FPMOVE) || (cached_type == TYPE_FPCMP)))
        {
	  return 20 /* 0x14 */;
        }
      else if (cached_type == TYPE_FPMUL)
        {
	  return 21 /* 0x15 */;
        }
      else if (cached_type == TYPE_FPDIVS)
        {
	  return 22 /* 0x16 */;
        }
      else if (cached_type == TYPE_FPDIVD)
        {
	  return 23 /* 0x17 */;
        }
      else if ((cached_type == TYPE_FPSQRTS) || (cached_type == TYPE_FPSQRTD))
        {
	  return 24 /* 0x18 */;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 25 /* 0x19 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_sparclet (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
internal_dfa_insn_code_sparclet (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_tsc701 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 5;

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x6c))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x7))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xbf))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 3;

    case 88:  /* *movdf_insn_sp32 */
    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xc))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 137:  /* *sign_extendsidi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_SLOAD) || (cached_type == TYPE_STORE)))
        {
	  return 3;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
internal_dfa_insn_code_tsc701 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
      return 33 /* 0x21 */;

    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 34 /* 0x22 */;

    case 137:  /* *sign_extendsidi2_insn */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x24))
        {
	  return 32 /* 0x20 */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 32 /* 0x20 */;
        }
      else if (which_alternative == 1)
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return 32 /* 0x20 */;
        }
      else if (!((1 << which_alternative) & 0xf))
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 6)
        {
	  return 32 /* 0x20 */;
        }
      else if (!((1 << which_alternative) & 0xff))
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 32 /* 0x20 */;
        }
      else if (((1 << which_alternative) & 0x3))
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 377:  /* *tldo_ldx_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 32 /* 0x20 */;

    case 88:  /* *movdf_insn_sp32 */
    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 32 /* 0x20 */;
        }
      else if (which_alternative == 3)
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 32 /* 0x20 */;
        }
      else if (!((1 << which_alternative) & 0x7))
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 32 /* 0x20 */;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_SLOAD))
        {
	  return 32 /* 0x20 */;
        }
      else if (cached_type == TYPE_STORE)
        {
	  return 33 /* 0x21 */;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 34 /* 0x22 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_v9 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
internal_dfa_insn_code_v9 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 119 /* 0x77 */;

    }
}

int
insn_default_latency_ultrasparc (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_fptype cached_fptype ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 329:  /* *return_internal */
      return 0;

    case 300:  /* sqrtsf2 */
    case 286:  /* divsf3 */
      return 13 /* 0xd */;

    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 23 /* 0x17 */;

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
      return 4;

    case 137:  /* *sign_extendsidi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 376:  /* *tldo_ldsw1_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
      return 3;

    case 266:  /* one_cmplv4qi2 */
    case 265:  /* one_cmplv2hi2 */
    case 264:  /* one_cmplsi2 */
    case 263:  /* *one_cmplv8qi2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 241:  /* *xor_not_v4qi */
    case 240:  /* *xor_not_v2hi */
    case 239:  /* *xor_not_si */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 234:  /* xorv4qi3 */
    case 233:  /* xorv2hi3 */
    case 232:  /* xorsi3 */
    case 231:  /* *xorv8qi3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 227:  /* *or_not_v4qi */
    case 226:  /* *or_not_v2hi */
    case 225:  /* *or_not_si */
    case 224:  /* *or_not_v8qi_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 220:  /* iorv4qi3 */
    case 219:  /* iorv2hi3 */
    case 218:  /* iorsi3 */
    case 217:  /* *iorv8qi3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 213:  /* *and_not_v4qi */
    case 212:  /* *and_not_v2hi */
    case 211:  /* *and_not_si */
    case 210:  /* *and_not_v8qi_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 206:  /* andv4qi3 */
    case 205:  /* andv2hi3 */
    case 204:  /* andsi3 */
    case 203:  /* *andv8qi3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 200:  /* *anddi3_sp64 */
    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xe))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x6f))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x4a))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xf))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x5))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1c))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0x7d))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x187))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x104))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 414:  /* pdist_vis */
    case 412:  /* faligndatav8qi_vis */
    case 411:  /* faligndatav4hi_vis */
    case 410:  /* faligndatav2si_vis */
    case 409:  /* faligndatadi_vis */
    case 401:  /* fpmerge_vis */
    case 400:  /* fexpand_vis */
    case 399:  /* fpack32_vis */
    case 398:  /* fpackfix_vis */
    case 397:  /* fpack16_vis */
    case 396:  /* *nandv4qi_vis */
    case 395:  /* *nandv2hi_vis */
    case 394:  /* *nandsf_vis */
    case 393:  /* *nandv8qi_vis */
    case 392:  /* *nandv4hi_vis */
    case 391:  /* *nandv2si_vis */
    case 390:  /* *nanddf_vis */
    case 389:  /* subv2hi3 */
    case 388:  /* subv4hi3 */
    case 387:  /* subv2si3 */
    case 386:  /* addv2hi3 */
    case 385:  /* addv4hi3 */
    case 384:  /* addv2si3 */
    case 377:  /* *tldo_ldx_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 111:  /* *movtf_cc_reg_hq_sp64 */
    case 110:  /* *movtf_cc_hq_v9 */
    case 109:  /* movdf_cc_reg_sp64 */
    case 108:  /* movdf_cc_v9 */
    case 107:  /* *movsf_cc_reg_sp64 */
    case 106:  /* *movsf_cc_v9 */
    case 105:  /* *movdi_cc_reg_sp64 */
    case 104:  /* *movsi_cc_reg_sp64 */
    case 103:  /* *movhi_cc_reg_sp64 */
    case 102:  /* *movqi_cc_reg_sp64 */
    case 101:  /* *movdi_cc_v9 */
    case 100:  /* *movsi_cc_v9 */
    case 99:  /* *movhi_cc_v9 */
    case 98:  /* *movqi_cc_v9 */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 2;

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x58))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_MULTI) || ((cached_type == TYPE_SAVEW) || ((cached_type == TYPE_FLUSHW) || ((cached_type == TYPE_IFLUSH) || ((cached_type == TYPE_TRAP) || ((cached_type == TYPE_IALU) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_COMPARE) || (cached_type == TYPE_IALUX)))))))))
        {
	  return 1;
        }
      else if (cached_type == TYPE_CMOVE)
        {
	  return 2;
        }
      else if ((cached_type == TYPE_IMUL) || (cached_type == TYPE_IDIV))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD))
        {
	  return 2;
        }
      else if (cached_type == TYPE_SLOAD)
        {
	  return 3;
        }
      else if ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_CALL) || ((cached_type == TYPE_SIBCALL) || ((cached_type == TYPE_CALL_NO_DELAY_SLOT) || ((cached_type == TYPE_UNCOND_BRANCH) || ((cached_type == TYPE_FPMOVE) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE))))))))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_FPCMOVE) || (cached_type == TYPE_FPCRMOVE)) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE)))
        {
	  return 2;
        }
      else if ((cached_type == TYPE_FP) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE)))
        {
	  return 4;
        }
      else if ((cached_type == TYPE_FPCMP) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE)))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_FPMUL) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE)))
        {
	  return 4;
        }
      else if ((cached_type == TYPE_FPDIVS) || (cached_type == TYPE_FPSQRTS))
        {
	  return 13 /* 0xd */;
        }
      else if ((cached_type == TYPE_FPDIVD) || (cached_type == TYPE_FPSQRTD))
        {
	  return 23 /* 0x17 */;
        }
      else if ((cached_type == TYPE_FGA) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE)))
        {
	  return 2;
        }
      else if ((((cached_type == TYPE_FGM_PACK) || ((cached_type == TYPE_FGM_MUL) || (cached_type == TYPE_FGM_CMP))) && (((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE) || (cached_fptype == FPTYPE_DOUBLE))) || (cached_type == TYPE_FGM_PDIST))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    default:
      return 1;

    }
}

int
internal_dfa_insn_code_ultrasparc (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_fptype cached_fptype ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 396:  /* *nandv4qi_vis */
    case 395:  /* *nandv2hi_vis */
    case 394:  /* *nandsf_vis */
    case 389:  /* subv2hi3 */
    case 386:  /* addv2hi3 */
      return 60 /* 0x3c */;

    case 414:  /* pdist_vis */
    case 412:  /* faligndatav8qi_vis */
    case 411:  /* faligndatav4hi_vis */
    case 410:  /* faligndatav2si_vis */
    case 409:  /* faligndatadi_vis */
    case 401:  /* fpmerge_vis */
    case 400:  /* fexpand_vis */
    case 399:  /* fpack32_vis */
    case 398:  /* fpackfix_vis */
    case 397:  /* fpack16_vis */
    case 393:  /* *nandv8qi_vis */
    case 392:  /* *nandv4hi_vis */
    case 391:  /* *nandv2si_vis */
    case 390:  /* *nanddf_vis */
    case 388:  /* subv4hi3 */
    case 387:  /* subv2si3 */
    case 385:  /* addv4hi3 */
    case 384:  /* addv2si3 */
      return 61 /* 0x3d */;

    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
      return 45 /* 0x2d */;

    case 329:  /* *return_internal */
      return 119 /* 0x77 */;

    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 333:  /* *branch_sp64 */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
      return 47 /* 0x2f */;

    case 319:  /* *sparc.md:5889 */
    case 318:  /* *sparc.md:5873 */
    case 317:  /* *sparc.md:5861 */
    case 316:  /* *sparc.md:5849 */
    case 314:  /* *lshrdi3_sp64 */
    case 313:  /* *lshrsi3_extend2 */
    case 312:  /* *lshrsi3_extend */
    case 311:  /* lshrsi3 */
    case 309:  /* *ashrdi3_sp64 */
    case 308:  /* *ashrsi3_extend2 */
    case 307:  /* *ashrsi3_extend */
    case 306:  /* ashrsi3 */
      return 37 /* 0x25 */;

    case 302:  /* *ashldi3_sp64 */
    case 301:  /* ashlsi3 */
      extract_insn_cached (insn);
      if (const_one_operand (operands[2], VOIDmode))
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 37 /* 0x25 */;
        }

    case 293:  /* *abstf2_hq_v9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 48 /* 0x30 */;
        }
      else
        {
	  return 49 /* 0x31 */;
        }

    case 297:  /* abssf2 */
    case 291:  /* negsf2 */
      return 48 /* 0x30 */;

    case 296:  /* *absdf2_v9 */
    case 290:  /* *negdf2_v9 */
      return 49 /* 0x31 */;

    case 294:  /* *abstf2_v9 */
    case 288:  /* *negtf2_v9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 49 /* 0x31 */;
        }

    case 295:  /* *absdf2_notv9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 48 /* 0x30 */;
        }

    case 300:  /* sqrtsf2 */
    case 286:  /* divsf3 */
      return 58 /* 0x3a */;

    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 59 /* 0x3b */;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 282:  /* *muldf3_extend */
    case 280:  /* muldf3 */
      return 57 /* 0x39 */;

    case 283:  /* *multf3_extend */
    case 281:  /* mulsf3 */
    case 279:  /* *multf3_hq */
      return 56 /* 0x38 */;

    case 266:  /* one_cmplv4qi2 */
    case 265:  /* one_cmplv2hi2 */
    case 264:  /* one_cmplsi2 */
    case 241:  /* *xor_not_v4qi */
    case 240:  /* *xor_not_v2hi */
    case 239:  /* *xor_not_si */
    case 234:  /* xorv4qi3 */
    case 233:  /* xorv2hi3 */
    case 232:  /* xorsi3 */
    case 227:  /* *or_not_v4qi */
    case 226:  /* *or_not_v2hi */
    case 225:  /* *or_not_si */
    case 220:  /* iorv4qi3 */
    case 219:  /* iorv2hi3 */
    case 218:  /* iorsi3 */
    case 213:  /* *and_not_v4qi */
    case 212:  /* *and_not_v2hi */
    case 211:  /* *and_not_si */
    case 206:  /* andv4qi3 */
    case 205:  /* andv2hi3 */
    case 204:  /* andsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 60 /* 0x3c */;
        }

    case 263:  /* *one_cmplv8qi2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 231:  /* *xorv8qi3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 224:  /* *or_not_v8qi_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 217:  /* *iorv8qi3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 210:  /* *and_not_v8qi_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 203:  /* *andv8qi3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 200:  /* *anddi3_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 61 /* 0x3d */;
        }

    case 195:  /* udivdi3 */
    case 192:  /* divdi3 */
      return 42 /* 0x2a */;

    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 41 /* 0x29 */;

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 60 /* 0x3c */;
        }

    case 278:  /* subsf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 154:  /* *fix_trunctfsi2_hq */
    case 151:  /* *floatditf2_hq */
    case 148:  /* *floatsitf2_hq */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
      return 52 /* 0x34 */;

    case 277:  /* subdf3 */
    case 274:  /* adddf3 */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 143:  /* truncdfsf2 */
    case 140:  /* extendsfdf2 */
      return 53 /* 0x35 */;

    case 137:  /* *sign_extendsidi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 37 /* 0x25 */;
        }
      else
        {
	  return 44 /* 0x2c */;
        }

    case 376:  /* *tldo_ldsw1_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
      return 44 /* 0x2c */;

    case 119:  /* *zero_extendsidi2_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 37 /* 0x25 */;
        }
      else
        {
	  return 43 /* 0x2b */;
        }

    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 43 /* 0x2b */;
        }

    case 109:  /* movdf_cc_reg_sp64 */
    case 108:  /* movdf_cc_v9 */
      return 51 /* 0x33 */;

    case 111:  /* *movtf_cc_reg_hq_sp64 */
    case 110:  /* *movtf_cc_hq_v9 */
    case 107:  /* *movsf_cc_reg_sp64 */
    case 106:  /* *movsf_cc_v9 */
      return 50 /* 0x32 */;

    case 105:  /* *movdi_cc_reg_sp64 */
    case 104:  /* *movsi_cc_reg_sp64 */
    case 103:  /* *movhi_cc_reg_sp64 */
    case 102:  /* *movqi_cc_reg_sp64 */
    case 101:  /* *movdi_cc_v9 */
    case 100:  /* *movsi_cc_v9 */
    case 99:  /* *movhi_cc_v9 */
    case 98:  /* *movqi_cc_v9 */
      return 40 /* 0x28 */;

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xe))
        {
	  return 36 /* 0x24 */;
        }
      else if (which_alternative == 2)
        {
	  return 43 /* 0x2b */;
        }
      else if (which_alternative == 3)
        {
	  return 45 /* 0x2d */;
        }
      else
        {
	  return 48 /* 0x30 */;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x6f))
        {
	  return 36 /* 0x24 */;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 43 /* 0x2b */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 45 /* 0x2d */;
        }
      else if (which_alternative == 1)
        {
	  return 49 /* 0x31 */;
        }
      else
        {
	  return 61 /* 0x3d */;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return 36 /* 0x24 */;
        }
      else if (which_alternative == 0)
        {
	  return 43 /* 0x2b */;
        }
      else
        {
	  return 45 /* 0x2d */;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xf))
        {
	  return 36 /* 0x24 */;
        }
      else if (((1 << which_alternative) & 0x5))
        {
	  return 43 /* 0x2b */;
        }
      else
        {
	  return 45 /* 0x2d */;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 36 /* 0x24 */;
        }
      else if (which_alternative == 3)
        {
	  return 43 /* 0x2b */;
        }
      else
        {
	  return 45 /* 0x2d */;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1c))
        {
	  return 36 /* 0x24 */;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 43 /* 0x2b */;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 45 /* 0x2d */;
        }
      else if (which_alternative == 1)
        {
	  return 48 /* 0x30 */;
        }
      else
        {
	  return 60 /* 0x3c */;
        }

    case 59:  /* *movdi_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 36 /* 0x24 */;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 43 /* 0x2b */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 45 /* 0x2d */;
        }
      else if (which_alternative == 4)
        {
	  return 49 /* 0x31 */;
        }
      else
        {
	  return 61 /* 0x3d */;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x187))
        {
	  return 36 /* 0x24 */;
        }
      else if (((1 << which_alternative) & 0x104))
        {
	  return 43 /* 0x2b */;
        }
      else
        {
	  return 45 /* 0x2d */;
        }

    case 377:  /* *tldo_ldx_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 43 /* 0x2b */;

    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 36 /* 0x24 */;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 43 /* 0x2b */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 45 /* 0x2d */;
        }
      else if (which_alternative == 4)
        {
	  return 48 /* 0x30 */;
        }
      else
        {
	  return 60 /* 0x3c */;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 36 /* 0x24 */;
        }
      else if (which_alternative == 2)
        {
	  return 43 /* 0x2b */;
        }
      else
        {
	  return 45 /* 0x2d */;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 36 /* 0x24 */;
        }
      else if (which_alternative == 1)
        {
	  return 43 /* 0x2b */;
        }
      else
        {
	  return 45 /* 0x2d */;
        }

    case 423:  /* *ldstubsi */
    case 422:  /* *ldstubhi */
    case 421:  /* *ldstubqi */
    case 420:  /* *swapsi */
    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 418:  /* *sync_compare_and_swapdi */
    case 417:  /* *sync_compare_and_swapsi */
    case 416:  /* *membar */
    case 415:  /* *stbar */
    case 383:  /* stack_protect_testdi */
    case 382:  /* stack_protect_setdi */
    case 344:  /* *sparc.md:6906 */
    case 343:  /* *sparc.md:6894 */
    case 342:  /* trap */
    case 339:  /* ffssi2 */
    case 338:  /* flushdi */
    case 337:  /* flush */
    case 336:  /* do_builtin_setjmp_setup */
    case 335:  /* goto_handler_and_restore */
    case 334:  /* flush_register_windows */
    case 331:  /* probe_stack_rangedi */
    case 328:  /* save_register_windowdi */
    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
    case 196:  /* *cmp_udiv_cc_set */
    case 194:  /* udivsi3_sp64 */
    case 193:  /* *cmp_sdiv_cc_set */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 188:  /* const_umulsidi3_v8plus */
    case 185:  /* umulsidi3_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 176:  /* muldi3_v8plus */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
      return 35 /* 0x23 */;

    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      return 46 /* 0x2e */;

    case 167:  /* *subx_extend_sp64 */
    case 166:  /* subx */
    case 159:  /* *addx_extend_sp64 */
    case 158:  /* addx */
    case 36:  /* *x_minus_sgeu */
    case 35:  /* *sgeu_plus_x */
    case 34:  /* *x_minus_sltu_plus_y */
    case 33:  /* *x_minus_y_minus_sltu */
    case 32:  /* *x_minus_sltu */
    case 31:  /* *sltu_plus_x_plus_y */
    case 30:  /* *sltu_plus_x */
    case 29:  /* *neg_sgeu_insn */
    case 28:  /* *sgeu_insn */
    case 27:  /* *neg_sltu_plus_x */
    case 26:  /* *neg_sltu_minus_x */
    case 25:  /* *neg_sltu_insn */
    case 24:  /* *sltu_insn */
      return 39 /* 0x27 */;

    case 6:  /* *cmpdf_fp */
    case 3:  /* *cmpdf_fpe */
      return 55 /* 0x37 */;

    case 7:  /* *cmptf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 54 /* 0x36 */;

    case 305:  /* *cmp_cc_set_ashift_1 */
    case 304:  /* *cmp_cc_ashift_1 */
    case 272:  /* *cmp_ccx_set64 */
    case 271:  /* *cmp_cc_set */
    case 270:  /* *cmp_ccx_set_not */
    case 269:  /* *cmp_cc_set_not */
    case 268:  /* *cmp_ccx_not */
    case 267:  /* *cmp_cc_not */
    case 259:  /* *cmp_ccx_set_neg */
    case 258:  /* *cmp_cc_set_neg */
    case 257:  /* *cmp_ccx_neg */
    case 256:  /* *cmp_cc_neg */
    case 253:  /* *cmp_ccx_arith_op_not_set */
    case 252:  /* *cmp_cc_arith_op_not_set */
    case 251:  /* *cmp_ccx_arith_op_not */
    case 250:  /* *cmp_cc_arith_op_not */
    case 249:  /* *cmp_ccx_xor_not_set */
    case 248:  /* *cmp_cc_xor_not_set */
    case 247:  /* *cmp_ccx_xor_not */
    case 246:  /* *cmp_cc_xor_not */
    case 245:  /* *cmp_ccx_arith_op_set */
    case 244:  /* *cmp_cc_arith_op_set */
    case 243:  /* *cmp_ccx_arith_op */
    case 242:  /* *cmp_cc_arith_op */
    case 173:  /* *cmp_minus_ccx_set */
    case 172:  /* cmp_minus_cc_set */
    case 171:  /* *cmp_minus_ccx */
    case 170:  /* *cmp_minus_cc */
    case 165:  /* *cmp_ccx_plus_set */
    case 164:  /* *cmp_cc_plus_set */
    case 163:  /* *cmp_ccx_plus */
    case 162:  /* *cmp_cc_plus */
    case 139:  /* *cmp_zero_extract_sp64 */
    case 138:  /* *cmp_zero_extract */
    case 131:  /* *cmp_diqi_trunc_set */
    case 130:  /* *cmp_diqi_trunc */
    case 129:  /* *cmp_siqi_trunc_set */
    case 128:  /* *cmp_siqi_trunc */
    case 127:  /* *cmp_zero_extendqidi2_andcc_set */
    case 126:  /* *cmp_zero_extendqidi2_set */
    case 125:  /* *cmp_zero_qi_sp64 */
    case 124:  /* *cmp_zero_extendqidi2 */
    case 123:  /* *cmp_zero_extendqisi2_andcc_set */
    case 122:  /* *cmp_zero_extendqisi2_set */
    case 121:  /* *cmp_zero_qi */
    case 120:  /* *cmp_zero_extendqisi2 */
    case 1:  /* *cmpdi_sp64 */
    case 0:  /* *cmpsi_insn */
      return 38 /* 0x26 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_MULTI) || ((cached_type == TYPE_SAVEW) || ((cached_type == TYPE_FLUSHW) || ((cached_type == TYPE_IFLUSH) || (cached_type == TYPE_TRAP)))))
        {
	  return 35 /* 0x23 */;
        }
      else if (cached_type == TYPE_IALU)
        {
	  return 36 /* 0x24 */;
        }
      else if (cached_type == TYPE_SHIFT)
        {
	  return 37 /* 0x25 */;
        }
      else if (cached_type == TYPE_COMPARE)
        {
	  return 38 /* 0x26 */;
        }
      else if (cached_type == TYPE_IALUX)
        {
	  return 39 /* 0x27 */;
        }
      else if (cached_type == TYPE_CMOVE)
        {
	  return 40 /* 0x28 */;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 41 /* 0x29 */;
        }
      else if (cached_type == TYPE_IDIV)
        {
	  return 42 /* 0x2a */;
        }
      else if ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD))
        {
	  return 43 /* 0x2b */;
        }
      else if (cached_type == TYPE_SLOAD)
        {
	  return 44 /* 0x2c */;
        }
      else if ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE))
        {
	  return 45 /* 0x2d */;
        }
      else if (cached_type == TYPE_BRANCH)
        {
	  return 46 /* 0x2e */;
        }
      else if ((cached_type == TYPE_CALL) || ((cached_type == TYPE_SIBCALL) || ((cached_type == TYPE_CALL_NO_DELAY_SLOT) || (cached_type == TYPE_UNCOND_BRANCH))))
        {
	  return 47 /* 0x2f */;
        }
      else if ((cached_type == TYPE_FPMOVE) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE))
        {
	  return 48 /* 0x30 */;
        }
      else if ((cached_type == TYPE_FPMOVE) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_DOUBLE))
        {
	  return 49 /* 0x31 */;
        }
      else if (((cached_type == TYPE_FPCMOVE) || (cached_type == TYPE_FPCRMOVE)) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE))
        {
	  return 50 /* 0x32 */;
        }
      else if (((cached_type == TYPE_FPCMOVE) || (cached_type == TYPE_FPCRMOVE)) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_DOUBLE))
        {
	  return 51 /* 0x33 */;
        }
      else if ((cached_type == TYPE_FP) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE))
        {
	  return 52 /* 0x34 */;
        }
      else if ((cached_type == TYPE_FP) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_DOUBLE))
        {
	  return 53 /* 0x35 */;
        }
      else if ((cached_type == TYPE_FPCMP) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE))
        {
	  return 54 /* 0x36 */;
        }
      else if ((cached_type == TYPE_FPCMP) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_DOUBLE))
        {
	  return 55 /* 0x37 */;
        }
      else if ((cached_type == TYPE_FPMUL) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE))
        {
	  return 56 /* 0x38 */;
        }
      else if ((cached_type == TYPE_FPMUL) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_DOUBLE))
        {
	  return 57 /* 0x39 */;
        }
      else if ((cached_type == TYPE_FPDIVS) || (cached_type == TYPE_FPSQRTS))
        {
	  return 58 /* 0x3a */;
        }
      else if ((cached_type == TYPE_FPDIVD) || (cached_type == TYPE_FPSQRTD))
        {
	  return 59 /* 0x3b */;
        }
      else if ((cached_type == TYPE_FGA) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE))
        {
	  return 60 /* 0x3c */;
        }
      else if ((cached_type == TYPE_FGA) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_DOUBLE))
        {
	  return 61 /* 0x3d */;
        }
      else if (((cached_type == TYPE_FGM_PACK) || ((cached_type == TYPE_FGM_MUL) || (cached_type == TYPE_FGM_CMP))) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_SINGLE))
        {
	  return 62 /* 0x3e */;
        }
      else if (((cached_type == TYPE_FGM_PACK) || ((cached_type == TYPE_FGM_MUL) || (cached_type == TYPE_FGM_CMP))) && ((cached_fptype = get_attr_fptype (insn)) == FPTYPE_DOUBLE))
        {
	  return 63 /* 0x3f */;
        }
      else if (cached_type == TYPE_FGM_PDIST)
        {
	  return 64 /* 0x40 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    default:
      return 36 /* 0x24 */;

    }
}

int
insn_default_latency_ultrasparc3 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_us3load_type cached_us3load_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
      return 29 /* 0x1d */;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 286:  /* divsf3 */
      return 17 /* 0x11 */;

    case 300:  /* sqrtsf2 */
    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 20 /* 0x14 */;

    case 195:  /* udivdi3 */
    case 192:  /* divdi3 */
      return 72 /* 0x48 */;

    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 7;

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
      return 4;

    case 119:  /* *zero_extendsidi2_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 266:  /* one_cmplv4qi2 */
    case 265:  /* one_cmplv2hi2 */
    case 264:  /* one_cmplsi2 */
    case 263:  /* *one_cmplv8qi2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 241:  /* *xor_not_v4qi */
    case 240:  /* *xor_not_v2hi */
    case 239:  /* *xor_not_si */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 234:  /* xorv4qi3 */
    case 233:  /* xorv2hi3 */
    case 232:  /* xorsi3 */
    case 231:  /* *xorv8qi3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 227:  /* *or_not_v4qi */
    case 226:  /* *or_not_v2hi */
    case 225:  /* *or_not_si */
    case 224:  /* *or_not_v8qi_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 220:  /* iorv4qi3 */
    case 219:  /* iorv2hi3 */
    case 218:  /* iorsi3 */
    case 217:  /* *iorv8qi3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 213:  /* *and_not_v4qi */
    case 212:  /* *and_not_v2hi */
    case 211:  /* *and_not_si */
    case 210:  /* *and_not_v8qi_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 206:  /* andv4qi3 */
    case 205:  /* andv2hi3 */
    case 204:  /* andsi3 */
    case 203:  /* *andv8qi3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 200:  /* *anddi3_sp64 */
    case 137:  /* *sign_extendsidi2_insn */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 414:  /* pdist_vis */
    case 412:  /* faligndatav8qi_vis */
    case 411:  /* faligndatav4hi_vis */
    case 410:  /* faligndatav2si_vis */
    case 409:  /* faligndatadi_vis */
    case 401:  /* fpmerge_vis */
    case 400:  /* fexpand_vis */
    case 399:  /* fpack32_vis */
    case 398:  /* fpackfix_vis */
    case 397:  /* fpack16_vis */
    case 396:  /* *nandv4qi_vis */
    case 395:  /* *nandv2hi_vis */
    case 394:  /* *nandsf_vis */
    case 393:  /* *nandv8qi_vis */
    case 392:  /* *nandv4hi_vis */
    case 391:  /* *nandv2si_vis */
    case 390:  /* *nanddf_vis */
    case 389:  /* subv2hi3 */
    case 388:  /* subv4hi3 */
    case 387:  /* subv2si3 */
    case 386:  /* addv2hi3 */
    case 385:  /* addv4hi3 */
    case 384:  /* addv2si3 */
    case 376:  /* *tldo_ldsw1_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 111:  /* *movtf_cc_reg_hq_sp64 */
    case 110:  /* *movtf_cc_hq_v9 */
    case 109:  /* movdf_cc_reg_sp64 */
    case 108:  /* movdf_cc_v9 */
    case 107:  /* *movsf_cc_reg_sp64 */
    case 106:  /* *movsf_cc_v9 */
      return 3;

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xe))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x6f))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xf))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x5))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1c))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x187))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x104))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 377:  /* *tldo_ldx_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 105:  /* *movdi_cc_reg_sp64 */
    case 104:  /* *movsi_cc_reg_sp64 */
    case 103:  /* *movhi_cc_reg_sp64 */
    case 102:  /* *movqi_cc_reg_sp64 */
    case 101:  /* *movdi_cc_v9 */
    case 100:  /* *movsi_cc_v9 */
    case 99:  /* *movhi_cc_v9 */
    case 98:  /* *movqi_cc_v9 */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 2;

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 329:  /* *return_internal */
    case 167:  /* *subx_extend_sp64 */
    case 166:  /* subx */
    case 159:  /* *addx_extend_sp64 */
    case 158:  /* addx */
    case 36:  /* *x_minus_sgeu */
    case 35:  /* *sgeu_plus_x */
    case 34:  /* *x_minus_sltu_plus_y */
    case 33:  /* *x_minus_y_minus_sltu */
    case 32:  /* *x_minus_sltu */
    case 31:  /* *sltu_plus_x_plus_y */
    case 30:  /* *sltu_plus_x */
    case 29:  /* *neg_sgeu_insn */
    case 28:  /* *sgeu_insn */
    case 27:  /* *neg_sltu_plus_x */
    case 26:  /* *neg_sltu_minus_x */
    case 25:  /* *neg_sltu_insn */
    case 24:  /* *sltu_insn */
      return 0;

    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 5;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_MULTI) || ((cached_type == TYPE_SAVEW) || ((cached_type == TYPE_FLUSHW) || ((cached_type == TYPE_IFLUSH) || ((cached_type == TYPE_TRAP) || ((cached_type == TYPE_IALU) || ((cached_type == TYPE_SHIFT) || (cached_type == TYPE_COMPARE))))))))
        {
	  return 1;
        }
      else if (cached_type == TYPE_CMOVE)
        {
	  return 2;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 7;
        }
      else if (cached_type == TYPE_IDIV)
        {
	  return 72 /* 0x48 */;
        }
      else if (((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD)) && ((cached_us3load_type = get_attr_us3load_type (insn)) == US3LOAD_TYPE_2CYCLE))
        {
	  return 2;
        }
      else if (((cached_type == TYPE_LOAD) || (cached_type == TYPE_SLOAD)) && ((cached_us3load_type = get_attr_us3load_type (insn)) == US3LOAD_TYPE_3CYCLE))
        {
	  return 3;
        }
      else if ((cached_type == TYPE_STORE) || ((cached_type == TYPE_FPSTORE) || ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_CALL) || ((cached_type == TYPE_SIBCALL) || ((cached_type == TYPE_CALL_NO_DELAY_SLOT) || (cached_type == TYPE_UNCOND_BRANCH)))))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_FPMOVE) || ((cached_type == TYPE_FPCMOVE) || (cached_type == TYPE_FPCRMOVE)))
        {
	  return 3;
        }
      else if (cached_type == TYPE_FP)
        {
	  return 4;
        }
      else if (cached_type == TYPE_FPCMP)
        {
	  return 5;
        }
      else if (cached_type == TYPE_FPMUL)
        {
	  return 4;
        }
      else if (cached_type == TYPE_FPDIVS)
        {
	  return 17 /* 0x11 */;
        }
      else if ((cached_type == TYPE_FPSQRTS) || (cached_type == TYPE_FPDIVD))
        {
	  return 20 /* 0x14 */;
        }
      else if (cached_type == TYPE_FPSQRTD)
        {
	  return 29 /* 0x1d */;
        }
      else if (cached_type == TYPE_FGA)
        {
	  return 3;
        }
      else if ((cached_type == TYPE_FGM_PACK) || ((cached_type == TYPE_FGM_MUL) || ((cached_type == TYPE_FGM_CMP) || (cached_type == TYPE_FGM_PDIST))))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    default:
      return 1;

    }
}

int
internal_dfa_insn_code_ultrasparc3 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_us3load_type cached_us3load_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 414:  /* pdist_vis */
    case 412:  /* faligndatav8qi_vis */
    case 411:  /* faligndatav4hi_vis */
    case 410:  /* faligndatav2si_vis */
    case 409:  /* faligndatadi_vis */
    case 401:  /* fpmerge_vis */
    case 400:  /* fexpand_vis */
    case 399:  /* fpack32_vis */
    case 398:  /* fpackfix_vis */
    case 397:  /* fpack16_vis */
    case 396:  /* *nandv4qi_vis */
    case 395:  /* *nandv2hi_vis */
    case 394:  /* *nandsf_vis */
    case 393:  /* *nandv8qi_vis */
    case 392:  /* *nandv4hi_vis */
    case 391:  /* *nandv2si_vis */
    case 390:  /* *nanddf_vis */
    case 389:  /* subv2hi3 */
    case 388:  /* subv4hi3 */
    case 387:  /* subv2si3 */
    case 386:  /* addv2hi3 */
    case 385:  /* addv4hi3 */
    case 384:  /* addv2si3 */
      return 86 /* 0x56 */;

    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
      return 73 /* 0x49 */;

    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 333:  /* *branch_sp64 */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
      return 75 /* 0x4b */;

    case 300:  /* sqrtsf2 */
      return 83 /* 0x53 */;

    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
      return 85 /* 0x55 */;

    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
      return 76 /* 0x4c */;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 66 /* 0x42 */;
        }
      else
        {
	  return 76 /* 0x4c */;
        }

    case 286:  /* divsf3 */
      return 82 /* 0x52 */;

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 84 /* 0x54 */;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
      return 81 /* 0x51 */;

    case 266:  /* one_cmplv4qi2 */
    case 265:  /* one_cmplv2hi2 */
    case 264:  /* one_cmplsi2 */
    case 263:  /* *one_cmplv8qi2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 241:  /* *xor_not_v4qi */
    case 240:  /* *xor_not_v2hi */
    case 239:  /* *xor_not_si */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 234:  /* xorv4qi3 */
    case 233:  /* xorv2hi3 */
    case 232:  /* xorsi3 */
    case 231:  /* *xorv8qi3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 227:  /* *or_not_v4qi */
    case 226:  /* *or_not_v2hi */
    case 225:  /* *or_not_si */
    case 224:  /* *or_not_v8qi_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 220:  /* iorv4qi3 */
    case 219:  /* iorv2hi3 */
    case 218:  /* iorsi3 */
    case 217:  /* *iorv8qi3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 213:  /* *and_not_v4qi */
    case 212:  /* *and_not_v2hi */
    case 211:  /* *and_not_si */
    case 210:  /* *and_not_v8qi_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 206:  /* andv4qi3 */
    case 205:  /* andv2hi3 */
    case 204:  /* andsi3 */
    case 203:  /* *andv8qi3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 200:  /* *anddi3_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 66 /* 0x42 */;
        }
      else
        {
	  return 86 /* 0x56 */;
        }

    case 195:  /* udivdi3 */
    case 192:  /* divdi3 */
      return 70 /* 0x46 */;

    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 69 /* 0x45 */;

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 66 /* 0x42 */;
        }
      else
        {
	  return 86 /* 0x56 */;
        }

    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
      return 79 /* 0x4f */;

    case 119:  /* *zero_extendsidi2_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 66 /* 0x42 */;
        }
      else
        {
	  return 71 /* 0x47 */;
        }

    case 137:  /* *sign_extendsidi2_insn */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 66 /* 0x42 */;
        }
      else
        {
	  return 72 /* 0x48 */;
        }

    case 376:  /* *tldo_ldsw1_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
      return 72 /* 0x48 */;

    case 111:  /* *movtf_cc_reg_hq_sp64 */
    case 109:  /* movdf_cc_reg_sp64 */
    case 107:  /* *movsf_cc_reg_sp64 */
      return 78 /* 0x4e */;

    case 110:  /* *movtf_cc_hq_v9 */
    case 108:  /* movdf_cc_v9 */
    case 106:  /* *movsf_cc_v9 */
      return 77 /* 0x4d */;

    case 105:  /* *movdi_cc_reg_sp64 */
    case 104:  /* *movsi_cc_reg_sp64 */
    case 103:  /* *movhi_cc_reg_sp64 */
    case 102:  /* *movqi_cc_reg_sp64 */
    case 101:  /* *movdi_cc_v9 */
    case 100:  /* *movsi_cc_v9 */
    case 99:  /* *movhi_cc_v9 */
    case 98:  /* *movqi_cc_v9 */
      return 68 /* 0x44 */;

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xe))
        {
	  return 66 /* 0x42 */;
        }
      else if (which_alternative == 2)
        {
	  return 71 /* 0x47 */;
        }
      else if (which_alternative == 3)
        {
	  return 73 /* 0x49 */;
        }
      else
        {
	  return 76 /* 0x4c */;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 66 /* 0x42 */;
        }
      else if (which_alternative == 1)
        {
	  return 71 /* 0x47 */;
        }
      else
        {
	  return 73 /* 0x49 */;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x6f))
        {
	  return 66 /* 0x42 */;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 71 /* 0x47 */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 73 /* 0x49 */;
        }
      else if (which_alternative == 1)
        {
	  return 76 /* 0x4c */;
        }
      else
        {
	  return 86 /* 0x56 */;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return 66 /* 0x42 */;
        }
      else if (which_alternative == 0)
        {
	  return 71 /* 0x47 */;
        }
      else
        {
	  return 73 /* 0x49 */;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xf))
        {
	  return 66 /* 0x42 */;
        }
      else if (((1 << which_alternative) & 0x5))
        {
	  return 71 /* 0x47 */;
        }
      else
        {
	  return 73 /* 0x49 */;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 66 /* 0x42 */;
        }
      else if (which_alternative == 3)
        {
	  return 71 /* 0x47 */;
        }
      else
        {
	  return 73 /* 0x49 */;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1c))
        {
	  return 66 /* 0x42 */;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 71 /* 0x47 */;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 73 /* 0x49 */;
        }
      else if (which_alternative == 1)
        {
	  return 76 /* 0x4c */;
        }
      else
        {
	  return 86 /* 0x56 */;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x187))
        {
	  return 66 /* 0x42 */;
        }
      else if (((1 << which_alternative) & 0x104))
        {
	  return 71 /* 0x47 */;
        }
      else
        {
	  return 73 /* 0x49 */;
        }

    case 377:  /* *tldo_ldx_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 71 /* 0x47 */;

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 66 /* 0x42 */;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 71 /* 0x47 */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 73 /* 0x49 */;
        }
      else if (which_alternative == 4)
        {
	  return 76 /* 0x4c */;
        }
      else
        {
	  return 86 /* 0x56 */;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 66 /* 0x42 */;
        }
      else if (which_alternative == 2)
        {
	  return 72 /* 0x48 */;
        }
      else
        {
	  return 73 /* 0x49 */;
        }

    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 66 /* 0x42 */;
        }
      else if (which_alternative == 1)
        {
	  return 72 /* 0x48 */;
        }
      else
        {
	  return 73 /* 0x49 */;
        }

    case 423:  /* *ldstubsi */
    case 422:  /* *ldstubhi */
    case 421:  /* *ldstubqi */
    case 420:  /* *swapsi */
    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 418:  /* *sync_compare_and_swapdi */
    case 417:  /* *sync_compare_and_swapsi */
    case 416:  /* *membar */
    case 415:  /* *stbar */
    case 383:  /* stack_protect_testdi */
    case 382:  /* stack_protect_setdi */
    case 344:  /* *sparc.md:6906 */
    case 343:  /* *sparc.md:6894 */
    case 342:  /* trap */
    case 339:  /* ffssi2 */
    case 338:  /* flushdi */
    case 337:  /* flush */
    case 336:  /* do_builtin_setjmp_setup */
    case 335:  /* goto_handler_and_restore */
    case 334:  /* flush_register_windows */
    case 331:  /* probe_stack_rangedi */
    case 328:  /* save_register_windowdi */
    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
    case 196:  /* *cmp_udiv_cc_set */
    case 194:  /* udivsi3_sp64 */
    case 193:  /* *cmp_sdiv_cc_set */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 188:  /* const_umulsidi3_v8plus */
    case 185:  /* umulsidi3_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 176:  /* muldi3_v8plus */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
      return 65 /* 0x41 */;

    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      return 74 /* 0x4a */;

    case 329:  /* *return_internal */
    case 167:  /* *subx_extend_sp64 */
    case 166:  /* subx */
    case 159:  /* *addx_extend_sp64 */
    case 158:  /* addx */
    case 36:  /* *x_minus_sgeu */
    case 35:  /* *sgeu_plus_x */
    case 34:  /* *x_minus_sltu_plus_y */
    case 33:  /* *x_minus_y_minus_sltu */
    case 32:  /* *x_minus_sltu */
    case 31:  /* *sltu_plus_x_plus_y */
    case 30:  /* *sltu_plus_x */
    case 29:  /* *neg_sgeu_insn */
    case 28:  /* *sgeu_insn */
    case 27:  /* *neg_sltu_plus_x */
    case 26:  /* *neg_sltu_minus_x */
    case 25:  /* *neg_sltu_insn */
    case 24:  /* *sltu_insn */
      return 119 /* 0x77 */;

    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 80 /* 0x50 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_MULTI) || ((cached_type == TYPE_SAVEW) || ((cached_type == TYPE_FLUSHW) || ((cached_type == TYPE_IFLUSH) || (cached_type == TYPE_TRAP)))))
        {
	  return 65 /* 0x41 */;
        }
      else if ((cached_type == TYPE_IALU) || ((cached_type == TYPE_SHIFT) || (cached_type == TYPE_COMPARE)))
        {
	  return 66 /* 0x42 */;
        }
      else if (cached_type == TYPE_CMOVE)
        {
	  return 68 /* 0x44 */;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 69 /* 0x45 */;
        }
      else if (cached_type == TYPE_IDIV)
        {
	  return 70 /* 0x46 */;
        }
      else if (((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD)) && ((cached_us3load_type = get_attr_us3load_type (insn)) == US3LOAD_TYPE_2CYCLE))
        {
	  return 71 /* 0x47 */;
        }
      else if (((cached_type == TYPE_LOAD) || (cached_type == TYPE_SLOAD)) && ((cached_us3load_type = get_attr_us3load_type (insn)) == US3LOAD_TYPE_3CYCLE))
        {
	  return 72 /* 0x48 */;
        }
      else if ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE))
        {
	  return 73 /* 0x49 */;
        }
      else if (cached_type == TYPE_BRANCH)
        {
	  return 74 /* 0x4a */;
        }
      else if ((cached_type == TYPE_CALL) || ((cached_type == TYPE_SIBCALL) || ((cached_type == TYPE_CALL_NO_DELAY_SLOT) || (cached_type == TYPE_UNCOND_BRANCH))))
        {
	  return 75 /* 0x4b */;
        }
      else if (cached_type == TYPE_FPMOVE)
        {
	  return 76 /* 0x4c */;
        }
      else if (cached_type == TYPE_FPCMOVE)
        {
	  return 77 /* 0x4d */;
        }
      else if (cached_type == TYPE_FPCRMOVE)
        {
	  return 78 /* 0x4e */;
        }
      else if (cached_type == TYPE_FP)
        {
	  return 79 /* 0x4f */;
        }
      else if (cached_type == TYPE_FPCMP)
        {
	  return 80 /* 0x50 */;
        }
      else if (cached_type == TYPE_FPMUL)
        {
	  return 81 /* 0x51 */;
        }
      else if (cached_type == TYPE_FPDIVS)
        {
	  return 82 /* 0x52 */;
        }
      else if (cached_type == TYPE_FPSQRTS)
        {
	  return 83 /* 0x53 */;
        }
      else if (cached_type == TYPE_FPDIVD)
        {
	  return 84 /* 0x54 */;
        }
      else if (cached_type == TYPE_FPSQRTD)
        {
	  return 85 /* 0x55 */;
        }
      else if (cached_type == TYPE_FGA)
        {
	  return 86 /* 0x56 */;
        }
      else if ((cached_type == TYPE_FGM_PACK) || ((cached_type == TYPE_FGM_MUL) || (cached_type == TYPE_FGM_CMP)))
        {
	  return 87 /* 0x57 */;
        }
      else if (cached_type == TYPE_FGM_PDIST)
        {
	  return 88 /* 0x58 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    default:
      return 66 /* 0x42 */;

    }
}

int
insn_default_latency_niagara (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 328:  /* save_register_windowdi */
      return 4;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 8;
        }

    case 286:  /* divsf3 */
      return 54 /* 0x36 */;

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 83 /* 0x53 */;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
      return 29 /* 0x1d */;

    case 266:  /* one_cmplv4qi2 */
    case 265:  /* one_cmplv2hi2 */
    case 264:  /* one_cmplsi2 */
    case 263:  /* *one_cmplv8qi2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 241:  /* *xor_not_v4qi */
    case 240:  /* *xor_not_v2hi */
    case 239:  /* *xor_not_si */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 234:  /* xorv4qi3 */
    case 233:  /* xorv2hi3 */
    case 232:  /* xorsi3 */
    case 231:  /* *xorv8qi3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 227:  /* *or_not_v4qi */
    case 226:  /* *or_not_v2hi */
    case 225:  /* *or_not_si */
    case 224:  /* *or_not_v8qi_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 220:  /* iorv4qi3 */
    case 219:  /* iorv2hi3 */
    case 218:  /* iorsi3 */
    case 217:  /* *iorv8qi3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 213:  /* *and_not_v4qi */
    case 212:  /* *and_not_v2hi */
    case 211:  /* *and_not_si */
    case 210:  /* *and_not_v8qi_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 206:  /* andv4qi3 */
    case 205:  /* andv2hi3 */
    case 204:  /* andsi3 */
    case 203:  /* *andv8qi3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 200:  /* *anddi3_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 8;
        }

    case 195:  /* udivdi3 */
    case 192:  /* divdi3 */
      return 72 /* 0x48 */;

    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 11 /* 0xb */;

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 8;
        }

    case 137:  /* *sign_extendsidi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 414:  /* pdist_vis */
    case 412:  /* faligndatav8qi_vis */
    case 411:  /* faligndatav4hi_vis */
    case 410:  /* faligndatav2si_vis */
    case 409:  /* faligndatadi_vis */
    case 401:  /* fpmerge_vis */
    case 400:  /* fexpand_vis */
    case 399:  /* fpack32_vis */
    case 398:  /* fpackfix_vis */
    case 397:  /* fpack16_vis */
    case 396:  /* *nandv4qi_vis */
    case 395:  /* *nandv2hi_vis */
    case 394:  /* *nandsf_vis */
    case 393:  /* *nandv8qi_vis */
    case 392:  /* *nandv4hi_vis */
    case 391:  /* *nandv2si_vis */
    case 390:  /* *nanddf_vis */
    case 389:  /* subv2hi3 */
    case 388:  /* subv4hi3 */
    case 387:  /* subv2si3 */
    case 386:  /* addv2hi3 */
    case 385:  /* addv4hi3 */
    case 384:  /* addv2si3 */
    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 111:  /* *movtf_cc_reg_hq_sp64 */
    case 110:  /* *movtf_cc_hq_v9 */
    case 109:  /* movdf_cc_reg_sp64 */
    case 108:  /* movdf_cc_v9 */
    case 107:  /* *movsf_cc_reg_sp64 */
    case 106:  /* *movsf_cc_v9 */
      return 8;

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xe))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 9;
        }
      else
        {
	  return 8;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x6f))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 3;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 1;
        }
      else
        {
	  return 8;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xf))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else if (which_alternative == 0)
        {
	  return 9;
        }
      else if (which_alternative == 3)
        {
	  return 1;
        }
      else
        {
	  return 8;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1c))
        {
	  return 1;
        }
      else if (which_alternative == 6)
        {
	  return 3;
        }
      else if (which_alternative == 5)
        {
	  return 9;
        }
      else if (!((1 << which_alternative) & 0xff))
        {
	  return 1;
        }
      else
        {
	  return 8;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x187))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else if (which_alternative == 8)
        {
	  return 9;
        }
      else if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 8;
        }

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else if (which_alternative == 5)
        {
	  return 9;
        }
      else if (which_alternative == 3)
        {
	  return 1;
        }
      else
        {
	  return 8;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 423:  /* *ldstubsi */
    case 422:  /* *ldstubhi */
    case 421:  /* *ldstubqi */
    case 420:  /* *swapsi */
    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 418:  /* *sync_compare_and_swapdi */
    case 417:  /* *sync_compare_and_swapsi */
    case 416:  /* *membar */
    case 415:  /* *stbar */
    case 383:  /* stack_protect_testdi */
    case 382:  /* stack_protect_setdi */
    case 344:  /* *sparc.md:6906 */
    case 343:  /* *sparc.md:6894 */
    case 342:  /* trap */
    case 339:  /* ffssi2 */
    case 338:  /* flushdi */
    case 337:  /* flush */
    case 336:  /* do_builtin_setjmp_setup */
    case 335:  /* goto_handler_and_restore */
    case 334:  /* flush_register_windows */
    case 331:  /* probe_stack_rangedi */
    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
    case 196:  /* *cmp_udiv_cc_set */
    case 194:  /* udivsi3_sp64 */
    case 193:  /* *cmp_sdiv_cc_set */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 188:  /* const_umulsidi3_v8plus */
    case 185:  /* umulsidi3_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 176:  /* muldi3_v8plus */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
      return 5;

    case 377:  /* *tldo_ldx_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 333:  /* *branch_sp64 */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      return 3;

    case 376:  /* *tldo_ldsw1_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 329:  /* *return_internal */
    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 167:  /* *subx_extend_sp64 */
    case 166:  /* subx */
    case 159:  /* *addx_extend_sp64 */
    case 158:  /* addx */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 36:  /* *x_minus_sgeu */
    case 35:  /* *sgeu_plus_x */
    case 34:  /* *x_minus_sltu_plus_y */
    case 33:  /* *x_minus_y_minus_sltu */
    case 32:  /* *x_minus_sltu */
    case 31:  /* *sltu_plus_x_plus_y */
    case 30:  /* *sltu_plus_x */
    case 29:  /* *neg_sgeu_insn */
    case 28:  /* *sgeu_insn */
    case 27:  /* *neg_sltu_plus_x */
    case 26:  /* *neg_sltu_minus_x */
    case 25:  /* *neg_sltu_insn */
    case 24:  /* *sltu_insn */
      return 0;

    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 26 /* 0x1a */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_MULTI) || ((cached_type == TYPE_FLUSHW) || ((cached_type == TYPE_IFLUSH) || (cached_type == TYPE_TRAP))))
        {
	  return 5;
        }
      else if (cached_type == TYPE_SAVEW)
        {
	  return 4;
        }
      else if ((cached_type == TYPE_IALU) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_COMPARE) || (cached_type == TYPE_CMOVE))))
        {
	  return 1;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 11 /* 0xb */;
        }
      else if (cached_type == TYPE_IDIV)
        {
	  return 72 /* 0x48 */;
        }
      else if ((cached_type == TYPE_CALL) || ((cached_type == TYPE_SIBCALL) || ((cached_type == TYPE_CALL_NO_DELAY_SLOT) || ((cached_type == TYPE_UNCOND_BRANCH) || ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_LOAD))))))
        {
	  return 3;
        }
      else if (cached_type == TYPE_FPLOAD)
        {
	  return 9;
        }
      else if (cached_type == TYPE_STORE)
        {
	  return 1;
        }
      else if ((cached_type == TYPE_FPSTORE) || ((cached_type == TYPE_FPMOVE) || ((cached_type == TYPE_FPCMOVE) || (cached_type == TYPE_FPCRMOVE))))
        {
	  return 8;
        }
      else if (cached_type == TYPE_FPCMP)
        {
	  return 26 /* 0x1a */;
        }
      else if (cached_type == TYPE_FPMUL)
        {
	  return 29 /* 0x1d */;
        }
      else if (cached_type == TYPE_FPDIVS)
        {
	  return 54 /* 0x36 */;
        }
      else if (cached_type == TYPE_FPDIVD)
        {
	  return 83 /* 0x53 */;
        }
      else if ((cached_type == TYPE_FGA) || ((cached_type == TYPE_FGM_PACK) || ((cached_type == TYPE_FGM_MUL) || ((cached_type == TYPE_FGM_CMP) || (cached_type == TYPE_FGM_PDIST)))))
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    default:
      return 1;

    }
}

int
internal_dfa_insn_code_niagara (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 414:  /* pdist_vis */
    case 412:  /* faligndatav8qi_vis */
    case 411:  /* faligndatav4hi_vis */
    case 410:  /* faligndatav2si_vis */
    case 409:  /* faligndatadi_vis */
    case 401:  /* fpmerge_vis */
    case 400:  /* fexpand_vis */
    case 399:  /* fpack32_vis */
    case 398:  /* fpackfix_vis */
    case 397:  /* fpack16_vis */
    case 396:  /* *nandv4qi_vis */
    case 395:  /* *nandv2hi_vis */
    case 394:  /* *nandsf_vis */
    case 393:  /* *nandv8qi_vis */
    case 392:  /* *nandv4hi_vis */
    case 391:  /* *nandv2si_vis */
    case 390:  /* *nanddf_vis */
    case 389:  /* subv2hi3 */
    case 388:  /* subv4hi3 */
    case 387:  /* subv2si3 */
    case 386:  /* addv2hi3 */
    case 385:  /* addv4hi3 */
    case 384:  /* addv2si3 */
      return 104 /* 0x68 */;

    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
      return 97 /* 0x61 */;

    case 328:  /* save_register_windowdi */
      return 90 /* 0x5a */;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 91 /* 0x5b */;
        }
      else
        {
	  return 99 /* 0x63 */;
        }

    case 286:  /* divsf3 */
      return 102 /* 0x66 */;

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 103 /* 0x67 */;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
      return 101 /* 0x65 */;

    case 266:  /* one_cmplv4qi2 */
    case 265:  /* one_cmplv2hi2 */
    case 264:  /* one_cmplsi2 */
    case 263:  /* *one_cmplv8qi2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 241:  /* *xor_not_v4qi */
    case 240:  /* *xor_not_v2hi */
    case 239:  /* *xor_not_si */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 234:  /* xorv4qi3 */
    case 233:  /* xorv2hi3 */
    case 232:  /* xorsi3 */
    case 231:  /* *xorv8qi3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 227:  /* *or_not_v4qi */
    case 226:  /* *or_not_v2hi */
    case 225:  /* *or_not_si */
    case 224:  /* *or_not_v8qi_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 220:  /* iorv4qi3 */
    case 219:  /* iorv2hi3 */
    case 218:  /* iorsi3 */
    case 217:  /* *iorv8qi3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 213:  /* *and_not_v4qi */
    case 212:  /* *and_not_v2hi */
    case 211:  /* *and_not_si */
    case 210:  /* *and_not_v8qi_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 206:  /* andv4qi3 */
    case 205:  /* andv2hi3 */
    case 204:  /* andsi3 */
    case 203:  /* *andv8qi3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 200:  /* *anddi3_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 91 /* 0x5b */;
        }
      else
        {
	  return 104 /* 0x68 */;
        }

    case 195:  /* udivdi3 */
    case 192:  /* divdi3 */
      return 93 /* 0x5d */;

    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 92 /* 0x5c */;

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 91 /* 0x5b */;
        }
      else
        {
	  return 104 /* 0x68 */;
        }

    case 137:  /* *sign_extendsidi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 91 /* 0x5b */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 91 /* 0x5b */;
        }
      else
        {
	  return 95 /* 0x5f */;
        }

    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 111:  /* *movtf_cc_reg_hq_sp64 */
    case 110:  /* *movtf_cc_hq_v9 */
    case 109:  /* movdf_cc_reg_sp64 */
    case 108:  /* movdf_cc_v9 */
    case 107:  /* *movsf_cc_reg_sp64 */
    case 106:  /* *movsf_cc_v9 */
      return 99 /* 0x63 */;

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xe))
        {
	  return 91 /* 0x5b */;
        }
      else if (which_alternative == 2)
        {
	  return 96 /* 0x60 */;
        }
      else if (which_alternative == 3)
        {
	  return 98 /* 0x62 */;
        }
      else
        {
	  return 99 /* 0x63 */;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x6f))
        {
	  return 91 /* 0x5b */;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 95 /* 0x5f */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 97 /* 0x61 */;
        }
      else if (which_alternative == 1)
        {
	  return 99 /* 0x63 */;
        }
      else
        {
	  return 104 /* 0x68 */;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return 91 /* 0x5b */;
        }
      else if (which_alternative == 0)
        {
	  return 95 /* 0x5f */;
        }
      else
        {
	  return 97 /* 0x61 */;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xf))
        {
	  return 91 /* 0x5b */;
        }
      else if (which_alternative == 2)
        {
	  return 95 /* 0x5f */;
        }
      else if (which_alternative == 0)
        {
	  return 96 /* 0x60 */;
        }
      else if (which_alternative == 3)
        {
	  return 97 /* 0x61 */;
        }
      else
        {
	  return 98 /* 0x62 */;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 91 /* 0x5b */;
        }
      else if (which_alternative == 3)
        {
	  return 95 /* 0x5f */;
        }
      else
        {
	  return 97 /* 0x61 */;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1c))
        {
	  return 91 /* 0x5b */;
        }
      else if (which_alternative == 6)
        {
	  return 95 /* 0x5f */;
        }
      else if (which_alternative == 5)
        {
	  return 96 /* 0x60 */;
        }
      else if (!((1 << which_alternative) & 0xff))
        {
	  return 97 /* 0x61 */;
        }
      else if (which_alternative == 7)
        {
	  return 98 /* 0x62 */;
        }
      else if (which_alternative == 1)
        {
	  return 99 /* 0x63 */;
        }
      else
        {
	  return 104 /* 0x68 */;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x187))
        {
	  return 91 /* 0x5b */;
        }
      else if (which_alternative == 2)
        {
	  return 95 /* 0x5f */;
        }
      else if (which_alternative == 8)
        {
	  return 96 /* 0x60 */;
        }
      else if (((1 << which_alternative) & 0x3))
        {
	  return 97 /* 0x61 */;
        }
      else
        {
	  return 98 /* 0x62 */;
        }

    case 377:  /* *tldo_ldx_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 95 /* 0x5f */;

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 91 /* 0x5b */;
        }
      else if (which_alternative == 2)
        {
	  return 95 /* 0x5f */;
        }
      else if (which_alternative == 5)
        {
	  return 96 /* 0x60 */;
        }
      else if (which_alternative == 3)
        {
	  return 97 /* 0x61 */;
        }
      else if (which_alternative == 6)
        {
	  return 98 /* 0x62 */;
        }
      else if (which_alternative == 4)
        {
	  return 99 /* 0x63 */;
        }
      else
        {
	  return 104 /* 0x68 */;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 91 /* 0x5b */;
        }
      else if (which_alternative == 2)
        {
	  return 95 /* 0x5f */;
        }
      else
        {
	  return 97 /* 0x61 */;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 91 /* 0x5b */;
        }
      else if (which_alternative == 1)
        {
	  return 95 /* 0x5f */;
        }
      else
        {
	  return 97 /* 0x61 */;
        }

    case 423:  /* *ldstubsi */
    case 422:  /* *ldstubhi */
    case 421:  /* *ldstubqi */
    case 420:  /* *swapsi */
    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 418:  /* *sync_compare_and_swapdi */
    case 417:  /* *sync_compare_and_swapsi */
    case 416:  /* *membar */
    case 415:  /* *stbar */
    case 383:  /* stack_protect_testdi */
    case 382:  /* stack_protect_setdi */
    case 344:  /* *sparc.md:6906 */
    case 343:  /* *sparc.md:6894 */
    case 342:  /* trap */
    case 339:  /* ffssi2 */
    case 338:  /* flushdi */
    case 337:  /* flush */
    case 336:  /* do_builtin_setjmp_setup */
    case 335:  /* goto_handler_and_restore */
    case 334:  /* flush_register_windows */
    case 331:  /* probe_stack_rangedi */
    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
    case 196:  /* *cmp_udiv_cc_set */
    case 194:  /* udivsi3_sp64 */
    case 193:  /* *cmp_sdiv_cc_set */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 188:  /* const_umulsidi3_v8plus */
    case 185:  /* umulsidi3_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 176:  /* muldi3_v8plus */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
      return 89 /* 0x59 */;

    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 333:  /* *branch_sp64 */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      return 94 /* 0x5e */;

    case 376:  /* *tldo_ldsw1_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 329:  /* *return_internal */
    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 167:  /* *subx_extend_sp64 */
    case 166:  /* subx */
    case 159:  /* *addx_extend_sp64 */
    case 158:  /* addx */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 36:  /* *x_minus_sgeu */
    case 35:  /* *sgeu_plus_x */
    case 34:  /* *x_minus_sltu_plus_y */
    case 33:  /* *x_minus_y_minus_sltu */
    case 32:  /* *x_minus_sltu */
    case 31:  /* *sltu_plus_x_plus_y */
    case 30:  /* *sltu_plus_x */
    case 29:  /* *neg_sgeu_insn */
    case 28:  /* *sgeu_insn */
    case 27:  /* *neg_sltu_plus_x */
    case 26:  /* *neg_sltu_minus_x */
    case 25:  /* *neg_sltu_insn */
    case 24:  /* *sltu_insn */
      return 119 /* 0x77 */;

    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 100 /* 0x64 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_MULTI) || ((cached_type == TYPE_FLUSHW) || ((cached_type == TYPE_IFLUSH) || (cached_type == TYPE_TRAP))))
        {
	  return 89 /* 0x59 */;
        }
      else if (cached_type == TYPE_SAVEW)
        {
	  return 90 /* 0x5a */;
        }
      else if ((cached_type == TYPE_IALU) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_COMPARE) || (cached_type == TYPE_CMOVE))))
        {
	  return 91 /* 0x5b */;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 92 /* 0x5c */;
        }
      else if (cached_type == TYPE_IDIV)
        {
	  return 93 /* 0x5d */;
        }
      else if ((cached_type == TYPE_CALL) || ((cached_type == TYPE_SIBCALL) || ((cached_type == TYPE_CALL_NO_DELAY_SLOT) || ((cached_type == TYPE_UNCOND_BRANCH) || (cached_type == TYPE_BRANCH)))))
        {
	  return 94 /* 0x5e */;
        }
      else if (cached_type == TYPE_LOAD)
        {
	  return 95 /* 0x5f */;
        }
      else if (cached_type == TYPE_FPLOAD)
        {
	  return 96 /* 0x60 */;
        }
      else if (cached_type == TYPE_STORE)
        {
	  return 97 /* 0x61 */;
        }
      else if (cached_type == TYPE_FPSTORE)
        {
	  return 98 /* 0x62 */;
        }
      else if ((cached_type == TYPE_FPMOVE) || ((cached_type == TYPE_FPCMOVE) || (cached_type == TYPE_FPCRMOVE)))
        {
	  return 99 /* 0x63 */;
        }
      else if (cached_type == TYPE_FPCMP)
        {
	  return 100 /* 0x64 */;
        }
      else if (cached_type == TYPE_FPMUL)
        {
	  return 101 /* 0x65 */;
        }
      else if (cached_type == TYPE_FPDIVS)
        {
	  return 102 /* 0x66 */;
        }
      else if (cached_type == TYPE_FPDIVD)
        {
	  return 103 /* 0x67 */;
        }
      else if ((cached_type == TYPE_FGA) || ((cached_type == TYPE_FGM_PACK) || ((cached_type == TYPE_FGM_MUL) || ((cached_type == TYPE_FGM_CMP) || (cached_type == TYPE_FGM_PDIST)))))
        {
	  return 104 /* 0x68 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    default:
      return 91 /* 0x5b */;

    }
}

int
insn_default_latency_niagara2 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 414:  /* pdist_vis */
    case 412:  /* faligndatav8qi_vis */
    case 411:  /* faligndatav4hi_vis */
    case 410:  /* faligndatav2si_vis */
    case 409:  /* faligndatadi_vis */
    case 401:  /* fpmerge_vis */
    case 400:  /* fexpand_vis */
    case 399:  /* fpack32_vis */
    case 398:  /* fpackfix_vis */
    case 397:  /* fpack16_vis */
    case 396:  /* *nandv4qi_vis */
    case 395:  /* *nandv2hi_vis */
    case 394:  /* *nandsf_vis */
    case 393:  /* *nandv8qi_vis */
    case 392:  /* *nandv4hi_vis */
    case 391:  /* *nandv2si_vis */
    case 390:  /* *nanddf_vis */
    case 389:  /* subv2hi3 */
    case 388:  /* subv4hi3 */
    case 387:  /* subv2si3 */
    case 386:  /* addv2hi3 */
    case 385:  /* addv4hi3 */
    case 384:  /* addv2si3 */
      return 6;

    case 334:  /* flush_register_windows */
      return 25 /* 0x19 */;

    case 328:  /* save_register_windowdi */
      return 4;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 286:  /* divsf3 */
      return 19 /* 0x13 */;

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 33 /* 0x21 */;

    case 266:  /* one_cmplv4qi2 */
    case 265:  /* one_cmplv2hi2 */
    case 264:  /* one_cmplsi2 */
    case 263:  /* *one_cmplv8qi2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 241:  /* *xor_not_v4qi */
    case 240:  /* *xor_not_v2hi */
    case 239:  /* *xor_not_si */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 234:  /* xorv4qi3 */
    case 233:  /* xorv2hi3 */
    case 232:  /* xorsi3 */
    case 231:  /* *xorv8qi3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 227:  /* *or_not_v4qi */
    case 226:  /* *or_not_v2hi */
    case 225:  /* *or_not_si */
    case 224:  /* *or_not_v8qi_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 220:  /* iorv4qi3 */
    case 219:  /* iorv2hi3 */
    case 218:  /* iorsi3 */
    case 217:  /* *iorv8qi3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 213:  /* *and_not_v4qi */
    case 212:  /* *and_not_v2hi */
    case 211:  /* *and_not_si */
    case 210:  /* *and_not_v8qi_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 206:  /* andv4qi3 */
    case 205:  /* andv2hi3 */
    case 204:  /* andsi3 */
    case 203:  /* *andv8qi3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 200:  /* *anddi3_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 6;
        }

    case 195:  /* udivdi3 */
    case 192:  /* divdi3 */
      return 31 /* 0x1f */;

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 6;
        }

    case 137:  /* *sign_extendsidi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xe))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else if (which_alternative == 3)
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x6f))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 3;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xf))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x5))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1c))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 3;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x187))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x104))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 3;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 1;
        }
      else if (which_alternative == 4)
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 423:  /* *ldstubsi */
    case 422:  /* *ldstubhi */
    case 421:  /* *ldstubqi */
    case 420:  /* *swapsi */
    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 418:  /* *sync_compare_and_swapdi */
    case 417:  /* *sync_compare_and_swapsi */
    case 416:  /* *membar */
    case 415:  /* *stbar */
    case 383:  /* stack_protect_testdi */
    case 382:  /* stack_protect_setdi */
    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 344:  /* *sparc.md:6906 */
    case 343:  /* *sparc.md:6894 */
    case 342:  /* trap */
    case 339:  /* ffssi2 */
    case 338:  /* flushdi */
    case 337:  /* flush */
    case 336:  /* do_builtin_setjmp_setup */
    case 335:  /* goto_handler_and_restore */
    case 333:  /* *branch_sp64 */
    case 331:  /* probe_stack_rangedi */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 196:  /* *cmp_udiv_cc_set */
    case 194:  /* udivsi3_sp64 */
    case 193:  /* *cmp_sdiv_cc_set */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 188:  /* const_umulsidi3_v8plus */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 185:  /* umulsidi3_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 177:  /* *cmp_mul_set */
    case 176:  /* muldi3_v8plus */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      return 5;

    case 376:  /* *tldo_ldsw1_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 329:  /* *return_internal */
    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 167:  /* *subx_extend_sp64 */
    case 166:  /* subx */
    case 159:  /* *addx_extend_sp64 */
    case 158:  /* addx */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 36:  /* *x_minus_sgeu */
    case 35:  /* *sgeu_plus_x */
    case 34:  /* *x_minus_sltu_plus_y */
    case 33:  /* *x_minus_y_minus_sltu */
    case 32:  /* *x_minus_sltu */
    case 31:  /* *sltu_plus_x_plus_y */
    case 30:  /* *sltu_plus_x */
    case 29:  /* *neg_sgeu_insn */
    case 28:  /* *sgeu_insn */
    case 27:  /* *neg_sltu_plus_x */
    case 26:  /* *neg_sltu_minus_x */
    case 25:  /* *neg_sltu_insn */
    case 24:  /* *sltu_insn */
      return 0;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 377:  /* *tldo_ldx_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 111:  /* *movtf_cc_reg_hq_sp64 */
    case 110:  /* *movtf_cc_hq_v9 */
    case 109:  /* movdf_cc_reg_sp64 */
    case 108:  /* movdf_cc_v9 */
    case 107:  /* *movsf_cc_reg_sp64 */
    case 106:  /* *movsf_cc_v9 */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 3;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if ((cached_type = get_attr_type (insn)) == TYPE_FLUSHW)
        {
	  return 25 /* 0x19 */;
        }
      else if ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_IFLUSH) || (cached_type == TYPE_TRAP)))
        {
	  return 5;
        }
      else if (cached_type == TYPE_SAVEW)
        {
	  return 4;
        }
      else if ((cached_type == TYPE_IALU) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_COMPARE) || (cached_type == TYPE_CMOVE))))
        {
	  return 1;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 5;
        }
      else if (cached_type == TYPE_IDIV)
        {
	  return 31 /* 0x1f */;
        }
      else if ((cached_type == TYPE_CALL) || ((cached_type == TYPE_SIBCALL) || ((cached_type == TYPE_CALL_NO_DELAY_SLOT) || ((cached_type == TYPE_UNCOND_BRANCH) || (cached_type == TYPE_BRANCH)))))
        {
	  return 5;
        }
      else if ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD))
        {
	  return 3;
        }
      else if ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_FPMOVE) || ((cached_type == TYPE_FPCMOVE) || ((cached_type == TYPE_FPCRMOVE) || ((cached_type == TYPE_FPCMP) || (cached_type == TYPE_FPMUL)))))
        {
	  return 3;
        }
      else if (cached_type == TYPE_FPDIVS)
        {
	  return 19 /* 0x13 */;
        }
      else if (cached_type == TYPE_FPDIVD)
        {
	  return 33 /* 0x21 */;
        }
      else if ((cached_type == TYPE_FGA) || ((cached_type == TYPE_FGM_PACK) || ((cached_type == TYPE_FGM_MUL) || ((cached_type == TYPE_FGM_CMP) || (cached_type == TYPE_FGM_PDIST)))))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    default:
      return 1;

    }
}

int
internal_dfa_insn_code_niagara2 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 414:  /* pdist_vis */
    case 412:  /* faligndatav8qi_vis */
    case 411:  /* faligndatav4hi_vis */
    case 410:  /* faligndatav2si_vis */
    case 409:  /* faligndatadi_vis */
    case 401:  /* fpmerge_vis */
    case 400:  /* fexpand_vis */
    case 399:  /* fpack32_vis */
    case 398:  /* fpackfix_vis */
    case 397:  /* fpack16_vis */
    case 396:  /* *nandv4qi_vis */
    case 395:  /* *nandv2hi_vis */
    case 394:  /* *nandsf_vis */
    case 393:  /* *nandv8qi_vis */
    case 392:  /* *nandv4hi_vis */
    case 391:  /* *nandv2si_vis */
    case 390:  /* *nanddf_vis */
    case 389:  /* subv2hi3 */
    case 388:  /* subv4hi3 */
    case 387:  /* subv2si3 */
    case 386:  /* addv2hi3 */
    case 385:  /* addv4hi3 */
    case 384:  /* addv2si3 */
      return 117 /* 0x75 */;

    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
      return 113 /* 0x71 */;

    case 334:  /* flush_register_windows */
      return 105 /* 0x69 */;

    case 328:  /* save_register_windowdi */
      return 107 /* 0x6b */;

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 114 /* 0x72 */;
        }

    case 286:  /* divsf3 */
      return 115 /* 0x73 */;

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      return 116 /* 0x74 */;

    case 266:  /* one_cmplv4qi2 */
    case 265:  /* one_cmplv2hi2 */
    case 264:  /* one_cmplsi2 */
    case 263:  /* *one_cmplv8qi2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 241:  /* *xor_not_v4qi */
    case 240:  /* *xor_not_v2hi */
    case 239:  /* *xor_not_si */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 234:  /* xorv4qi3 */
    case 233:  /* xorv2hi3 */
    case 232:  /* xorsi3 */
    case 231:  /* *xorv8qi3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 227:  /* *or_not_v4qi */
    case 226:  /* *or_not_v2hi */
    case 225:  /* *or_not_si */
    case 224:  /* *or_not_v8qi_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 220:  /* iorv4qi3 */
    case 219:  /* iorv2hi3 */
    case 218:  /* iorsi3 */
    case 217:  /* *iorv8qi3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 213:  /* *and_not_v4qi */
    case 212:  /* *and_not_v2hi */
    case 211:  /* *and_not_si */
    case 210:  /* *and_not_v8qi_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 206:  /* andv4qi3 */
    case 205:  /* andv2hi3 */
    case 204:  /* andsi3 */
    case 203:  /* *andv8qi3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 200:  /* *anddi3_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 117 /* 0x75 */;
        }

    case 195:  /* udivdi3 */
    case 192:  /* divdi3 */
      return 110 /* 0x6e */;

    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
    case 197:  /* *smacsi */
    case 187:  /* const_umulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
      return 109 /* 0x6d */;

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 117 /* 0x75 */;
        }

    case 137:  /* *sign_extendsidi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xe))
        {
	  return 108 /* 0x6c */;
        }
      else if (which_alternative == 2)
        {
	  return 112 /* 0x70 */;
        }
      else if (which_alternative == 3)
        {
	  return 113 /* 0x71 */;
        }
      else
        {
	  return 114 /* 0x72 */;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x6f))
        {
	  return 108 /* 0x6c */;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 112 /* 0x70 */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 113 /* 0x71 */;
        }
      else if (which_alternative == 1)
        {
	  return 114 /* 0x72 */;
        }
      else
        {
	  return 117 /* 0x75 */;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return 108 /* 0x6c */;
        }
      else if (which_alternative == 0)
        {
	  return 112 /* 0x70 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xf))
        {
	  return 108 /* 0x6c */;
        }
      else if (((1 << which_alternative) & 0x5))
        {
	  return 112 /* 0x70 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 108 /* 0x6c */;
        }
      else if (which_alternative == 3)
        {
	  return 112 /* 0x70 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1c))
        {
	  return 108 /* 0x6c */;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 112 /* 0x70 */;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 113 /* 0x71 */;
        }
      else if (which_alternative == 1)
        {
	  return 114 /* 0x72 */;
        }
      else
        {
	  return 117 /* 0x75 */;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x187))
        {
	  return 108 /* 0x6c */;
        }
      else if (((1 << which_alternative) & 0x104))
        {
	  return 112 /* 0x70 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 377:  /* *tldo_ldx_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return 112 /* 0x70 */;

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 108 /* 0x6c */;
        }
      else if (((1 << which_alternative) & 0x24))
        {
	  return 112 /* 0x70 */;
        }
      else if (((1 << which_alternative) & 0x48))
        {
	  return 113 /* 0x71 */;
        }
      else if (which_alternative == 4)
        {
	  return 114 /* 0x72 */;
        }
      else
        {
	  return 117 /* 0x75 */;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 108 /* 0x6c */;
        }
      else if (which_alternative == 2)
        {
	  return 112 /* 0x70 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 108 /* 0x6c */;
        }
      else if (which_alternative == 1)
        {
	  return 112 /* 0x70 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 423:  /* *ldstubsi */
    case 422:  /* *ldstubhi */
    case 421:  /* *ldstubqi */
    case 420:  /* *swapsi */
    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 418:  /* *sync_compare_and_swapdi */
    case 417:  /* *sync_compare_and_swapsi */
    case 416:  /* *membar */
    case 415:  /* *stbar */
    case 383:  /* stack_protect_testdi */
    case 382:  /* stack_protect_setdi */
    case 344:  /* *sparc.md:6906 */
    case 343:  /* *sparc.md:6894 */
    case 342:  /* trap */
    case 339:  /* ffssi2 */
    case 338:  /* flushdi */
    case 337:  /* flush */
    case 336:  /* do_builtin_setjmp_setup */
    case 335:  /* goto_handler_and_restore */
    case 331:  /* probe_stack_rangedi */
    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
    case 196:  /* *cmp_udiv_cc_set */
    case 194:  /* udivsi3_sp64 */
    case 193:  /* *cmp_sdiv_cc_set */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 188:  /* const_umulsidi3_v8plus */
    case 185:  /* umulsidi3_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 176:  /* muldi3_v8plus */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
      return 106 /* 0x6a */;

    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 333:  /* *branch_sp64 */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      return 111 /* 0x6f */;

    case 376:  /* *tldo_ldsw1_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 329:  /* *return_internal */
    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 167:  /* *subx_extend_sp64 */
    case 166:  /* subx */
    case 159:  /* *addx_extend_sp64 */
    case 158:  /* addx */
    case 157:  /* *fix_trunctfdi2_hq */
    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 151:  /* *floatditf2_hq */
    case 150:  /* floatdidf2 */
    case 149:  /* floatdisf2 */
    case 148:  /* *floatsitf2_hq */
    case 147:  /* floatsidf2 */
    case 146:  /* floatsisf2 */
    case 145:  /* *trunctfdf2_hq */
    case 144:  /* *trunctfsf2_hq */
    case 143:  /* truncdfsf2 */
    case 142:  /* *extenddftf2_hq */
    case 141:  /* *extendsftf2_hq */
    case 140:  /* extendsfdf2 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 36:  /* *x_minus_sgeu */
    case 35:  /* *sgeu_plus_x */
    case 34:  /* *x_minus_sltu_plus_y */
    case 33:  /* *x_minus_y_minus_sltu */
    case 32:  /* *x_minus_sltu */
    case 31:  /* *sltu_plus_x_plus_y */
    case 30:  /* *sltu_plus_x */
    case 29:  /* *neg_sgeu_insn */
    case 28:  /* *sgeu_insn */
    case 27:  /* *neg_sltu_plus_x */
    case 26:  /* *neg_sltu_minus_x */
    case 25:  /* *neg_sltu_insn */
    case 24:  /* *sltu_insn */
      return 119 /* 0x77 */;

    case 408:  /* fmuld8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 405:  /* fmul8sux16_vis */
    case 404:  /* fmul8x16al_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
    case 111:  /* *movtf_cc_reg_hq_sp64 */
    case 110:  /* *movtf_cc_hq_v9 */
    case 109:  /* movdf_cc_reg_sp64 */
    case 108:  /* movdf_cc_v9 */
    case 107:  /* *movsf_cc_reg_sp64 */
    case 106:  /* *movsf_cc_v9 */
    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      return 114 /* 0x72 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if ((cached_type = get_attr_type (insn)) == TYPE_FLUSHW)
        {
	  return 105 /* 0x69 */;
        }
      else if ((cached_type == TYPE_MULTI) || ((cached_type == TYPE_IFLUSH) || (cached_type == TYPE_TRAP)))
        {
	  return 106 /* 0x6a */;
        }
      else if (cached_type == TYPE_SAVEW)
        {
	  return 107 /* 0x6b */;
        }
      else if ((cached_type == TYPE_IALU) || ((cached_type == TYPE_SHIFT) || ((cached_type == TYPE_COMPARE) || (cached_type == TYPE_CMOVE))))
        {
	  return 108 /* 0x6c */;
        }
      else if (cached_type == TYPE_IMUL)
        {
	  return 109 /* 0x6d */;
        }
      else if (cached_type == TYPE_IDIV)
        {
	  return 110 /* 0x6e */;
        }
      else if ((cached_type == TYPE_CALL) || ((cached_type == TYPE_SIBCALL) || ((cached_type == TYPE_CALL_NO_DELAY_SLOT) || ((cached_type == TYPE_UNCOND_BRANCH) || (cached_type == TYPE_BRANCH)))))
        {
	  return 111 /* 0x6f */;
        }
      else if ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD))
        {
	  return 112 /* 0x70 */;
        }
      else if ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE))
        {
	  return 113 /* 0x71 */;
        }
      else if ((cached_type == TYPE_FPMOVE) || ((cached_type == TYPE_FPCMOVE) || ((cached_type == TYPE_FPCRMOVE) || ((cached_type == TYPE_FPCMP) || (cached_type == TYPE_FPMUL)))))
        {
	  return 114 /* 0x72 */;
        }
      else if (cached_type == TYPE_FPDIVS)
        {
	  return 115 /* 0x73 */;
        }
      else if (cached_type == TYPE_FPDIVD)
        {
	  return 116 /* 0x74 */;
        }
      else if ((cached_type == TYPE_FGA) || ((cached_type == TYPE_FGM_PACK) || ((cached_type == TYPE_FGM_MUL) || ((cached_type == TYPE_FGM_CMP) || (cached_type == TYPE_FGM_PDIST)))))
        {
	  return 117 /* 0x75 */;
        }
      else
        {
	  return 119 /* 0x77 */;
        }

    default:
      return 108 /* 0x6c */;

    }
}

int
num_delay_slots (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 333:  /* *branch_sp64 */
    case 329:  /* *return_internal */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_RETURN) || ((cached_type == TYPE_UNCOND_BRANCH) || ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_SIBCALL) || (cached_type == TYPE_CALL)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

enum attr_branch_type
get_attr_branch_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 43:  /* *normal_int_branch_sp64 */
    case 44:  /* *inverted_int_branch_sp64 */
      return BRANCH_TYPE_REG;

    case 39:  /* *normal_fp_branch */
    case 40:  /* *inverted_fp_branch */
    case 41:  /* *normal_fpe_branch */
    case 42:  /* *inverted_fpe_branch */
      return BRANCH_TYPE_FCC;

    case 37:  /* *normal_branch */
    case 38:  /* *inverted_branch */
      return BRANCH_TYPE_ICC;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return BRANCH_TYPE_NONE;

    }
}

enum attr_calls_eh_return
get_attr_calls_eh_return (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE));

    }
}

enum attr_calls_alloca
get_attr_calls_alloca (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 162 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((cfun->calls_alloca != 0
		? CALLS_ALLOCA_TRUE : CALLS_ALLOCA_FALSE));

    }
}

enum attr_delayed_branch
get_attr_delayed_branch (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 174 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((flag_delayed_branch != 0
		? DELAYED_BRANCH_TRUE : DELAYED_BRANCH_FALSE));

    }
}

enum attr_eligible_for_return_delay
get_attr_eligible_for_return_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 290 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((eligible_for_return_delay (insn)
		? ELIGIBLE_FOR_RETURN_DELAY_TRUE
		: ELIGIBLE_FOR_RETURN_DELAY_FALSE));

    }
}

enum attr_eligible_for_sibcall_delay
get_attr_eligible_for_sibcall_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 285 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((eligible_for_sibcall_delay (insn)
		? ELIGIBLE_FOR_SIBCALL_DELAY_TRUE
		: ELIGIBLE_FOR_SIBCALL_DELAY_FALSE));

    }
}

enum attr_empty_delay_slot
get_attr_empty_delay_slot (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE));

    }
}

enum attr_fptype
get_attr_fptype (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return FPTYPE_DOUBLE;
        }
      else
        {
	  return FPTYPE_SINGLE;
        }

    case 59:  /* *movdi_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return FPTYPE_SINGLE;
        }
      else if (which_alternative == 4)
        {
	  return FPTYPE_DOUBLE;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return FPTYPE_SINGLE;
        }
      else
        {
	  return FPTYPE_DOUBLE;
        }

    case 200:  /* *anddi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 203:  /* *andv8qi3_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 210:  /* *and_not_v8qi_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 217:  /* *iorv8qi3_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 224:  /* *or_not_v8qi_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 231:  /* *xorv8qi3_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 263:  /* *one_cmplv8qi2_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return FPTYPE_SINGLE;
        }
      else
        {
	  return FPTYPE_DOUBLE;
        }

    case 293:  /* *abstf2_hq_v9 */
    case 294:  /* *abstf2_v9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return FPTYPE_DOUBLE;
        }
      else
        {
	  return FPTYPE_SINGLE;
        }

    case 3:  /* *cmpdf_fpe */
    case 6:  /* *cmpdf_fp */
    case 108:  /* movdf_cc_v9 */
    case 109:  /* movdf_cc_reg_sp64 */
    case 140:  /* extendsfdf2 */
    case 143:  /* truncdfsf2 */
    case 146:  /* floatsisf2 */
    case 147:  /* floatsidf2 */
    case 149:  /* floatdisf2 */
    case 150:  /* floatdidf2 */
    case 152:  /* fix_truncsfsi2 */
    case 153:  /* fix_truncdfsi2 */
    case 155:  /* fix_truncsfdi2 */
    case 156:  /* fix_truncdfdi2 */
    case 274:  /* adddf3 */
    case 277:  /* subdf3 */
    case 280:  /* muldf3 */
    case 282:  /* *muldf3_extend */
    case 285:  /* divdf3 */
    case 288:  /* *negtf2_v9 */
    case 290:  /* *negdf2_v9 */
    case 296:  /* *absdf2_v9 */
    case 299:  /* sqrtdf2 */
    case 384:  /* addv2si3 */
    case 385:  /* addv4hi3 */
    case 387:  /* subv2si3 */
    case 388:  /* subv4hi3 */
    case 390:  /* *nanddf_vis */
    case 391:  /* *nandv2si_vis */
    case 392:  /* *nandv4hi_vis */
    case 393:  /* *nandv8qi_vis */
    case 397:  /* fpack16_vis */
    case 398:  /* fpackfix_vis */
    case 399:  /* fpack32_vis */
    case 400:  /* fexpand_vis */
    case 401:  /* fpmerge_vis */
    case 402:  /* fmul8x16_vis */
    case 403:  /* fmul8x16au_vis */
    case 404:  /* fmul8x16al_vis */
    case 405:  /* fmul8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 408:  /* fmuld8ulx16_vis */
    case 409:  /* faligndatadi_vis */
    case 410:  /* faligndatav2si_vis */
    case 411:  /* faligndatav4hi_vis */
    case 412:  /* faligndatav8qi_vis */
    case 414:  /* pdist_vis */
      return FPTYPE_DOUBLE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return FPTYPE_SINGLE;

    }
}

enum attr_in_annul_branch_delay
get_attr_in_annul_branch_delay (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 329:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))))))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xe))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x186))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((! ((cached_type = get_attr_type (insn)) == TYPE_UNCOND_BRANCH)) && ((! (cached_type == TYPE_BRANCH)) && ((! (cached_type == TYPE_CALL)) && ((! (cached_type == TYPE_SIBCALL)) && ((! (cached_type == TYPE_CALL_NO_DELAY_SLOT)) && (! (cached_type == TYPE_MULTI))))))) && (get_attr_length (insn) == 1))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 423:  /* *ldstubsi */
    case 422:  /* *ldstubhi */
    case 421:  /* *ldstubqi */
    case 420:  /* *swapsi */
    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 418:  /* *sync_compare_and_swapdi */
    case 417:  /* *sync_compare_and_swapsi */
    case 416:  /* *membar */
    case 415:  /* *stbar */
    case 383:  /* stack_protect_testdi */
    case 382:  /* stack_protect_setdi */
    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 339:  /* ffssi2 */
    case 336:  /* do_builtin_setjmp_setup */
    case 335:  /* goto_handler_and_restore */
    case 333:  /* *branch_sp64 */
    case 331:  /* probe_stack_rangedi */
    case 330:  /* blockage */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
    case 196:  /* *cmp_udiv_cc_set */
    case 194:  /* udivsi3_sp64 */
    case 193:  /* *cmp_sdiv_cc_set */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 188:  /* const_umulsidi3_v8plus */
    case 185:  /* umulsidi3_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 176:  /* muldi3_v8plus */
    case 113:  /* *movtf_cc_reg_sp64 */
    case 112:  /* *movtf_cc_v9 */
    case 97:  /* *movtf_insn_sp64_no_fpu */
    case 95:  /* *movtf_insn_sp64 */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
    case 23:  /* *x_minus_i_eq_0 */
    case 22:  /* *x_plus_i_eq_0 */
    case 21:  /* *x_minus_i_ne_0 */
    case 20:  /* *x_plus_i_ne_0 */
    case 19:  /* *seqdi_zero_trunc */
    case 18:  /* *neg_seqdi_zero */
    case 17:  /* *seqdi_zero */
    case 16:  /* *seqsi_zero_extend */
    case 15:  /* *neg_seqsi_zero */
    case 14:  /* *seqsi_zero */
    case 13:  /* *snedi_zero_trunc */
    case 12:  /* *neg_snedi_zero */
    case 11:  /* *snedi_zero */
    case 10:  /* *snesi_zero_extend */
    case 9:  /* *neg_snesi_zero */
    case 8:  /* *snesi_zero */
      return IN_ANNUL_BRANCH_DELAY_FALSE;

    default:
      return IN_ANNUL_BRANCH_DELAY_TRUE;

    }
}

enum attr_in_uncond_branch_delay
get_attr_in_uncond_branch_delay (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 329:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))))))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xe))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x186))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((! ((cached_type = get_attr_type (insn)) == TYPE_UNCOND_BRANCH)) && ((! (cached_type == TYPE_BRANCH)) && ((! (cached_type == TYPE_CALL)) && ((! (cached_type == TYPE_SIBCALL)) && ((! (cached_type == TYPE_CALL_NO_DELAY_SLOT)) && (! (cached_type == TYPE_MULTI))))))) && (get_attr_length (insn) == 1))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 423:  /* *ldstubsi */
    case 422:  /* *ldstubhi */
    case 421:  /* *ldstubqi */
    case 420:  /* *swapsi */
    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 418:  /* *sync_compare_and_swapdi */
    case 417:  /* *sync_compare_and_swapsi */
    case 416:  /* *membar */
    case 415:  /* *stbar */
    case 383:  /* stack_protect_testdi */
    case 382:  /* stack_protect_setdi */
    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 339:  /* ffssi2 */
    case 336:  /* do_builtin_setjmp_setup */
    case 335:  /* goto_handler_and_restore */
    case 333:  /* *branch_sp64 */
    case 331:  /* probe_stack_rangedi */
    case 330:  /* blockage */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
    case 196:  /* *cmp_udiv_cc_set */
    case 194:  /* udivsi3_sp64 */
    case 193:  /* *cmp_sdiv_cc_set */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 188:  /* const_umulsidi3_v8plus */
    case 185:  /* umulsidi3_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 176:  /* muldi3_v8plus */
    case 113:  /* *movtf_cc_reg_sp64 */
    case 112:  /* *movtf_cc_v9 */
    case 97:  /* *movtf_insn_sp64_no_fpu */
    case 95:  /* *movtf_insn_sp64 */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
    case 23:  /* *x_minus_i_eq_0 */
    case 22:  /* *x_plus_i_eq_0 */
    case 21:  /* *x_minus_i_ne_0 */
    case 20:  /* *x_plus_i_ne_0 */
    case 19:  /* *seqdi_zero_trunc */
    case 18:  /* *neg_seqdi_zero */
    case 17:  /* *seqdi_zero */
    case 16:  /* *seqsi_zero_extend */
    case 15:  /* *neg_seqsi_zero */
    case 14:  /* *seqsi_zero */
    case 13:  /* *snedi_zero_trunc */
    case 12:  /* *neg_snedi_zero */
    case 11:  /* *snedi_zero */
    case 10:  /* *snesi_zero_extend */
    case 9:  /* *neg_snesi_zero */
    case 8:  /* *snesi_zero */
      return IN_UNCOND_BRANCH_DELAY_FALSE;

    default:
      return IN_UNCOND_BRANCH_DELAY_TRUE;

    }
}

enum attr_in_branch_delay
get_attr_in_branch_delay (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 329:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))))))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xe))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x186))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((! ((cached_type = get_attr_type (insn)) == TYPE_UNCOND_BRANCH)) && ((! (cached_type == TYPE_BRANCH)) && ((! (cached_type == TYPE_CALL)) && ((! (cached_type == TYPE_SIBCALL)) && ((! (cached_type == TYPE_CALL_NO_DELAY_SLOT)) && (! (cached_type == TYPE_MULTI))))))) && (get_attr_length (insn) == 1))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 423:  /* *ldstubsi */
    case 422:  /* *ldstubhi */
    case 421:  /* *ldstubqi */
    case 420:  /* *swapsi */
    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 418:  /* *sync_compare_and_swapdi */
    case 417:  /* *sync_compare_and_swapsi */
    case 416:  /* *membar */
    case 415:  /* *stbar */
    case 383:  /* stack_protect_testdi */
    case 382:  /* stack_protect_setdi */
    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 339:  /* ffssi2 */
    case 336:  /* do_builtin_setjmp_setup */
    case 335:  /* goto_handler_and_restore */
    case 333:  /* *branch_sp64 */
    case 331:  /* probe_stack_rangedi */
    case 330:  /* blockage */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
    case 196:  /* *cmp_udiv_cc_set */
    case 194:  /* udivsi3_sp64 */
    case 193:  /* *cmp_sdiv_cc_set */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 188:  /* const_umulsidi3_v8plus */
    case 185:  /* umulsidi3_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 176:  /* muldi3_v8plus */
    case 113:  /* *movtf_cc_reg_sp64 */
    case 112:  /* *movtf_cc_v9 */
    case 97:  /* *movtf_insn_sp64_no_fpu */
    case 95:  /* *movtf_insn_sp64 */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
    case 23:  /* *x_minus_i_eq_0 */
    case 22:  /* *x_plus_i_eq_0 */
    case 21:  /* *x_minus_i_ne_0 */
    case 20:  /* *x_plus_i_ne_0 */
    case 19:  /* *seqdi_zero_trunc */
    case 18:  /* *neg_seqdi_zero */
    case 17:  /* *seqdi_zero */
    case 16:  /* *seqsi_zero_extend */
    case 15:  /* *neg_seqsi_zero */
    case 14:  /* *seqsi_zero */
    case 13:  /* *snedi_zero_trunc */
    case 12:  /* *neg_snedi_zero */
    case 11:  /* *snedi_zero */
    case 10:  /* *snesi_zero_extend */
    case 9:  /* *neg_snesi_zero */
    case 8:  /* *snesi_zero */
      return IN_BRANCH_DELAY_FALSE;

    default:
      return IN_BRANCH_DELAY_TRUE;

    }
}

enum attr_in_call_delay
get_attr_in_call_delay (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 329:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if (((((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))))) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE))))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE))))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xc))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((((1 << which_alternative) & 0xe)) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE))))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x6c))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((((1 << which_alternative) & 0x7f)) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE))))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x7))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x1f))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x187))
        {
	  if (((1 << which_alternative) & 0x186))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x6c))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 119:  /* *zero_extendsidi2_insn_sp64 */
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_UNCOND_BRANCH) || ((cached_type == TYPE_BRANCH) || ((cached_type == TYPE_CALL) || ((cached_type == TYPE_SIBCALL) || ((cached_type == TYPE_CALL_NO_DELAY_SLOT) || (cached_type == TYPE_MULTI))))))
        {
	  return IN_CALL_DELAY_FALSE;
        }
      else if ((cached_type == TYPE_LOAD) || ((cached_type == TYPE_FPLOAD) || ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE))))
        {
	  if (get_attr_length (insn) == 1)
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }
      else
        {
	  if ((get_attr_length (insn) == 1) && (get_attr_tls_call_delay (insn) == TLS_CALL_DELAY_TRUE))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
    case 377:  /* *tldo_ldx_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 358:  /* tie_ld64 */
    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return IN_CALL_DELAY_TRUE;

    case 423:  /* *ldstubsi */
    case 422:  /* *ldstubhi */
    case 421:  /* *ldstubqi */
    case 420:  /* *swapsi */
    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 418:  /* *sync_compare_and_swapdi */
    case 417:  /* *sync_compare_and_swapsi */
    case 416:  /* *membar */
    case 415:  /* *stbar */
    case 383:  /* stack_protect_testdi */
    case 382:  /* stack_protect_setdi */
    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 339:  /* ffssi2 */
    case 336:  /* do_builtin_setjmp_setup */
    case 335:  /* goto_handler_and_restore */
    case 333:  /* *branch_sp64 */
    case 331:  /* probe_stack_rangedi */
    case 330:  /* blockage */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
    case 196:  /* *cmp_udiv_cc_set */
    case 194:  /* udivsi3_sp64 */
    case 193:  /* *cmp_sdiv_cc_set */
    case 191:  /* divsi3_sp64 */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 188:  /* const_umulsidi3_v8plus */
    case 185:  /* umulsidi3_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 176:  /* muldi3_v8plus */
    case 113:  /* *movtf_cc_reg_sp64 */
    case 112:  /* *movtf_cc_v9 */
    case 97:  /* *movtf_insn_sp64_no_fpu */
    case 95:  /* *movtf_insn_sp64 */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
    case 23:  /* *x_minus_i_eq_0 */
    case 22:  /* *x_plus_i_eq_0 */
    case 21:  /* *x_minus_i_ne_0 */
    case 20:  /* *x_plus_i_ne_0 */
    case 19:  /* *seqdi_zero_trunc */
    case 18:  /* *neg_seqdi_zero */
    case 17:  /* *seqdi_zero */
    case 16:  /* *seqsi_zero_extend */
    case 15:  /* *neg_seqsi_zero */
    case 14:  /* *seqsi_zero */
    case 13:  /* *snedi_zero_trunc */
    case 12:  /* *neg_snedi_zero */
    case 11:  /* *snedi_zero */
    case 10:  /* *snesi_zero_extend */
    case 9:  /* *neg_snesi_zero */
    case 8:  /* *snesi_zero */
      return IN_CALL_DELAY_FALSE;

    default:
      extract_constrain_insn_cached (insn);
      if ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    }
}

enum attr_leaf_function
get_attr_leaf_function (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE));

    }
}

enum attr_pic
get_attr_pic (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 159 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((flag_pic != 0 ? PIC_TRUE : PIC_FALSE));

    }
}

enum attr_tls_call_delay
get_attr_tls_call_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE));

    }
}

enum attr_type
get_attr_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_IALU;
        }
      else
        {
	  return TYPE_FGA;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPMOVE;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPSTORE;
        }
      else
        {
	  return TYPE_IALU;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_IALU;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_IALU;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FGA;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPMOVE;
        }
      else if (((1 << which_alternative) & 0x1c))
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_FPSTORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (((1 << which_alternative) & 0x78))
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_FPLOAD;
        }
      else
        {
	  return TYPE_IALU;
        }

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FPMOVE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_FPSTORE;
        }
      else
        {
	  return TYPE_FGA;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 90:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 93:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FGA;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPMOVE;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_IALU;
        }

    case 47:  /* *movqi_insn */
    case 94:  /* *movdf_insn_sp64_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 115:  /* *zero_extendqihi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 117:  /* *zero_extendqidi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IALU;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 119:  /* *zero_extendsidi2_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SHIFT;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 137:  /* *sign_extendsidi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SHIFT;
        }
      else
        {
	  return TYPE_SLOAD;
        }

    case 200:  /* *anddi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 203:  /* *andv8qi3_sp64 */
    case 204:  /* andsi3 */
    case 205:  /* andv2hi3 */
    case 206:  /* andv4qi3 */
    case 207:  /* *and_not_di_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 210:  /* *and_not_v8qi_sp64 */
    case 211:  /* *and_not_si */
    case 212:  /* *and_not_v2hi */
    case 213:  /* *and_not_v4qi */
    case 214:  /* *iordi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 217:  /* *iorv8qi3_sp64 */
    case 218:  /* iorsi3 */
    case 219:  /* iorv2hi3 */
    case 220:  /* iorv4qi3 */
    case 221:  /* *or_not_di_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 224:  /* *or_not_v8qi_sp64 */
    case 225:  /* *or_not_si */
    case 226:  /* *or_not_v2hi */
    case 227:  /* *or_not_v4qi */
    case 228:  /* *xordi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 231:  /* *xorv8qi3_sp64 */
    case 232:  /* xorsi3 */
    case 233:  /* xorv2hi3 */
    case 234:  /* xorv4qi3 */
    case 235:  /* *xor_not_di_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 239:  /* *xor_not_si */
    case 240:  /* *xor_not_v2hi */
    case 241:  /* *xor_not_v4qi */
    case 260:  /* *one_cmpldi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 263:  /* *one_cmplv8qi2_sp64 */
    case 264:  /* one_cmplsi2 */
    case 265:  /* one_cmplv2hi2 */
    case 266:  /* one_cmplv4qi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IALU;
        }
      else
        {
	  return TYPE_FGA;
        }

    case 287:  /* *negtf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 289:  /* *negdf2_notv9 */
    case 292:  /* *abstf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 295:  /* *absdf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPMOVE;
        }
      else
        {
	  return TYPE_IALU;
        }

    case 301:  /* ashlsi3 */
    case 302:  /* *ashldi3_sp64 */
      extract_insn_cached (insn);
      if (const_one_operand (operands[2], VOIDmode))
        {
	  return TYPE_IALU;
        }
      else
        {
	  return TYPE_SHIFT;
        }

    case 342:  /* trap */
    case 343:  /* *sparc.md:6894 */
    case 344:  /* *sparc.md:6906 */
      return TYPE_TRAP;

    case 337:  /* flush */
    case 338:  /* flushdi */
      return TYPE_IFLUSH;

    case 334:  /* flush_register_windows */
      return TYPE_FLUSHW;

    case 328:  /* save_register_windowdi */
      return TYPE_SAVEW;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 45:  /* load_pcrel_symsi */
    case 46:  /* load_pcrel_symdi */
    case 176:  /* muldi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 182:  /* smulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 184:  /* const_smulsi3_highpart_v8plus */
    case 185:  /* umulsidi3_v8plus */
    case 188:  /* const_umulsidi3_v8plus */
    case 189:  /* umulsi3_highpart_v8plus */
    case 190:  /* const_umulsi3_highpart_v8plus */
    case 191:  /* divsi3_sp64 */
    case 193:  /* *cmp_sdiv_cc_set */
    case 194:  /* udivsi3_sp64 */
    case 196:  /* *cmp_udiv_cc_set */
    case 303:  /* ashldi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 315:  /* lshrdi3_v8plus */
    case 331:  /* probe_stack_rangedi */
    case 335:  /* goto_handler_and_restore */
    case 336:  /* do_builtin_setjmp_setup */
    case 339:  /* ffssi2 */
    case 382:  /* stack_protect_setdi */
    case 383:  /* stack_protect_testdi */
    case 415:  /* *stbar */
    case 416:  /* *membar */
    case 417:  /* *sync_compare_and_swapsi */
    case 418:  /* *sync_compare_and_swapdi */
    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 420:  /* *swapsi */
    case 421:  /* *ldstubqi */
    case 422:  /* *ldstubhi */
    case 423:  /* *ldstubsi */
      return TYPE_MULTI;

    case 24:  /* *sltu_insn */
    case 25:  /* *neg_sltu_insn */
    case 26:  /* *neg_sltu_minus_x */
    case 27:  /* *neg_sltu_plus_x */
    case 28:  /* *sgeu_insn */
    case 29:  /* *neg_sgeu_insn */
    case 30:  /* *sltu_plus_x */
    case 31:  /* *sltu_plus_x_plus_y */
    case 32:  /* *x_minus_sltu */
    case 33:  /* *x_minus_y_minus_sltu */
    case 34:  /* *x_minus_sltu_plus_y */
    case 35:  /* *sgeu_plus_x */
    case 36:  /* *x_minus_sgeu */
    case 158:  /* addx */
    case 159:  /* *addx_extend_sp64 */
    case 166:  /* subx */
    case 167:  /* *subx_extend_sp64 */
      return TYPE_IALUX;

    case 98:  /* *movqi_cc_v9 */
    case 99:  /* *movhi_cc_v9 */
    case 100:  /* *movsi_cc_v9 */
    case 101:  /* *movdi_cc_v9 */
    case 102:  /* *movqi_cc_reg_sp64 */
    case 103:  /* *movhi_cc_reg_sp64 */
    case 104:  /* *movsi_cc_reg_sp64 */
    case 105:  /* *movdi_cc_reg_sp64 */
      return TYPE_CMOVE;

    case 384:  /* addv2si3 */
    case 385:  /* addv4hi3 */
    case 386:  /* addv2hi3 */
    case 387:  /* subv2si3 */
    case 388:  /* subv4hi3 */
    case 389:  /* subv2hi3 */
    case 390:  /* *nanddf_vis */
    case 391:  /* *nandv2si_vis */
    case 392:  /* *nandv4hi_vis */
    case 393:  /* *nandv8qi_vis */
    case 394:  /* *nandsf_vis */
    case 395:  /* *nandv2hi_vis */
    case 396:  /* *nandv4qi_vis */
    case 397:  /* fpack16_vis */
    case 398:  /* fpackfix_vis */
    case 399:  /* fpack32_vis */
    case 400:  /* fexpand_vis */
    case 401:  /* fpmerge_vis */
    case 409:  /* faligndatadi_vis */
    case 410:  /* faligndatav2si_vis */
    case 411:  /* faligndatav4hi_vis */
    case 412:  /* faligndatav8qi_vis */
    case 414:  /* pdist_vis */
      return TYPE_FGA;

    case 298:  /* *sqrttf2_hq */
    case 299:  /* sqrtdf2 */
      return TYPE_FPSQRTD;

    case 300:  /* sqrtsf2 */
      return TYPE_FPSQRTS;

    case 284:  /* *divtf3_hq */
    case 285:  /* divdf3 */
      return TYPE_FPDIVD;

    case 286:  /* divsf3 */
      return TYPE_FPDIVS;

    case 279:  /* *multf3_hq */
    case 280:  /* muldf3 */
    case 281:  /* mulsf3 */
    case 282:  /* *muldf3_extend */
    case 283:  /* *multf3_extend */
    case 402:  /* fmul8x16_vis */
    case 403:  /* fmul8x16au_vis */
    case 404:  /* fmul8x16al_vis */
    case 405:  /* fmul8sux16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 407:  /* fmuld8sux16_vis */
    case 408:  /* fmuld8ulx16_vis */
      return TYPE_FPMUL;

    case 2:  /* *cmpsf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 4:  /* *cmptf_fpe */
    case 5:  /* *cmpsf_fp */
    case 6:  /* *cmpdf_fp */
    case 7:  /* *cmptf_fp */
      return TYPE_FPCMP;

    case 107:  /* *movsf_cc_reg_sp64 */
    case 109:  /* movdf_cc_reg_sp64 */
    case 111:  /* *movtf_cc_reg_hq_sp64 */
      return TYPE_FPCRMOVE;

    case 106:  /* *movsf_cc_v9 */
    case 108:  /* movdf_cc_v9 */
    case 110:  /* *movtf_cc_hq_v9 */
      return TYPE_FPCMOVE;

    case 290:  /* *negdf2_v9 */
    case 291:  /* negsf2 */
    case 293:  /* *abstf2_hq_v9 */
    case 296:  /* *absdf2_v9 */
    case 297:  /* abssf2 */
      return TYPE_FPMOVE;

    case 140:  /* extendsfdf2 */
    case 141:  /* *extendsftf2_hq */
    case 142:  /* *extenddftf2_hq */
    case 143:  /* truncdfsf2 */
    case 144:  /* *trunctfsf2_hq */
    case 145:  /* *trunctfdf2_hq */
    case 146:  /* floatsisf2 */
    case 147:  /* floatsidf2 */
    case 148:  /* *floatsitf2_hq */
    case 149:  /* floatdisf2 */
    case 150:  /* floatdidf2 */
    case 151:  /* *floatditf2_hq */
    case 152:  /* fix_truncsfsi2 */
    case 153:  /* fix_truncdfsi2 */
    case 154:  /* *fix_trunctfsi2_hq */
    case 155:  /* fix_truncsfdi2 */
    case 156:  /* fix_truncdfdi2 */
    case 157:  /* *fix_trunctfdi2_hq */
    case 273:  /* *addtf3_hq */
    case 274:  /* adddf3 */
    case 275:  /* addsf3 */
    case 276:  /* *subtf3_hq */
    case 277:  /* subdf3 */
    case 278:  /* subsf3 */
      return TYPE_FP;

    case 192:  /* divdi3 */
    case 195:  /* udivdi3 */
      return TYPE_IDIV;

    case 174:  /* mulsi3 */
    case 175:  /* *muldi3_sp64 */
    case 177:  /* *cmp_mul_set */
    case 180:  /* *mulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
    case 186:  /* *umulsidi3_sp64 */
    case 187:  /* const_umulsidi3_sp64 */
    case 197:  /* *smacsi */
    case 198:  /* *smacdi */
    case 199:  /* *umacdi */
      return TYPE_IMUL;

    case 329:  /* *return_internal */
      return TYPE_RETURN;

    case 326:  /* *sibcall_symbolic_sp64 */
    case 327:  /* *sibcall_value_symbolic_sp64 */
      return TYPE_SIBCALL;

    case 322:  /* *call_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 348:  /* tgd_call64 */
    case 352:  /* tldm_call64 */
      return TYPE_CALL;

    case 37:  /* *normal_branch */
    case 38:  /* *inverted_branch */
    case 39:  /* *normal_fp_branch */
    case 40:  /* *inverted_fp_branch */
    case 41:  /* *normal_fpe_branch */
    case 42:  /* *inverted_fpe_branch */
    case 43:  /* *normal_int_branch_sp64 */
    case 44:  /* *inverted_int_branch_sp64 */
      return TYPE_BRANCH;

    case 320:  /* jump */
    case 321:  /* *tablejump_sp64 */
    case 333:  /* *branch_sp64 */
      return TYPE_UNCOND_BRANCH;

    case 378:  /* *tldo_stb_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 381:  /* *tldo_stx_sp64 */
      return TYPE_STORE;

    case 132:  /* *sign_extendhisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 136:  /* *sign_extendhidi2_insn */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
      return TYPE_SLOAD;

    case 55:  /* movsi_pic_gotdata_op */
    case 64:  /* movdi_pic_gotdata_op */
    case 114:  /* *zero_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 340:  /* prefetch_64 */
    case 341:  /* prefetch_32 */
    case 358:  /* tie_ld64 */
    case 362:  /* *tldo_ldub_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 377:  /* *tldo_ldx_sp64 */
      return TYPE_LOAD;

    case 306:  /* ashrsi3 */
    case 307:  /* *ashrsi3_extend */
    case 308:  /* *ashrsi3_extend2 */
    case 309:  /* *ashrdi3_sp64 */
    case 311:  /* lshrsi3 */
    case 312:  /* *lshrsi3_extend */
    case 313:  /* *lshrsi3_extend2 */
    case 314:  /* *lshrdi3_sp64 */
    case 316:  /* *sparc.md:5849 */
    case 317:  /* *sparc.md:5861 */
    case 318:  /* *sparc.md:5873 */
    case 319:  /* *sparc.md:5889 */
      return TYPE_SHIFT;

    case 0:  /* *cmpsi_insn */
    case 1:  /* *cmpdi_sp64 */
    case 120:  /* *cmp_zero_extendqisi2 */
    case 121:  /* *cmp_zero_qi */
    case 122:  /* *cmp_zero_extendqisi2_set */
    case 123:  /* *cmp_zero_extendqisi2_andcc_set */
    case 124:  /* *cmp_zero_extendqidi2 */
    case 125:  /* *cmp_zero_qi_sp64 */
    case 126:  /* *cmp_zero_extendqidi2_set */
    case 127:  /* *cmp_zero_extendqidi2_andcc_set */
    case 128:  /* *cmp_siqi_trunc */
    case 129:  /* *cmp_siqi_trunc_set */
    case 130:  /* *cmp_diqi_trunc */
    case 131:  /* *cmp_diqi_trunc_set */
    case 138:  /* *cmp_zero_extract */
    case 139:  /* *cmp_zero_extract_sp64 */
    case 162:  /* *cmp_cc_plus */
    case 163:  /* *cmp_ccx_plus */
    case 164:  /* *cmp_cc_plus_set */
    case 165:  /* *cmp_ccx_plus_set */
    case 170:  /* *cmp_minus_cc */
    case 171:  /* *cmp_minus_ccx */
    case 172:  /* cmp_minus_cc_set */
    case 173:  /* *cmp_minus_ccx_set */
    case 242:  /* *cmp_cc_arith_op */
    case 243:  /* *cmp_ccx_arith_op */
    case 244:  /* *cmp_cc_arith_op_set */
    case 245:  /* *cmp_ccx_arith_op_set */
    case 246:  /* *cmp_cc_xor_not */
    case 247:  /* *cmp_ccx_xor_not */
    case 248:  /* *cmp_cc_xor_not_set */
    case 249:  /* *cmp_ccx_xor_not_set */
    case 250:  /* *cmp_cc_arith_op_not */
    case 251:  /* *cmp_ccx_arith_op_not */
    case 252:  /* *cmp_cc_arith_op_not_set */
    case 253:  /* *cmp_ccx_arith_op_not_set */
    case 256:  /* *cmp_cc_neg */
    case 257:  /* *cmp_ccx_neg */
    case 258:  /* *cmp_cc_set_neg */
    case 259:  /* *cmp_ccx_set_neg */
    case 267:  /* *cmp_cc_not */
    case 268:  /* *cmp_ccx_not */
    case 269:  /* *cmp_cc_set_not */
    case 270:  /* *cmp_ccx_set_not */
    case 271:  /* *cmp_cc_set */
    case 272:  /* *cmp_ccx_set64 */
    case 304:  /* *cmp_cc_ashift_1 */
    case 305:  /* *cmp_cc_set_ashift_1 */
      return TYPE_COMPARE;

    default:
      return TYPE_IALU;

    }
}

enum attr_us3load_type
get_attr_us3load_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return US3LOAD_TYPE_2CYCLE;
        }
      else if (which_alternative == 2)
        {
	  return US3LOAD_TYPE_3CYCLE;
        }
      else
        {
	  return US3LOAD_TYPE_2CYCLE;
        }

    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return US3LOAD_TYPE_2CYCLE;
        }
      else if (which_alternative == 1)
        {
	  return US3LOAD_TYPE_3CYCLE;
        }
      else
        {
	  return US3LOAD_TYPE_2CYCLE;
        }

    case 115:  /* *zero_extendqihi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 117:  /* *zero_extendqidi2_insn */
    case 137:  /* *sign_extendsidi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return US3LOAD_TYPE_2CYCLE;
        }
      else
        {
	  return US3LOAD_TYPE_3CYCLE;
        }

    case 114:  /* *zero_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 136:  /* *sign_extendhidi2_insn */
    case 362:  /* *tldo_ldub_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 376:  /* *tldo_ldsw1_sp64 */
      return US3LOAD_TYPE_3CYCLE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return US3LOAD_TYPE_2CYCLE;

    }
}

int
eligible_for_delay (rtx delay_insn ATTRIBUTE_UNUSED, int slot, rtx candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx insn;

  gcc_assert (slot < 1);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 329:  /* *return_internal */
      slot += 5 * 1;
      break;
      break;

    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
      slot += 2 * 1;
      break;
      break;

    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
      slot += 1 * 1;
      break;
      break;

    case 333:  /* *branch_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
      slot += 4 * 1;
      break;
      break;

    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      slot += 3 * 1;
      break;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (get_attr_type (insn) == TYPE_RETURN)
        {
	  slot += 5 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_UNCOND_BRANCH)
        {
	  slot += 4 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_BRANCH)
        {
	  slot += 3 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_SIBCALL)
        {
	  slot += 2 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_CALL)
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    default:
      slot += 0 * 1;
      break;
      break;

    }

  gcc_assert (slot >= 1);

  insn = candidate_insn;
  switch (slot)
    {
    case 5:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  if (get_attr_eligible_for_return_delay (insn) == ELIGIBLE_FOR_RETURN_DELAY_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if ((
#line 290 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((eligible_for_return_delay (insn)
		? ELIGIBLE_FOR_RETURN_DELAY_TRUE
		: ELIGIBLE_FOR_RETURN_DELAY_FALSE))) == (
(ELIGIBLE_FOR_RETURN_DELAY_TRUE)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 4:
      switch (recog_memoized (insn))
	{
        case 329:  /* *return_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 295:  /* *absdf2_notv9 */
        case 294:  /* *abstf2_v9 */
        case 292:  /* *abstf2_notv9 */
        case 289:  /* *negdf2_notv9 */
        case 288:  /* *negtf2_v9 */
        case 287:  /* *negtf2_notv9 */
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 96:  /* *movtf_insn_sp64_hq */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0xe))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 93:  /* *movdf_insn_sp64 */
        case 92:  /* *movdf_insn_sp64 */
        case 91:  /* *movdf_insn_sp64 */
        case 90:  /* *movdf_insn_sp64 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x7f))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 89:  /* *movdf_insn_sp32_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 88:  /* *movdf_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0xf))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 58:  /* *movdi_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x186))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 423:  /* *ldstubsi */
        case 422:  /* *ldstubhi */
        case 421:  /* *ldstubqi */
        case 420:  /* *swapsi */
        case 419:  /* *sync_compare_and_swapdi_v8plus */
        case 418:  /* *sync_compare_and_swapdi */
        case 417:  /* *sync_compare_and_swapsi */
        case 416:  /* *membar */
        case 415:  /* *stbar */
        case 383:  /* stack_protect_testdi */
        case 382:  /* stack_protect_setdi */
        case 352:  /* tldm_call64 */
        case 348:  /* tgd_call64 */
        case 339:  /* ffssi2 */
        case 336:  /* do_builtin_setjmp_setup */
        case 335:  /* goto_handler_and_restore */
        case 333:  /* *branch_sp64 */
        case 331:  /* probe_stack_rangedi */
        case 330:  /* blockage */
        case 327:  /* *sibcall_value_symbolic_sp64 */
        case 326:  /* *sibcall_symbolic_sp64 */
        case 325:  /* *call_value_symbolic_sp64 */
        case 324:  /* *call_value_address_sp64 */
        case 323:  /* *call_symbolic_sp64 */
        case 322:  /* *call_address_sp64 */
        case 321:  /* *tablejump_sp64 */
        case 320:  /* jump */
        case 315:  /* lshrdi3_v8plus */
        case 310:  /* ashrdi3_v8plus */
        case 303:  /* ashldi3_v8plus */
        case 196:  /* *cmp_udiv_cc_set */
        case 194:  /* udivsi3_sp64 */
        case 193:  /* *cmp_sdiv_cc_set */
        case 191:  /* divsi3_sp64 */
        case 190:  /* const_umulsi3_highpart_v8plus */
        case 189:  /* umulsi3_highpart_v8plus */
        case 188:  /* const_umulsidi3_v8plus */
        case 185:  /* umulsidi3_v8plus */
        case 184:  /* const_smulsi3_highpart_v8plus */
        case 183:  /* *sparc.md:4082 */
        case 182:  /* smulsi3_highpart_v8plus */
        case 179:  /* const_mulsidi3_v8plus */
        case 178:  /* mulsidi3_v8plus */
        case 176:  /* muldi3_v8plus */
        case 113:  /* *movtf_cc_reg_sp64 */
        case 112:  /* *movtf_cc_v9 */
        case 97:  /* *movtf_insn_sp64_no_fpu */
        case 95:  /* *movtf_insn_sp64 */
        case 46:  /* load_pcrel_symdi */
        case 45:  /* load_pcrel_symsi */
        case 44:  /* *inverted_int_branch_sp64 */
        case 43:  /* *normal_int_branch_sp64 */
        case 42:  /* *inverted_fpe_branch */
        case 41:  /* *normal_fpe_branch */
        case 40:  /* *inverted_fp_branch */
        case 39:  /* *normal_fp_branch */
        case 38:  /* *inverted_branch */
        case 37:  /* *normal_branch */
        case 23:  /* *x_minus_i_eq_0 */
        case 22:  /* *x_plus_i_eq_0 */
        case 21:  /* *x_minus_i_ne_0 */
        case 20:  /* *x_plus_i_ne_0 */
        case 19:  /* *seqdi_zero_trunc */
        case 18:  /* *neg_seqdi_zero */
        case 17:  /* *seqdi_zero */
        case 16:  /* *seqsi_zero_extend */
        case 15:  /* *neg_seqsi_zero */
        case 14:  /* *seqsi_zero */
        case 13:  /* *snedi_zero_trunc */
        case 12:  /* *neg_snedi_zero */
        case 11:  /* *snedi_zero */
        case 10:  /* *snesi_zero_extend */
        case 9:  /* *neg_snesi_zero */
        case 8:  /* *snesi_zero */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  if (get_attr_in_uncond_branch_delay (insn) == IN_UNCOND_BRANCH_DELAY_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  return 1;

      }
    case 3:
      switch (recog_memoized (insn))
	{
        case 329:  /* *return_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 295:  /* *absdf2_notv9 */
        case 294:  /* *abstf2_v9 */
        case 292:  /* *abstf2_notv9 */
        case 289:  /* *negdf2_notv9 */
        case 288:  /* *negtf2_v9 */
        case 287:  /* *negtf2_notv9 */
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 96:  /* *movtf_insn_sp64_hq */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0xe))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 93:  /* *movdf_insn_sp64 */
        case 92:  /* *movdf_insn_sp64 */
        case 91:  /* *movdf_insn_sp64 */
        case 90:  /* *movdf_insn_sp64 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x7f))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 89:  /* *movdf_insn_sp32_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 88:  /* *movdf_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0xf))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 58:  /* *movdi_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x186))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 423:  /* *ldstubsi */
        case 422:  /* *ldstubhi */
        case 421:  /* *ldstubqi */
        case 420:  /* *swapsi */
        case 419:  /* *sync_compare_and_swapdi_v8plus */
        case 418:  /* *sync_compare_and_swapdi */
        case 417:  /* *sync_compare_and_swapsi */
        case 416:  /* *membar */
        case 415:  /* *stbar */
        case 383:  /* stack_protect_testdi */
        case 382:  /* stack_protect_setdi */
        case 352:  /* tldm_call64 */
        case 348:  /* tgd_call64 */
        case 339:  /* ffssi2 */
        case 336:  /* do_builtin_setjmp_setup */
        case 335:  /* goto_handler_and_restore */
        case 333:  /* *branch_sp64 */
        case 331:  /* probe_stack_rangedi */
        case 330:  /* blockage */
        case 327:  /* *sibcall_value_symbolic_sp64 */
        case 326:  /* *sibcall_symbolic_sp64 */
        case 325:  /* *call_value_symbolic_sp64 */
        case 324:  /* *call_value_address_sp64 */
        case 323:  /* *call_symbolic_sp64 */
        case 322:  /* *call_address_sp64 */
        case 321:  /* *tablejump_sp64 */
        case 320:  /* jump */
        case 315:  /* lshrdi3_v8plus */
        case 310:  /* ashrdi3_v8plus */
        case 303:  /* ashldi3_v8plus */
        case 196:  /* *cmp_udiv_cc_set */
        case 194:  /* udivsi3_sp64 */
        case 193:  /* *cmp_sdiv_cc_set */
        case 191:  /* divsi3_sp64 */
        case 190:  /* const_umulsi3_highpart_v8plus */
        case 189:  /* umulsi3_highpart_v8plus */
        case 188:  /* const_umulsidi3_v8plus */
        case 185:  /* umulsidi3_v8plus */
        case 184:  /* const_smulsi3_highpart_v8plus */
        case 183:  /* *sparc.md:4082 */
        case 182:  /* smulsi3_highpart_v8plus */
        case 179:  /* const_mulsidi3_v8plus */
        case 178:  /* mulsidi3_v8plus */
        case 176:  /* muldi3_v8plus */
        case 113:  /* *movtf_cc_reg_sp64 */
        case 112:  /* *movtf_cc_v9 */
        case 97:  /* *movtf_insn_sp64_no_fpu */
        case 95:  /* *movtf_insn_sp64 */
        case 46:  /* load_pcrel_symdi */
        case 45:  /* load_pcrel_symsi */
        case 44:  /* *inverted_int_branch_sp64 */
        case 43:  /* *normal_int_branch_sp64 */
        case 42:  /* *inverted_fpe_branch */
        case 41:  /* *normal_fpe_branch */
        case 40:  /* *inverted_fp_branch */
        case 39:  /* *normal_fp_branch */
        case 38:  /* *inverted_branch */
        case 37:  /* *normal_branch */
        case 23:  /* *x_minus_i_eq_0 */
        case 22:  /* *x_plus_i_eq_0 */
        case 21:  /* *x_minus_i_ne_0 */
        case 20:  /* *x_plus_i_ne_0 */
        case 19:  /* *seqdi_zero_trunc */
        case 18:  /* *neg_seqdi_zero */
        case 17:  /* *seqdi_zero */
        case 16:  /* *seqsi_zero_extend */
        case 15:  /* *neg_seqsi_zero */
        case 14:  /* *seqsi_zero */
        case 13:  /* *snedi_zero_trunc */
        case 12:  /* *neg_snedi_zero */
        case 11:  /* *snedi_zero */
        case 10:  /* *snesi_zero_extend */
        case 9:  /* *neg_snesi_zero */
        case 8:  /* *snesi_zero */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  if (get_attr_in_branch_delay (insn) == IN_BRANCH_DELAY_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  return 1;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  if (get_attr_eligible_for_sibcall_delay (insn) == ELIGIBLE_FOR_SIBCALL_DELAY_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if ((
#line 285 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((eligible_for_sibcall_delay (insn)
		? ELIGIBLE_FOR_SIBCALL_DELAY_TRUE
		: ELIGIBLE_FOR_SIBCALL_DELAY_FALSE))) == (
(ELIGIBLE_FOR_SIBCALL_DELAY_TRUE)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 329:  /* *return_internal */
	  extract_constrain_insn_cached (insn);
	  if (((((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))))) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 295:  /* *absdf2_notv9 */
        case 294:  /* *abstf2_v9 */
        case 292:  /* *abstf2_notv9 */
        case 289:  /* *negdf2_notv9 */
        case 288:  /* *negtf2_v9 */
        case 287:  /* *negtf2_notv9 */
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative == 0) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 96:  /* *movtf_insn_sp64_hq */
	  extract_constrain_insn_cached (insn);
	  if ((((1 << which_alternative) & 0xc)) || ((which_alternative == 1) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 93:  /* *movdf_insn_sp64 */
        case 92:  /* *movdf_insn_sp64 */
        case 91:  /* *movdf_insn_sp64 */
        case 90:  /* *movdf_insn_sp64 */
	  extract_constrain_insn_cached (insn);
	  if ((((1 << which_alternative) & 0x6c)) || ((((1 << which_alternative) & 0x13)) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 89:  /* *movdf_insn_sp32_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 88:  /* *movdf_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0xf))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 85:  /* *movsf_insn_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if ((!((1 << which_alternative) & 0x7)) || ((((1 << which_alternative) & 0x7)) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 84:  /* *movsf_insn */
        case 83:  /* *movsf_insn */
        case 82:  /* *movsf_insn */
	  extract_constrain_insn_cached (insn);
	  if ((!((1 << which_alternative) & 0x1f)) || ((((1 << which_alternative) & 0x1f)) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 58:  /* *movdi_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x186))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 381:  /* *tldo_stx_sp64 */
        case 380:  /* *tldo_stw_sp64 */
        case 379:  /* *tldo_sth_sp64 */
        case 378:  /* *tldo_stb_sp64 */
        case 377:  /* *tldo_ldx_sp64 */
        case 375:  /* *tldo_lduw1_sp64 */
        case 374:  /* *tldo_lduw_sp64 */
        case 371:  /* *tldo_lduh2_sp64 */
        case 370:  /* *tldo_lduh1_sp64 */
        case 369:  /* *tldo_lduh_sp64 */
        case 365:  /* *tldo_ldub3_sp64 */
        case 364:  /* *tldo_ldub2_sp64 */
        case 363:  /* *tldo_ldub1_sp64 */
        case 362:  /* *tldo_ldub_sp64 */
        case 358:  /* tie_ld64 */
        case 341:  /* prefetch_32 */
        case 340:  /* prefetch_64 */
        case 118:  /* *zero_extendhidi2_insn */
        case 114:  /* *zero_extendhisi2_insn */
        case 64:  /* movdi_pic_gotdata_op */
        case 55:  /* movsi_pic_gotdata_op */
	  return 1;

        case 59:  /* *movdi_insn_sp64 */
        case 50:  /* *movsi_insn */
	  extract_constrain_insn_cached (insn);
	  if ((((1 << which_alternative) & 0x6c)) || ((!((1 << which_alternative) & 0x6c)) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 48:  /* *movhi_insn */
	  extract_constrain_insn_cached (insn);
	  if ((!((1 << which_alternative) & 0x3)) || ((((1 << which_alternative) & 0x3)) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 119:  /* *zero_extendsidi2_insn_sp64 */
        case 117:  /* *zero_extendqidi2_insn */
        case 116:  /* *zero_extendqisi2_insn */
        case 115:  /* *zero_extendqihi2_insn */
        case 94:  /* *movdf_insn_sp64_no_fpu */
        case 47:  /* *movqi_insn */
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 0) || ((which_alternative == 0) && ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 423:  /* *ldstubsi */
        case 422:  /* *ldstubhi */
        case 421:  /* *ldstubqi */
        case 420:  /* *swapsi */
        case 419:  /* *sync_compare_and_swapdi_v8plus */
        case 418:  /* *sync_compare_and_swapdi */
        case 417:  /* *sync_compare_and_swapsi */
        case 416:  /* *membar */
        case 415:  /* *stbar */
        case 383:  /* stack_protect_testdi */
        case 382:  /* stack_protect_setdi */
        case 352:  /* tldm_call64 */
        case 348:  /* tgd_call64 */
        case 339:  /* ffssi2 */
        case 336:  /* do_builtin_setjmp_setup */
        case 335:  /* goto_handler_and_restore */
        case 333:  /* *branch_sp64 */
        case 331:  /* probe_stack_rangedi */
        case 330:  /* blockage */
        case 327:  /* *sibcall_value_symbolic_sp64 */
        case 326:  /* *sibcall_symbolic_sp64 */
        case 325:  /* *call_value_symbolic_sp64 */
        case 324:  /* *call_value_address_sp64 */
        case 323:  /* *call_symbolic_sp64 */
        case 322:  /* *call_address_sp64 */
        case 321:  /* *tablejump_sp64 */
        case 320:  /* jump */
        case 315:  /* lshrdi3_v8plus */
        case 310:  /* ashrdi3_v8plus */
        case 303:  /* ashldi3_v8plus */
        case 196:  /* *cmp_udiv_cc_set */
        case 194:  /* udivsi3_sp64 */
        case 193:  /* *cmp_sdiv_cc_set */
        case 191:  /* divsi3_sp64 */
        case 190:  /* const_umulsi3_highpart_v8plus */
        case 189:  /* umulsi3_highpart_v8plus */
        case 188:  /* const_umulsidi3_v8plus */
        case 185:  /* umulsidi3_v8plus */
        case 184:  /* const_smulsi3_highpart_v8plus */
        case 183:  /* *sparc.md:4082 */
        case 182:  /* smulsi3_highpart_v8plus */
        case 179:  /* const_mulsidi3_v8plus */
        case 178:  /* mulsidi3_v8plus */
        case 176:  /* muldi3_v8plus */
        case 113:  /* *movtf_cc_reg_sp64 */
        case 112:  /* *movtf_cc_v9 */
        case 97:  /* *movtf_insn_sp64_no_fpu */
        case 95:  /* *movtf_insn_sp64 */
        case 46:  /* load_pcrel_symdi */
        case 45:  /* load_pcrel_symsi */
        case 44:  /* *inverted_int_branch_sp64 */
        case 43:  /* *normal_int_branch_sp64 */
        case 42:  /* *inverted_fpe_branch */
        case 41:  /* *normal_fpe_branch */
        case 40:  /* *inverted_fp_branch */
        case 39:  /* *normal_fp_branch */
        case 38:  /* *inverted_branch */
        case 37:  /* *normal_branch */
        case 23:  /* *x_minus_i_eq_0 */
        case 22:  /* *x_plus_i_eq_0 */
        case 21:  /* *x_minus_i_ne_0 */
        case 20:  /* *x_plus_i_ne_0 */
        case 19:  /* *seqdi_zero_trunc */
        case 18:  /* *neg_seqdi_zero */
        case 17:  /* *seqdi_zero */
        case 16:  /* *seqsi_zero_extend */
        case 15:  /* *neg_seqsi_zero */
        case 14:  /* *seqsi_zero */
        case 13:  /* *snedi_zero_trunc */
        case 12:  /* *neg_snedi_zero */
        case 11:  /* *snedi_zero */
        case 10:  /* *snesi_zero_extend */
        case 9:  /* *neg_snesi_zero */
        case 8:  /* *snesi_zero */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  if (get_attr_in_call_delay (insn) == IN_CALL_DELAY_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if ((
#line 269 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((tls_call_delay (insn)
		? TLS_CALL_DELAY_TRUE : TLS_CALL_DELAY_FALSE))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    default:
      gcc_unreachable ();
    }
}

int
eligible_for_annul_false (rtx delay_insn ATTRIBUTE_UNUSED, int slot, rtx candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx insn;

  gcc_assert (slot < 1);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 329:  /* *return_internal */
      slot += 5 * 1;
      break;
      break;

    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
      slot += 2 * 1;
      break;
      break;

    case 352:  /* tldm_call64 */
    case 348:  /* tgd_call64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
      slot += 1 * 1;
      break;
      break;

    case 333:  /* *branch_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
      slot += 4 * 1;
      break;
      break;

    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      slot += 3 * 1;
      break;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (get_attr_type (insn) == TYPE_RETURN)
        {
	  slot += 5 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_UNCOND_BRANCH)
        {
	  slot += 4 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_BRANCH)
        {
	  slot += 3 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_SIBCALL)
        {
	  slot += 2 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_CALL)
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    default:
      slot += 0 * 1;
      break;
      break;

    }

  gcc_assert (slot >= 1);

  insn = candidate_insn;
  switch (slot)
    {
    case 5:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 4:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 3:
      switch (recog_memoized (insn))
	{
        case 329:  /* *return_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 170 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 166 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 295:  /* *absdf2_notv9 */
        case 294:  /* *abstf2_v9 */
        case 292:  /* *abstf2_notv9 */
        case 289:  /* *negdf2_notv9 */
        case 288:  /* *negtf2_v9 */
        case 287:  /* *negtf2_notv9 */
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 96:  /* *movtf_insn_sp64_hq */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0xe))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 93:  /* *movdf_insn_sp64 */
        case 92:  /* *movdf_insn_sp64 */
        case 91:  /* *movdf_insn_sp64 */
        case 90:  /* *movdf_insn_sp64 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x7f))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 89:  /* *movdf_insn_sp32_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 88:  /* *movdf_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0xf))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 58:  /* *movdi_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x186))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 423:  /* *ldstubsi */
        case 422:  /* *ldstubhi */
        case 421:  /* *ldstubqi */
        case 420:  /* *swapsi */
        case 419:  /* *sync_compare_and_swapdi_v8plus */
        case 418:  /* *sync_compare_and_swapdi */
        case 417:  /* *sync_compare_and_swapsi */
        case 416:  /* *membar */
        case 415:  /* *stbar */
        case 383:  /* stack_protect_testdi */
        case 382:  /* stack_protect_setdi */
        case 352:  /* tldm_call64 */
        case 348:  /* tgd_call64 */
        case 339:  /* ffssi2 */
        case 336:  /* do_builtin_setjmp_setup */
        case 335:  /* goto_handler_and_restore */
        case 333:  /* *branch_sp64 */
        case 331:  /* probe_stack_rangedi */
        case 330:  /* blockage */
        case 327:  /* *sibcall_value_symbolic_sp64 */
        case 326:  /* *sibcall_symbolic_sp64 */
        case 325:  /* *call_value_symbolic_sp64 */
        case 324:  /* *call_value_address_sp64 */
        case 323:  /* *call_symbolic_sp64 */
        case 322:  /* *call_address_sp64 */
        case 321:  /* *tablejump_sp64 */
        case 320:  /* jump */
        case 315:  /* lshrdi3_v8plus */
        case 310:  /* ashrdi3_v8plus */
        case 303:  /* ashldi3_v8plus */
        case 196:  /* *cmp_udiv_cc_set */
        case 194:  /* udivsi3_sp64 */
        case 193:  /* *cmp_sdiv_cc_set */
        case 191:  /* divsi3_sp64 */
        case 190:  /* const_umulsi3_highpart_v8plus */
        case 189:  /* umulsi3_highpart_v8plus */
        case 188:  /* const_umulsidi3_v8plus */
        case 185:  /* umulsidi3_v8plus */
        case 184:  /* const_smulsi3_highpart_v8plus */
        case 183:  /* *sparc.md:4082 */
        case 182:  /* smulsi3_highpart_v8plus */
        case 179:  /* const_mulsidi3_v8plus */
        case 178:  /* mulsidi3_v8plus */
        case 176:  /* muldi3_v8plus */
        case 113:  /* *movtf_cc_reg_sp64 */
        case 112:  /* *movtf_cc_v9 */
        case 97:  /* *movtf_insn_sp64_no_fpu */
        case 95:  /* *movtf_insn_sp64 */
        case 46:  /* load_pcrel_symdi */
        case 45:  /* load_pcrel_symsi */
        case 44:  /* *inverted_int_branch_sp64 */
        case 43:  /* *normal_int_branch_sp64 */
        case 42:  /* *inverted_fpe_branch */
        case 41:  /* *normal_fpe_branch */
        case 40:  /* *inverted_fp_branch */
        case 39:  /* *normal_fp_branch */
        case 38:  /* *inverted_branch */
        case 37:  /* *normal_branch */
        case 23:  /* *x_minus_i_eq_0 */
        case 22:  /* *x_plus_i_eq_0 */
        case 21:  /* *x_minus_i_ne_0 */
        case 20:  /* *x_plus_i_ne_0 */
        case 19:  /* *seqdi_zero_trunc */
        case 18:  /* *neg_seqdi_zero */
        case 17:  /* *seqdi_zero */
        case 16:  /* *seqsi_zero_extend */
        case 15:  /* *neg_seqsi_zero */
        case 14:  /* *seqsi_zero */
        case 13:  /* *snedi_zero_trunc */
        case 12:  /* *neg_snedi_zero */
        case 11:  /* *snedi_zero */
        case 10:  /* *snesi_zero_extend */
        case 9:  /* *neg_snesi_zero */
        case 8:  /* *snesi_zero */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  if (get_attr_in_annul_branch_delay (insn) == IN_ANNUL_BRANCH_DELAY_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  return 1;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    default:
      gcc_unreachable ();
    }
}

int
const_num_delay_slots (rtx insn)
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}

EXPORTED_CONST int length_unit_log = 0;
