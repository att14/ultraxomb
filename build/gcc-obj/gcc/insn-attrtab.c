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
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

int
insn_current_length (rtx insn ATTRIBUTE_UNUSED)
{
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
  switch (recog_memoized (insn))
    {
    case 335:  /* do_builtin_setjmp_setup */
      extract_constrain_insn_cached (insn);
      if ((
#line 156 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((cfun->calls_alloca != 0
		? CALLS_ALLOCA_TRUE : CALLS_ALLOCA_FALSE))) == (
(CALLS_ALLOCA_FALSE)))
        {
	  return 0;
        }
      else if (! ((
#line 121 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(TARGET_V9))))
        {
	  return 1;
        }
      else if ((
#line 153 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((flag_pic != 0 ? PIC_TRUE : PIC_FALSE))) == (
(PIC_TRUE)))
        {
	  return 4;
        }
      else
        {
	  return 3;
        }

    case 334:  /* goto_handler_and_restore */
      extract_constrain_insn_cached (insn);
      if ((
#line 168 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))
        {
	  if ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 160 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))
        {
	  if ((
#line 168 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((flag_delayed_branch != 0
		? DELAYED_BRANCH_TRUE : DELAYED_BRANCH_FALSE))) == (
(DELAYED_BRANCH_TRUE)))
	    {
	      if ((
#line 121 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
	      if ((
#line 121 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(TARGET_V9)))
	        {
		  return 3;
	        }
	      else
	        {
		  return 4;
	        }
	    }
        }
      else if ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
        {
	  if ((
#line 168 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))
        {
	  if ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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

    case 351:  /* tldm_call64 */
    case 347:  /* tgd_call64 */
    case 332:  /* *branch_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
      extract_constrain_insn_cached (insn);
      if ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 168 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      if ((
#line 210 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 213 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
    case 183:  /* *sparc.md:4075 */
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

    case 418:  /* *sync_compare_and_swapdi_v8plus */
    case 338:  /* ffssi2 */
      return 8;

    case 382:  /* stack_protect_testdi */
      return 4;

    case 381:  /* stack_protect_setdi */
      return 3;

    case 330:  /* blockage */
      return 0;

    case 196:  /* *cmp_udiv_cc_set */
      if ((
#line 121 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 121 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
  switch (recog_memoized (insn))
    {
    case 335:  /* do_builtin_setjmp_setup */
      extract_constrain_insn_cached (insn);
      if ((
#line 156 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((cfun->calls_alloca != 0
		? CALLS_ALLOCA_TRUE : CALLS_ALLOCA_FALSE))) == (
(CALLS_ALLOCA_FALSE)))
        {
	  return 0;
        }
      else if (! ((
#line 121 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(TARGET_V9))))
        {
	  return 1;
        }
      else if ((
#line 153 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((flag_pic != 0 ? PIC_TRUE : PIC_FALSE))) == (
(PIC_TRUE)))
        {
	  return 4;
        }
      else
        {
	  return 3;
        }

    case 334:  /* goto_handler_and_restore */
      extract_constrain_insn_cached (insn);
      if ((
#line 168 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))
        {
	  if ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 160 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))
        {
	  if ((
#line 168 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((flag_delayed_branch != 0
		? DELAYED_BRANCH_TRUE : DELAYED_BRANCH_FALSE))) == (
(DELAYED_BRANCH_TRUE)))
	    {
	      if ((
#line 121 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
	      if ((
#line 121 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(TARGET_V9)))
	        {
		  return 3;
	        }
	      else
	        {
		  return 4;
	        }
	    }
        }
      else if ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
        {
	  if ((
#line 168 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))
        {
	  if ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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

    case 351:  /* tldm_call64 */
    case 347:  /* tgd_call64 */
    case 332:  /* *branch_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
      extract_constrain_insn_cached (insn);
      if ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 168 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      if ((
#line 210 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 213 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
    case 183:  /* *sparc.md:4075 */
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

    case 418:  /* *sync_compare_and_swapdi_v8plus */
    case 338:  /* ffssi2 */
      return 8;

    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 382:  /* stack_protect_testdi */
      return 4;

    case 381:  /* stack_protect_setdi */
      return 3;

    case 330:  /* blockage */
      return 0;

    case 196:  /* *cmp_udiv_cc_set */
      if ((
#line 121 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 121 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
  switch (recog_memoized (insn))
    {
    case 293:  /* *abstf2_hq_v9 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || (((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || (((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3))) || (((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 413:  /* pdist_vis */
    case 411:  /* faligndatav8qi_vis */
    case 410:  /* faligndatav4hi_vis */
    case 409:  /* faligndatav2si_vis */
    case 408:  /* faligndatadi_vis */
    case 400:  /* fpmerge_vis */
    case 399:  /* fexpand_vis */
    case 398:  /* fpack32_vis */
    case 397:  /* fpackfix_vis */
    case 396:  /* fpack16_vis */
    case 395:  /* *nandv4qi_vis */
    case 394:  /* *nandv2hi_vis */
    case 393:  /* *nandsf_vis */
    case 392:  /* *nandv8qi_vis */
    case 391:  /* *nandv4hi_vis */
    case 390:  /* *nandv2si_vis */
    case 389:  /* *nanddf_vis */
    case 388:  /* subv2hi3 */
    case 387:  /* subv4hi3 */
    case 386:  /* subv2si3 */
    case 385:  /* addv2hi3 */
    case 384:  /* addv4hi3 */
    case 383:  /* addv2si3 */
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2)) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0xc))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x6c))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x3))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0)) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0xf))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x7))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5)) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x1f))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 8)) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x187))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5)) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x13))) || (((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 422:  /* *ldstubsi */
    case 421:  /* *ldstubhi */
    case 420:  /* *ldstubqi */
    case 419:  /* *swapsi */
    case 418:  /* *sync_compare_and_swapdi_v8plus */
    case 417:  /* *sync_compare_and_swapdi */
    case 416:  /* *sync_compare_and_swapsi */
    case 415:  /* *membar */
    case 414:  /* *stbar */
    case 382:  /* stack_protect_testdi */
    case 381:  /* stack_protect_setdi */
    case 380:  /* *tldo_stx_sp64 */
    case 379:  /* *tldo_stw_sp64 */
    case 378:  /* *tldo_sth_sp64 */
    case 377:  /* *tldo_stb_sp64 */
    case 376:  /* *tldo_ldx_sp64 */
    case 375:  /* *tldo_ldsw1_sp64 */
    case 374:  /* *tldo_lduw1_sp64 */
    case 373:  /* *tldo_lduw_sp64 */
    case 372:  /* *tldo_ldsh2_sp64 */
    case 371:  /* *tldo_ldsh1_sp64 */
    case 370:  /* *tldo_lduh2_sp64 */
    case 369:  /* *tldo_lduh1_sp64 */
    case 368:  /* *tldo_lduh_sp64 */
    case 367:  /* *tldo_ldsb3_sp64 */
    case 366:  /* *tldo_ldsb2_sp64 */
    case 365:  /* *tldo_ldsb1_sp64 */
    case 364:  /* *tldo_ldub3_sp64 */
    case 363:  /* *tldo_ldub2_sp64 */
    case 362:  /* *tldo_ldub1_sp64 */
    case 361:  /* *tldo_ldub_sp64 */
    case 357:  /* tie_ld64 */
    case 351:  /* tldm_call64 */
    case 347:  /* tgd_call64 */
    case 343:  /* *sparc.md:6885 */
    case 342:  /* *sparc.md:6873 */
    case 341:  /* trap */
    case 340:  /* prefetch_32 */
    case 339:  /* prefetch_64 */
    case 338:  /* ffssi2 */
    case 337:  /* flushdi */
    case 336:  /* flush */
    case 335:  /* do_builtin_setjmp_setup */
    case 334:  /* goto_handler_and_restore */
    case 333:  /* flush_register_windows */
    case 332:  /* *branch_sp64 */
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
    case 183:  /* *sparc.md:4075 */
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPLOAD)) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((get_attr_type (insn) == TYPE_IALU) || (get_attr_type (insn) == TYPE_SHIFT)) || (get_attr_type (insn) == TYPE_COMPARE))) || ((((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMOVE)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || ((((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPCMOVE) || (get_attr_type (insn) == TYPE_FPCRMOVE))) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || ((((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FP)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || ((((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMUL)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((get_attr_type (insn) == TYPE_FPDIVS) || (get_attr_type (insn) == TYPE_FPSQRTS)) || ((get_attr_type (insn) == TYPE_FPDIVD) || (get_attr_type (insn) == TYPE_FPSQRTD)))) || ((((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGA)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || ((((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || (get_attr_type (insn) == TYPE_FGM_CMP)))) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGM_PDIST)) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((((((((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_COMPARE))) || (get_attr_type (insn) == TYPE_FPMOVE)) || (get_attr_type (insn) == TYPE_FPCMOVE)) || (get_attr_type (insn) == TYPE_FP)) || (get_attr_type (insn) == TYPE_FPCMP)) || (get_attr_type (insn) == TYPE_FPMUL)) || (get_attr_type (insn) == TYPE_FGM_PDIST)))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
insn_default_latency (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 413:  /* pdist_vis */
    case 411:  /* faligndatav8qi_vis */
    case 410:  /* faligndatav4hi_vis */
    case 409:  /* faligndatav2si_vis */
    case 408:  /* faligndatadi_vis */
    case 400:  /* fpmerge_vis */
    case 399:  /* fexpand_vis */
    case 398:  /* fpack32_vis */
    case 397:  /* fpackfix_vis */
    case 396:  /* fpack16_vis */
    case 395:  /* *nandv4qi_vis */
    case 394:  /* *nandv2hi_vis */
    case 393:  /* *nandsf_vis */
    case 392:  /* *nandv8qi_vis */
    case 391:  /* *nandv4hi_vis */
    case 390:  /* *nandv2si_vis */
    case 389:  /* *nanddf_vis */
    case 388:  /* subv2hi3 */
    case 387:  /* subv4hi3 */
    case 386:  /* subv2si3 */
    case 385:  /* addv2hi3 */
    case 384:  /* addv4hi3 */
    case 383:  /* addv2si3 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 2;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 3;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 8;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 380:  /* *tldo_stx_sp64 */
    case 379:  /* *tldo_stw_sp64 */
    case 378:  /* *tldo_sth_sp64 */
    case 377:  /* *tldo_stb_sp64 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 2;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 333:  /* flush_register_windows */
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 5;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 25 /* 0x19 */;
        }
      else
        {
	  return 0;
        }

    case 329:  /* *return_internal */
      return 0;

    case 328:  /* save_register_windowdi */
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 351:  /* tldm_call64 */
    case 347:  /* tgd_call64 */
    case 332:  /* *branch_sp64 */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 3;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 319:  /* *sparc.md:5882 */
    case 318:  /* *sparc.md:5866 */
    case 317:  /* *sparc.md:5854 */
    case 316:  /* *sparc.md:5842 */
    case 314:  /* *lshrdi3_sp64 */
    case 313:  /* *lshrsi3_extend2 */
    case 312:  /* *lshrsi3_extend */
    case 311:  /* lshrsi3 */
    case 309:  /* *ashrdi3_sp64 */
    case 308:  /* *ashrsi3_extend2 */
    case 307:  /* *ashrsi3_extend */
    case 306:  /* ashrsi3 */
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 302:  /* *ashldi3_sp64 */
    case 301:  /* ashlsi3 */
      extract_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && (! (const_one_operand (operands[2], VOIDmode)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 300:  /* sqrtsf2 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 63 /* 0x3f */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 17 /* 0x11 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 13 /* 0xd */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 0;
        }

    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 63 /* 0x3f */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 17 /* 0x11 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 23 /* 0x17 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 29 /* 0x1d */;
        }
      else
        {
	  return 0;
        }

    case 293:  /* *abstf2_hq_v9 */
      extract_constrain_insn_cached (insn);
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 5;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) || (((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 3;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 8;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 5;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 3;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 8;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 3;
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
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 0))
        {
	  return 5;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 0)) || (((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 8;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 286:  /* divsf3 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 37 /* 0x25 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 6;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 8;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 13 /* 0xd */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 17 /* 0x11 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 54 /* 0x36 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 19 /* 0x13 */;
        }
      else
        {
	  return 0;
        }

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 37 /* 0x25 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 12 /* 0xc */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 23 /* 0x17 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 83 /* 0x53 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 0;
        }

    case 407:  /* fmuld8ulx16_vis */
    case 406:  /* fmuld8sux16_vis */
    case 405:  /* fmul8ulx16_vis */
    case 404:  /* fmul8sux16_vis */
    case 403:  /* fmul8x16al_vis */
    case 402:  /* fmul8x16au_vis */
    case 401:  /* fmul8x16_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 7;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 4;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 29 /* 0x1d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 3;
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
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0)) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 8;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 195:  /* udivdi3 */
    case 192:  /* divdi3 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 72 /* 0x48 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 31 /* 0x1f */;
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
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 4;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 17 /* 0x11 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 5;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 7;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 11 /* 0xb */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x3))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 8;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 6;
        }
      else
        {
	  return 0;
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
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 5;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 137:  /* *sign_extendsidi2_insn */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((which_alternative == 1) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && (which_alternative == 0))))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 3;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0)) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 375:  /* *tldo_ldsw1_sp64 */
    case 372:  /* *tldo_ldsh2_sp64 */
    case 371:  /* *tldo_ldsh1_sp64 */
    case 367:  /* *tldo_ldsb3_sp64 */
    case 366:  /* *tldo_ldsb2_sp64 */
    case 365:  /* *tldo_ldsb1_sp64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 119:  /* *zero_extendsidi2_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((which_alternative == 1) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && (which_alternative == 0))))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || ((which_alternative == 1) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 370:  /* *tldo_lduh2_sp64 */
    case 369:  /* *tldo_lduh1_sp64 */
    case 368:  /* *tldo_lduh_sp64 */
    case 364:  /* *tldo_ldub3_sp64 */
    case 363:  /* *tldo_ldub2_sp64 */
    case 362:  /* *tldo_ldub1_sp64 */
    case 361:  /* *tldo_ldub_sp64 */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 3;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 111:  /* *movtf_cc_reg_hq_sp64 */
    case 110:  /* *movtf_cc_hq_v9 */
    case 109:  /* movdf_cc_reg_sp64 */
    case 108:  /* movdf_cc_v9 */
    case 107:  /* *movsf_cc_reg_sp64 */
    case 106:  /* *movsf_cc_v9 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 2;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 3;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 8;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 105:  /* *movdi_cc_reg_sp64 */
    case 104:  /* *movsi_cc_reg_sp64 */
    case 103:  /* *movhi_cc_reg_sp64 */
    case 102:  /* *movqi_cc_reg_sp64 */
    case 101:  /* *movdi_cc_v9 */
    case 100:  /* *movsi_cc_v9 */
    case 99:  /* *movhi_cc_v9 */
    case 98:  /* *movqi_cc_v9 */
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x6)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 3))
        {
	  return 2;
        }
      else if ((((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1)) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0xe))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0xa))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0xe))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0xe)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 8;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0xe)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1)))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 1)) || ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if (((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if (((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
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
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x24)))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x48)))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x6c)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x6f)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x4a)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x6f)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x6f)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 8;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x6f)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1)) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1)) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1)) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 0;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative != 0)) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x5))))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0xa)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0xc)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0xf)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0xa))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0xf))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0xa))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0xf))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 8;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0xf)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 3))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 3)))
        {
	  return 1;
        }
      else if ((which_alternative == 4) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 3)) || ((which_alternative == 4) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 3))
        {
	  return 2;
        }
      else if (((which_alternative == 4) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 3))
        {
	  return 2;
        }
      else if (((which_alternative == 4) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 3;
        }
      else if (((which_alternative == 4) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 3))
        {
	  return 3;
        }
      else if ((which_alternative == 4) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
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
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x23)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x60)))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 6)) || ((which_alternative == 8) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x7d)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 6))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 5))
        {
	  return 9;
        }
      else if ((which_alternative == 8) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x83)))
        {
	  return 8;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 8))
        {
	  return 0;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative != 8)) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x104))))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x83)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x187)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x83))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x187))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x83))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x187))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 8))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 7))
        {
	  return 8;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x187)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x83)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 376:  /* *tldo_ldx_sp64 */
    case 374:  /* *tldo_lduw1_sp64 */
    case 373:  /* *tldo_lduw_sp64 */
    case 357:  /* tie_ld64 */
    case 340:  /* prefetch_32 */
    case 339:  /* prefetch_64 */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 59:  /* *movdi_insn_sp64 */
    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 4))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x4f)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 4))
        {
	  return 3;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x24)))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x48)))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 4))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0xc)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x58)))
        {
	  return 1;
        }
      else if ((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 4)) || ((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 5))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x50))) || ((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))))
        {
	  return 8;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 4))
        {
	  return 3;
        }
      else if ((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 2)))
        {
	  return 1;
        }
      else if ((which_alternative == 3) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 2)) || ((which_alternative == 3) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if (((which_alternative == 3) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if (((which_alternative == 3) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if (((which_alternative == 3) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((which_alternative == 3) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1)))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 1)) || ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if (((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 422:  /* *ldstubsi */
    case 421:  /* *ldstubhi */
    case 420:  /* *ldstubqi */
    case 419:  /* *swapsi */
    case 418:  /* *sync_compare_and_swapdi_v8plus */
    case 417:  /* *sync_compare_and_swapdi */
    case 416:  /* *sync_compare_and_swapsi */
    case 415:  /* *membar */
    case 414:  /* *stbar */
    case 382:  /* stack_protect_testdi */
    case 381:  /* stack_protect_setdi */
    case 343:  /* *sparc.md:6885 */
    case 342:  /* *sparc.md:6873 */
    case 341:  /* trap */
    case 338:  /* ffssi2 */
    case 337:  /* flushdi */
    case 336:  /* flush */
    case 335:  /* do_builtin_setjmp_setup */
    case 334:  /* goto_handler_and_restore */
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
    case 183:  /* *sparc.md:4075 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 176:  /* muldi3_v8plus */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 3;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

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
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 5;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

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
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
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
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_SLOAD) || (get_attr_type (insn) == TYPE_FPLOAD))))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_FP) || (get_attr_type (insn) == TYPE_FPMOVE)))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 7;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_FPDIVS) || (get_attr_type (insn) == TYPE_FPDIVD)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_SLOAD)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPLOAD))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)) || (get_attr_type (insn) == TYPE_SHIFT)) || ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_SLOAD) || ((get_attr_type (insn) == TYPE_STORE) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_IALU)))))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((get_attr_type (insn) == TYPE_FP) || ((get_attr_type (insn) == TYPE_FPMOVE) || (get_attr_type (insn) == TYPE_FPCMP))) || (get_attr_type (insn) == TYPE_FPMUL)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 6;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 4;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_SLOAD) || (get_attr_type (insn) == TYPE_FPLOAD))))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && ((get_attr_type (insn) == TYPE_BRANCH) || (get_attr_type (insn) == TYPE_SHIFT))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((get_attr_type (insn) == TYPE_FP) || ((get_attr_type (insn) == TYPE_FPMOVE) || (get_attr_type (insn) == TYPE_FPCMP))) || (get_attr_type (insn) == TYPE_FPMUL))))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 8;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 12 /* 0xc */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPSQRTD)) || (get_attr_type (insn) == TYPE_IMUL)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_SLOAD)) || (get_attr_type (insn) == TYPE_STORE)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((((((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_SAVEW) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP))))) || (get_attr_type (insn) == TYPE_IALU)) || (get_attr_type (insn) == TYPE_SHIFT)) || (get_attr_type (insn) == TYPE_COMPARE)) || (get_attr_type (insn) == TYPE_IALUX)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_CMOVE))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_IMUL) || (get_attr_type (insn) == TYPE_IDIV)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_FPLOAD)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_SLOAD))
        {
	  return 3;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)) || (get_attr_type (insn) == TYPE_BRANCH)) || ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || (get_attr_type (insn) == TYPE_UNCOND_BRANCH)))))) || (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMOVE)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPCMOVE) || (get_attr_type (insn) == TYPE_FPCRMOVE))) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE)))
        {
	  return 2;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FP)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE)))
        {
	  return 4;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPCMP)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE)))
        {
	  return 1;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMUL)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE)))
        {
	  return 4;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPDIVS) || (get_attr_type (insn) == TYPE_FPSQRTS)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPDIVD) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 23 /* 0x17 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGA)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE)))
        {
	  return 2;
        }
      else if ((((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || (get_attr_type (insn) == TYPE_FGM_CMP)))) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGM_PDIST)))
        {
	  return 4;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_SAVEW) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP))))) || ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_COMPARE)))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_COMPARE))))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_CMOVE))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 7;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_FPLOAD)) && (get_attr_us3load_type (insn) == US3LOAD_TYPE_2CYCLE)))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_SLOAD)) && (get_attr_us3load_type (insn) == US3LOAD_TYPE_3CYCLE)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)) || (get_attr_type (insn) == TYPE_BRANCH)) || ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || (get_attr_type (insn) == TYPE_UNCOND_BRANCH))))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_FPMOVE) || (get_attr_type (insn) == TYPE_FPCMOVE)) || (get_attr_type (insn) == TYPE_FPCRMOVE)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FP))
        {
	  return 4;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPCMP))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 4;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPDIVD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPSQRTD))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FGA))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || (get_attr_type (insn) == TYPE_FGM_CMP))) || (get_attr_type (insn) == TYPE_FGM_PDIST)))
        {
	  return 4;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP)))))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_SAVEW))
        {
	  return 4;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || ((get_attr_type (insn) == TYPE_COMPARE) || (get_attr_type (insn) == TYPE_CMOVE)))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || ((get_attr_type (insn) == TYPE_UNCOND_BRANCH) || (get_attr_type (insn) == TYPE_BRANCH))))) || (get_attr_type (insn) == TYPE_LOAD)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPLOAD))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_FPSTORE) || ((get_attr_type (insn) == TYPE_FPMOVE) || ((get_attr_type (insn) == TYPE_FPCMOVE) || (get_attr_type (insn) == TYPE_FPCRMOVE)))))
        {
	  return 8;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPCMP))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 83 /* 0x53 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_FGA) || ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || ((get_attr_type (insn) == TYPE_FGM_CMP) || (get_attr_type (insn) == TYPE_FGM_PDIST))))))
        {
	  return 8;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_FLUSHW))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP)))))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_SAVEW))
        {
	  return 4;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || ((get_attr_type (insn) == TYPE_COMPARE) || (get_attr_type (insn) == TYPE_CMOVE)))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || ((get_attr_type (insn) == TYPE_UNCOND_BRANCH) || (get_attr_type (insn) == TYPE_BRANCH))))))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_FPLOAD)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_FPMOVE) || ((get_attr_type (insn) == TYPE_FPCMOVE) || ((get_attr_type (insn) == TYPE_FPCRMOVE) || ((get_attr_type (insn) == TYPE_FPCMP) || (get_attr_type (insn) == TYPE_FPMUL))))))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_FGA) || ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || ((get_attr_type (insn) == TYPE_FGM_CMP) || (get_attr_type (insn) == TYPE_FGM_PDIST))))))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    default:
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
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
internal_dfa_insn_code (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 395:  /* *nandv4qi_vis */
    case 394:  /* *nandv2hi_vis */
    case 393:  /* *nandsf_vis */
    case 388:  /* subv2hi3 */
    case 385:  /* addv2hi3 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 54 /* 0x36 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 80 /* 0x50 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 98 /* 0x62 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 413:  /* pdist_vis */
    case 411:  /* faligndatav8qi_vis */
    case 410:  /* faligndatav4hi_vis */
    case 409:  /* faligndatav2si_vis */
    case 408:  /* faligndatadi_vis */
    case 400:  /* fpmerge_vis */
    case 399:  /* fexpand_vis */
    case 398:  /* fpack32_vis */
    case 397:  /* fpackfix_vis */
    case 396:  /* fpack16_vis */
    case 392:  /* *nandv8qi_vis */
    case 391:  /* *nandv4hi_vis */
    case 390:  /* *nandv2si_vis */
    case 389:  /* *nanddf_vis */
    case 387:  /* subv4hi3 */
    case 386:  /* subv2si3 */
    case 384:  /* addv4hi3 */
    case 383:  /* addv2si3 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 55 /* 0x37 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 80 /* 0x50 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 98 /* 0x62 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 380:  /* *tldo_stx_sp64 */
    case 379:  /* *tldo_stw_sp64 */
    case 378:  /* *tldo_sth_sp64 */
    case 377:  /* *tldo_stb_sp64 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 7;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 17 /* 0x11 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 27 /* 0x1b */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 39 /* 0x27 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 67 /* 0x43 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 91 /* 0x5b */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 333:  /* flush_register_windows */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 29 /* 0x1d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 59 /* 0x3b */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 83 /* 0x53 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 99 /* 0x63 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 329:  /* *return_internal */
      return 113 /* 0x71 */;

    case 328:  /* save_register_windowdi */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 29 /* 0x1d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 59 /* 0x3b */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 84 /* 0x54 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 101 /* 0x65 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 351:  /* tldm_call64 */
    case 347:  /* tgd_call64 */
    case 332:  /* *branch_sp64 */
    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 326:  /* *sibcall_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
    case 321:  /* *tablejump_sp64 */
    case 320:  /* jump */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 41 /* 0x29 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 69 /* 0x45 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 88 /* 0x58 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 105 /* 0x69 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 319:  /* *sparc.md:5882 */
    case 318:  /* *sparc.md:5866 */
    case 317:  /* *sparc.md:5854 */
    case 316:  /* *sparc.md:5842 */
    case 314:  /* *lshrdi3_sp64 */
    case 313:  /* *lshrsi3_extend2 */
    case 312:  /* *lshrsi3_extend */
    case 311:  /* lshrsi3 */
    case 309:  /* *ashrdi3_sp64 */
    case 308:  /* *ashrsi3_extend2 */
    case 307:  /* *ashrsi3_extend */
    case 306:  /* ashrsi3 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 8;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))
        {
	  return 19 /* 0x13 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 31 /* 0x1f */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 85 /* 0x55 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 302:  /* *ashldi3_sp64 */
    case 301:  /* ashlsi3 */
      extract_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (! (const_one_operand (operands[2], VOIDmode))))
        {
	  return 8;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && (! (const_one_operand (operands[2], VOIDmode))))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (const_one_operand (operands[2], VOIDmode)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (! (const_one_operand (operands[2], VOIDmode))))
        {
	  return 31 /* 0x1f */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 85 /* 0x55 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 300:  /* sqrtsf2 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 4;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 52 /* 0x34 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 77 /* 0x4d */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 4;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 53 /* 0x35 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 79 /* 0x4f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 293:  /* *abstf2_hq_v9 */
      extract_constrain_insn_cached (insn);
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 43 /* 0x2b */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 70 /* 0x46 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 297:  /* abssf2 */
    case 291:  /* negsf2 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 42 /* 0x2a */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 70 /* 0x46 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 296:  /* *absdf2_v9 */
    case 290:  /* *negdf2_v9 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 43 /* 0x2b */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 70 /* 0x46 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 294:  /* *abstf2_v9 */
    case 288:  /* *negtf2_v9 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 0))
        {
	  return 20 /* 0x14 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 43 /* 0x2b */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 70 /* 0x46 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 93 /* 0x5d */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 295:  /* *absdf2_notv9 */
    case 292:  /* *abstf2_notv9 */
    case 289:  /* *negdf2_notv9 */
    case 287:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 0))
        {
	  return 20 /* 0x14 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 42 /* 0x2a */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 70 /* 0x46 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 93 /* 0x5d */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 286:  /* divsf3 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 3;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 22 /* 0x16 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 52 /* 0x34 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 76 /* 0x4c */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 96 /* 0x60 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 109 /* 0x6d */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 3;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 23 /* 0x17 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 53 /* 0x35 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 78 /* 0x4e */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 97 /* 0x61 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 110 /* 0x6e */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 407:  /* fmuld8ulx16_vis */
    case 406:  /* fmuld8sux16_vis */
    case 405:  /* fmul8ulx16_vis */
    case 404:  /* fmul8sux16_vis */
    case 403:  /* fmul8x16al_vis */
    case 402:  /* fmul8x16au_vis */
    case 401:  /* fmul8x16_vis */
    case 282:  /* *muldf3_extend */
    case 280:  /* muldf3 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 2;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 21 /* 0x15 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 51 /* 0x33 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 75 /* 0x4b */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 95 /* 0x5f */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 283:  /* *multf3_extend */
    case 281:  /* mulsf3 */
    case 279:  /* *multf3_hq */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 2;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 21 /* 0x15 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 50 /* 0x32 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 75 /* 0x4b */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 95 /* 0x5f */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

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
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 30 /* 0x1e */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 60 /* 0x3c */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 85 /* 0x55 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 102 /* 0x66 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
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
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 30 /* 0x1e */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 60 /* 0x3c */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 85 /* 0x55 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 102 /* 0x66 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 195:  /* udivdi3 */
    case 192:  /* divdi3 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 36 /* 0x24 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 64 /* 0x40 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 87 /* 0x57 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 104 /* 0x68 */;
        }
      else
        {
	  return 113 /* 0x71 */;
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
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 25 /* 0x19 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 28 /* 0x1c */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 35 /* 0x23 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 63 /* 0x3f */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 86 /* 0x56 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 103 /* 0x67 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 169:  /* subsi3 */
    case 161:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
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
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 46 /* 0x2e */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 73 /* 0x49 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

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
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 1;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 47 /* 0x2f */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 73 /* 0x49 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 137:  /* *sign_extendsidi2_insn */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))))
        {
	  return 0;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 8;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if ((which_alternative == 1) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && (which_alternative == 0))
        {
	  return 19 /* 0x13 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 31 /* 0x1f */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 60 /* 0x3c */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 375:  /* *tldo_ldsw1_sp64 */
    case 372:  /* *tldo_ldsh2_sp64 */
    case 371:  /* *tldo_ldsh1_sp64 */
    case 367:  /* *tldo_ldsb3_sp64 */
    case 366:  /* *tldo_ldsb2_sp64 */
    case 365:  /* *tldo_ldsb1_sp64 */
    case 136:  /* *sign_extendhidi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 132:  /* *sign_extendhisi2_insn */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 0;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 38 /* 0x26 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 66 /* 0x42 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 119:  /* *zero_extendsidi2_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))))
        {
	  return 0;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 8;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if ((which_alternative == 1) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && (which_alternative == 0))
        {
	  return 19 /* 0x13 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 31 /* 0x1f */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 60 /* 0x3c */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 85 /* 0x55 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 102 /* 0x66 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))))
        {
	  return 0;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 5;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if ((which_alternative == 1) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 16 /* 0x10 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 30 /* 0x1e */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 60 /* 0x3c */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 85 /* 0x55 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 102 /* 0x66 */;
        }
      else if ((which_alternative == 1) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 370:  /* *tldo_lduh2_sp64 */
    case 369:  /* *tldo_lduh1_sp64 */
    case 368:  /* *tldo_lduh_sp64 */
    case 364:  /* *tldo_ldub3_sp64 */
    case 363:  /* *tldo_ldub2_sp64 */
    case 362:  /* *tldo_ldub1_sp64 */
    case 361:  /* *tldo_ldub_sp64 */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 0;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 37 /* 0x25 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 66 /* 0x42 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 89 /* 0x59 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 109:  /* movdf_cc_reg_sp64 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 45 /* 0x2d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 72 /* 0x48 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 108:  /* movdf_cc_v9 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 45 /* 0x2d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 71 /* 0x47 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 111:  /* *movtf_cc_reg_hq_sp64 */
    case 107:  /* *movsf_cc_reg_sp64 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 44 /* 0x2c */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 72 /* 0x48 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 110:  /* *movtf_cc_hq_v9 */
    case 106:  /* *movsf_cc_v9 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 44 /* 0x2c */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 71 /* 0x47 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 105:  /* *movdi_cc_reg_sp64 */
    case 104:  /* *movsi_cc_reg_sp64 */
    case 103:  /* *movhi_cc_reg_sp64 */
    case 102:  /* *movqi_cc_reg_sp64 */
    case 101:  /* *movdi_cc_v9 */
    case 100:  /* *movsi_cc_v9 */
    case 99:  /* *movhi_cc_v9 */
    case 98:  /* *movqi_cc_v9 */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 34 /* 0x22 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 62 /* 0x3e */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 85 /* 0x55 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 96:  /* *movtf_insn_sp64_hq */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 2))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 6;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 3))
        {
	  return 7;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0xe)))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 2))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 3))
        {
	  return 17 /* 0x11 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0xe)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 2))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 3))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0xe)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 2))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 3))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0xe)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0xe)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 2))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 3))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 94:  /* *movdf_insn_sp64_no_fpu */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 5;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 7;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 16 /* 0x10 */;
        }
      else if ((which_alternative == 2) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 1))
        {
	  return 26 /* 0x1a */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 37 /* 0x25 */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 65 /* 0x41 */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 89 /* 0x59 */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 106 /* 0x6a */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 7;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x24)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x48)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x6f)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x6f)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x6f)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x6f)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 89:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 0))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 7;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 0))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 0))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 1))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 88:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 6;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 7;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 9;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x5)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0xa)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 2))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 3))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0xf)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0xf)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0xf)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0xf)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 85:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 3))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 3))
        {
	  return 5;
        }
      else if ((which_alternative == 4) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 7;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 3))
        {
	  return 16 /* 0x10 */;
        }
      else if ((which_alternative == 4) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 3))
        {
	  return 26 /* 0x1a */;
        }
      else if ((which_alternative == 4) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 3))
        {
	  return 37 /* 0x25 */;
        }
      else if ((which_alternative == 4) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 3))
        {
	  return 65 /* 0x41 */;
        }
      else if ((which_alternative == 4) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 89 /* 0x59 */;
        }
      else if ((which_alternative == 4) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 3))
        {
	  return 106 /* 0x6a */;
        }
      else if ((which_alternative == 4) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 6))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5))
        {
	  return 6;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 7;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0xa3)))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x60)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 6))
        {
	  return 26 /* 0x1a */;
        }
      else if ((which_alternative == 8) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 6))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 5))
        {
	  return 90 /* 0x5a */;
        }
      else if ((which_alternative == 8) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 7))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 59:  /* *movdi_insn_sp64 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 4))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5))
        {
	  return 6;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 7;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0xf)))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 4))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x24)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x48)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 4))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 2))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 3))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 4))
        {
	  return 43 /* 0x2b */;
        }
      else if ((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 4))
        {
	  return 70 /* 0x46 */;
        }
      else if ((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 5))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 6))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 4))
        {
	  return 93 /* 0x5d */;
        }
      else if ((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 4))
        {
	  return 108 /* 0x6c */;
        }
      else if ((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 58:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 8))
        {
	  return 6;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x83)))
        {
	  return 7;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x180)))
        {
	  return 9;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x104)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x83)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 2))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x187)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x83)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x187)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x83)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x187)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 8))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 7))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x187)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x83)))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 376:  /* *tldo_ldx_sp64 */
    case 374:  /* *tldo_lduw1_sp64 */
    case 373:  /* *tldo_lduw_sp64 */
    case 357:  /* tie_ld64 */
    case 340:  /* prefetch_32 */
    case 339:  /* prefetch_64 */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 0;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 37 /* 0x25 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 65 /* 0x41 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 89 /* 0x59 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 50:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 4))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5))
        {
	  return 6;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 7;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0xf)))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 4))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x24)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x48)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 4))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 2))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 3))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 4))
        {
	  return 42 /* 0x2a */;
        }
      else if ((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 4))
        {
	  return 70 /* 0x46 */;
        }
      else if ((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 5))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 6))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 4))
        {
	  return 93 /* 0x5d */;
        }
      else if ((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 4))
        {
	  return 108 /* 0x6c */;
        }
      else if ((which_alternative == 7) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 48:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 2))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if ((which_alternative == 3) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 7;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 2))
        {
	  return 16 /* 0x10 */;
        }
      else if ((which_alternative == 3) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 2))
        {
	  return 26 /* 0x1a */;
        }
      else if ((which_alternative == 3) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 2))
        {
	  return 37 /* 0x25 */;
        }
      else if ((which_alternative == 3) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 2))
        {
	  return 66 /* 0x42 */;
        }
      else if ((which_alternative == 3) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 89 /* 0x59 */;
        }
      else if ((which_alternative == 3) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 2))
        {
	  return 106 /* 0x6a */;
        }
      else if ((which_alternative == 3) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 47:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 5;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 7;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 16 /* 0x10 */;
        }
      else if ((which_alternative == 2) && ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 1))
        {
	  return 26 /* 0x1a */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 37 /* 0x25 */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 66 /* 0x42 */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 89 /* 0x59 */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 106 /* 0x6a */;
        }
      else if ((which_alternative == 2) && (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 422:  /* *ldstubsi */
    case 421:  /* *ldstubhi */
    case 420:  /* *ldstubqi */
    case 419:  /* *swapsi */
    case 418:  /* *sync_compare_and_swapdi_v8plus */
    case 417:  /* *sync_compare_and_swapdi */
    case 416:  /* *sync_compare_and_swapsi */
    case 415:  /* *membar */
    case 414:  /* *stbar */
    case 382:  /* stack_protect_testdi */
    case 381:  /* stack_protect_setdi */
    case 343:  /* *sparc.md:6885 */
    case 342:  /* *sparc.md:6873 */
    case 341:  /* trap */
    case 338:  /* ffssi2 */
    case 337:  /* flushdi */
    case 336:  /* flush */
    case 335:  /* do_builtin_setjmp_setup */
    case 334:  /* goto_handler_and_restore */
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
    case 183:  /* *sparc.md:4075 */
    case 182:  /* smulsi3_highpart_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
    case 176:  /* muldi3_v8plus */
    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 29 /* 0x1d */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 59 /* 0x3b */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 83 /* 0x53 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 100 /* 0x64 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 44:  /* *inverted_int_branch_sp64 */
    case 43:  /* *normal_int_branch_sp64 */
    case 42:  /* *inverted_fpe_branch */
    case 41:  /* *normal_fpe_branch */
    case 40:  /* *inverted_fp_branch */
    case 39:  /* *normal_fp_branch */
    case 38:  /* *inverted_branch */
    case 37:  /* *normal_branch */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))
        {
	  return 18 /* 0x12 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 40 /* 0x28 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 68 /* 0x44 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 88 /* 0x58 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 105 /* 0x69 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

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
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 6:  /* *cmpdf_fp */
    case 3:  /* *cmpdf_fpe */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 49 /* 0x31 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 74 /* 0x4a */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 94 /* 0x5e */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 7:  /* *cmptf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 2:  /* *cmpsf_fpe */
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 48 /* 0x30 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 74 /* 0x4a */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 94 /* 0x5e */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

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
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 85 /* 0x55 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_SLOAD) || (get_attr_type (insn) == TYPE_FPLOAD))))
        {
	  return 0;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_FP) || (get_attr_type (insn) == TYPE_FPMOVE)))
        {
	  return 1;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 2;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_FPDIVS) || (get_attr_type (insn) == TYPE_FPDIVD)))
        {
	  return 3;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 4;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_SLOAD)))
        {
	  return 5;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPLOAD))
        {
	  return 6;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 7;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_SHIFT))
        {
	  return 8;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_SLOAD) || ((get_attr_type (insn) == TYPE_STORE) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_IALU))))))
        {
	  return 9;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_FP) || ((get_attr_type (insn) == TYPE_FPMOVE) || (get_attr_type (insn) == TYPE_FPCMP))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 15 /* 0xf */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_SLOAD) || (get_attr_type (insn) == TYPE_FPLOAD))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && (get_attr_type (insn) == TYPE_BRANCH))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && (get_attr_type (insn) == TYPE_SHIFT))
        {
	  return 19 /* 0x13 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && ((get_attr_type (insn) == TYPE_FP) || ((get_attr_type (insn) == TYPE_FPMOVE) || (get_attr_type (insn) == TYPE_FPCMP))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 21 /* 0x15 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 22 /* 0x16 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 23 /* 0x17 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && ((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 24 /* 0x18 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_SLOAD)))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (get_attr_type (insn) == TYPE_STORE))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_SAVEW) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP))))))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_IALU))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_SHIFT))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_COMPARE))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_IALUX))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_CMOVE))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_FPLOAD)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_SLOAD))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_BRANCH))
        {
	  return 40 /* 0x28 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || (get_attr_type (insn) == TYPE_UNCOND_BRANCH)))))
        {
	  return 41 /* 0x29 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMOVE)) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 42 /* 0x2a */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMOVE)) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 43 /* 0x2b */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPCMOVE) || (get_attr_type (insn) == TYPE_FPCRMOVE))) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 44 /* 0x2c */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPCMOVE) || (get_attr_type (insn) == TYPE_FPCRMOVE))) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 45 /* 0x2d */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FP)) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 46 /* 0x2e */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FP)) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 47 /* 0x2f */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPCMP)) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 48 /* 0x30 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPCMP)) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 49 /* 0x31 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMUL)) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 50 /* 0x32 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMUL)) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 51 /* 0x33 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPDIVS) || (get_attr_type (insn) == TYPE_FPSQRTS)))
        {
	  return 52 /* 0x34 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPDIVD) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 53 /* 0x35 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGA)) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 54 /* 0x36 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGA)) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 55 /* 0x37 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || (get_attr_type (insn) == TYPE_FGM_CMP)))) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 56 /* 0x38 */;
        }
      else if (((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || (get_attr_type (insn) == TYPE_FGM_CMP)))) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 57 /* 0x39 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGM_PDIST))
        {
	  return 58 /* 0x3a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_SAVEW) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP))))))
        {
	  return 59 /* 0x3b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_COMPARE))))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_COMPARE))))
        {
	  return 61 /* 0x3d */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_CMOVE))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_FPLOAD)) && (get_attr_us3load_type (insn) == US3LOAD_TYPE_2CYCLE)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_SLOAD)) && (get_attr_us3load_type (insn) == US3LOAD_TYPE_3CYCLE)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_BRANCH))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || (get_attr_type (insn) == TYPE_UNCOND_BRANCH)))))
        {
	  return 69 /* 0x45 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPMOVE))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPCMOVE))
        {
	  return 71 /* 0x47 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPCRMOVE))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FP))
        {
	  return 73 /* 0x49 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPCMP))
        {
	  return 74 /* 0x4a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 75 /* 0x4b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPSQRTS))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPSQRTD))
        {
	  return 79 /* 0x4f */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FGA))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || (get_attr_type (insn) == TYPE_FGM_CMP))))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FGM_PDIST))
        {
	  return 82 /* 0x52 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP)))))
        {
	  return 83 /* 0x53 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_SAVEW))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || ((get_attr_type (insn) == TYPE_COMPARE) || (get_attr_type (insn) == TYPE_CMOVE)))))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 87 /* 0x57 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || ((get_attr_type (insn) == TYPE_UNCOND_BRANCH) || (get_attr_type (insn) == TYPE_BRANCH))))))
        {
	  return 88 /* 0x58 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_LOAD))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPLOAD))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_STORE))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPSTORE))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_FPMOVE) || ((get_attr_type (insn) == TYPE_FPCMOVE) || (get_attr_type (insn) == TYPE_FPCRMOVE))))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPCMP))
        {
	  return 94 /* 0x5e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 95 /* 0x5f */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 96 /* 0x60 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 97 /* 0x61 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_FGA) || ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || ((get_attr_type (insn) == TYPE_FGM_CMP) || (get_attr_type (insn) == TYPE_FGM_PDIST))))))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_FLUSHW))
        {
	  return 99 /* 0x63 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP)))))
        {
	  return 100 /* 0x64 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_SAVEW))
        {
	  return 101 /* 0x65 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || ((get_attr_type (insn) == TYPE_COMPARE) || (get_attr_type (insn) == TYPE_CMOVE)))))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 103 /* 0x67 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 104 /* 0x68 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || ((get_attr_type (insn) == TYPE_UNCOND_BRANCH) || (get_attr_type (insn) == TYPE_BRANCH))))))
        {
	  return 105 /* 0x69 */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_FPLOAD)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_FPMOVE) || ((get_attr_type (insn) == TYPE_FPCMOVE) || ((get_attr_type (insn) == TYPE_FPCRMOVE) || ((get_attr_type (insn) == TYPE_FPCMP) || (get_attr_type (insn) == TYPE_FPMUL))))))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 109 /* 0x6d */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 110 /* 0x6e */;
        }
      else if ((((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_FGA) || ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || ((get_attr_type (insn) == TYPE_FGM_CMP) || (get_attr_type (insn) == TYPE_FGM_PDIST))))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    default:
      if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 30 /* 0x1e */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 85 /* 0x55 */;
        }
      else if (((
#line 114 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    }
}

int
num_delay_slots (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 351:  /* tldm_call64 */
    case 347:  /* tgd_call64 */
    case 332:  /* *branch_sp64 */
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
      if ((get_attr_type (insn) == TYPE_RETURN) || ((get_attr_type (insn) == TYPE_UNCOND_BRANCH) || ((get_attr_type (insn) == TYPE_BRANCH) || ((get_attr_type (insn) == TYPE_SIBCALL) || (get_attr_type (insn) == TYPE_CALL)))))
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
#line 160 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 156 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 168 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 284 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 279 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
    case 383:  /* addv2si3 */
    case 384:  /* addv4hi3 */
    case 386:  /* subv2si3 */
    case 387:  /* subv4hi3 */
    case 389:  /* *nanddf_vis */
    case 390:  /* *nandv2si_vis */
    case 391:  /* *nandv4hi_vis */
    case 392:  /* *nandv8qi_vis */
    case 396:  /* fpack16_vis */
    case 397:  /* fpackfix_vis */
    case 398:  /* fpack32_vis */
    case 399:  /* fexpand_vis */
    case 400:  /* fpmerge_vis */
    case 401:  /* fmul8x16_vis */
    case 402:  /* fmul8x16au_vis */
    case 403:  /* fmul8x16al_vis */
    case 404:  /* fmul8sux16_vis */
    case 405:  /* fmul8ulx16_vis */
    case 406:  /* fmuld8sux16_vis */
    case 407:  /* fmuld8ulx16_vis */
    case 408:  /* faligndatadi_vis */
    case 409:  /* faligndatav2si_vis */
    case 410:  /* faligndatav4hi_vis */
    case 411:  /* faligndatav8qi_vis */
    case 413:  /* pdist_vis */
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
  switch (recog_memoized (insn))
    {
    case 329:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 160 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
      if (((! (get_attr_type (insn) == TYPE_UNCOND_BRANCH)) && ((! (get_attr_type (insn) == TYPE_BRANCH)) && ((! (get_attr_type (insn) == TYPE_CALL)) && ((! (get_attr_type (insn) == TYPE_SIBCALL)) && ((! (get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT)) && (! (get_attr_type (insn) == TYPE_MULTI))))))) && (get_attr_length (insn) == 1))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 422:  /* *ldstubsi */
    case 421:  /* *ldstubhi */
    case 420:  /* *ldstubqi */
    case 419:  /* *swapsi */
    case 418:  /* *sync_compare_and_swapdi_v8plus */
    case 417:  /* *sync_compare_and_swapdi */
    case 416:  /* *sync_compare_and_swapsi */
    case 415:  /* *membar */
    case 414:  /* *stbar */
    case 382:  /* stack_protect_testdi */
    case 381:  /* stack_protect_setdi */
    case 351:  /* tldm_call64 */
    case 347:  /* tgd_call64 */
    case 338:  /* ffssi2 */
    case 335:  /* do_builtin_setjmp_setup */
    case 334:  /* goto_handler_and_restore */
    case 332:  /* *branch_sp64 */
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
    case 183:  /* *sparc.md:4075 */
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
  switch (recog_memoized (insn))
    {
    case 329:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 160 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
      if (((! (get_attr_type (insn) == TYPE_UNCOND_BRANCH)) && ((! (get_attr_type (insn) == TYPE_BRANCH)) && ((! (get_attr_type (insn) == TYPE_CALL)) && ((! (get_attr_type (insn) == TYPE_SIBCALL)) && ((! (get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT)) && (! (get_attr_type (insn) == TYPE_MULTI))))))) && (get_attr_length (insn) == 1))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 422:  /* *ldstubsi */
    case 421:  /* *ldstubhi */
    case 420:  /* *ldstubqi */
    case 419:  /* *swapsi */
    case 418:  /* *sync_compare_and_swapdi_v8plus */
    case 417:  /* *sync_compare_and_swapdi */
    case 416:  /* *sync_compare_and_swapsi */
    case 415:  /* *membar */
    case 414:  /* *stbar */
    case 382:  /* stack_protect_testdi */
    case 381:  /* stack_protect_setdi */
    case 351:  /* tldm_call64 */
    case 347:  /* tgd_call64 */
    case 338:  /* ffssi2 */
    case 335:  /* do_builtin_setjmp_setup */
    case 334:  /* goto_handler_and_restore */
    case 332:  /* *branch_sp64 */
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
    case 183:  /* *sparc.md:4075 */
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
  switch (recog_memoized (insn))
    {
    case 329:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 160 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
      if (((! (get_attr_type (insn) == TYPE_UNCOND_BRANCH)) && ((! (get_attr_type (insn) == TYPE_BRANCH)) && ((! (get_attr_type (insn) == TYPE_CALL)) && ((! (get_attr_type (insn) == TYPE_SIBCALL)) && ((! (get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT)) && (! (get_attr_type (insn) == TYPE_MULTI))))))) && (get_attr_length (insn) == 1))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 422:  /* *ldstubsi */
    case 421:  /* *ldstubhi */
    case 420:  /* *ldstubqi */
    case 419:  /* *swapsi */
    case 418:  /* *sync_compare_and_swapdi_v8plus */
    case 417:  /* *sync_compare_and_swapdi */
    case 416:  /* *sync_compare_and_swapsi */
    case 415:  /* *membar */
    case 414:  /* *stbar */
    case 382:  /* stack_protect_testdi */
    case 381:  /* stack_protect_setdi */
    case 351:  /* tldm_call64 */
    case 347:  /* tgd_call64 */
    case 338:  /* ffssi2 */
    case 335:  /* do_builtin_setjmp_setup */
    case 334:  /* goto_handler_and_restore */
    case 332:  /* *branch_sp64 */
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
    case 183:  /* *sparc.md:4075 */
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
  switch (recog_memoized (insn))
    {
    case 329:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if (((((
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 160 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))))) && ((
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
      if ((get_attr_type (insn) == TYPE_UNCOND_BRANCH) || ((get_attr_type (insn) == TYPE_BRANCH) || ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || (get_attr_type (insn) == TYPE_MULTI))))))
        {
	  return IN_CALL_DELAY_FALSE;
        }
      else if ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_FPLOAD) || ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE))))
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

    case 380:  /* *tldo_stx_sp64 */
    case 379:  /* *tldo_stw_sp64 */
    case 378:  /* *tldo_sth_sp64 */
    case 377:  /* *tldo_stb_sp64 */
    case 376:  /* *tldo_ldx_sp64 */
    case 374:  /* *tldo_lduw1_sp64 */
    case 373:  /* *tldo_lduw_sp64 */
    case 370:  /* *tldo_lduh2_sp64 */
    case 369:  /* *tldo_lduh1_sp64 */
    case 368:  /* *tldo_lduh_sp64 */
    case 364:  /* *tldo_ldub3_sp64 */
    case 363:  /* *tldo_ldub2_sp64 */
    case 362:  /* *tldo_ldub1_sp64 */
    case 361:  /* *tldo_ldub_sp64 */
    case 357:  /* tie_ld64 */
    case 340:  /* prefetch_32 */
    case 339:  /* prefetch_64 */
    case 118:  /* *zero_extendhidi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      return IN_CALL_DELAY_TRUE;

    case 422:  /* *ldstubsi */
    case 421:  /* *ldstubhi */
    case 420:  /* *ldstubqi */
    case 419:  /* *swapsi */
    case 418:  /* *sync_compare_and_swapdi_v8plus */
    case 417:  /* *sync_compare_and_swapdi */
    case 416:  /* *sync_compare_and_swapsi */
    case 415:  /* *membar */
    case 414:  /* *stbar */
    case 382:  /* stack_protect_testdi */
    case 381:  /* stack_protect_setdi */
    case 351:  /* tldm_call64 */
    case 347:  /* tgd_call64 */
    case 338:  /* ffssi2 */
    case 335:  /* do_builtin_setjmp_setup */
    case 334:  /* goto_handler_and_restore */
    case 332:  /* *branch_sp64 */
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
    case 183:  /* *sparc.md:4075 */
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 153 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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

    case 341:  /* trap */
    case 342:  /* *sparc.md:6873 */
    case 343:  /* *sparc.md:6885 */
      return TYPE_TRAP;

    case 336:  /* flush */
    case 337:  /* flushdi */
      return TYPE_IFLUSH;

    case 333:  /* flush_register_windows */
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
    case 183:  /* *sparc.md:4075 */
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
    case 334:  /* goto_handler_and_restore */
    case 335:  /* do_builtin_setjmp_setup */
    case 338:  /* ffssi2 */
    case 381:  /* stack_protect_setdi */
    case 382:  /* stack_protect_testdi */
    case 414:  /* *stbar */
    case 415:  /* *membar */
    case 416:  /* *sync_compare_and_swapsi */
    case 417:  /* *sync_compare_and_swapdi */
    case 418:  /* *sync_compare_and_swapdi_v8plus */
    case 419:  /* *swapsi */
    case 420:  /* *ldstubqi */
    case 421:  /* *ldstubhi */
    case 422:  /* *ldstubsi */
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

    case 383:  /* addv2si3 */
    case 384:  /* addv4hi3 */
    case 385:  /* addv2hi3 */
    case 386:  /* subv2si3 */
    case 387:  /* subv4hi3 */
    case 388:  /* subv2hi3 */
    case 389:  /* *nanddf_vis */
    case 390:  /* *nandv2si_vis */
    case 391:  /* *nandv4hi_vis */
    case 392:  /* *nandv8qi_vis */
    case 393:  /* *nandsf_vis */
    case 394:  /* *nandv2hi_vis */
    case 395:  /* *nandv4qi_vis */
    case 396:  /* fpack16_vis */
    case 397:  /* fpackfix_vis */
    case 398:  /* fpack32_vis */
    case 399:  /* fexpand_vis */
    case 400:  /* fpmerge_vis */
    case 408:  /* faligndatadi_vis */
    case 409:  /* faligndatav2si_vis */
    case 410:  /* faligndatav4hi_vis */
    case 411:  /* faligndatav8qi_vis */
    case 413:  /* pdist_vis */
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
    case 401:  /* fmul8x16_vis */
    case 402:  /* fmul8x16au_vis */
    case 403:  /* fmul8x16al_vis */
    case 404:  /* fmul8sux16_vis */
    case 405:  /* fmul8ulx16_vis */
    case 406:  /* fmuld8sux16_vis */
    case 407:  /* fmuld8ulx16_vis */
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
    case 347:  /* tgd_call64 */
    case 351:  /* tldm_call64 */
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
    case 332:  /* *branch_sp64 */
      return TYPE_UNCOND_BRANCH;

    case 377:  /* *tldo_stb_sp64 */
    case 378:  /* *tldo_sth_sp64 */
    case 379:  /* *tldo_stw_sp64 */
    case 380:  /* *tldo_stx_sp64 */
      return TYPE_STORE;

    case 132:  /* *sign_extendhisi2_insn */
    case 133:  /* *sign_extendqihi2_insn */
    case 134:  /* *sign_extendqisi2_insn */
    case 135:  /* *sign_extendqidi2_insn */
    case 136:  /* *sign_extendhidi2_insn */
    case 365:  /* *tldo_ldsb1_sp64 */
    case 366:  /* *tldo_ldsb2_sp64 */
    case 367:  /* *tldo_ldsb3_sp64 */
    case 371:  /* *tldo_ldsh1_sp64 */
    case 372:  /* *tldo_ldsh2_sp64 */
    case 375:  /* *tldo_ldsw1_sp64 */
      return TYPE_SLOAD;

    case 55:  /* movsi_pic_gotdata_op */
    case 64:  /* movdi_pic_gotdata_op */
    case 114:  /* *zero_extendhisi2_insn */
    case 118:  /* *zero_extendhidi2_insn */
    case 339:  /* prefetch_64 */
    case 340:  /* prefetch_32 */
    case 357:  /* tie_ld64 */
    case 361:  /* *tldo_ldub_sp64 */
    case 362:  /* *tldo_ldub1_sp64 */
    case 363:  /* *tldo_ldub2_sp64 */
    case 364:  /* *tldo_ldub3_sp64 */
    case 368:  /* *tldo_lduh_sp64 */
    case 369:  /* *tldo_lduh1_sp64 */
    case 370:  /* *tldo_lduh2_sp64 */
    case 373:  /* *tldo_lduw_sp64 */
    case 374:  /* *tldo_lduw1_sp64 */
    case 376:  /* *tldo_ldx_sp64 */
      return TYPE_LOAD;

    case 306:  /* ashrsi3 */
    case 307:  /* *ashrsi3_extend */
    case 308:  /* *ashrsi3_extend2 */
    case 309:  /* *ashrdi3_sp64 */
    case 311:  /* lshrsi3 */
    case 312:  /* *lshrsi3_extend */
    case 313:  /* *lshrsi3_extend2 */
    case 314:  /* *lshrdi3_sp64 */
    case 316:  /* *sparc.md:5842 */
    case 317:  /* *sparc.md:5854 */
    case 318:  /* *sparc.md:5866 */
    case 319:  /* *sparc.md:5882 */
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
    case 361:  /* *tldo_ldub_sp64 */
    case 362:  /* *tldo_ldub1_sp64 */
    case 363:  /* *tldo_ldub2_sp64 */
    case 364:  /* *tldo_ldub3_sp64 */
    case 365:  /* *tldo_ldsb1_sp64 */
    case 366:  /* *tldo_ldsb2_sp64 */
    case 367:  /* *tldo_ldsb3_sp64 */
    case 368:  /* *tldo_lduh_sp64 */
    case 369:  /* *tldo_lduh1_sp64 */
    case 370:  /* *tldo_lduh2_sp64 */
    case 371:  /* *tldo_ldsh1_sp64 */
    case 372:  /* *tldo_ldsh2_sp64 */
    case 375:  /* *tldo_ldsw1_sp64 */
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

    case 351:  /* tldm_call64 */
    case 347:  /* tgd_call64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
      slot += 1 * 1;
      break;
      break;

    case 332:  /* *branch_sp64 */
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
#line 284 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 160 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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

        case 422:  /* *ldstubsi */
        case 421:  /* *ldstubhi */
        case 420:  /* *ldstubqi */
        case 419:  /* *swapsi */
        case 418:  /* *sync_compare_and_swapdi_v8plus */
        case 417:  /* *sync_compare_and_swapdi */
        case 416:  /* *sync_compare_and_swapsi */
        case 415:  /* *membar */
        case 414:  /* *stbar */
        case 382:  /* stack_protect_testdi */
        case 381:  /* stack_protect_setdi */
        case 351:  /* tldm_call64 */
        case 347:  /* tgd_call64 */
        case 338:  /* ffssi2 */
        case 335:  /* do_builtin_setjmp_setup */
        case 334:  /* goto_handler_and_restore */
        case 332:  /* *branch_sp64 */
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
        case 183:  /* *sparc.md:4075 */
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
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 160 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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

        case 422:  /* *ldstubsi */
        case 421:  /* *ldstubhi */
        case 420:  /* *ldstubqi */
        case 419:  /* *swapsi */
        case 418:  /* *sync_compare_and_swapdi_v8plus */
        case 417:  /* *sync_compare_and_swapdi */
        case 416:  /* *sync_compare_and_swapsi */
        case 415:  /* *membar */
        case 414:  /* *stbar */
        case 382:  /* stack_protect_testdi */
        case 381:  /* stack_protect_setdi */
        case 351:  /* tldm_call64 */
        case 347:  /* tgd_call64 */
        case 338:  /* ffssi2 */
        case 335:  /* do_builtin_setjmp_setup */
        case 334:  /* goto_handler_and_restore */
        case 332:  /* *branch_sp64 */
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
        case 183:  /* *sparc.md:4075 */
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
#line 279 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 160 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))))) && ((
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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

        case 380:  /* *tldo_stx_sp64 */
        case 379:  /* *tldo_stw_sp64 */
        case 378:  /* *tldo_sth_sp64 */
        case 377:  /* *tldo_stb_sp64 */
        case 376:  /* *tldo_ldx_sp64 */
        case 374:  /* *tldo_lduw1_sp64 */
        case 373:  /* *tldo_lduw_sp64 */
        case 370:  /* *tldo_lduh2_sp64 */
        case 369:  /* *tldo_lduh1_sp64 */
        case 368:  /* *tldo_lduh_sp64 */
        case 364:  /* *tldo_ldub3_sp64 */
        case 363:  /* *tldo_ldub2_sp64 */
        case 362:  /* *tldo_ldub1_sp64 */
        case 361:  /* *tldo_ldub_sp64 */
        case 357:  /* tie_ld64 */
        case 340:  /* prefetch_32 */
        case 339:  /* prefetch_64 */
        case 118:  /* *zero_extendhidi2_insn */
        case 114:  /* *zero_extendhisi2_insn */
        case 64:  /* movdi_pic_gotdata_op */
        case 55:  /* movsi_pic_gotdata_op */
	  return 1;

        case 59:  /* *movdi_insn_sp64 */
        case 50:  /* *movsi_insn */
	  extract_constrain_insn_cached (insn);
	  if ((((1 << which_alternative) & 0x6c)) || ((!((1 << which_alternative) & 0x6c)) && ((
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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

        case 422:  /* *ldstubsi */
        case 421:  /* *ldstubhi */
        case 420:  /* *ldstubqi */
        case 419:  /* *swapsi */
        case 418:  /* *sync_compare_and_swapdi_v8plus */
        case 417:  /* *sync_compare_and_swapdi */
        case 416:  /* *sync_compare_and_swapsi */
        case 415:  /* *membar */
        case 414:  /* *stbar */
        case 382:  /* stack_protect_testdi */
        case 381:  /* stack_protect_setdi */
        case 351:  /* tldm_call64 */
        case 347:  /* tgd_call64 */
        case 338:  /* ffssi2 */
        case 335:  /* do_builtin_setjmp_setup */
        case 334:  /* goto_handler_and_restore */
        case 332:  /* *branch_sp64 */
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
        case 183:  /* *sparc.md:4075 */
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
#line 263 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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

    case 351:  /* tldm_call64 */
    case 347:  /* tgd_call64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
      slot += 1 * 1;
      break;
      break;

    case 332:  /* *branch_sp64 */
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
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((empty_delay_slot (insn)
		? EMPTY_DELAY_SLOT_TRUE : EMPTY_DELAY_SLOT_FALSE))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 164 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((current_function_uses_only_leaf_regs != 0
		? LEAF_FUNCTION_TRUE : LEAF_FUNCTION_FALSE))) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 160 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
((crtl->calls_eh_return != 0
		 ? CALLS_EH_RETURN_TRUE : CALLS_EH_RETURN_FALSE))) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 146 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
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

        case 422:  /* *ldstubsi */
        case 421:  /* *ldstubhi */
        case 420:  /* *ldstubqi */
        case 419:  /* *swapsi */
        case 418:  /* *sync_compare_and_swapdi_v8plus */
        case 417:  /* *sync_compare_and_swapdi */
        case 416:  /* *sync_compare_and_swapsi */
        case 415:  /* *membar */
        case 414:  /* *stbar */
        case 382:  /* stack_protect_testdi */
        case 381:  /* stack_protect_setdi */
        case 351:  /* tldm_call64 */
        case 347:  /* tgd_call64 */
        case 338:  /* ffssi2 */
        case 335:  /* do_builtin_setjmp_setup */
        case 334:  /* goto_handler_and_restore */
        case 332:  /* *branch_sp64 */
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
        case 183:  /* *sparc.md:4075 */
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
