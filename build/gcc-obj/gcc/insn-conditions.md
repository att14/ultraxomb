(define_conditions [
  (-1 "reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
           && ((GET_CODE (operands[0]) == REG
                && REGNO (operands[0]) < 32)
               || (GET_CODE (operands[0]) == SUBREG
                   && GET_CODE (SUBREG_REG (operands[0])) == REG
                   && REGNO (SUBREG_REG (operands[0])) < 32))))")
  (-1 "TARGET_ARCH64 && GET_CODE (operands[1]) != CONST_INT")
  (-1 "(TARGET_ARCH64 && TARGET_FPU && ! TARGET_HARD_QUAD) && ( reload_completed)")
  (-1 "GET_CODE (operands[1]) != CONST_INT")
  (1 "DFmode == DFmode || TARGET_VIS")
  (-1 "(TARGET_ARCH64) && ( ! reg_overlap_mentioned_p (operands[1], operands[0]))")
  (-1 "! TARGET_FPU
   && (register_operand (operands[0], SFmode)
       || register_or_zero_operand (operands[1], SFmode))")
  (0 "reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[0]) % 2) != 0)
       || ! mem_min_alignment (operands[1], 8))
   && offsettable_memref_p (operands[1])")
  (-1 "TARGET_FPU
   && ! TARGET_V9")
  (-1 "TARGET_CM_MEDANY")
  (-1 "TARGET_FPU
   && ! TARGET_V9
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))")
  (-1 "reload_completed
   && (! TARGET_ARCH64
       || (TARGET_FPU
           && ! TARGET_HARD_QUAD)
       || ! fp_register_operand (operands[0], TFmode))")
  (-1 "(TARGET_V9) && (TARGET_ARCH64 || TARGET_V8PLUS)")
  (-1 "TARGET_V8 || TARGET_SPARCLITE || TARGET_DEPRECATED_V8_INSNS")
  (1 "TARGET_TLS && TARGET_ARCH64")
  (-1 "TARGET_V9
   && mems_ok_for_ldd_peep (operands[0], operands[1], NULL_RTX)")
  (-1 "! TARGET_FPU
   && ! TARGET_V9
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))")
  (-1 "(TARGET_FPU && ! TARGET_V9) && ( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))")
  (0 "reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[1]) % 2) != 0)
       || ! mem_min_alignment (operands[0], 8))
   && offsettable_memref_p (operands[0])")
  (-1 "REG_P (operands[0]) && REGNO (operands[0]) < 32")
  (-1 "TARGET_V9 && TARGET_FPU && TARGET_HARD_QUAD")
  (0 "! TARGET_FPU
   && ! TARGET_ARCH64
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode))")
  (-1 "TARGET_ARCH64 && INTVAL (operands[2]) >= 32 && INTVAL (operands[2]) < 64")
  (-1 "! TARGET_V9
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode))")
  (-1 "TARGET_ARCH64 && TARGET_FPU && ! TARGET_HARD_QUAD")
  (-1 "TARGET_V8 || TARGET_V9")
  (-1 "TARGET_ARCH64 && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) < 32")
  (-1 "TARGET_HARD_MUL")
  (0 "TARGET_SUN_TLS && TARGET_ARCH32")
  (-1 "TARGET_FPU && TARGET_HARD_QUAD")
  (-1 "INTVAL (operands[2]) > 19")
  (0 "! TARGET_ARCH64 && reload_completed")
  (-1 "(! TARGET_V9
    || (! TARGET_ARCH64
        && ((GET_CODE (operands[0]) == REG
             && REGNO (operands[0]) < 32)
            || (GET_CODE (operands[0]) == SUBREG
                && GET_CODE (SUBREG_REG (operands[0])) == REG
                && REGNO (SUBREG_REG (operands[0])) < 32))))
   && reload_completed")
  (-1 "(TARGET_FPU && TARGET_V9) && ( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))")
  (-1 "TARGET_CM_MEDLOW")
  (-1 "TARGET_V9 && !(SImode == DImode && TARGET_ARCH32)")
  (-1 "TARGET_FPU")
  (-1 "TARGET_FPU && TARGET_ARCH64 && ! TARGET_HARD_QUAD")
  (-1 "TARGET_CM_EMBMEDANY && check_pic (1)")
  (-1 "(REGNO (operands[0]) == INTVAL (operands[3])) && (Pmode == DImode)")
  (-1 "TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))")
  (-1 "(TARGET_FPU
   && ! TARGET_V9) && ( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))")
  (-1 "sparc_can_use_return_insn_p ()")
  (-1 "registers_ok_for_ldd_peep (operands[1], operands[3]) 
  && mems_ok_for_ldd_peep (operands[0], operands[2], NULL_RTX)")
  (-1 "(TARGET_CM_MEDLOW || TARGET_CM_EMBMEDANY) && check_pic (1)")
  (-1 "(rtx_equal_p (operands[2], operands[0])
    || rtx_equal_p (operands[2], operands[1]))
    && ! SPARC_FP_REG_P (REGNO (operands[0]))
    && ! SPARC_FP_REG_P (REGNO (operands[1]))")
  (0 "TARGET_FPU
   && ! TARGET_ARCH64
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode))")
  (-1 "TARGET_FPU
   && TARGET_ARCH64
   && ! TARGET_HARD_QUAD
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode))")
  (1 "TARGET_TLS")
  (-1 "TARGET_FPU && ! TARGET_V9")
  (-1 "TARGET_V8")
  (-1 "TARGET_ARCH64
   && (rtx_equal_p (operands[2], operands[0])
       || rtx_equal_p (operands[2], operands[1]))
   && ! SPARC_FP_REG_P (REGNO (operands[0]))
   && ! SPARC_FP_REG_P (REGNO (operands[1]))")
  (-1 "V4QImode == SFmode || TARGET_VIS")
  (-1 "TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], V4HImode)
       || register_or_zero_operand (operands[1], V4HImode))")
  (0 "TARGET_TLS && TARGET_ARCH32")
  (1 "TARGET_ARCH64")
  (0 "TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], V2SImode)
       || register_or_zero_operand (operands[1], V2SImode))")
  (-1 "TARGET_ARCH64
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode))")
  (0 "(! TARGET_ARCH64
    && reload_completed
    && sparc_splitdi_legitimate (operands[1], operands[0]))")
  (0 "TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], V4HImode)
       || register_or_zero_operand (operands[1], V4HImode))")
  (-1 "registers_ok_for_ldd_peep (operands[1], operands[3]) 
   && mems_ok_for_ldd_peep (operands[0], operands[2], NULL_RTX)")
  (-1 "TARGET_FPU
   && (register_operand (operands[0], V4QImode)
       || register_or_zero_operand (operands[1], V4QImode))")
  (-1 "TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64")
  (-1 "! TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode))")
  (-1 "TARGET_SPARCLET")
  (-1 "flag_pic")
  (0 "(TARGET_V8 || TARGET_DEPRECATED_V8_INSNS) && TARGET_ARCH32")
  (0 "(! TARGET_ARCH64) && ( reload_completed)")
  (-1 "TARGET_CM_MEDLOW && check_pic (1)")
  (-1 "(TARGET_FPU && TARGET_V9 && !TARGET_HARD_QUAD) && ( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))")
  (-1 "registers_ok_for_ldd_peep (operands[2], operands[0]) 
  && mems_ok_for_ldd_peep (operands[3], operands[1], operands[0])")
  (-1 "reload_completed")
  (-1 "TARGET_ARCH64 && flag_pic")
  (-1 "! TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))")
  (0 "TARGET_HARD_MUL && TARGET_ARCH32")
  (-1 "(TARGET_V9 && TARGET_FPU && !TARGET_HARD_QUAD) && ( reload_completed)")
  (-1 "!TARGET_V9")
  (-1 "TARGET_CM_MEDMID")
  (-1 "GET_CODE (operands[3]) == GET_CODE (operands[4])")
  (-1 "TARGET_V9 && !(QImode == DImode && TARGET_ARCH32)")
  (-1 "TARGET_ARCH64 && flag_pic && check_pic (1)")
  (-1 "(REGNO (operands[0]) == INTVAL (operands[3])) && (Pmode == SImode)")
  (-1 "TARGET_ARCH64 && INTVAL (operands[2]) > 51")
  (-1 "TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], V8QImode)
       || register_or_zero_operand (operands[1], V8QImode))")
  (-1 "TARGET_FPU
   && (GET_CODE (operands[0]) == REG
       && REGNO (operands[0]) < 32)
   && ! const_zero_operand (operands[1], GET_MODE (operands[0]))
   && reload_completed")
  (-1 "reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0])")
  (1 "SFmode == SFmode || TARGET_VIS")
  (0 "(! TARGET_ARCH64
    && reload_completed
    && sparc_splitdi_legitimate (operands[0], operands[1]))")
  (-1 "TARGET_V9")
  (-1 "TARGET_V9
   && REGNO (operands[1]) == SPARC_ICC_REG
   && (GET_MODE (operands[1]) == CCXmode
       /* 32-bit LTU/GEU are better implemented using addx/subx.  */
       || (GET_CODE (operands[2]) != LTU && GET_CODE (operands[2]) != GEU))")
  (-1 "V2SImode == DFmode || TARGET_VIS")
  (0 "! TARGET_ARCH64
   && reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32))")
  (0 "! TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))")
  (-1 "(register_operand (operands[0], SImode)
    || register_or_zero_operand (operands[1], SImode))")
  (-1 "TARGET_VIS")
  (-1 "TARGET_V9 && !(HImode == DImode && TARGET_ARCH32)")
  (-1 "V8QImode == DFmode || TARGET_VIS")
  (-1 "registers_ok_for_ldd_peep (operands[0], operands[2]) 
   && mems_ok_for_ldd_peep (operands[1], operands[3], operands[0])")
  (-1 "(register_operand (operands[0], QImode)
    || register_or_zero_operand (operands[1], QImode))")
  (0 "(! TARGET_ARCH64) && ( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))")
  (-1 "TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], V2SImode)
       || register_or_zero_operand (operands[1], V2SImode))")
  (0 "(TARGET_VIS) && (Pmode == SImode)")
  (0 "TARGET_HARD_MUL32")
  (-1 "(TARGET_V8 || TARGET_V9) && TARGET_FPU")
  (-1 "(reload_completed
    && offsettable_memref_p (operands[1])
    && (! TARGET_ARCH64
	|| ! TARGET_HARD_QUAD
	|| ! fp_register_operand (operands[0], TFmode)))")
  (-1 "TARGET_FPU
   && (register_operand (operands[0], V2HImode)
       || register_or_zero_operand (operands[1], V2HImode))")
  (-1 "TARGET_ARCH64 && TARGET_FPU && TARGET_HARD_QUAD")
  (0 "reload_completed
   && ! TARGET_ARCH64
   && ((GET_CODE (operands[0]) == REG
	&& REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) < 32))")
  (-1 "(TARGET_CM_MEDANY
    || TARGET_CM_EMBMEDANY)
   && ! flag_pic")
  (0 "! TARGET_ARCH64
   && TARGET_V9
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode))")
  (-1 "registers_ok_for_ldd_peep (operands[3], operands[1]) 
  && mems_ok_for_ldd_peep (operands[2], operands[0], NULL_RTX)")
  (1 "(TARGET_ARCH64) && ( 1)")
  (-1 "V2HImode == SFmode || TARGET_VIS")
  (-1 "TARGET_FPU
   && TARGET_ARCH64
   && TARGET_HARD_QUAD
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode))")
  (-1 "TARGET_V8PLUS")
  (-1 "flag_pic && check_pic (1)")
  (-1 "(TARGET_V8 || TARGET_V9) && TARGET_FPU && TARGET_HARD_QUAD")
  (-1 "GET_MODE (operands[0]) == Pmode")
  (-1 "TARGET_FPU && TARGET_V9 && (TARGET_HARD_QUAD || TARGET_ARCH64)")
  (0 "TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], V8QImode)
       || register_or_zero_operand (operands[1], V8QImode))")
  (-1 "(TARGET_VIS) && (Pmode == DImode)")
  (0 "TARGET_VXWORKS_RTP")
  (-1 "TARGET_V9 && (SImode == SImode || TARGET_ARCH64)")
  (-1 "V4HImode == DFmode || TARGET_VIS")
  (-1 "TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64)")
  (-1 "TARGET_ARCH64 && (unsigned HOST_WIDE_INT) INTVAL (operands[3]) == 0xffffffff")
  (1 "TARGET_SUN_TLS && TARGET_ARCH64")
  (-1 "TARGET_V9 && TARGET_FPU && !TARGET_HARD_QUAD")
  (-1 "(register_operand (operands[0], HImode)
    || register_or_zero_operand (operands[1], HImode))")
  (0 "TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))")
  (0 "Pmode == SImode")
  (-1 "TARGET_SPARCLITE || TARGET_SPARCLET")
  (-1 "TARGET_ARCH64 && TARGET_FPU")
  (-1 "TARGET_V9
   && mems_ok_for_ldd_peep (operands[1], operands[0], NULL_RTX)")
  (-1 "TARGET_V9 && TARGET_FPU && (TARGET_HARD_QUAD || TARGET_ARCH64)")
  (1 "Pmode == DImode")
  (-1 "TARGET_ARCH64 && GET_CODE (operands[3]) == GET_CODE (operands[4])")
  (-1 "TARGET_FPU && TARGET_V9 && TARGET_HARD_QUAD")
  (-1 "(TARGET_V9 && (DImode == SImode || TARGET_ARCH64)) && (TARGET_ARCH64 || TARGET_V8PLUS)")
  (-1 "TARGET_V9 && TARGET_FPU")
  (-1 "TARGET_V8 || TARGET_DEPRECATED_V8_INSNS")
  (-1 "TARGET_ARCH64
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) >= 32
   && (unsigned HOST_WIDE_INT) INTVAL (operands[3]) < 32
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[2]) + INTVAL (operands[3])) < 64")
  (0 "! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0")
  (0 "! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) > 0")
  (0 "TARGET_ARCH32")
  (-1 "(reload_completed
    && offsettable_memref_p (operands[0])
    && (! TARGET_ARCH64
	|| ! TARGET_HARD_QUAD
	|| ! fp_register_operand (operands[1], TFmode)))")
  (0 "! TARGET_ARCH64")
  (1 "TARGET_ARCH64 || TARGET_V8PLUS")
  (-1 "TARGET_CM_EMBMEDANY")
  (-1 "TARGET_V9 && !(DImode == DImode && TARGET_ARCH32)")
  (-1 "TARGET_FPU
   && (register_operand (operands[0], SFmode)
       || register_or_zero_operand (operands[1], SFmode))")
  (-1 "TARGET_FPU && TARGET_V9 && !TARGET_HARD_QUAD")
  (-1 "TARGET_FPU && TARGET_V9")
])
