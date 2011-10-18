/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_load_pcrel_symsi ((REGNO (operands[0]) == INTVAL (operands[3])) && (Pmode == SImode))
#define HAVE_load_pcrel_symdi ((REGNO (operands[0]) == INTVAL (operands[3])) && (Pmode == DImode))
#define HAVE_movsi_lo_sum_pic (flag_pic)
#define HAVE_movsi_high_pic (flag_pic && check_pic (1))
#define HAVE_movsi_pic_gotdata_op (flag_pic && check_pic (1))
#define HAVE_movdi_lo_sum_pic (TARGET_ARCH64 && flag_pic)
#define HAVE_movdi_high_pic (TARGET_ARCH64 && flag_pic && check_pic (1))
#define HAVE_movdi_pic_gotdata_op (TARGET_ARCH64 && flag_pic && check_pic (1))
#define HAVE_seth44 (TARGET_CM_MEDMID)
#define HAVE_setm44 (TARGET_CM_MEDMID)
#define HAVE_setl44 (TARGET_CM_MEDMID)
#define HAVE_sethh (TARGET_CM_MEDANY)
#define HAVE_setlm (TARGET_CM_MEDANY)
#define HAVE_sethm (TARGET_CM_MEDANY)
#define HAVE_setlo (TARGET_CM_MEDANY)
#define HAVE_embmedany_sethi (TARGET_CM_EMBMEDANY && check_pic (1))
#define HAVE_embmedany_losum (TARGET_CM_EMBMEDANY)
#define HAVE_embmedany_brsum (TARGET_CM_EMBMEDANY)
#define HAVE_embmedany_textuhi (TARGET_CM_EMBMEDANY && check_pic (1))
#define HAVE_embmedany_texthi (TARGET_CM_EMBMEDANY && check_pic (1))
#define HAVE_embmedany_textulo (TARGET_CM_EMBMEDANY)
#define HAVE_embmedany_textlo (TARGET_CM_EMBMEDANY)
#define HAVE_movdf_cc_v9 (TARGET_V9 && TARGET_FPU)
#define HAVE_movdf_cc_reg_sp64 (TARGET_ARCH64 && TARGET_FPU)
#define HAVE_extendsfdf2 (TARGET_FPU)
#define HAVE_truncdfsf2 (TARGET_FPU)
#define HAVE_floatsisf2 (TARGET_FPU)
#define HAVE_floatsidf2 (TARGET_FPU)
#define HAVE_floatdisf2 (TARGET_V9 && TARGET_FPU)
#define HAVE_floatdidf2 (TARGET_V9 && TARGET_FPU)
#define HAVE_fix_truncsfsi2 (TARGET_FPU)
#define HAVE_fix_truncdfsi2 (TARGET_FPU)
#define HAVE_fix_truncsfdi2 (TARGET_V9 && TARGET_FPU)
#define HAVE_fix_truncdfdi2 (TARGET_V9 && TARGET_FPU)
#define HAVE_addx 1
#define HAVE_addsi3 1
#define HAVE_subx 1
#define HAVE_subsi3 1
#define HAVE_cmp_minus_cc_set 1
#define HAVE_mulsi3 (TARGET_HARD_MUL)
#define HAVE_muldi3_v8plus (TARGET_V8PLUS)
#define HAVE_mulsidi3_v8plus (TARGET_V8PLUS)
#define HAVE_const_mulsidi3_v8plus (TARGET_V8PLUS)
#define HAVE_const_mulsidi3_sp64 (TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64)
#define HAVE_smulsi3_highpart_v8plus (TARGET_V8PLUS)
#define HAVE_const_smulsi3_highpart_v8plus (TARGET_V8PLUS)
#define HAVE_umulsidi3_v8plus (TARGET_V8PLUS)
#define HAVE_const_umulsidi3_sp64 (TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64)
#define HAVE_const_umulsidi3_v8plus (TARGET_V8PLUS)
#define HAVE_umulsi3_highpart_v8plus (TARGET_V8PLUS)
#define HAVE_const_umulsi3_highpart_v8plus (TARGET_V8PLUS)
#define HAVE_divsi3_sp64 (TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64)
#define HAVE_divdi3 1
#define HAVE_udivsi3_sp64 (TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64)
#define HAVE_udivdi3 1
#define HAVE_andsi3 1
#define HAVE_andv2hi3 1
#define HAVE_andv4qi3 1
#define HAVE_iorsi3 1
#define HAVE_iorv2hi3 1
#define HAVE_iorv4qi3 1
#define HAVE_xorsi3 1
#define HAVE_xorv2hi3 1
#define HAVE_xorv4qi3 1
#define HAVE_negsi2 1
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmplv2hi2 1
#define HAVE_one_cmplv4qi2 1
#define HAVE_adddf3 (TARGET_FPU)
#define HAVE_addsf3 (TARGET_FPU)
#define HAVE_subdf3 (TARGET_FPU)
#define HAVE_subsf3 (TARGET_FPU)
#define HAVE_muldf3 (TARGET_FPU)
#define HAVE_mulsf3 (TARGET_FPU)
#define HAVE_divdf3 (TARGET_FPU)
#define HAVE_divsf3 (TARGET_FPU)
#define HAVE_negsf2 (TARGET_FPU)
#define HAVE_abssf2 (TARGET_FPU)
#define HAVE_sqrtdf2 (TARGET_FPU)
#define HAVE_sqrtsf2 (TARGET_FPU)
#define HAVE_ashlsi3 1
#define HAVE_ashldi3_v8plus (TARGET_V8PLUS)
#define HAVE_ashrsi3 1
#define HAVE_ashrdi3_v8plus (TARGET_V8PLUS)
#define HAVE_lshrsi3 1
#define HAVE_lshrdi3_v8plus (TARGET_V8PLUS)
#define HAVE_jump 1
#define HAVE_save_register_windowdi 1
#define HAVE_blockage 1
#define HAVE_probe_stack_rangedi 1
#define HAVE_nop 1
#define HAVE_flush_register_windows 1
#define HAVE_goto_handler_and_restore (GET_MODE (operands[0]) == Pmode)
#define HAVE_do_builtin_setjmp_setup 1
#define HAVE_flush 1
#define HAVE_flushdi 1
#define HAVE_ffssi2 (TARGET_SPARCLITE || TARGET_SPARCLET)
#define HAVE_prefetch_64 1
#define HAVE_prefetch_32 1
#define HAVE_trap 1
#define HAVE_tgd_hi22 1
#define HAVE_tgd_lo10 1
#define HAVE_tgd_add64 1
#define HAVE_tgd_call64 1
#define HAVE_tldm_hi22 1
#define HAVE_tldm_lo10 1
#define HAVE_tldm_add64 1
#define HAVE_tldm_call64 1
#define HAVE_tldo_hix22 1
#define HAVE_tldo_lox10 1
#define HAVE_tldo_add64 1
#define HAVE_tie_hi22 1
#define HAVE_tie_lo10 1
#define HAVE_tie_ld64 1
#define HAVE_tie_add64 1
#define HAVE_tle_hix22_sp64 1
#define HAVE_tle_lox10_sp64 1
#define HAVE_stack_protect_setdi 1
#define HAVE_stack_protect_testdi 1
#define HAVE_addv2si3 (TARGET_VIS)
#define HAVE_addv4hi3 (TARGET_VIS)
#define HAVE_addv2hi3 (TARGET_VIS)
#define HAVE_subv2si3 (TARGET_VIS)
#define HAVE_subv4hi3 (TARGET_VIS)
#define HAVE_subv2hi3 (TARGET_VIS)
#define HAVE_fpack16_vis (TARGET_VIS)
#define HAVE_fpackfix_vis (TARGET_VIS)
#define HAVE_fpack32_vis (TARGET_VIS)
#define HAVE_fexpand_vis (TARGET_VIS)
#define HAVE_fpmerge_vis (TARGET_VIS)
#define HAVE_fmul8x16_vis (TARGET_VIS)
#define HAVE_fmul8x16au_vis (TARGET_VIS)
#define HAVE_fmul8x16al_vis (TARGET_VIS)
#define HAVE_fmul8sux16_vis (TARGET_VIS)
#define HAVE_fmul8ulx16_vis (TARGET_VIS)
#define HAVE_fmuld8sux16_vis (TARGET_VIS)
#define HAVE_fmuld8ulx16_vis (TARGET_VIS)
#define HAVE_faligndatadi_vis (TARGET_VIS)
#define HAVE_faligndatav2si_vis (TARGET_VIS)
#define HAVE_faligndatav4hi_vis (TARGET_VIS)
#define HAVE_faligndatav8qi_vis (TARGET_VIS)
#define HAVE_alignaddrdi_vis ((TARGET_VIS) && (Pmode == DImode))
#define HAVE_pdist_vis (TARGET_VIS)
#define HAVE_cstoresi4 1
#define HAVE_cstoredi4 1
#define HAVE_cstoresf4 (TARGET_FPU)
#define HAVE_cstoredf4 (TARGET_FPU)
#define HAVE_cstoretf4 (TARGET_FPU)
#define HAVE_seqsi_special 1
#define HAVE_seqdi_special 1
#define HAVE_snesi_special 1
#define HAVE_snedi_special 1
#define HAVE_cbranchcc4 1
#define HAVE_cbranchsi4 1
#define HAVE_cbranchdi4 1
#define HAVE_cbranchsf4 (TARGET_FPU)
#define HAVE_cbranchdf4 (TARGET_FPU)
#define HAVE_cbranchtf4 (TARGET_FPU)
#define HAVE_movqi 1
#define HAVE_movhi 1
#define HAVE_movsi 1
#define HAVE_movsi_pic_label_ref (flag_pic)
#define HAVE_movdi 1
#define HAVE_movdi_pic_label_ref (TARGET_ARCH64 && flag_pic)
#define HAVE_reload_indi ((TARGET_CM_MEDANY \
    || TARGET_CM_EMBMEDANY) \
   && ! flag_pic)
