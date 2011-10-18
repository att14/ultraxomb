/* Generated automatically by the program `genopinit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "recog.h"
#include "expr.h"
#include "optabs.h"
#include "reload.h"

void
init_all_optabs (void)
{
#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  int i, j;
#endif

  if (HAVE_extendsfdf2)
    set_convert_optab_handler (sext_optab, DFmode, SFmode, CODE_FOR_extendsfdf2);
  if (HAVE_truncdfsf2)
    set_convert_optab_handler (trunc_optab, SFmode, DFmode, CODE_FOR_truncdfsf2);
  if (HAVE_floatsisf2)
    set_convert_optab_handler (sfloat_optab, SFmode, SImode, CODE_FOR_floatsisf2);
  if (HAVE_floatsidf2)
    set_convert_optab_handler (sfloat_optab, DFmode, SImode, CODE_FOR_floatsidf2);
  if (HAVE_floatdisf2)
    set_convert_optab_handler (sfloat_optab, SFmode, DImode, CODE_FOR_floatdisf2);
  if (HAVE_floatdidf2)
    set_convert_optab_handler (sfloat_optab, DFmode, DImode, CODE_FOR_floatdidf2);
  if (HAVE_fix_truncsfsi2)
    set_convert_optab_handler (sfixtrunc_optab, SImode, SFmode, CODE_FOR_fix_truncsfsi2);
  if (HAVE_fix_truncdfsi2)
    set_convert_optab_handler (sfixtrunc_optab, SImode, DFmode, CODE_FOR_fix_truncdfsi2);
  if (HAVE_fix_truncsfdi2)
    set_convert_optab_handler (sfixtrunc_optab, DImode, SFmode, CODE_FOR_fix_truncsfdi2);
  if (HAVE_fix_truncdfdi2)
    set_convert_optab_handler (sfixtrunc_optab, DImode, DFmode, CODE_FOR_fix_truncdfdi2);
  set_optab_handler (add_optab, SImode, CODE_FOR_addsi3);
  set_optab_handler (sub_optab, SImode, CODE_FOR_subsi3);
  if (HAVE_mulsi3)
    set_optab_handler (smul_optab, SImode, CODE_FOR_mulsi3);
  if (HAVE_divdi3)
    set_optab_handler (sdiv_optab, DImode, CODE_FOR_divdi3);
  if (HAVE_udivdi3)
    set_optab_handler (udiv_optab, DImode, CODE_FOR_udivdi3);
  set_optab_handler (and_optab, SImode, CODE_FOR_andsi3);
  set_optab_handler (and_optab, V2HImode, CODE_FOR_andv2hi3);
  set_optab_handler (and_optab, V4QImode, CODE_FOR_andv4qi3);
  set_optab_handler (ior_optab, SImode, CODE_FOR_iorsi3);
  set_optab_handler (ior_optab, V2HImode, CODE_FOR_iorv2hi3);
  set_optab_handler (ior_optab, V4QImode, CODE_FOR_iorv4qi3);
  set_optab_handler (xor_optab, SImode, CODE_FOR_xorsi3);
  set_optab_handler (xor_optab, V2HImode, CODE_FOR_xorv2hi3);
  set_optab_handler (xor_optab, V4QImode, CODE_FOR_xorv4qi3);
  set_optab_handler (neg_optab, SImode, CODE_FOR_negsi2);
  set_optab_handler (one_cmpl_optab, SImode, CODE_FOR_one_cmplsi2);
  set_optab_handler (one_cmpl_optab, V2HImode, CODE_FOR_one_cmplv2hi2);
  set_optab_handler (one_cmpl_optab, V4QImode, CODE_FOR_one_cmplv4qi2);
  if (HAVE_adddf3)
    set_optab_handler (addv_optab, DFmode, CODE_FOR_adddf3),
    set_optab_handler (add_optab, DFmode, CODE_FOR_adddf3);
  if (HAVE_addsf3)
    set_optab_handler (addv_optab, SFmode, CODE_FOR_addsf3),
    set_optab_handler (add_optab, SFmode, CODE_FOR_addsf3);
  if (HAVE_subdf3)
    set_optab_handler (subv_optab, DFmode, CODE_FOR_subdf3),
    set_optab_handler (sub_optab, DFmode, CODE_FOR_subdf3);
  if (HAVE_subsf3)
    set_optab_handler (subv_optab, SFmode, CODE_FOR_subsf3),
    set_optab_handler (sub_optab, SFmode, CODE_FOR_subsf3);
  if (HAVE_muldf3)
    set_optab_handler (smulv_optab, DFmode, CODE_FOR_muldf3),
    set_optab_handler (smul_optab, DFmode, CODE_FOR_muldf3);
  if (HAVE_mulsf3)
    set_optab_handler (smulv_optab, SFmode, CODE_FOR_mulsf3),
    set_optab_handler (smul_optab, SFmode, CODE_FOR_mulsf3);
  if (HAVE_divdf3)
    set_optab_handler (sdiv_optab, DFmode, CODE_FOR_divdf3);
  if (HAVE_divsf3)
    set_optab_handler (sdiv_optab, SFmode, CODE_FOR_divsf3);
  if (HAVE_negsf2)
    set_optab_handler (negv_optab, SFmode, CODE_FOR_negsf2),
    set_optab_handler (neg_optab, SFmode, CODE_FOR_negsf2);
  if (HAVE_abssf2)
    set_optab_handler (absv_optab, SFmode, CODE_FOR_abssf2),
    set_optab_handler (abs_optab, SFmode, CODE_FOR_abssf2);
  if (HAVE_sqrtdf2)
    set_optab_handler (sqrt_optab, DFmode, CODE_FOR_sqrtdf2);
  if (HAVE_sqrtsf2)
    set_optab_handler (sqrt_optab, SFmode, CODE_FOR_sqrtsf2);
  set_optab_handler (ashl_optab, SImode, CODE_FOR_ashlsi3);
  set_optab_handler (ashr_optab, SImode, CODE_FOR_ashrsi3);
  set_optab_handler (lshr_optab, SImode, CODE_FOR_lshrsi3);
  if (HAVE_ffssi2)
    set_optab_handler (ffs_optab, SImode, CODE_FOR_ffssi2);
  if (HAVE_addv2si3)
    set_optab_handler (add_optab, V2SImode, CODE_FOR_addv2si3);
  if (HAVE_addv4hi3)
    set_optab_handler (add_optab, V4HImode, CODE_FOR_addv4hi3);
  if (HAVE_addv2hi3)
    set_optab_handler (add_optab, V2HImode, CODE_FOR_addv2hi3);
  if (HAVE_subv2si3)
    set_optab_handler (sub_optab, V2SImode, CODE_FOR_subv2si3);
  if (HAVE_subv4hi3)
    set_optab_handler (sub_optab, V4HImode, CODE_FOR_subv4hi3);
  if (HAVE_subv2hi3)
    set_optab_handler (sub_optab, V2HImode, CODE_FOR_subv2hi3);
  set_optab_handler (cstore_optab, SImode, CODE_FOR_cstoresi4);
  if (HAVE_cstoredi4)
    set_optab_handler (cstore_optab, DImode, CODE_FOR_cstoredi4);
  if (HAVE_cstoresf4)
    set_optab_handler (cstore_optab, SFmode, CODE_FOR_cstoresf4);
  if (HAVE_cstoredf4)
    set_optab_handler (cstore_optab, DFmode, CODE_FOR_cstoredf4);
  if (HAVE_cstoretf4)
    set_optab_handler (cstore_optab, TFmode, CODE_FOR_cstoretf4);
  set_optab_handler (cbranch_optab, CCmode, CODE_FOR_cbranchcc4);
  set_optab_handler (cbranch_optab, SImode, CODE_FOR_cbranchsi4);
  if (HAVE_cbranchdi4)
    set_optab_handler (cbranch_optab, DImode, CODE_FOR_cbranchdi4);
  if (HAVE_cbranchsf4)
    set_optab_handler (cbranch_optab, SFmode, CODE_FOR_cbranchsf4);
  if (HAVE_cbranchdf4)
    set_optab_handler (cbranch_optab, DFmode, CODE_FOR_cbranchdf4);
  if (HAVE_cbranchtf4)
    set_optab_handler (cbranch_optab, TFmode, CODE_FOR_cbranchtf4);
  set_optab_handler (mov_optab, QImode, CODE_FOR_movqi);
  set_optab_handler (mov_optab, HImode, CODE_FOR_movhi);
  set_optab_handler (mov_optab, SImode, CODE_FOR_movsi);
  set_optab_handler (mov_optab, DImode, CODE_FOR_movdi);
  if (HAVE_reload_indi)
    set_direct_optab_handler (reload_in_optab, DImode, CODE_FOR_reload_indi);
  if (HAVE_reload_outdi)
    set_direct_optab_handler (reload_out_optab, DImode, CODE_FOR_reload_outdi);
  if (HAVE_movsf)
    set_optab_handler (mov_optab, SFmode, CODE_FOR_movsf);
  if (HAVE_movv2hi)
    set_optab_handler (mov_optab, V2HImode, CODE_FOR_movv2hi);
  if (HAVE_movv4qi)
    set_optab_handler (mov_optab, V4QImode, CODE_FOR_movv4qi);
  if (HAVE_movdf)
    set_optab_handler (mov_optab, DFmode, CODE_FOR_movdf);
  if (HAVE_movv2si)
    set_optab_handler (mov_optab, V2SImode, CODE_FOR_movv2si);
  if (HAVE_movv4hi)
    set_optab_handler (mov_optab, V4HImode, CODE_FOR_movv4hi);
  if (HAVE_movv8qi)
    set_optab_handler (mov_optab, V8QImode, CODE_FOR_movv8qi);
  set_optab_handler (mov_optab, TFmode, CODE_FOR_movtf);
  if (HAVE_movqicc)
    set_direct_optab_handler (movcc_optab, QImode, CODE_FOR_movqicc);
  if (HAVE_movhicc)
    set_direct_optab_handler (movcc_optab, HImode, CODE_FOR_movhicc);
  if (HAVE_movsicc)
    set_direct_optab_handler (movcc_optab, SImode, CODE_FOR_movsicc);
  if (HAVE_movdicc)
    set_direct_optab_handler (movcc_optab, DImode, CODE_FOR_movdicc);
  if (HAVE_movsfcc)
    set_direct_optab_handler (movcc_optab, SFmode, CODE_FOR_movsfcc);
  if (HAVE_movdfcc)
    set_direct_optab_handler (movcc_optab, DFmode, CODE_FOR_movdfcc);
  if (HAVE_movtfcc)
    set_direct_optab_handler (movcc_optab, TFmode, CODE_FOR_movtfcc);
  set_convert_optab_handler (zext_optab, SImode, HImode, CODE_FOR_zero_extendhisi2);
  set_convert_optab_handler (zext_optab, HImode, QImode, CODE_FOR_zero_extendqihi2);
  set_convert_optab_handler (zext_optab, SImode, QImode, CODE_FOR_zero_extendqisi2);
  if (HAVE_zero_extendqidi2)
    set_convert_optab_handler (zext_optab, DImode, QImode, CODE_FOR_zero_extendqidi2);
  if (HAVE_zero_extendhidi2)
    set_convert_optab_handler (zext_optab, DImode, HImode, CODE_FOR_zero_extendhidi2);
  set_convert_optab_handler (zext_optab, DImode, SImode, CODE_FOR_zero_extendsidi2);
  set_convert_optab_handler (sext_optab, SImode, HImode, CODE_FOR_extendhisi2);
  set_convert_optab_handler (sext_optab, HImode, QImode, CODE_FOR_extendqihi2);
  set_convert_optab_handler (sext_optab, SImode, QImode, CODE_FOR_extendqisi2);
  if (HAVE_extendqidi2)
    set_convert_optab_handler (sext_optab, DImode, QImode, CODE_FOR_extendqidi2);
  if (HAVE_extendhidi2)
    set_convert_optab_handler (sext_optab, DImode, HImode, CODE_FOR_extendhidi2);
  if (HAVE_extendsidi2)
    set_convert_optab_handler (sext_optab, DImode, SImode, CODE_FOR_extendsidi2);
  if (HAVE_extendsftf2)
    set_convert_optab_handler (sext_optab, TFmode, SFmode, CODE_FOR_extendsftf2);
  if (HAVE_extenddftf2)
    set_convert_optab_handler (sext_optab, TFmode, DFmode, CODE_FOR_extenddftf2);
  if (HAVE_trunctfsf2)
    set_convert_optab_handler (trunc_optab, SFmode, TFmode, CODE_FOR_trunctfsf2);
  if (HAVE_trunctfdf2)
    set_convert_optab_handler (trunc_optab, DFmode, TFmode, CODE_FOR_trunctfdf2);
  if (HAVE_floatsitf2)
    set_convert_optab_handler (sfloat_optab, TFmode, SImode, CODE_FOR_floatsitf2);
  if (HAVE_floatunssitf2)
    set_convert_optab_handler (ufloat_optab, TFmode, SImode, CODE_FOR_floatunssitf2);
  if (HAVE_floatunsdisf2)
    set_convert_optab_handler (ufloat_optab, SFmode, DImode, CODE_FOR_floatunsdisf2);
  if (HAVE_floatunsdidf2)
    set_convert_optab_handler (ufloat_optab, DFmode, DImode, CODE_FOR_floatunsdidf2);
  if (HAVE_floatditf2)
    set_convert_optab_handler (sfloat_optab, TFmode, DImode, CODE_FOR_floatditf2);
  if (HAVE_floatunsditf2)
    set_convert_optab_handler (ufloat_optab, TFmode, DImode, CODE_FOR_floatunsditf2);
  if (HAVE_fix_trunctfsi2)
    set_convert_optab_handler (sfixtrunc_optab, SImode, TFmode, CODE_FOR_fix_trunctfsi2);
  if (HAVE_fixuns_trunctfsi2)
    set_convert_optab_handler (ufixtrunc_optab, SImode, TFmode, CODE_FOR_fixuns_trunctfsi2);
  if (HAVE_fixuns_truncsfdi2)
    set_convert_optab_handler (ufixtrunc_optab, DImode, SFmode, CODE_FOR_fixuns_truncsfdi2);
  if (HAVE_fixuns_truncdfdi2)
    set_convert_optab_handler (ufixtrunc_optab, DImode, DFmode, CODE_FOR_fixuns_truncdfdi2);
  if (HAVE_fix_trunctfdi2)
    set_convert_optab_handler (sfixtrunc_optab, DImode, TFmode, CODE_FOR_fix_trunctfdi2);
  if (HAVE_fixuns_trunctfdi2)
    set_convert_optab_handler (ufixtrunc_optab, DImode, TFmode, CODE_FOR_fixuns_trunctfdi2);
  set_optab_handler (add_optab, DImode, CODE_FOR_adddi3);
  set_optab_handler (sub_optab, DImode, CODE_FOR_subdi3);
  if (HAVE_muldi3)
    set_optab_handler (smul_optab, DImode, CODE_FOR_muldi3);
  if (HAVE_mulsidi3)
    set_optab_handler (smul_widen_optab, DImode, CODE_FOR_mulsidi3);
  if (HAVE_umulsidi3)
    set_optab_handler (umul_widen_optab, DImode, CODE_FOR_umulsidi3);
  if (HAVE_divsi3)
    set_optab_handler (sdiv_optab, SImode, CODE_FOR_divsi3);
  if (HAVE_udivsi3)
    set_optab_handler (udiv_optab, SImode, CODE_FOR_udivsi3);
  set_optab_handler (and_optab, DImode, CODE_FOR_anddi3);
  set_optab_handler (and_optab, V2SImode, CODE_FOR_andv2si3);
  set_optab_handler (and_optab, V4HImode, CODE_FOR_andv4hi3);
  set_optab_handler (and_optab, V8QImode, CODE_FOR_andv8qi3);
  set_optab_handler (ior_optab, DImode, CODE_FOR_iordi3);
  set_optab_handler (ior_optab, V2SImode, CODE_FOR_iorv2si3);
  set_optab_handler (ior_optab, V4HImode, CODE_FOR_iorv4hi3);
  set_optab_handler (ior_optab, V8QImode, CODE_FOR_iorv8qi3);
  set_optab_handler (xor_optab, DImode, CODE_FOR_xordi3);
  set_optab_handler (xor_optab, V2SImode, CODE_FOR_xorv2si3);
  set_optab_handler (xor_optab, V4HImode, CODE_FOR_xorv4hi3);
  set_optab_handler (xor_optab, V8QImode, CODE_FOR_xorv8qi3);
  set_optab_handler (neg_optab, DImode, CODE_FOR_negdi2);
  set_optab_handler (one_cmpl_optab, DImode, CODE_FOR_one_cmpldi2);
  set_optab_handler (one_cmpl_optab, V2SImode, CODE_FOR_one_cmplv2si2);
  set_optab_handler (one_cmpl_optab, V4HImode, CODE_FOR_one_cmplv4hi2);
  set_optab_handler (one_cmpl_optab, V8QImode, CODE_FOR_one_cmplv8qi2);
  if (HAVE_addtf3)
    set_optab_handler (addv_optab, TFmode, CODE_FOR_addtf3),
    set_optab_handler (add_optab, TFmode, CODE_FOR_addtf3);
  if (HAVE_subtf3)
    set_optab_handler (subv_optab, TFmode, CODE_FOR_subtf3),
    set_optab_handler (sub_optab, TFmode, CODE_FOR_subtf3);
  if (HAVE_multf3)
    set_optab_handler (smulv_optab, TFmode, CODE_FOR_multf3),
    set_optab_handler (smul_optab, TFmode, CODE_FOR_multf3);
  if (HAVE_divtf3)
    set_optab_handler (sdiv_optab, TFmode, CODE_FOR_divtf3);
  if (HAVE_negtf2)
    set_optab_handler (negv_optab, TFmode, CODE_FOR_negtf2),
    set_optab_handler (neg_optab, TFmode, CODE_FOR_negtf2);
  if (HAVE_negdf2)
    set_optab_handler (negv_optab, DFmode, CODE_FOR_negdf2),
    set_optab_handler (neg_optab, DFmode, CODE_FOR_negdf2);
  if (HAVE_abstf2)
    set_optab_handler (absv_optab, TFmode, CODE_FOR_abstf2),
    set_optab_handler (abs_optab, TFmode, CODE_FOR_abstf2);
  if (HAVE_absdf2)
    set_optab_handler (absv_optab, DFmode, CODE_FOR_absdf2),
    set_optab_handler (abs_optab, DFmode, CODE_FOR_absdf2);
  if (HAVE_sqrttf2)
    set_optab_handler (sqrt_optab, TFmode, CODE_FOR_sqrttf2);
  if (HAVE_ashldi3)
    set_optab_handler (ashl_optab, DImode, CODE_FOR_ashldi3);
  if (HAVE_ashrdi3)
    set_optab_handler (ashr_optab, DImode, CODE_FOR_ashrdi3);
  if (HAVE_lshrdi3)
    set_optab_handler (lshr_optab, DImode, CODE_FOR_lshrdi3);
  set_optab_handler (ctrap_optab, SImode, CODE_FOR_ctrapsi4);
  if (HAVE_ctrapdi4)
    set_optab_handler (ctrap_optab, DImode, CODE_FOR_ctrapdi4);
  if (HAVE_sync_compare_and_swapqi)
    set_direct_optab_handler (sync_compare_and_swap_optab, QImode, CODE_FOR_sync_compare_and_swapqi);
  if (HAVE_sync_compare_and_swaphi)
    set_direct_optab_handler (sync_compare_and_swap_optab, HImode, CODE_FOR_sync_compare_and_swaphi);
  if (HAVE_sync_compare_and_swapsi)
    set_direct_optab_handler (sync_compare_and_swap_optab, SImode, CODE_FOR_sync_compare_and_swapsi);
  if (HAVE_sync_compare_and_swapdi)
    set_direct_optab_handler (sync_compare_and_swap_optab, DImode, CODE_FOR_sync_compare_and_swapdi);
  if (HAVE_sync_lock_test_and_setqi)
    set_direct_optab_handler (sync_lock_test_and_set_optab, QImode, CODE_FOR_sync_lock_test_and_setqi);
  if (HAVE_sync_lock_test_and_sethi)
    set_direct_optab_handler (sync_lock_test_and_set_optab, HImode, CODE_FOR_sync_lock_test_and_sethi);
  set_direct_optab_handler (sync_lock_test_and_set_optab, SImode, CODE_FOR_sync_lock_test_and_setsi);

#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  /* This flag says the same insns that convert to a signed fixnum
     also convert validly to an unsigned one.  */
  for (i = 0; i < NUM_MACHINE_MODES; i++)
    for (j = 0; j < NUM_MACHINE_MODES; j++)
      set_convert_optab_handler
 	(ufixtrunc_optab, (enum machine_mode) i, (enum machine_mode) j,
	 convert_optab_handler (sfixtrunc_optab, (enum machine_mode) i,
						 (enum machine_mode) j));
#endif
}
