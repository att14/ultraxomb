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
    convert_optab_handler (sext_optab, DFmode, SFmode)->insn_code = CODE_FOR_extendsfdf2;
  if (HAVE_truncdfsf2)
    convert_optab_handler (trunc_optab, SFmode, DFmode)->insn_code = CODE_FOR_truncdfsf2;
  if (HAVE_floatsisf2)
    convert_optab_handler (sfloat_optab, SFmode, SImode)->insn_code = CODE_FOR_floatsisf2;
  if (HAVE_floatsidf2)
    convert_optab_handler (sfloat_optab, DFmode, SImode)->insn_code = CODE_FOR_floatsidf2;
  if (HAVE_floatdisf2)
    convert_optab_handler (sfloat_optab, SFmode, DImode)->insn_code = CODE_FOR_floatdisf2;
  if (HAVE_floatdidf2)
    convert_optab_handler (sfloat_optab, DFmode, DImode)->insn_code = CODE_FOR_floatdidf2;
  if (HAVE_fix_truncsfsi2)
    convert_optab_handler (sfixtrunc_optab, SImode, SFmode)->insn_code = CODE_FOR_fix_truncsfsi2;
  if (HAVE_fix_truncdfsi2)
    convert_optab_handler (sfixtrunc_optab, SImode, DFmode)->insn_code = CODE_FOR_fix_truncdfsi2;
  if (HAVE_fix_truncsfdi2)
    convert_optab_handler (sfixtrunc_optab, DImode, SFmode)->insn_code = CODE_FOR_fix_truncsfdi2;
  if (HAVE_fix_truncdfdi2)
    convert_optab_handler (sfixtrunc_optab, DImode, DFmode)->insn_code = CODE_FOR_fix_truncdfdi2;
  optab_handler (add_optab, SImode)->insn_code = CODE_FOR_addsi3;
  optab_handler (sub_optab, SImode)->insn_code = CODE_FOR_subsi3;
  if (HAVE_mulsi3)
    optab_handler (smul_optab, SImode)->insn_code = CODE_FOR_mulsi3;
  if (HAVE_divdi3)
    optab_handler (sdiv_optab, DImode)->insn_code = CODE_FOR_divdi3;
  if (HAVE_udivdi3)
    optab_handler (udiv_optab, DImode)->insn_code = CODE_FOR_udivdi3;
  optab_handler (and_optab, SImode)->insn_code = CODE_FOR_andsi3;
  optab_handler (and_optab, V2HImode)->insn_code = CODE_FOR_andv2hi3;
  optab_handler (and_optab, V4QImode)->insn_code = CODE_FOR_andv4qi3;
  optab_handler (ior_optab, SImode)->insn_code = CODE_FOR_iorsi3;
  optab_handler (ior_optab, V2HImode)->insn_code = CODE_FOR_iorv2hi3;
  optab_handler (ior_optab, V4QImode)->insn_code = CODE_FOR_iorv4qi3;
  optab_handler (xor_optab, SImode)->insn_code = CODE_FOR_xorsi3;
  optab_handler (xor_optab, V2HImode)->insn_code = CODE_FOR_xorv2hi3;
  optab_handler (xor_optab, V4QImode)->insn_code = CODE_FOR_xorv4qi3;
  optab_handler (neg_optab, SImode)->insn_code = CODE_FOR_negsi2;
  optab_handler (one_cmpl_optab, SImode)->insn_code = CODE_FOR_one_cmplsi2;
  optab_handler (one_cmpl_optab, V2HImode)->insn_code = CODE_FOR_one_cmplv2hi2;
  optab_handler (one_cmpl_optab, V4QImode)->insn_code = CODE_FOR_one_cmplv4qi2;
  if (HAVE_adddf3)
    optab_handler (addv_optab, DFmode)->insn_code =
    optab_handler (add_optab, DFmode)->insn_code = CODE_FOR_adddf3;
  if (HAVE_addsf3)
    optab_handler (addv_optab, SFmode)->insn_code =
    optab_handler (add_optab, SFmode)->insn_code = CODE_FOR_addsf3;
  if (HAVE_subdf3)
    optab_handler (subv_optab, DFmode)->insn_code =
    optab_handler (sub_optab, DFmode)->insn_code = CODE_FOR_subdf3;
  if (HAVE_subsf3)
    optab_handler (subv_optab, SFmode)->insn_code =
    optab_handler (sub_optab, SFmode)->insn_code = CODE_FOR_subsf3;
  if (HAVE_muldf3)
    optab_handler (smulv_optab, DFmode)->insn_code =
    optab_handler (smul_optab, DFmode)->insn_code = CODE_FOR_muldf3;
  if (HAVE_mulsf3)
    optab_handler (smulv_optab, SFmode)->insn_code =
    optab_handler (smul_optab, SFmode)->insn_code = CODE_FOR_mulsf3;
  if (HAVE_divdf3)
    optab_handler (sdiv_optab, DFmode)->insn_code = CODE_FOR_divdf3;
  if (HAVE_divsf3)
    optab_handler (sdiv_optab, SFmode)->insn_code = CODE_FOR_divsf3;
  if (HAVE_negsf2)
    optab_handler (negv_optab, SFmode)->insn_code =
    optab_handler (neg_optab, SFmode)->insn_code = CODE_FOR_negsf2;
  if (HAVE_abssf2)
    optab_handler (absv_optab, SFmode)->insn_code =
    optab_handler (abs_optab, SFmode)->insn_code = CODE_FOR_abssf2;
  if (HAVE_sqrtdf2)
    optab_handler (sqrt_optab, DFmode)->insn_code = CODE_FOR_sqrtdf2;
  if (HAVE_sqrtsf2)
    optab_handler (sqrt_optab, SFmode)->insn_code = CODE_FOR_sqrtsf2;
  optab_handler (ashl_optab, SImode)->insn_code = CODE_FOR_ashlsi3;
  optab_handler (ashr_optab, SImode)->insn_code = CODE_FOR_ashrsi3;
  optab_handler (lshr_optab, SImode)->insn_code = CODE_FOR_lshrsi3;
  if (HAVE_ffssi2)
    optab_handler (ffs_optab, SImode)->insn_code = CODE_FOR_ffssi2;
  if (HAVE_addv2si3)
    optab_handler (add_optab, V2SImode)->insn_code = CODE_FOR_addv2si3;
  if (HAVE_addv4hi3)
    optab_handler (add_optab, V4HImode)->insn_code = CODE_FOR_addv4hi3;
  if (HAVE_addv2hi3)
    optab_handler (add_optab, V2HImode)->insn_code = CODE_FOR_addv2hi3;
  if (HAVE_subv2si3)
    optab_handler (sub_optab, V2SImode)->insn_code = CODE_FOR_subv2si3;
  if (HAVE_subv4hi3)
    optab_handler (sub_optab, V4HImode)->insn_code = CODE_FOR_subv4hi3;
  if (HAVE_subv2hi3)
    optab_handler (sub_optab, V2HImode)->insn_code = CODE_FOR_subv2hi3;
  optab_handler (cstore_optab, SImode)->insn_code = CODE_FOR_cstoresi4;
  if (HAVE_cstoredi4)
    optab_handler (cstore_optab, DImode)->insn_code = CODE_FOR_cstoredi4;
  if (HAVE_cstoresf4)
    optab_handler (cstore_optab, SFmode)->insn_code = CODE_FOR_cstoresf4;
  if (HAVE_cstoredf4)
    optab_handler (cstore_optab, DFmode)->insn_code = CODE_FOR_cstoredf4;
  if (HAVE_cstoretf4)
    optab_handler (cstore_optab, TFmode)->insn_code = CODE_FOR_cstoretf4;
  optab_handler (cbranch_optab, CCmode)->insn_code = CODE_FOR_cbranchcc4;
  optab_handler (cbranch_optab, SImode)->insn_code = CODE_FOR_cbranchsi4;
  if (HAVE_cbranchdi4)
    optab_handler (cbranch_optab, DImode)->insn_code = CODE_FOR_cbranchdi4;
  if (HAVE_cbranchsf4)
    optab_handler (cbranch_optab, SFmode)->insn_code = CODE_FOR_cbranchsf4;
  if (HAVE_cbranchdf4)
    optab_handler (cbranch_optab, DFmode)->insn_code = CODE_FOR_cbranchdf4;
  if (HAVE_cbranchtf4)
    optab_handler (cbranch_optab, TFmode)->insn_code = CODE_FOR_cbranchtf4;
  optab_handler (mov_optab, QImode)->insn_code = CODE_FOR_movqi;
  optab_handler (mov_optab, HImode)->insn_code = CODE_FOR_movhi;
  optab_handler (mov_optab, SImode)->insn_code = CODE_FOR_movsi;
  optab_handler (mov_optab, DImode)->insn_code = CODE_FOR_movdi;
  if (HAVE_reload_indi)
    reload_in_optab[DImode] = CODE_FOR_reload_indi;
  if (HAVE_reload_outdi)
    reload_out_optab[DImode] = CODE_FOR_reload_outdi;
  if (HAVE_movsf)
    optab_handler (mov_optab, SFmode)->insn_code = CODE_FOR_movsf;
  if (HAVE_movv2hi)
    optab_handler (mov_optab, V2HImode)->insn_code = CODE_FOR_movv2hi;
  if (HAVE_movv4qi)
    optab_handler (mov_optab, V4QImode)->insn_code = CODE_FOR_movv4qi;
  if (HAVE_movdf)
    optab_handler (mov_optab, DFmode)->insn_code = CODE_FOR_movdf;
  if (HAVE_movv2si)
    optab_handler (mov_optab, V2SImode)->insn_code = CODE_FOR_movv2si;
  if (HAVE_movv4hi)
    optab_handler (mov_optab, V4HImode)->insn_code = CODE_FOR_movv4hi;
  if (HAVE_movv8qi)
    optab_handler (mov_optab, V8QImode)->insn_code = CODE_FOR_movv8qi;
  optab_handler (mov_optab, TFmode)->insn_code = CODE_FOR_movtf;
  if (HAVE_movqicc)
    movcc_gen_code[QImode] = CODE_FOR_movqicc;
  if (HAVE_movhicc)
    movcc_gen_code[HImode] = CODE_FOR_movhicc;
  if (HAVE_movsicc)
    movcc_gen_code[SImode] = CODE_FOR_movsicc;
  if (HAVE_movdicc)
    movcc_gen_code[DImode] = CODE_FOR_movdicc;
  if (HAVE_movsfcc)
    movcc_gen_code[SFmode] = CODE_FOR_movsfcc;
  if (HAVE_movdfcc)
    movcc_gen_code[DFmode] = CODE_FOR_movdfcc;
  if (HAVE_movtfcc)
    movcc_gen_code[TFmode] = CODE_FOR_movtfcc;
  convert_optab_handler (zext_optab, SImode, HImode)->insn_code = CODE_FOR_zero_extendhisi2;
  convert_optab_handler (zext_optab, HImode, QImode)->insn_code = CODE_FOR_zero_extendqihi2;
  convert_optab_handler (zext_optab, SImode, QImode)->insn_code = CODE_FOR_zero_extendqisi2;
  if (HAVE_zero_extendqidi2)
    convert_optab_handler (zext_optab, DImode, QImode)->insn_code = CODE_FOR_zero_extendqidi2;
  if (HAVE_zero_extendhidi2)
    convert_optab_handler (zext_optab, DImode, HImode)->insn_code = CODE_FOR_zero_extendhidi2;
  convert_optab_handler (zext_optab, DImode, SImode)->insn_code = CODE_FOR_zero_extendsidi2;
  convert_optab_handler (sext_optab, SImode, HImode)->insn_code = CODE_FOR_extendhisi2;
  convert_optab_handler (sext_optab, HImode, QImode)->insn_code = CODE_FOR_extendqihi2;
  convert_optab_handler (sext_optab, SImode, QImode)->insn_code = CODE_FOR_extendqisi2;
  if (HAVE_extendqidi2)
    convert_optab_handler (sext_optab, DImode, QImode)->insn_code = CODE_FOR_extendqidi2;
  if (HAVE_extendhidi2)
    convert_optab_handler (sext_optab, DImode, HImode)->insn_code = CODE_FOR_extendhidi2;
  if (HAVE_extendsidi2)
    convert_optab_handler (sext_optab, DImode, SImode)->insn_code = CODE_FOR_extendsidi2;
  if (HAVE_extendsftf2)
    convert_optab_handler (sext_optab, TFmode, SFmode)->insn_code = CODE_FOR_extendsftf2;
  if (HAVE_extenddftf2)
    convert_optab_handler (sext_optab, TFmode, DFmode)->insn_code = CODE_FOR_extenddftf2;
  if (HAVE_trunctfsf2)
    convert_optab_handler (trunc_optab, SFmode, TFmode)->insn_code = CODE_FOR_trunctfsf2;
  if (HAVE_trunctfdf2)
    convert_optab_handler (trunc_optab, DFmode, TFmode)->insn_code = CODE_FOR_trunctfdf2;
  if (HAVE_floatsitf2)
    convert_optab_handler (sfloat_optab, TFmode, SImode)->insn_code = CODE_FOR_floatsitf2;
  if (HAVE_floatunssitf2)
    convert_optab_handler (ufloat_optab, TFmode, SImode)->insn_code = CODE_FOR_floatunssitf2;
  if (HAVE_floatunsdisf2)
    convert_optab_handler (ufloat_optab, SFmode, DImode)->insn_code = CODE_FOR_floatunsdisf2;
  if (HAVE_floatunsdidf2)
    convert_optab_handler (ufloat_optab, DFmode, DImode)->insn_code = CODE_FOR_floatunsdidf2;
  if (HAVE_floatditf2)
    convert_optab_handler (sfloat_optab, TFmode, DImode)->insn_code = CODE_FOR_floatditf2;
  if (HAVE_floatunsditf2)
    convert_optab_handler (ufloat_optab, TFmode, DImode)->insn_code = CODE_FOR_floatunsditf2;
  if (HAVE_fix_trunctfsi2)
    convert_optab_handler (sfixtrunc_optab, SImode, TFmode)->insn_code = CODE_FOR_fix_trunctfsi2;
  if (HAVE_fixuns_trunctfsi2)
    convert_optab_handler (ufixtrunc_optab, SImode, TFmode)->insn_code = CODE_FOR_fixuns_trunctfsi2;
  if (HAVE_fixuns_truncsfdi2)
    convert_optab_handler (ufixtrunc_optab, DImode, SFmode)->insn_code = CODE_FOR_fixuns_truncsfdi2;
  if (HAVE_fixuns_truncdfdi2)
    convert_optab_handler (ufixtrunc_optab, DImode, DFmode)->insn_code = CODE_FOR_fixuns_truncdfdi2;
  if (HAVE_fix_trunctfdi2)
    convert_optab_handler (sfixtrunc_optab, DImode, TFmode)->insn_code = CODE_FOR_fix_trunctfdi2;
  if (HAVE_fixuns_trunctfdi2)
    convert_optab_handler (ufixtrunc_optab, DImode, TFmode)->insn_code = CODE_FOR_fixuns_trunctfdi2;
  optab_handler (add_optab, DImode)->insn_code = CODE_FOR_adddi3;
  optab_handler (sub_optab, DImode)->insn_code = CODE_FOR_subdi3;
  if (HAVE_muldi3)
    optab_handler (smul_optab, DImode)->insn_code = CODE_FOR_muldi3;
  if (HAVE_mulsidi3)
    optab_handler (smul_widen_optab, DImode)->insn_code = CODE_FOR_mulsidi3;
  if (HAVE_umulsidi3)
    optab_handler (umul_widen_optab, DImode)->insn_code = CODE_FOR_umulsidi3;
  if (HAVE_divsi3)
    optab_handler (sdiv_optab, SImode)->insn_code = CODE_FOR_divsi3;
  if (HAVE_udivsi3)
    optab_handler (udiv_optab, SImode)->insn_code = CODE_FOR_udivsi3;
  optab_handler (and_optab, DImode)->insn_code = CODE_FOR_anddi3;
  optab_handler (and_optab, V2SImode)->insn_code = CODE_FOR_andv2si3;
  optab_handler (and_optab, V4HImode)->insn_code = CODE_FOR_andv4hi3;
  optab_handler (and_optab, V8QImode)->insn_code = CODE_FOR_andv8qi3;
  optab_handler (ior_optab, DImode)->insn_code = CODE_FOR_iordi3;
  optab_handler (ior_optab, V2SImode)->insn_code = CODE_FOR_iorv2si3;
  optab_handler (ior_optab, V4HImode)->insn_code = CODE_FOR_iorv4hi3;
  optab_handler (ior_optab, V8QImode)->insn_code = CODE_FOR_iorv8qi3;
  optab_handler (xor_optab, DImode)->insn_code = CODE_FOR_xordi3;
  optab_handler (xor_optab, V2SImode)->insn_code = CODE_FOR_xorv2si3;
  optab_handler (xor_optab, V4HImode)->insn_code = CODE_FOR_xorv4hi3;
  optab_handler (xor_optab, V8QImode)->insn_code = CODE_FOR_xorv8qi3;
  optab_handler (neg_optab, DImode)->insn_code = CODE_FOR_negdi2;
  optab_handler (one_cmpl_optab, DImode)->insn_code = CODE_FOR_one_cmpldi2;
  optab_handler (one_cmpl_optab, V2SImode)->insn_code = CODE_FOR_one_cmplv2si2;
  optab_handler (one_cmpl_optab, V4HImode)->insn_code = CODE_FOR_one_cmplv4hi2;
  optab_handler (one_cmpl_optab, V8QImode)->insn_code = CODE_FOR_one_cmplv8qi2;
  if (HAVE_addtf3)
    optab_handler (addv_optab, TFmode)->insn_code =
    optab_handler (add_optab, TFmode)->insn_code = CODE_FOR_addtf3;
  if (HAVE_subtf3)
    optab_handler (subv_optab, TFmode)->insn_code =
    optab_handler (sub_optab, TFmode)->insn_code = CODE_FOR_subtf3;
  if (HAVE_multf3)
    optab_handler (smulv_optab, TFmode)->insn_code =
    optab_handler (smul_optab, TFmode)->insn_code = CODE_FOR_multf3;
  if (HAVE_divtf3)
    optab_handler (sdiv_optab, TFmode)->insn_code = CODE_FOR_divtf3;
  if (HAVE_negtf2)
    optab_handler (negv_optab, TFmode)->insn_code =
    optab_handler (neg_optab, TFmode)->insn_code = CODE_FOR_negtf2;
  if (HAVE_negdf2)
    optab_handler (negv_optab, DFmode)->insn_code =
    optab_handler (neg_optab, DFmode)->insn_code = CODE_FOR_negdf2;
  if (HAVE_abstf2)
    optab_handler (absv_optab, TFmode)->insn_code =
    optab_handler (abs_optab, TFmode)->insn_code = CODE_FOR_abstf2;
  if (HAVE_absdf2)
    optab_handler (absv_optab, DFmode)->insn_code =
    optab_handler (abs_optab, DFmode)->insn_code = CODE_FOR_absdf2;
  if (HAVE_sqrttf2)
    optab_handler (sqrt_optab, TFmode)->insn_code = CODE_FOR_sqrttf2;
  if (HAVE_ashldi3)
    optab_handler (ashl_optab, DImode)->insn_code = CODE_FOR_ashldi3;
  if (HAVE_ashrdi3)
    optab_handler (ashr_optab, DImode)->insn_code = CODE_FOR_ashrdi3;
  if (HAVE_lshrdi3)
    optab_handler (lshr_optab, DImode)->insn_code = CODE_FOR_lshrdi3;
  optab_handler (ctrap_optab, SImode)->insn_code = CODE_FOR_ctrapsi4;
  if (HAVE_ctrapdi4)
    optab_handler (ctrap_optab, DImode)->insn_code = CODE_FOR_ctrapdi4;
  if (HAVE_sync_compare_and_swapqi)
    sync_compare_and_swap[QImode] = CODE_FOR_sync_compare_and_swapqi;
  if (HAVE_sync_compare_and_swaphi)
    sync_compare_and_swap[HImode] = CODE_FOR_sync_compare_and_swaphi;
  if (HAVE_sync_compare_and_swapsi)
    sync_compare_and_swap[SImode] = CODE_FOR_sync_compare_and_swapsi;
  if (HAVE_sync_compare_and_swapdi)
    sync_compare_and_swap[DImode] = CODE_FOR_sync_compare_and_swapdi;
  if (HAVE_sync_lock_test_and_setqi)
    sync_lock_test_and_set[QImode] = CODE_FOR_sync_lock_test_and_setqi;
  if (HAVE_sync_lock_test_and_sethi)
    sync_lock_test_and_set[HImode] = CODE_FOR_sync_lock_test_and_sethi;
  sync_lock_test_and_set[SImode] = CODE_FOR_sync_lock_test_and_setsi;

#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  /* This flag says the same insns that convert to a signed fixnum
     also convert validly to an unsigned one.  */
  for (i = 0; i < NUM_MACHINE_MODES; i++)
    for (j = 0; j < NUM_MACHINE_MODES; j++)
      convert_optab_handler (ufixtrunc_optab, i, j)->insn_code
      = convert_optab_handler (sfixtrunc_optab, i, j)->insn_code;
#endif
}