#define HAVE_reload_outdi ((TARGET_CM_MEDANY \
    || TARGET_CM_EMBMEDANY) \
   && ! flag_pic)
#define HAVE_movsf 1
#define HAVE_movv2hi (V2HImode == SFmode || TARGET_VIS)
#define HAVE_movv4qi (V4QImode == SFmode || TARGET_VIS)
#define HAVE_movdf 1
#define HAVE_movv2si (V2SImode == DFmode || TARGET_VIS)
#define HAVE_movv4hi (V4HImode == DFmode || TARGET_VIS)
#define HAVE_movv8qi (V8QImode == DFmode || TARGET_VIS)
#define HAVE_movtf 1
#define HAVE_movqicc (TARGET_V9 && !(QImode == DImode && TARGET_ARCH32))
#define HAVE_movhicc (TARGET_V9 && !(HImode == DImode && TARGET_ARCH32))
#define HAVE_movsicc (TARGET_V9 && !(SImode == DImode && TARGET_ARCH32))
#define HAVE_movdicc (TARGET_V9 && !(DImode == DImode && TARGET_ARCH32))
#define HAVE_movsfcc (TARGET_V9 && TARGET_FPU)
#define HAVE_movdfcc (TARGET_V9 && TARGET_FPU)
#define HAVE_movtfcc (TARGET_V9 && TARGET_FPU)
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqihi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendqidi2 1
#define HAVE_zero_extendhidi2 1
#define HAVE_zero_extendsidi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendqihi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendqidi2 1
#define HAVE_extendhidi2 1
#define HAVE_extendsidi2 1
#define HAVE_extendsftf2 (TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_extenddftf2 (TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_trunctfsf2 (TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_trunctfdf2 (TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_floatsitf2 (TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_floatunssitf2 (TARGET_FPU && TARGET_ARCH64 && ! TARGET_HARD_QUAD)
#define HAVE_floatunsdisf2 (TARGET_ARCH64 && TARGET_FPU)
#define HAVE_floatunsdidf2 (TARGET_ARCH64 && TARGET_FPU)
#define HAVE_floatditf2 (TARGET_FPU && TARGET_V9 && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_floatunsditf2 (TARGET_FPU && TARGET_ARCH64 && ! TARGET_HARD_QUAD)
#define HAVE_fix_trunctfsi2 (TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_fixuns_trunctfsi2 (TARGET_FPU && TARGET_ARCH64 && ! TARGET_HARD_QUAD)
#define HAVE_fixuns_truncsfdi2 (TARGET_ARCH64 && TARGET_FPU)
#define HAVE_fixuns_truncdfdi2 (TARGET_ARCH64 && TARGET_FPU)
#define HAVE_fix_trunctfdi2 (TARGET_V9 && TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_fixuns_trunctfdi2 (TARGET_FPU && TARGET_ARCH64 && ! TARGET_HARD_QUAD)
#define HAVE_adddi3 1
#define HAVE_subdi3 1
#define HAVE_muldi3 1
#define HAVE_mulsidi3 (TARGET_HARD_MUL)
#define HAVE_umulsidi3 (TARGET_HARD_MUL)
#define HAVE_divsi3 (TARGET_V8 || TARGET_DEPRECATED_V8_INSNS)
#define HAVE_udivsi3 (TARGET_V8 || TARGET_DEPRECATED_V8_INSNS)
#define HAVE_anddi3 1
#define HAVE_andv2si3 1
#define HAVE_andv4hi3 1
#define HAVE_andv8qi3 1
#define HAVE_iordi3 1
#define HAVE_iorv2si3 1
#define HAVE_iorv4hi3 1
#define HAVE_iorv8qi3 1
#define HAVE_xordi3 1
#define HAVE_xorv2si3 1
#define HAVE_xorv4hi3 1
#define HAVE_xorv8qi3 1
#define HAVE_negdi2 1
#define HAVE_one_cmpldi2 1
#define HAVE_one_cmplv2si2 1
#define HAVE_one_cmplv4hi2 1
#define HAVE_one_cmplv8qi2 1
#define HAVE_addtf3 (TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_subtf3 (TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_multf3 (TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_divtf3 (TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_negtf2 (TARGET_FPU)
#define HAVE_negdf2 (TARGET_FPU)
#define HAVE_abstf2 (TARGET_FPU)
#define HAVE_absdf2 (TARGET_FPU)
#define HAVE_sqrttf2 (TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64))
#define HAVE_ashldi3 1
#define HAVE_ashrdi3 1
#define HAVE_lshrdi3 1
#define HAVE_tablejump 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_untyped_call 1
#define HAVE_sibcall 1
#define HAVE_sibcall_value 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_return (sparc_can_use_return_insn_p ())
#define HAVE_probe_stack 1
#define HAVE_untyped_return 1
#define HAVE_indirect_jump 1
#define HAVE_nonlocal_goto 1
#define HAVE_builtin_setjmp_setup 1
#define HAVE_setjmp 1
#define HAVE_prefetch (TARGET_V9)
#define HAVE_ctrapsi4 1
#define HAVE_ctrapdi4 1
#define HAVE_stack_protect_set 1
#define HAVE_stack_protect_test 1
#define HAVE_memory_barrier (TARGET_V8 || TARGET_V9)
#define HAVE_sync_compare_and_swapqi (TARGET_V9)
#define HAVE_sync_compare_and_swaphi (TARGET_V9)
#define HAVE_sync_compare_and_swapsi (TARGET_V9)
#define HAVE_sync_compare_and_swapdi ((TARGET_V9) && (TARGET_ARCH64 || TARGET_V8PLUS))
#define HAVE_sync_lock_test_and_setqi (!TARGET_V9)
#define HAVE_sync_lock_test_and_sethi (!TARGET_V9)
#define HAVE_sync_lock_test_and_setsi 1
#define HAVE_ldstubqi 1
#define HAVE_ldstubhi 1
#define HAVE_ldstubsi 1
extern rtx        gen_load_pcrel_symsi              (rtx, rtx, rtx, rtx);
extern rtx        gen_load_pcrel_symdi              (rtx, rtx, rtx, rtx);
extern rtx        gen_movsi_lo_sum_pic              (rtx, rtx, rtx);
extern rtx        gen_movsi_high_pic                (rtx, rtx);
extern rtx        gen_movsi_pic_gotdata_op          (rtx, rtx, rtx, rtx);
extern rtx        gen_movdi_lo_sum_pic              (rtx, rtx, rtx);
extern rtx        gen_movdi_high_pic                (rtx, rtx);
extern rtx        gen_movdi_pic_gotdata_op          (rtx, rtx, rtx, rtx);
extern rtx        gen_seth44                        (rtx, rtx);
extern rtx        gen_setm44                        (rtx, rtx, rtx);
extern rtx        gen_setl44                        (rtx, rtx, rtx);
extern rtx        gen_sethh                         (rtx, rtx);
extern rtx        gen_setlm                         (rtx, rtx);
extern rtx        gen_sethm                         (rtx, rtx, rtx);
extern rtx        gen_setlo                         (rtx, rtx, rtx);
extern rtx        gen_embmedany_sethi               (rtx, rtx);
extern rtx        gen_embmedany_losum               (rtx, rtx, rtx);
extern rtx        gen_embmedany_brsum               (rtx, rtx);
extern rtx        gen_embmedany_textuhi             (rtx, rtx);
extern rtx        gen_embmedany_texthi              (rtx, rtx);
extern rtx        gen_embmedany_textulo             (rtx, rtx, rtx);
extern rtx        gen_embmedany_textlo              (rtx, rtx, rtx);
extern rtx        gen_movdf_cc_v9                   (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_movdf_cc_reg_sp64             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_extendsfdf2                   (rtx, rtx);
extern rtx        gen_truncdfsf2                    (rtx, rtx);
extern rtx        gen_floatsisf2                    (rtx, rtx);
extern rtx        gen_floatsidf2                    (rtx, rtx);
extern rtx        gen_floatdisf2                    (rtx, rtx);
extern rtx        gen_floatdidf2                    (rtx, rtx);
extern rtx        gen_fix_truncsfsi2                (rtx, rtx);
extern rtx        gen_fix_truncdfsi2                (rtx, rtx);
extern rtx        gen_fix_truncsfdi2                (rtx, rtx);
extern rtx        gen_fix_truncdfdi2                (rtx, rtx);
extern rtx        gen_addx                          (rtx, rtx, rtx);
extern rtx        gen_addsi3                        (rtx, rtx, rtx);
extern rtx        gen_subx                          (rtx, rtx, rtx);
extern rtx        gen_subsi3                        (rtx, rtx, rtx);
extern rtx        gen_cmp_minus_cc_set              (rtx, rtx, rtx);
extern rtx        gen_mulsi3                        (rtx, rtx, rtx);
extern rtx        gen_muldi3_v8plus                 (rtx, rtx, rtx);
extern rtx        gen_mulsidi3_v8plus               (rtx, rtx, rtx);
extern rtx        gen_const_mulsidi3_v8plus         (rtx, rtx, rtx);
static inline rtx gen_const_mulsidi3_sp32           (rtx, rtx, rtx);
static inline rtx
gen_const_mulsidi3_sp32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_const_mulsidi3_sp64           (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart_v8plus       (rtx, rtx, rtx, rtx);
extern rtx        gen_const_smulsi3_highpart_v8plus (rtx, rtx, rtx, rtx);
static inline rtx gen_const_smulsi3_highpart        (rtx, rtx, rtx);
static inline rtx
gen_const_smulsi3_highpart(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_umulsidi3_v8plus              (rtx, rtx, rtx);
static inline rtx gen_const_umulsidi3_sp32          (rtx, rtx, rtx);
static inline rtx
gen_const_umulsidi3_sp32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_const_umulsidi3_sp64          (rtx, rtx, rtx);
extern rtx        gen_const_umulsidi3_v8plus        (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart_v8plus       (rtx, rtx, rtx, rtx);
extern rtx        gen_const_umulsi3_highpart_v8plus (rtx, rtx, rtx, rtx);
static inline rtx gen_const_umulsi3_highpart        (rtx, rtx, rtx);
static inline rtx
gen_const_umulsi3_highpart(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_divsi3_sp32                   (rtx, rtx, rtx);
static inline rtx
gen_divsi3_sp32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_divsi3_sp64                   (rtx, rtx, rtx, rtx);
extern rtx        gen_divdi3                        (rtx, rtx, rtx);
static inline rtx gen_udivsi3_sp32                  (rtx, rtx, rtx);
static inline rtx
gen_udivsi3_sp32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_udivsi3_sp64                  (rtx, rtx, rtx);
extern rtx        gen_udivdi3                       (rtx, rtx, rtx);
extern rtx        gen_andsi3                        (rtx, rtx, rtx);
extern rtx        gen_andv2hi3                      (rtx, rtx, rtx);
extern rtx        gen_andv4qi3                      (rtx, rtx, rtx);
extern rtx        gen_iorsi3                        (rtx, rtx, rtx);
extern rtx        gen_iorv2hi3                      (rtx, rtx, rtx);
extern rtx        gen_iorv4qi3                      (rtx, rtx, rtx);
extern rtx        gen_xorsi3                        (rtx, rtx, rtx);
extern rtx        gen_xorv2hi3                      (rtx, rtx, rtx);
extern rtx        gen_xorv4qi3                      (rtx, rtx, rtx);
extern rtx        gen_negsi2                        (rtx, rtx);
extern rtx        gen_one_cmplsi2                   (rtx, rtx);
extern rtx        gen_one_cmplv2hi2                 (rtx, rtx);
extern rtx        gen_one_cmplv4qi2                 (rtx, rtx);
extern rtx        gen_adddf3                        (rtx, rtx, rtx);
extern rtx        gen_addsf3                        (rtx, rtx, rtx);
extern rtx        gen_subdf3                        (rtx, rtx, rtx);
extern rtx        gen_subsf3                        (rtx, rtx, rtx);
extern rtx        gen_muldf3                        (rtx, rtx, rtx);
extern rtx        gen_mulsf3                        (rtx, rtx, rtx);
extern rtx        gen_divdf3                        (rtx, rtx, rtx);
extern rtx        gen_divsf3                        (rtx, rtx, rtx);
extern rtx        gen_negsf2                        (rtx, rtx);
extern rtx        gen_abssf2                        (rtx, rtx);
extern rtx        gen_sqrtdf2                       (rtx, rtx);
extern rtx        gen_sqrtsf2                       (rtx, rtx);
extern rtx        gen_ashlsi3                       (rtx, rtx, rtx);
extern rtx        gen_ashldi3_v8plus                (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                       (rtx, rtx, rtx);
extern rtx        gen_ashrdi3_v8plus                (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                       (rtx, rtx, rtx);
extern rtx        gen_lshrdi3_v8plus                (rtx, rtx, rtx);
extern rtx        gen_jump                          (rtx);
static inline rtx gen_save_register_windowsi        (rtx);
static inline rtx
gen_save_register_windowsi(rtx ARG_UNUSED (a))
{
  return 0;
}
extern rtx        gen_save_register_windowdi        (rtx);
extern rtx        gen_blockage                      (void);
static inline rtx gen_probe_stack_rangesi           (rtx, rtx, rtx);
static inline rtx
gen_probe_stack_rangesi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_probe_stack_rangedi           (rtx, rtx, rtx);
static inline rtx gen_update_return                 (rtx, rtx);
static inline rtx
gen_update_return(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_nop                           (void);
extern rtx        gen_flush_register_windows        (void);
extern rtx        gen_goto_handler_and_restore      (rtx);
extern rtx        gen_do_builtin_setjmp_setup       (void);
extern rtx        gen_flush                         (rtx);
extern rtx        gen_flushdi                       (rtx);
extern rtx        gen_ffssi2                        (rtx, rtx);
extern rtx        gen_prefetch_64                   (rtx, rtx, rtx);
extern rtx        gen_prefetch_32                   (rtx, rtx, rtx);
extern rtx        gen_trap                          (void);
extern rtx        gen_tgd_hi22                      (rtx, rtx);
extern rtx        gen_tgd_lo10                      (rtx, rtx, rtx);
static inline rtx gen_tgd_add32                     (rtx, rtx, rtx, rtx);
static inline rtx
gen_tgd_add32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_tgd_add64                     (rtx, rtx, rtx, rtx);
static inline rtx gen_tgd_call32                    (rtx, rtx, rtx, rtx);
static inline rtx
gen_tgd_call32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_tgd_call64                    (rtx, rtx, rtx, rtx);
extern rtx        gen_tldm_hi22                     (rtx);
extern rtx        gen_tldm_lo10                     (rtx, rtx);
static inline rtx gen_tldm_add32                    (rtx, rtx, rtx);
static inline rtx
gen_tldm_add32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_tldm_add64                    (rtx, rtx, rtx);
static inline rtx gen_tldm_call32                   (rtx, rtx, rtx);
static inline rtx
gen_tldm_call32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_tldm_call64                   (rtx, rtx, rtx);
extern rtx        gen_tldo_hix22                    (rtx, rtx);
extern rtx        gen_tldo_lox10                    (rtx, rtx, rtx);
static inline rtx gen_tldo_add32                    (rtx, rtx, rtx, rtx);
static inline rtx
gen_tldo_add32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_tldo_add64                    (rtx, rtx, rtx, rtx);
extern rtx        gen_tie_hi22                      (rtx, rtx);
extern rtx        gen_tie_lo10                      (rtx, rtx, rtx);
static inline rtx gen_tie_ld32                      (rtx, rtx, rtx, rtx);
static inline rtx
gen_tie_ld32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_tie_ld64                      (rtx, rtx, rtx, rtx);
static inline rtx gen_tie_add32                     (rtx, rtx, rtx, rtx);
static inline rtx
gen_tie_add32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_tie_add64                     (rtx, rtx, rtx, rtx);
static inline rtx gen_tle_hix22_sp32                (rtx, rtx);
static inline rtx
gen_tle_hix22_sp32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_tle_lox10_sp32                (rtx, rtx, rtx);
static inline rtx
gen_tle_lox10_sp32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_tle_hix22_sp64                (rtx, rtx);
extern rtx        gen_tle_lox10_sp64                (rtx, rtx, rtx);
static inline rtx gen_stack_protect_setsi           (rtx, rtx);
static inline rtx
gen_stack_protect_setsi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_stack_protect_setdi           (rtx, rtx);
static inline rtx gen_stack_protect_testsi          (rtx, rtx);
static inline rtx
gen_stack_protect_testsi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_stack_protect_testdi          (rtx, rtx, rtx);
extern rtx        gen_addv2si3                      (rtx, rtx, rtx);
extern rtx        gen_addv4hi3                      (rtx, rtx, rtx);
extern rtx        gen_addv2hi3                      (rtx, rtx, rtx);
extern rtx        gen_subv2si3                      (rtx, rtx, rtx);
extern rtx        gen_subv4hi3                      (rtx, rtx, rtx);
extern rtx        gen_subv2hi3                      (rtx, rtx, rtx);
extern rtx        gen_fpack16_vis                   (rtx, rtx);
extern rtx        gen_fpackfix_vis                  (rtx, rtx);
extern rtx        gen_fpack32_vis                   (rtx, rtx, rtx);
extern rtx        gen_fexpand_vis                   (rtx, rtx);
extern rtx        gen_fpmerge_vis                   (rtx, rtx, rtx);
extern rtx        gen_fmul8x16_vis                  (rtx, rtx, rtx);
extern rtx        gen_fmul8x16au_vis                (rtx, rtx, rtx);
extern rtx        gen_fmul8x16al_vis                (rtx, rtx, rtx);
extern rtx        gen_fmul8sux16_vis                (rtx, rtx, rtx);
extern rtx        gen_fmul8ulx16_vis                (rtx, rtx, rtx);
extern rtx        gen_fmuld8sux16_vis               (rtx, rtx, rtx);
extern rtx        gen_fmuld8ulx16_vis               (rtx, rtx, rtx);
extern rtx        gen_faligndatadi_vis              (rtx, rtx, rtx);
extern rtx        gen_faligndatav2si_vis            (rtx, rtx, rtx);
extern rtx        gen_faligndatav4hi_vis            (rtx, rtx, rtx);
extern rtx        gen_faligndatav8qi_vis            (rtx, rtx, rtx);
static inline rtx gen_alignaddrsi_vis               (rtx, rtx, rtx);
static inline rtx
gen_alignaddrsi_vis(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_alignaddrdi_vis               (rtx, rtx, rtx);
extern rtx        gen_pdist_vis                     (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredi4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresf4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredf4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoretf4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_seqsi_special                 (rtx, rtx, rtx);
extern rtx        gen_seqdi_special                 (rtx, rtx, rtx);
extern rtx        gen_snesi_special                 (rtx, rtx, rtx);
extern rtx        gen_snedi_special                 (rtx, rtx, rtx);
extern rtx        gen_cbranchcc4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdi4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchtf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_movqi                         (rtx, rtx);
extern rtx        gen_movhi                         (rtx, rtx);
extern rtx        gen_movsi                         (rtx, rtx);
extern rtx        gen_movsi_pic_label_ref           (rtx, rtx);
static inline rtx gen_vxworks_load_got              (void);
static inline rtx
gen_vxworks_load_got(void)
{
  return 0;
}
extern rtx        gen_movdi                         (rtx, rtx);
extern rtx        gen_movdi_pic_label_ref           (rtx, rtx);
extern rtx        gen_reload_indi                   (rtx, rtx, rtx);
extern rtx        gen_reload_outdi                  (rtx, rtx, rtx);
extern rtx        gen_movsf                         (rtx, rtx);
extern rtx        gen_movv2hi                       (rtx, rtx);
extern rtx        gen_movv4qi                       (rtx, rtx);
extern rtx        gen_movdf                         (rtx, rtx);
extern rtx        gen_movv2si                       (rtx, rtx);
extern rtx        gen_movv4hi                       (rtx, rtx);
extern rtx        gen_movv8qi                       (rtx, rtx);
extern rtx        gen_movtf                         (rtx, rtx);
extern rtx        gen_movqicc                       (rtx, rtx, rtx, rtx);
extern rtx        gen_movhicc                       (rtx, rtx, rtx, rtx);
extern rtx        gen_movsicc                       (rtx, rtx, rtx, rtx);
extern rtx        gen_movdicc                       (rtx, rtx, rtx, rtx);
extern rtx        gen_movsfcc                       (rtx, rtx, rtx, rtx);
extern rtx        gen_movdfcc                       (rtx, rtx, rtx, rtx);
extern rtx        gen_movtfcc                       (rtx, rtx, rtx, rtx);
extern rtx        gen_zero_extendhisi2              (rtx, rtx);
extern rtx        gen_zero_extendqihi2              (rtx, rtx);
extern rtx        gen_zero_extendqisi2              (rtx, rtx);
extern rtx        gen_zero_extendqidi2              (rtx, rtx);
extern rtx        gen_zero_extendhidi2              (rtx, rtx);
extern rtx        gen_zero_extendsidi2              (rtx, rtx);
extern rtx        gen_extendhisi2                   (rtx, rtx);
extern rtx        gen_extendqihi2                   (rtx, rtx);
extern rtx        gen_extendqisi2                   (rtx, rtx);
extern rtx        gen_extendqidi2                   (rtx, rtx);
extern rtx        gen_extendhidi2                   (rtx, rtx);
extern rtx        gen_extendsidi2                   (rtx, rtx);
extern rtx        gen_extendsftf2                   (rtx, rtx);
extern rtx        gen_extenddftf2                   (rtx, rtx);
extern rtx        gen_trunctfsf2                    (rtx, rtx);
extern rtx        gen_trunctfdf2                    (rtx, rtx);
extern rtx        gen_floatsitf2                    (rtx, rtx);
extern rtx        gen_floatunssitf2                 (rtx, rtx);
extern rtx        gen_floatunsdisf2                 (rtx, rtx);
extern rtx        gen_floatunsdidf2                 (rtx, rtx);
extern rtx        gen_floatditf2                    (rtx, rtx);
extern rtx        gen_floatunsditf2                 (rtx, rtx);
extern rtx        gen_fix_trunctfsi2                (rtx, rtx);
extern rtx        gen_fixuns_trunctfsi2             (rtx, rtx);
extern rtx        gen_fixuns_truncsfdi2             (rtx, rtx);
extern rtx        gen_fixuns_truncdfdi2             (rtx, rtx);
extern rtx        gen_fix_trunctfdi2                (rtx, rtx);
extern rtx        gen_fixuns_trunctfdi2             (rtx, rtx);
extern rtx        gen_adddi3                        (rtx, rtx, rtx);
extern rtx        gen_subdi3                        (rtx, rtx, rtx);
extern rtx        gen_muldi3                        (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                      (rtx, rtx, rtx);
static inline rtx gen_smulsi3_highpart              (rtx, rtx, rtx);
static inline rtx
gen_smulsi3_highpart(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_umulsidi3                     (rtx, rtx, rtx);
static inline rtx gen_umulsi3_highpart              (rtx, rtx, rtx);
static inline rtx
gen_umulsi3_highpart(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_divsi3                        (rtx, rtx, rtx);
extern rtx        gen_udivsi3                       (rtx, rtx, rtx);
extern rtx        gen_anddi3                        (rtx, rtx, rtx);
extern rtx        gen_andv2si3                      (rtx, rtx, rtx);
extern rtx        gen_andv4hi3                      (rtx, rtx, rtx);
extern rtx        gen_andv8qi3                      (rtx, rtx, rtx);
extern rtx        gen_iordi3                        (rtx, rtx, rtx);
extern rtx        gen_iorv2si3                      (rtx, rtx, rtx);
extern rtx        gen_iorv4hi3                      (rtx, rtx, rtx);
extern rtx        gen_iorv8qi3                      (rtx, rtx, rtx);
extern rtx        gen_xordi3                        (rtx, rtx, rtx);
extern rtx        gen_xorv2si3                      (rtx, rtx, rtx);
extern rtx        gen_xorv4hi3                      (rtx, rtx, rtx);
extern rtx        gen_xorv8qi3                      (rtx, rtx, rtx);
extern rtx        gen_negdi2                        (rtx, rtx);
extern rtx        gen_one_cmpldi2                   (rtx, rtx);
extern rtx        gen_one_cmplv2si2                 (rtx, rtx);
extern rtx        gen_one_cmplv4hi2                 (rtx, rtx);
extern rtx        gen_one_cmplv8qi2                 (rtx, rtx);
extern rtx        gen_addtf3                        (rtx, rtx, rtx);
extern rtx        gen_subtf3                        (rtx, rtx, rtx);
extern rtx        gen_multf3                        (rtx, rtx, rtx);
extern rtx        gen_divtf3                        (rtx, rtx, rtx);
extern rtx        gen_negtf2                        (rtx, rtx);
extern rtx        gen_negdf2                        (rtx, rtx);
extern rtx        gen_abstf2                        (rtx, rtx);
extern rtx        gen_absdf2                        (rtx, rtx);
extern rtx        gen_sqrttf2                       (rtx, rtx);
extern rtx        gen_ashldi3                       (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                       (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                       (rtx, rtx, rtx);
extern rtx        gen_tablejump                     (rtx, rtx);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B), (C), (D))
extern rtx        gen_call                          (rtx, rtx, rtx, rtx);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C), (D), (E))
extern rtx        gen_call_value                    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call                  (rtx, rtx, rtx);
#define GEN_SIBCALL(A, B, C, D) gen_sibcall ((A))
extern rtx        gen_sibcall                       (rtx);
#define GEN_SIBCALL_VALUE(A, B, C, D, E) gen_sibcall_value ((A), (B))
extern rtx        gen_sibcall_value                 (rtx, rtx);
extern rtx        gen_prologue                      (void);
extern rtx        gen_epilogue                      (void);
extern rtx        gen_sibcall_epilogue              (void);
extern rtx        gen_return                        (void);
extern rtx        gen_probe_stack                   (rtx);
extern rtx        gen_untyped_return                (rtx, rtx);
extern rtx        gen_indirect_jump                 (rtx);
extern rtx        gen_nonlocal_goto                 (rtx, rtx, rtx, rtx);
extern rtx        gen_builtin_setjmp_setup          (rtx);
extern rtx        gen_setjmp                        (void);
extern rtx        gen_prefetch                      (rtx, rtx, rtx);
extern rtx        gen_ctrapsi4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapdi4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_stack_protect_set             (rtx, rtx);
extern rtx        gen_stack_protect_test            (rtx, rtx, rtx);
extern rtx        gen_memory_barrier                (void);
extern rtx        gen_sync_compare_and_swapqi       (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_compare_and_swaphi       (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_compare_and_swapsi       (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_compare_and_swapdi       (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_lock_test_and_setqi      (rtx, rtx, rtx);
extern rtx        gen_sync_lock_test_and_sethi      (rtx, rtx, rtx);
extern rtx        gen_sync_lock_test_and_setsi      (rtx, rtx, rtx);
extern rtx        gen_ldstubqi                      (rtx, rtx);
extern rtx        gen_ldstubhi                      (rtx, rtx);
extern rtx        gen_ldstubsi                      (rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */
