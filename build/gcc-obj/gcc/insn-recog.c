/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_433 (rtx, rtx *);
extern rtx gen_split_434 (rtx, rtx *);
extern rtx gen_split_435 (rtx, rtx *);
extern rtx gen_split_436 (rtx, rtx *);
extern rtx gen_split_437 (rtx, rtx *);
extern rtx gen_split_438 (rtx, rtx *);
extern rtx gen_split_439 (rtx, rtx *);
extern rtx gen_split_440 (rtx, rtx *);
extern rtx gen_split_441 (rtx, rtx *);
extern rtx gen_split_442 (rtx, rtx *);
extern rtx gen_split_443 (rtx, rtx *);
extern rtx gen_split_444 (rtx, rtx *);
extern rtx gen_split_445 (rtx, rtx *);
extern rtx gen_split_446 (rtx, rtx *);
extern rtx gen_split_447 (rtx, rtx *);
extern rtx gen_split_448 (rtx, rtx *);
extern rtx gen_split_449 (rtx, rtx *);
extern rtx gen_split_464 (rtx, rtx *);
extern rtx gen_split_465 (rtx, rtx *);
extern rtx gen_split_466 (rtx, rtx *);
extern rtx gen_split_470 (rtx, rtx *);
extern rtx gen_split_475 (rtx, rtx *);
extern rtx gen_split_476 (rtx, rtx *);
extern rtx gen_split_477 (rtx, rtx *);
extern rtx gen_split_478 (rtx, rtx *);
extern rtx gen_split_479 (rtx, rtx *);
extern rtx gen_split_480 (rtx, rtx *);
extern rtx gen_split_481 (rtx, rtx *);
extern rtx gen_split_482 (rtx, rtx *);
extern rtx gen_split_483 (rtx, rtx *);
extern rtx gen_split_484 (rtx, rtx *);
extern rtx gen_split_485 (rtx, rtx *);
extern rtx gen_split_486 (rtx, rtx *);
extern rtx gen_split_488 (rtx, rtx *);
extern rtx gen_split_489 (rtx, rtx *);
extern rtx gen_split_490 (rtx, rtx *);
extern rtx gen_split_491 (rtx, rtx *);
extern rtx gen_split_499 (rtx, rtx *);
extern rtx gen_split_500 (rtx, rtx *);
extern rtx gen_split_540 (rtx, rtx *);
extern rtx gen_split_545 (rtx, rtx *);
extern rtx gen_split_550 (rtx, rtx *);
extern rtx gen_split_551 (rtx, rtx *);
extern rtx gen_split_562 (rtx, rtx *);
extern rtx gen_split_563 (rtx, rtx *);
extern rtx gen_split_565 (rtx, rtx *);
extern rtx gen_split_567 (rtx, rtx *);
extern rtx gen_split_568 (rtx, rtx *);
extern rtx gen_split_570 (rtx, rtx *);
extern rtx gen_peephole2_591 (rtx, rtx *);
extern rtx gen_peephole2_592 (rtx, rtx *);
extern rtx gen_peephole2_593 (rtx, rtx *);
extern rtx gen_peephole2_594 (rtx, rtx *);
extern rtx gen_peephole2_595 (rtx, rtx *);
extern rtx gen_peephole2_596 (rtx, rtx *);
extern rtx gen_peephole2_597 (rtx, rtx *);
extern rtx gen_peephole2_598 (rtx, rtx *);
extern rtx gen_peephole2_599 (rtx, rtx *);
extern rtx gen_peephole2_600 (rtx, rtx *);
extern rtx gen_peephole2_601 (rtx, rtx *);
extern rtx gen_peephole2_602 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case NE:
      goto L57;
    case NEG:
      goto L71;
    case EQ:
      goto L114;
    case PLUS:
      goto L173;
    case MINUS:
      goto L191;
    case LTU:
      goto L233;
    case GEU:
      goto L260;
    case UNSPEC:
      goto L3629;
    case LO_SUM:
      goto L447;
    case HIGH:
      goto L463;
    case IF_THEN_ELSE:
      goto L719;
    case ZERO_EXTEND:
      goto L841;
    case SIGN_EXTEND:
      goto L973;
    case FIX:
      goto L1073;
    case MULT:
      goto L1245;
    case TRUNCATE:
      goto L1351;
    default:
     break;
   }
  goto ret0;

 L57: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3631;
    case DImode:
      goto L3632;
    default:
      break;
    }
  goto ret0;

 L3631: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L58;
    }
  goto ret0;

 L58: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 8;  /* *snesi_zero */
    }
  goto ret0;

 L3632: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L102;
    }
  goto ret0;

 L102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 13;  /* *snedi_zero_trunc */
    }
  goto ret0;

 L71: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3633;
  goto ret0;

 L3633: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NE:
      goto L72;
    case EQ:
      goto L129;
    case LTU:
      goto L239;
    case PLUS:
      goto L253;
    case GEU:
      goto L266;
    default:
     break;
   }
  goto ret0;

 L72: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L73;
    }
  goto ret0;

 L73: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 9;  /* *neg_snesi_zero */
    }
  goto ret0;

 L129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L130;
    }
  goto ret0;

 L130: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 15;  /* *neg_seqsi_zero */
    }
  goto ret0;

 L239: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L240;
  goto ret0;

 L240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 25;  /* *neg_sltu_insn */
    }
  goto ret0;

 L253: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L254;
  goto ret0;

 L254: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 100)
    goto L255;
  goto ret0;

 L255: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L256;
  goto ret0;

 L256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      return 27;  /* *neg_sltu_plus_x */
    }
  goto ret0;

 L266: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L267;
  goto ret0;

 L267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 29;  /* *neg_sgeu_insn */
    }
  goto ret0;

 L114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3638;
    case DImode:
      goto L3639;
    default:
      break;
    }
  goto ret0;

 L3638: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L115;
    }
  goto ret0;

 L115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 14;  /* *seqsi_zero */
    }
  goto ret0;

 L3639: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L159;
    }
  goto ret0;

 L159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 19;  /* *seqdi_zero_trunc */
    }
  goto ret0;

 L173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3640;
  goto ret0;

 L3640: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NE:
      goto L174;
    case EQ:
      goto L209;
    case LTU:
      goto L272;
    case GEU:
      goto L313;
    case PLUS:
      goto L1108;
    case REG:
    case SUBREG:
      goto L3645;
    default:
      goto ret0;
   }
 L3645: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1132;
    }
  goto ret0;

 L174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L175;
    }
  goto ret0;

 L175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L176;
  goto ret0;

 L176: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L177;
    }
  goto ret0;

 L177: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 20;  /* *x_plus_i_ne_0 */
    }
  goto ret0;

 L209: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L210;
    }
  goto ret0;

 L210: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L211;
  goto ret0;

 L211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L212;
    }
  goto ret0;

 L212: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 22;  /* *x_plus_i_eq_0 */
    }
  goto ret0;

 L272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L273;
  goto ret0;

 L273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L281;
  goto ret0;

 L281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L282;
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      return 30;  /* *sltu_plus_x */
    }
  goto ret0;

 L282: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L283;
    }
  goto ret0;

 L283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      return 31;  /* *sltu_plus_x_plus_y */
    }
  goto ret0;

 L313: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L314;
  goto ret0;

 L314: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L315;
  goto ret0;

 L315: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 35;  /* *sgeu_plus_x */
    }
  goto ret0;

 L1108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1109;
    }
  goto ret0;

 L1109: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1110;
    }
  goto ret0;

 L1110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LTU)
    goto L1111;
  goto ret0;

 L1111: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_NOOVmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L1112;
  goto ret0;

 L1112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 158;  /* addx */
    }
  goto ret0;

 L1132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_add_operand (x2, SImode))
    {
      operands[2] = x2;
      return 161;  /* addsi3 */
    }
  goto ret0;

 L191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3647;
 L303: ATTRIBUTE_UNUSED_LABEL
  if (register_or_zero_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L304;
    }
  goto ret0;

 L3647: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L245;
    case MINUS:
      goto L295;
    case REG:
    case SUBREG:
      goto L3646;
    default:
      goto L3648;
   }
 L3646: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L192;
    }
 L3648: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L288;
    }
  goto L303;

 L245: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L246;
  goto L303;

 L246: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 100)
    goto L247;
  goto L303;

 L247: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L248;
  goto L303;

 L248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      return 26;  /* *neg_sltu_minus_x */
    }
  x2 = XEXP (x1, 0);
  goto L303;

 L295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L296;
    }
  goto L303;

 L296: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L297;
    }
  goto L303;

 L297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LTU)
    goto L298;
  x2 = XEXP (x1, 0);
  goto L303;

 L298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case CCmode:
      goto L3650;
    case CC_NOOVmode:
      goto L3651;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L303;

 L3650: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L299;
  x2 = XEXP (x1, 0);
  goto L303;

 L299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 33;  /* *x_minus_y_minus_sltu */
    }
  x2 = XEXP (x1, 0);
  goto L303;

 L3651: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L1181;
  x2 = XEXP (x1, 0);
  goto L303;

 L1181: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 166;  /* subx */
    }
  x2 = XEXP (x1, 0);
  goto L303;

 L192: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3652;
  x2 = XEXP (x1, 0);
  goto L3648;

 L3652: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NE:
      goto L193;
    case EQ:
      goto L228;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3648;

 L193: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L194;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L194: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 21;  /* *x_minus_i_ne_0 */
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L228: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L229;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L229: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 23;  /* *x_minus_i_eq_0 */
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3654;
 L1201: ATTRIBUTE_UNUSED_LABEL
  if (arith_add_operand (x2, SImode))
    {
      operands[2] = x2;
      return 169;  /* subsi3 */
    }
  x2 = XEXP (x1, 0);
  goto L303;

 L3654: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LTU:
      goto L289;
    case GEU:
      goto L321;
    default:
     break;
   }
  goto L1201;

 L289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L290;
  goto L1201;

 L290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 32;  /* *x_minus_sltu */
    }
  goto L1201;

 L321: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L322;
  goto L1201;

 L322: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 36;  /* *x_minus_sgeu */
    }
  goto L1201;

 L304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L305;
  goto ret0;

 L305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L306;
  goto ret0;

 L306: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 100)
    goto L307;
  goto ret0;

 L307: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L308;
  goto ret0;

 L308: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      return 34;  /* *x_minus_sltu_plus_y */
    }
  goto ret0;

 L233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L234;
  goto ret0;

 L234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 24;  /* *sltu_insn */
    }
  goto ret0;

 L260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L261;
  goto ret0;

 L261: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 28;  /* *sgeu_insn */
    }
  goto ret0;

 L3629: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L3656;
  goto ret0;

 L3656: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 2L:
      goto L407;
    case 19L:
      goto L469;
    default:
      break;
    }
  goto ret0;

 L407: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (symbolic_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L408;
    }
  goto ret0;

 L408: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (call_address_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L409;
    }
  goto ret0;

 L409: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L410;
    }
  goto ret0;

 L410: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1124 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(REGNO (operands[0]) == INTVAL (operands[3])) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == SImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 45;  /* load_pcrel_symsi */
    }
  goto ret0;

 L469: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L470;
    }
  goto ret0;

 L470: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L471;
    }
  goto ret0;

 L471: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (symbolic_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L472;
    }
  goto ret0;

 L472: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1261 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(flag_pic && check_pic (1)))
    {
      return 55;  /* movsi_pic_gotdata_op */
    }
  goto ret0;

 L447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L457;
    }
  goto ret0;

 L457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3658;
 L448: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      return 51;  /* *movsi_lo_sum */
    }
  goto ret0;

 L3658: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L3660;
  goto L448;

 L3660: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 1:
      goto L3662;
    case 2:
      goto L3663;
    default:
      break;
    }
  goto L448;

 L3662: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 0)
    goto L458;
  goto L448;

 L458: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L459;
    }
  goto L448;

 L459: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1235 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(flag_pic))
    {
      return 53;  /* movsi_lo_sum_pic */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L448;

 L3663: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 5)
    goto L485;
  goto L448;

 L485: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (label_ref_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L486;
    }
  goto L448;

 L486: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  operands[3] = x3;
  goto L487;

 L487: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1309 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(flag_pic))
    {
      return 57;  /* *movsi_lo_sum_pic_label_ref */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L448;

 L463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3664;
 L452: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      return 52;  /* *movsi_high */
    }
  goto ret0;

 L3664: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L3666;
  goto L452;

 L3666: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 1:
      goto L3668;
    case 2:
      goto L3669;
    default:
      break;
    }
  goto L452;

 L3668: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 0)
    goto L464;
  goto L452;

 L464: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  goto L465;

 L465: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1247 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(flag_pic && check_pic (1)))
    {
      return 54;  /* movsi_high_pic */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L452;

 L3669: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 5)
    goto L477;
  goto L452;

 L477: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (label_ref_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L478;
    }
  goto L452;

 L478: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  operands[2] = x3;
  goto L479;

 L479: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1301 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(flag_pic))
    {
      return 56;  /* *movsi_high_pic_label_ref */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L452;

 L719: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L720;
    }
 L753: ATTRIBUTE_UNUSED_LABEL
  if (v9_register_compare_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L754;
    }
  goto ret0;

 L720: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L721;
    }
  goto L753;

 L721: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L722;
  goto L753;

 L722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith11_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L723;
    }
  x2 = XEXP (x1, 0);
  goto L753;

 L723: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arith11_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L724;
    }
  x2 = XEXP (x1, 0);
  goto L753;

 L724: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2549 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(SImode == DImode && TARGET_ARCH32)))
    {
      return 100;  /* *movsi_cc_v9 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L753;

 L754: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L755;
    }
  goto ret0;

 L755: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L756;
  goto ret0;

 L756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith10_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L757;
    }
  goto ret0;

 L757: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arith10_operand (x2, SImode))
    {
      operands[4] = x2;
      return 104;  /* *movsi_cc_reg_sp64 */
    }
  goto ret0;

 L841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      return 114;  /* *zero_extendhisi2_insn */
    }
  if (input_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L851;
    }
  goto ret0;

 L851: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2799 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(GET_CODE (operands[1]) != CONST_INT))
    {
      return 116;  /* *zero_extendqisi2_insn */
    }
  goto ret0;

 L973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L3670;
    case QImode:
      goto L3671;
    default:
      break;
    }
  goto ret0;

 L3670: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      return 132;  /* *sign_extendhisi2_insn */
    }
  goto ret0;

 L3671: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      return 134;  /* *sign_extendqisi2_insn */
    }
  goto ret0;

 L1073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3672;
    case DFmode:
      goto L3673;
    case TFmode:
      goto L3674;
    default:
      break;
    }
  goto ret0;

 L3672: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FIX)
    goto L1074;
  goto ret0;

 L1074: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1075;
    }
  goto ret0;

 L1075: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3415 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 152;  /* fix_truncsfsi2 */
    }
  goto ret0;

 L3673: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FIX)
    goto L1080;
  goto ret0;

 L1080: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1081;
    }
  goto ret0;

 L1081: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3423 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 153;  /* fix_truncdfsi2 */
    }
  goto ret0;

 L3674: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L1086;
    }
  goto ret0;

 L1086: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3437 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 154;  /* *fix_trunctfsi2_hq */
    }
  goto ret0;

 L1245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1246;
    }
  goto ret0;

 L1246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1247;
    }
  goto ret0;

 L1247: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3854 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL))
    {
      return 174;  /* mulsi3 */
    }
  goto ret0;

 L1351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1352;
  goto ret0;

 L1352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L1353;
  goto ret0;

 L1353: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1354;
  goto ret0;

 L1354: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1355;
    }
  goto ret0;

 L1355: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1356;
  goto ret0;

 L1356: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1357;
    }
  goto ret0;

 L1357: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1358;
    }
  goto ret0;

 L1358: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4073 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 182;  /* smulsi3_highpart_v8plus */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L56;
    }
 L3551: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L442;
    }
 L3567: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1375;
    }
  goto ret0;

 L56: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3612;
  x1 = XEXP (x0, 0);
  goto L3551;

 L3612: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3551;

 L442: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L443;
    }
  x1 = XEXP (x0, 0);
  goto L3567;

 L443: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1203 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((register_operand (operands[0], SImode)
    || register_or_zero_operand (operands[1], SImode))))
    {
      return 50;  /* *movsi_insn */
    }
  x1 = XEXP (x0, 0);
  goto L3567;

 L1375: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3675;
  goto ret0;

 L3675: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SUBREG:
      goto L3687;
    case TRUNCATE:
      goto L1400;
    case UDIV:
      goto L1552;
    case PLUS:
      goto L1576;
    case AND:
      goto L1663;
    case IOR:
      goto L1740;
    case XOR:
      goto L1778;
    case NOT:
      goto L1817;
    case NEG:
      goto L1971;
    case ASHIFT:
      goto L2247;
    case ASHIFTRT:
      goto L2292;
    case LSHIFTRT:
      goto L2332;
    default:
     break;
   }
  goto ret0;

 L3687: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 4)
    goto L1376;
  goto ret0;

 L1376: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1377;
  goto ret0;

 L1377: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L1378;
  goto ret0;

 L1378: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1379;
  goto ret0;

 L1379: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1380;
    }
  goto ret0;

 L1380: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1381;
  goto ret0;

 L1381: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1382;
    }
  goto ret0;

 L1382: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1383;
    }
  goto ret0;

 L1383: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4091 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 183;  /* *sparc.md:4082 */
    }
  goto ret0;

 L1400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1401;
  goto ret0;

 L1401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L1402;
  goto ret0;

 L1402: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L3688;
  goto ret0;

 L3688: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L1403;
    case ZERO_EXTEND:
      goto L1478;
    default:
     break;
   }
  goto ret0;

 L1403: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1404;
    }
  goto ret0;

 L1404: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1405;
    }
  goto ret0;

 L1405: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1406;
    }
  goto ret0;

 L1406: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4106 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 184;  /* const_smulsi3_highpart_v8plus */
    }
  goto ret0;

 L1478: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1479;
    }
  goto ret0;

 L1479: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L1480;
  if (uns_small_int_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1504;
    }
  goto ret0;

 L1480: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1481;
    }
  goto ret0;

 L1481: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1482;
    }
  goto ret0;

 L1482: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4280 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 189;  /* umulsi3_highpart_v8plus */
    }
  goto ret0;

 L1504: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1505;
    }
  goto ret0;

 L1505: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4295 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 190;  /* const_umulsi3_highpart_v8plus */
    }
  goto ret0;

 L1552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1553;
    }
  goto ret0;

 L1553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (input_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1554;
    }
  goto ret0;

 L1554: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4479 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64))
    {
      return 194;  /* udivsi3_sp64 */
    }
  goto ret0;

 L1576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L1577;
  goto ret0;

 L1577: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1578;
    }
  goto ret0;

 L1578: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1579;
    }
  goto ret0;

 L1579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1580;
    }
  goto ret0;

 L1580: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4520 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))
    {
      return 197;  /* *smacsi */
    }
  goto ret0;

 L1663: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1664;
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1625;
    }
  goto ret0;

 L1664: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1665;
    }
  goto ret0;

 L1665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 211;  /* *and_not_si */
    }
  goto ret0;

 L1625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 204;  /* andsi3 */
    }
  goto ret0;

 L1740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1741;
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1702;
    }
  goto ret0;

 L1741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1742;
    }
  goto ret0;

 L1742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 225;  /* *or_not_si */
    }
  goto ret0;

 L1702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 218;  /* iorsi3 */
    }
  goto ret0;

 L1778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1779;
    }
  goto ret0;

 L1779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 232;  /* xorsi3 */
    }
  goto ret0;

 L1817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L1818;
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      return 264;  /* one_cmplsi2 */
    }
  goto ret0;

 L1818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1819;
    }
  goto ret0;

 L1819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      return 239;  /* *xor_not_si */
    }
  goto ret0;

 L1971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      return 255;  /* negsi2 */
    }
  goto ret0;

 L2247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2248;
    }
  goto ret0;

 L2248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 301;  /* ashlsi3 */
    }
  goto ret0;

 L2292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3690;
  goto ret0;

 L3690: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2293;
    }
 L3691: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 4)
    goto L2374;
  goto ret0;

 L2293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 306;  /* ashrsi3 */
    }
  x2 = XEXP (x1, 0);
  goto L3691;

 L2374: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3692;
  goto ret0;

 L3692: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case LSHIFTRT:
      goto L2375;
    case ASHIFTRT:
      goto L2393;
    default:
     break;
   }
  goto ret0;

 L2375: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2376;
    }
  goto ret0;

 L2376: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L2377;
  goto ret0;

 L2377: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2378;
    }
  goto ret0;

 L2378: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5854 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) < 32))
    {
      return 316;  /* *sparc.md:5849 */
    }
  goto ret0;

 L2393: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2394;
    }
  goto ret0;

 L2394: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2395;
    }
  goto ret0;

 L2395: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2396;
    }
  goto ret0;

 L2396: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5878 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) >= 32
   && (unsigned HOST_WIDE_INT) INTVAL (operands[3]) < 32
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[2]) + INTVAL (operands[3])) < 64))
    {
      return 318;  /* *sparc.md:5873 */
    }
  goto ret0;

 L2332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3694;
  goto ret0;

 L3694: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2333;
    }
 L3695: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 4)
    goto L2383;
  goto ret0;

 L2333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 311;  /* lshrsi3 */
    }
  x2 = XEXP (x1, 0);
  goto L3695;

 L2383: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3696;
  goto ret0;

 L3696: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ASHIFTRT:
      goto L2384;
    case LSHIFTRT:
      goto L2402;
    default:
     break;
   }
  goto ret0;

 L2384: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2385;
    }
  goto ret0;

 L2385: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L2386;
  goto ret0;

 L2386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2387;
    }
  goto ret0;

 L2387: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5866 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) < 32))
    {
      return 317;  /* *sparc.md:5861 */
    }
  goto ret0;

 L2402: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2403;
    }
  goto ret0;

 L2403: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2404;
    }
  goto ret0;

 L2404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2405;
    }
  goto ret0;

 L2405: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5894 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) >= 32
   && (unsigned HOST_WIDE_INT) INTVAL (operands[3]) < 32
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[2]) + INTVAL (operands[3])) < 64))
    {
      return 319;  /* *sparc.md:5889 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case NE:
      goto L85;
    case NEG:
      goto L95;
    case EQ:
      goto L142;
    case UNSPEC:
      goto L3723;
    case HIGH:
      goto L499;
    case LO_SUM:
      goto L506;
    case IF_THEN_ELSE:
      goto L728;
    case ZERO_EXTEND:
      goto L860;
    case SIGN_EXTEND:
      goto L985;
    case FIX:
      goto L1090;
    case PLUS:
      goto L1126;
    case MINUS:
      goto L1195;
    case MULT:
      goto L1297;
    case DIV:
      goto L1518;
    case UDIV:
      goto L1558;
    case AND:
      goto L1639;
    case IOR:
      goto L1716;
    case XOR:
      goto L1758;
    case NOT:
      goto L1793;
    case ASHIFT:
      goto L2252;
    case ASHIFTRT:
      goto L2303;
    case ZERO_EXTRACT:
      goto L2346;
    case LSHIFTRT:
      goto L2353;
    default:
     break;
   }
  goto ret0;

 L85: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3726;
    case DImode:
      goto L3727;
    default:
      break;
    }
  goto ret0;

 L3726: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L86;
    }
  goto ret0;

 L86: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 10;  /* *snesi_zero_extend */
    }
  goto ret0;

 L3727: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L91;
    }
  goto ret0;

 L91: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 11;  /* *snedi_zero */
    }
  goto ret0;

 L95: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3728;
  goto ret0;

 L3728: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NE:
      goto L96;
    case EQ:
      goto L153;
    case REG:
    case SUBREG:
      goto L3730;
    default:
      goto ret0;
   }
 L3730: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      return 254;  /* *negdi2_sp64 */
    }
  goto ret0;

 L96: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L97;
    }
  goto ret0;

 L97: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 12;  /* *neg_snedi_zero */
    }
  goto ret0;

 L153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L154;
    }
  goto ret0;

 L154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 18;  /* *neg_seqdi_zero */
    }
  goto ret0;

 L142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3731;
    case DImode:
      goto L3732;
    default:
      break;
    }
  goto ret0;

 L3731: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L143;
    }
  goto ret0;

 L143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 16;  /* *seqsi_zero_extend */
    }
  goto ret0;

 L3732: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L148;
    }
  goto ret0;

 L148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 17;  /* *seqdi_zero */
    }
  goto ret0;

 L3723: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L3733;
    case 1:
      goto L3735;
    default:
      break;
    }
  goto ret0;

 L3733: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 2L:
      goto L423;
    case 19L:
      goto L527;
    default:
      break;
    }
  goto ret0;

 L423: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L424;
    }
  goto ret0;

 L424: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (call_address_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L425;
    }
  goto ret0;

 L425: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L426;
    }
  goto ret0;

 L426: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1124 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(REGNO (operands[0]) == INTVAL (operands[3])) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == DImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 46;  /* load_pcrel_symdi */
    }
  goto ret0;

 L527: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L528;
    }
  goto ret0;

 L528: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L529;
    }
  goto ret0;

 L529: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (symbolic_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L530;
    }
  goto ret0;

 L530: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1494 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && flag_pic && check_pic (1)))
    {
      return 64;  /* movdi_pic_gotdata_op */
    }
  goto ret0;

 L3735: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 11)
    goto L606;
  goto ret0;

 L606: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L607;
    }
  goto ret0;

 L607: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1585 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY))
    {
      return 77;  /* embmedany_brsum */
    }
  goto ret0;

 L499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3736;
  goto ret0;

 L3736: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L3746;
    case CONST:
      goto L3748;
    default:
     break;
   }
 L3739: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L540;
    }
  goto ret0;

 L3746: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L3755;
    case 1:
      goto L3756;
    default:
      break;
    }
  goto ret0;

 L3755: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 5)
    goto L500;
  goto ret0;

 L500: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (label_ref_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L501;
    }
  goto ret0;

 L501: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  operands[2] = x3;
  goto L502;

 L502: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1450 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && flag_pic))
    {
      return 60;  /* *movdi_high_pic_label_ref */
    }
  goto ret0;

 L3756: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 0L:
      goto L522;
    case 6L:
      goto L551;
    case 9L:
      goto L570;
    case 10L:
      goto L576;
    case 11L:
      goto L595;
    case 13L:
      goto L612;
    case 14L:
      goto L618;
    default:
      break;
    }
  goto ret0;

 L522: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  goto L523;

 L523: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1480 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && flag_pic && check_pic (1)))
    {
      return 63;  /* movdi_high_pic */
    }
  goto ret0;

 L551: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L552;
    }
  goto ret0;

 L552: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1526 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDMID))
    {
      return 68;  /* seth44 */
    }
  goto ret0;

 L570: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L571;
    }
  goto ret0;

 L571: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1546 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDANY))
    {
      return 71;  /* sethh */
    }
  goto ret0;

 L576: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L577;
    }
  goto ret0;

 L577: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1552 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDANY))
    {
      return 72;  /* setlm */
    }
  goto ret0;

 L595: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (data_segment_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L596;
    }
  goto ret0;

 L596: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1572 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY && check_pic (1)))
    {
      return 75;  /* embmedany_sethi */
    }
  goto ret0;

 L612: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (text_segment_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L613;
    }
  goto ret0;

 L613: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1591 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY && check_pic (1)))
    {
      return 78;  /* embmedany_textuhi */
    }
  goto ret0;

 L618: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (text_segment_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L619;
    }
  goto ret0;

 L619: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1597 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY && check_pic (1)))
    {
      return 79;  /* embmedany_texthi */
    }
  goto ret0;

 L3748: ATTRIBUTE_UNUSED_LABEL
  if (medium_pic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L535;
    }
  goto L3739;

 L535: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1507 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_CM_MEDLOW || TARGET_CM_EMBMEDANY) && check_pic (1)))
    {
      return 65;  /* *sethi_di_medlow_embmedany_pic */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3739;

 L540: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1513 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDLOW && check_pic (1)))
    {
      return 66;  /* *sethi_di_medlow */
    }
  goto ret0;

 L506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L507;
    }
  goto ret0;

 L507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L3763;
  goto ret0;

 L3763: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L3771;
  if (symbolic_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L546;
    }
 L3768: ATTRIBUTE_UNUSED_LABEL
  if (data_segment_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L602;
    }
 L3770: ATTRIBUTE_UNUSED_LABEL
  if (text_segment_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L632;
    }
  goto ret0;

 L3771: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L3776;
    case 1:
      goto L3777;
    default:
      break;
    }
  goto ret0;

 L3776: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 5)
    goto L508;
  goto ret0;

 L508: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (label_ref_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L509;
    }
  goto ret0;

 L509: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  operands[3] = x3;
  goto L510;

 L510: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1458 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && flag_pic))
    {
      return 61;  /* *movdi_lo_sum_pic_label_ref */
    }
  goto ret0;

 L3777: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 0L:
      goto L516;
    case 7L:
      goto L558;
    case 18L:
      goto L583;
    case 15L:
      goto L625;
    default:
      break;
    }
  goto ret0;

 L516: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (immediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L517;
    }
  goto ret0;

 L517: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1468 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && flag_pic))
    {
      return 62;  /* movdi_lo_sum_pic */
    }
  goto ret0;

 L558: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L559;
    }
  goto ret0;

 L559: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1533 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDMID))
    {
      return 69;  /* setm44 */
    }
  goto ret0;

 L583: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L584;
    }
  goto ret0;

 L584: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1559 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDANY))
    {
      return 73;  /* sethm */
    }
  goto ret0;

 L625: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (text_segment_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L626;
    }
  goto ret0;

 L626: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1604 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY))
    {
      return 80;  /* embmedany_textulo */
    }
  goto ret0;

 L546: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1520 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDLOW))
    {
      return 67;  /* *losum_di_medlow */
    }
 L565: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1540 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDMID))
    {
      return 70;  /* setl44 */
    }
 L590: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1566 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDANY))
    {
      return 74;  /* setlo */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3768;

 L602: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1579 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY))
    {
      return 76;  /* embmedany_losum */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3770;

 L632: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1611 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY))
    {
      return 81;  /* embmedany_textlo */
    }
  goto ret0;

 L728: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L729;
    }
 L761: ATTRIBUTE_UNUSED_LABEL
  if (v9_register_compare_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L762;
    }
  goto ret0;

 L729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L730;
    }
  goto L761;

 L730: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L731;
  goto L761;

 L731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith11_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L732;
    }
  x2 = XEXP (x1, 0);
  goto L761;

 L732: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arith11_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L733;
    }
  x2 = XEXP (x1, 0);
  goto L761;

 L733: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2549 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(DImode == DImode && TARGET_ARCH32)))
    {
      return 101;  /* *movdi_cc_v9 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L761;

 L762: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L763;
    }
  goto ret0;

 L763: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L764;
  goto ret0;

 L764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith10_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L765;
    }
  goto ret0;

 L765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arith10_operand (x2, DImode))
    {
      operands[4] = x2;
      return 105;  /* *movdi_cc_reg_sp64 */
    }
  goto ret0;

 L860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L3781;
    case SImode:
      goto L3782;
    default:
      break;
    }
  if (input_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L856;
    }
 L864: ATTRIBUTE_UNUSED_LABEL
  if (input_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L865;
    }
  goto ret0;

 L3781: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      return 118;  /* *zero_extendhidi2_insn */
    }
  goto ret0;

 L3782: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1117;
    case MINUS:
      goto L1186;
    default:
     break;
   }
  goto L864;

 L1117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1118;
  goto L864;

 L1118: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_or_zero_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1119;
    }
  goto L864;

 L1119: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1120;
    }
  goto L864;

 L1120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L1121;
  goto L864;

 L1121: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CC_NOOVmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 100)
    goto L1122;
  goto L864;

 L1122: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 159;  /* *addx_extend_sp64 */
    }
  goto L864;

 L1186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L1187;
  goto L864;

 L1187: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_or_zero_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1188;
    }
  goto L864;

 L1188: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1189;
    }
  goto L864;

 L1189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L1190;
  goto L864;

 L1190: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CC_NOOVmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 100)
    goto L1191;
  goto L864;

 L1191: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 167;  /* *subx_extend_sp64 */
    }
  goto L864;

 L856: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2815 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && GET_CODE (operands[1]) != CONST_INT))
    {
      return 117;  /* *zero_extendqidi2_insn */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L864;

 L865: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2864 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && GET_CODE (operands[1]) != CONST_INT))
    {
      return 119;  /* *zero_extendsidi2_insn_sp64 */
    }
  goto ret0;

 L985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L3784;
    case HImode:
      goto L3785;
    case SImode:
      goto L3786;
    default:
      break;
    }
 L993: ATTRIBUTE_UNUSED_LABEL
  if (input_operand (x2, SImode))
    {
      operands[1] = x2;
      return 137;  /* *sign_extendsidi2_insn */
    }
  goto ret0;

 L3784: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      return 135;  /* *sign_extendqidi2_insn */
    }
  goto ret0;

 L3785: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      return 136;  /* *sign_extendhidi2_insn */
    }
  goto ret0;

 L3786: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == ASHIFTRT)
    goto L2298;
  goto L993;

 L2298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2299;
    }
  goto L993;

 L2299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      return 307;  /* *ashrsi3_extend */
    }
  goto L993;

 L1090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3787;
    case DFmode:
      goto L3788;
    case TFmode:
      goto L3789;
    default:
      break;
    }
  goto ret0;

 L3787: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FIX)
    goto L1091;
  goto ret0;

 L1091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1092;
    }
  goto ret0;

 L1092: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3452 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU))
    {
      return 155;  /* fix_truncsfdi2 */
    }
  goto ret0;

 L3788: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FIX)
    goto L1097;
  goto ret0;

 L1097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1098;
    }
  goto ret0;

 L1098: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3466 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU))
    {
      return 156;  /* fix_truncdfdi2 */
    }
  goto ret0;

 L3789: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L1103;
    }
  goto ret0;

 L1103: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3486 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 157;  /* *fix_trunctfdi2_hq */
    }
  goto ret0;

 L1126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3791;
  goto ret0;

 L3791: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L1585;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1127;
    }
  goto ret0;

 L1585: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3792;
  goto ret0;

 L3792: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L1586;
    case ZERO_EXTEND:
      goto L1596;
    default:
     break;
   }
  goto ret0;

 L1586: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1587;
    }
  goto ret0;

 L1587: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L1588;
  goto ret0;

 L1588: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1589;
    }
  goto ret0;

 L1589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1590;
    }
  goto ret0;

 L1590: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4531 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))
    {
      return 198;  /* *smacdi */
    }
  goto ret0;

 L1596: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1597;
    }
  goto ret0;

 L1597: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L1598;
  goto ret0;

 L1598: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1599;
    }
  goto ret0;

 L1599: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1600;
    }
  goto ret0;

 L1600: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4542 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))
    {
      return 199;  /* *umacdi */
    }
  goto ret0;

 L1127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_add_operand (x2, DImode))
    {
      operands[2] = x2;
      return 160;  /* *adddi3_sp64 */
    }
  goto ret0;

 L1195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1196;
    }
  goto ret0;

 L1196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_add_operand (x2, DImode))
    {
      operands[2] = x2;
      return 168;  /* *subdi3_sp64 */
    }
  goto ret0;

 L1297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3794;
 L1251: ATTRIBUTE_UNUSED_LABEL
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1252;
    }
  goto ret0;

 L3794: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L1298;
    case ZERO_EXTEND:
      goto L1422;
    default:
     break;
   }
  goto L1251;

 L1298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1299;
    }
  goto L1251;

 L1299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L1300;
  if (small_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1318;
    }
  x2 = XEXP (x1, 0);
  goto L1251;

 L1300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1301;
    }
  x2 = XEXP (x1, 0);
  goto L1251;

 L1301: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3962 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 178;  /* mulsidi3_v8plus */
    }
 L1326: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4004 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64))
    {
      return 180;  /* *mulsidi3_sp64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L1251;

 L1318: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3975 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 179;  /* const_mulsidi3_v8plus */
    }
 L1333: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64))
    {
      return 181;  /* const_mulsidi3_sp64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L1251;

 L1422: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1423;
    }
  goto L1251;

 L1423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1424;
  if (uns_small_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1440;
    }
  x2 = XEXP (x1, 0);
  goto L1251;

 L1424: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1425;
    }
  x2 = XEXP (x1, 0);
  goto L1251;

 L1425: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4169 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 185;  /* umulsidi3_v8plus */
    }
 L1433: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4198 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64))
    {
      return 186;  /* *umulsidi3_sp64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L1251;

 L1440: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4226 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64))
    {
      return 187;  /* const_umulsidi3_sp64 */
    }
 L1457: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4236 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 188;  /* const_umulsidi3_v8plus */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L1251;

 L1252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      return 175;  /* *muldi3_sp64 */
    }
 L1268: ATTRIBUTE_UNUSED_LABEL
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1269;
    }
  goto ret0;

 L1269: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3887 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 176;  /* muldi3_v8plus */
    }
  goto ret0;

 L1518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1519;
    }
  goto ret0;

 L1519: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      return 192;  /* divdi3 */
    }
  goto ret0;

 L1558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1559;
    }
  goto ret0;

 L1559: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      return 195;  /* udivdi3 */
    }
  goto ret0;

 L1639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L1640;
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1605;
    }
 L2337: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L2338;
  goto ret0;

 L1640: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1641;
    }
  goto ret0;

 L1641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      return 207;  /* *and_not_di_sp64 */
    }
  goto ret0;

 L1605: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      return 200;  /* *anddi3_sp64 */
    }
  x2 = XEXP (x1, 0);
  goto L2337;

 L2338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L2339;
  goto ret0;

 L2339: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2340;
    }
  goto ret0;

 L2340: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2341;
    }
  goto ret0;

 L2341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2342;
    }
  goto ret0;

 L2342: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5792 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && (unsigned HOST_WIDE_INT) INTVAL (operands[3]) == 0xffffffff))
    {
      return 312;  /* *lshrsi3_extend */
    }
  goto ret0;

 L1716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L1717;
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1682;
    }
  goto ret0;

 L1717: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1718;
    }
  goto ret0;

 L1718: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      return 221;  /* *or_not_di_sp64 */
    }
  goto ret0;

 L1682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      return 214;  /* *iordi3_sp64 */
    }
  goto ret0;

 L1758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1759;
    }
  goto ret0;

 L1759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      return 228;  /* *xordi3_sp64 */
    }
  goto ret0;

 L1793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == XOR)
    goto L1794;
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      return 260;  /* *one_cmpldi2_sp64 */
    }
  goto ret0;

 L1794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1795;
    }
  goto ret0;

 L1795: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, DImode))
    {
      operands[2] = x3;
      return 235;  /* *xor_not_di_sp64 */
    }
  goto ret0;

 L2252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2253;
    }
 L2266: ATTRIBUTE_UNUSED_LABEL
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2267;
    }
  goto ret0;

 L2253: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 302;  /* *ashldi3_sp64 */
    }
  x2 = XEXP (x1, 0);
  goto L2266;

 L2267: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2268;
    }
  goto ret0;

 L2268: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5657 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 303;  /* ashldi3_v8plus */
    }
  goto ret0;

 L2303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3796;
 L2326: ATTRIBUTE_UNUSED_LABEL
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2327;
    }
  goto ret0;

 L3796: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == ASHIFT)
    goto L2304;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2313;
    }
  goto L2326;

 L2304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L2305;
  goto L2326;

 L2305: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2306;
    }
  goto L2326;

 L2306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L2307;
  goto L2326;

 L2307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2308;
    }
  x2 = XEXP (x1, 0);
  goto L2326;

 L2308: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5726 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && INTVAL (operands[2]) >= 32 && INTVAL (operands[2]) < 64))
    {
      return 308;  /* *ashrsi3_extend2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2326;

 L2313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 309;  /* *ashrdi3_sp64 */
    }
  x2 = XEXP (x1, 0);
  goto L2326;

 L2327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2328;
    }
  goto ret0;

 L2328: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5767 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 310;  /* ashrdi3_v8plus */
    }
  goto ret0;

 L2346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L2347;
  goto ret0;

 L2347: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2348;
    }
  goto ret0;

 L2348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2349;
    }
  goto ret0;

 L2349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 5804 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && (unsigned HOST_WIDE_INT) INTVAL (operands[2]) < 32))
    {
      return 313;  /* *lshrsi3_extend2 */
    }
  goto ret0;

 L2353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2354;
    }
 L2367: ATTRIBUTE_UNUSED_LABEL
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2368;
    }
  goto ret0;

 L2354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 314;  /* *lshrdi3_sp64 */
    }
  x2 = XEXP (x1, 0);
  goto L2367;

 L2368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2369;
    }
  goto ret0;

 L2369: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5844 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 315;  /* lshrdi3_v8plus */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (GET_CODE (x1) == MEM)
    goto L2849;
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2504;
    }
  goto ret0;

 L2849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L2850;
  goto ret0;

 L2850: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2851;
  goto ret0;

 L2851: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2852;
    }
  goto ret0;

 L2852: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2853;
    }
  goto ret0;

 L2853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2854;
    }
  goto ret0;

 L2854: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      return 381;  /* *tldo_stx_sp64 */
    }
  goto ret0;

 L2504: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L3878;
  goto ret0;

 L3878: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC_VOLATILE:
      goto L3889;
    case PLUS:
      goto L2571;
    case UNSPEC:
      goto L3890;
    case HIGH:
      goto L2675;
    case LO_SUM:
      goto L2680;
    case ZERO_EXTEND:
      goto L2712;
    case SIGN_EXTEND:
      goto L2739;
    case MEM:
      goto L2818;
    default:
     break;
   }
  goto ret0;

 L3889: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 11)
    goto L2505;
  goto ret0;

 L2505: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2506;
    }
  goto ret0;

 L2506: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      return 331;  /* probe_stack_rangedi */
    }
  goto ret0;

 L2571: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2572;
    }
  goto ret0;

 L2572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L3894;
  goto ret0;

 L3894: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L3898;
  goto ret0;

 L3898: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L3902;
    case 1:
      goto L3903;
    default:
      break;
    }
  goto ret0;

 L3902: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 30L:
      goto L2573;
    case 32L:
      goto L2646;
    case 33L:
      goto L2670;
    default:
      break;
    }
  goto ret0;

 L2573: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2574;
    }
  goto ret0;

 L2574: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (tgd_symbolic_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      return 347;  /* tgd_add64 */
    }
  goto ret0;

 L2646: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2647;
    }
  goto ret0;

 L2647: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (tld_symbolic_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      return 355;  /* tldo_add64 */
    }
  goto ret0;

 L2670: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2671;
    }
  goto ret0;

 L2671: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (tie_symbolic_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      return 359;  /* tie_add64 */
    }
  goto ret0;

 L3903: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 31)
    goto L2611;
  goto ret0;

 L2611: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      return 351;  /* tldm_add64 */
    }
  goto ret0;

 L3890: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L3906;
    case 2:
      goto L3907;
    default:
      break;
    }
  goto ret0;

 L3906: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 33L:
      goto L2662;
    case 50L:
      goto L3066;
    default:
      break;
    }
  goto ret0;

 L2662: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2663;
    }
  goto ret0;

 L2663: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2664;
    }
  goto ret0;

 L2664: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (tie_symbolic_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      return 358;  /* tie_ld64 */
    }
  goto ret0;

 L3066: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L3067;
    }
  goto ret0;

 L3067: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L3068;
    }
  goto ret0;

 L3068: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3069;
    }
  goto ret0;

 L3069: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7803 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 414;  /* pdist_vis */
    }
  goto ret0;

 L3907: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 48L:
      goto L3036;
    case 49L:
      goto L3060;
    default:
      break;
    }
  goto ret0;

 L3036: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3037;
    }
  goto ret0;

 L3037: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3038;
    }
  goto ret0;

 L3038: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7784 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 409;  /* faligndatadi_vis */
    }
  goto ret0;

 L3060: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_or_zero_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3061;
    }
  goto ret0;

 L3061: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_or_zero_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3062;
    }
  goto ret0;

 L3062: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 7794 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == DImode)))
    {
      return 413;  /* alignaddrdi_vis */
    }
  goto ret0;

 L2675: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 34)
    goto L2676;
  goto ret0;

 L2676: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tle_symbolic_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      return 360;  /* tle_hix22_sp64 */
    }
  goto ret0;

 L2680: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2681;
    }
  goto ret0;

 L2681: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 34)
    goto L2682;
  goto ret0;

 L2682: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tle_symbolic_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      return 361;  /* tle_lox10_sp64 */
    }
  goto ret0;

 L2712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L3910;
    case HImode:
      goto L3911;
    case SImode:
      goto L3912;
    default:
      break;
    }
  goto ret0;

 L3910: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2713;
  goto ret0;

 L2713: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2714;
  goto ret0;

 L2714: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2715;
  goto ret0;

 L2715: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2716;
    }
  goto ret0;

 L2716: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2717;
    }
  goto ret0;

 L2717: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      return 365;  /* *tldo_ldub3_sp64 */
    }
  goto ret0;

 L3911: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2766;
  goto ret0;

 L2766: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2767;
  goto ret0;

 L2767: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2768;
  goto ret0;

 L2768: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2769;
    }
  goto ret0;

 L2769: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2770;
    }
  goto ret0;

 L2770: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      return 371;  /* *tldo_lduh2_sp64 */
    }
  goto ret0;

 L3912: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2801;
  goto ret0;

 L2801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2802;
  goto ret0;

 L2802: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2803;
  goto ret0;

 L2803: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2804;
    }
  goto ret0;

 L2804: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2805;
    }
  goto ret0;

 L2805: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      return 375;  /* *tldo_lduw1_sp64 */
    }
  goto ret0;

 L2739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L3913;
    case HImode:
      goto L3914;
    case SImode:
      goto L3915;
    default:
      break;
    }
  goto ret0;

 L3913: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2740;
  goto ret0;

 L2740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2741;
  goto ret0;

 L2741: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2742;
  goto ret0;

 L2742: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2743;
    }
  goto ret0;

 L2743: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2744;
    }
  goto ret0;

 L2744: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      return 368;  /* *tldo_ldsb3_sp64 */
    }
  goto ret0;

 L3914: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2784;
  goto ret0;

 L2784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2785;
  goto ret0;

 L2785: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2786;
  goto ret0;

 L2786: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2787;
    }
  goto ret0;

 L2787: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2788;
    }
  goto ret0;

 L2788: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      return 373;  /* *tldo_ldsh2_sp64 */
    }
  goto ret0;

 L3915: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2810;
  goto ret0;

 L2810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2811;
  goto ret0;

 L2811: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2812;
  goto ret0;

 L2812: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2813;
    }
  goto ret0;

 L2813: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2814;
    }
  goto ret0;

 L2814: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      return 376;  /* *tldo_ldsw1_sp64 */
    }
  goto ret0;

 L2818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L2819;
  goto ret0;

 L2819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2820;
  goto ret0;

 L2820: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2821;
    }
  goto ret0;

 L2821: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2822;
    }
  goto ret0;

 L2822: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      return 377;  /* *tldo_ldx_sp64 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case CCmode:
      goto L3542;
    case CCXmode:
      goto L3543;
    case CCFPEmode:
      goto L3544;
    case CCFPmode:
      goto L3545;
    case SImode:
      goto L3546;
    case DImode:
      goto L3547;
    case QImode:
      goto L3548;
    case HImode:
      goto L3549;
    case SFmode:
      goto L3553;
    case V2HImode:
      goto L3554;
    case V4QImode:
      goto L3555;
    case DFmode:
      goto L3557;
    case V2SImode:
      goto L3558;
    case V4HImode:
      goto L3559;
    case V8QImode:
      goto L3560;
    case TFmode:
      goto L3561;
    case CC_NOOVmode:
      goto L3565;
    case CCX_NOOVmode:
      goto L3566;
    default:
      break;
    }
 L324: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L325;
 L2451: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L2452;
 L2503: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case DImode:
      goto L3580;
    case SImode:
      goto L3579;
    case QImode:
      goto L3577;
    case HImode:
      goto L3578;
    case V2SImode:
      goto L3581;
    case V4HImode:
      goto L3582;
    case V2HImode:
      goto L3583;
    case DFmode:
      goto L3584;
    case V8QImode:
      goto L3585;
    case SFmode:
      goto L3586;
    case V4QImode:
      goto L3587;
    default:
      break;
    }
 L2509: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L2510;
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2588;
    }
 L3071: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L3072;

 L3542: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 100)
    goto L2;
  goto L324;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode
      && GET_CODE (x1) == COMPARE)
    goto L3;
  x1 = XEXP (x0, 0);
  goto L324;

 L3: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3589;
    case QImode:
      goto L3590;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3589: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L870;
    case ZERO_EXTRACT:
      goto L998;
    case NOT:
      goto L1876;
    case REG:
    case SUBREG:
      goto L3588;
    case AND:
    case IOR:
    case XOR:
      goto L3594;
    default:
      goto L3596;
   }
 L3588: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4;
    }
 L3594: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_operator (x2, SImode))
    {
      operands[2] = x2;
      goto L1836;
    }
 L3596: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_not_operator (x2, SImode))
    {
      operands[2] = x2;
      goto L1922;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L871;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 120;  /* *cmp_zero_extendqisi2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L998: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L999;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1000;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1000: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (small_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1001;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1001: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3214 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(INTVAL (operands[2]) > 19))
    {
      return 138;  /* *cmp_zero_extract */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1876: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == XOR)
    goto L1877;
  if (arith_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2039;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1877: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_or_zero_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L1878;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1878: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1879;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 246;  /* *cmp_cc_xor_not */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 267;  /* *cmp_cc_not */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L4: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      return 0;  /* *cmpsi_insn */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1837;
    }
  goto L3596;

 L1837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1838;
    }
  goto L3596;

 L1838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 242;  /* *cmp_cc_arith_op */
    }
  x2 = XEXP (x1, 0);
  goto L3596;

 L1922: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L1923;
  x1 = XEXP (x0, 0);
  goto L324;

 L1923: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L1924;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1924: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_or_zero_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1925;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 250;  /* *cmp_cc_arith_op_not */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3590: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L876;
    }
 L3591: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG)
    goto L3597;
  x1 = XEXP (x0, 0);
  goto L324;

 L876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 121;  /* *cmp_zero_qi */
    }
  x2 = XEXP (x1, 0);
  goto L3591;

 L3597: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 3L:
      goto L940;
    case 7L:
      goto L957;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L941;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 128;  /* *cmp_siqi_trunc */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L958;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 130;  /* *cmp_diqi_trunc */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3543: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 100)
    goto L7;
  goto L324;

 L7: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCXmode
      && GET_CODE (x1) == COMPARE)
    goto L8;
  x1 = XEXP (x0, 0);
  goto L324;

 L8: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L3600;
    case QImode:
      goto L3601;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3600: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L905;
    case ZERO_EXTRACT:
      goto L1006;
    case NOT:
      goto L1884;
    case REG:
    case SUBREG:
      goto L3599;
    case AND:
    case IOR:
    case XOR:
      goto L3603;
    default:
      goto L3605;
   }
 L3599: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L9;
    }
 L3603: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_operator (x2, DImode))
    {
      operands[2] = x2;
      goto L1843;
    }
 L3605: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_not_operator (x2, DImode))
    {
      operands[2] = x2;
      goto L1930;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L905: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L906;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 124;  /* *cmp_zero_extendqidi2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1006: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L1007;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1007: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1008;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1008: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (small_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1009;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1009: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3231 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && INTVAL (operands[2]) > 51))
    {
      return 139;  /* *cmp_zero_extract_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1884: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == XOR)
    goto L1885;
  if (arith_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L2045;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1885: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_or_zero_operand (x4, DImode))
    {
      operands[0] = x4;
      goto L1886;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1886: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L1887;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 247;  /* *cmp_ccx_xor_not */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 268;  /* *cmp_ccx_not */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L9: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      return 1;  /* *cmpdi_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1843: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L1844;
    }
  goto L3605;

 L1844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1845;
    }
  goto L3605;

 L1845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 243;  /* *cmp_ccx_arith_op */
    }
  x2 = XEXP (x1, 0);
  goto L3605;

 L1930: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == NOT)
    goto L1931;
  x1 = XEXP (x0, 0);
  goto L324;

 L1931: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, DImode))
    {
      operands[0] = x4;
      goto L1932;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1932: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_or_zero_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1933;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 251;  /* *cmp_ccx_arith_op_not */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3601: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L911;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 125;  /* *cmp_zero_qi_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3544: ATTRIBUTE_UNUSED_LABEL
  if (fcc_register_operand (x1, CCFPEmode))
    {
      operands[0] = x1;
      goto L12;
    }
  goto L324;

 L12: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPEmode
      && GET_CODE (x1) == COMPARE)
    goto L13;
  x1 = XEXP (x0, 0);
  goto L324;

 L13: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3606;
    case DFmode:
      goto L3607;
    case TFmode:
      goto L3608;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3606: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L14;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L14: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L15;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L15: ATTRIBUTE_UNUSED_LABEL
  if (
#line 389 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 2;  /* *cmpsf_fpe */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3607: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L20;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L20: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L21;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L21: ATTRIBUTE_UNUSED_LABEL
  if (
#line 401 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 3;  /* *cmpdf_fpe */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3608: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L26;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L26: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L27;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L27: ATTRIBUTE_UNUSED_LABEL
  if (
#line 414 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 4;  /* *cmptf_fpe */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3545: ATTRIBUTE_UNUSED_LABEL
  if (fcc_register_operand (x1, CCFPmode))
    {
      operands[0] = x1;
      goto L30;
    }
  goto L324;

 L30: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L31;
  x1 = XEXP (x0, 0);
  goto L324;

 L31: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3609;
    case DFmode:
      goto L3610;
    case TFmode:
      goto L3611;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3609: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L32;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L32: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L33;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L33: ATTRIBUTE_UNUSED_LABEL
  if (
#line 426 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 5;  /* *cmpsf_fp */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3610: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L38;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L38: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L39;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L39: ATTRIBUTE_UNUSED_LABEL
  if (
#line 438 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 6;  /* *cmpdf_fp */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3611: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L44;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L44: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L45;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L45: ATTRIBUTE_UNUSED_LABEL
  if (
#line 451 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 7;  /* *cmptf_fp */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3546: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L324;

 L3547: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L84;
    }
 L3552: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L490;
    }
  goto L324;

 L84: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L3698;
  x1 = XEXP (x0, 0);
  goto L3552;

 L3698: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3552;

 L490: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L491;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L491: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1354 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_V9
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode))))
    {
      return 58;  /* *movdi_insn_sp32 */
    }
 L495: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1405 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode))))
    {
      return 59;  /* *movdi_insn_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3548: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L429;
    }
 L3562: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L700;
    }
  goto L324;

 L429: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L430;
    }
  x1 = XEXP (x0, 0);
  goto L3562;

 L430: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1152 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((register_operand (operands[0], QImode)
    || register_or_zero_operand (operands[1], QImode))))
    {
      return 47;  /* *movqi_insn */
    }
  x1 = XEXP (x0, 0);
  goto L3562;

 L700: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == IF_THEN_ELSE)
    goto L701;
  x1 = XEXP (x0, 0);
  goto L324;

 L701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L702;
    }
 L737: ATTRIBUTE_UNUSED_LABEL
  if (v9_register_compare_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L738;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L702: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L703;
    }
  goto L737;

 L703: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L704;
  goto L737;

 L704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith11_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L705;
    }
  x2 = XEXP (x1, 0);
  goto L737;

 L705: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arith11_operand (x2, QImode))
    {
      operands[4] = x2;
      goto L706;
    }
  x2 = XEXP (x1, 0);
  goto L737;

 L706: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2549 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(QImode == DImode && TARGET_ARCH32)))
    {
      return 98;  /* *movqi_cc_v9 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L737;

 L738: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L739;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L739: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L740;
  x1 = XEXP (x0, 0);
  goto L324;

 L740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith10_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L741;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L741: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arith10_operand (x2, QImode))
    {
      operands[4] = x2;
      return 102;  /* *movqi_cc_reg_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3549: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L433;
    }
 L3550: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L437;
    }
  goto L324;

 L433: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L434;
    }
  x1 = XEXP (x0, 0);
  goto L3550;

 L434: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1173 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((register_operand (operands[0], HImode)
    || register_or_zero_operand (operands[1], HImode))))
    {
      return 48;  /* *movhi_insn */
    }
  x1 = XEXP (x0, 0);
  goto L3550;

 L437: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3798;
  x1 = XEXP (x0, 0);
  goto L324;

 L3798: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IOR:
      goto L438;
    case IF_THEN_ELSE:
      goto L710;
    case ZERO_EXTEND:
      goto L845;
    case SIGN_EXTEND:
      goto L977;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L324;

 L438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L439;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int_operand (x2, HImode))
    {
      operands[2] = x2;
      return 49;  /* *movhi_lo_sum */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L711;
    }
 L745: ATTRIBUTE_UNUSED_LABEL
  if (v9_register_compare_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L746;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L712;
    }
  goto L745;

 L712: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L713;
  goto L745;

 L713: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith11_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L714;
    }
  x2 = XEXP (x1, 0);
  goto L745;

 L714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arith11_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L715;
    }
  x2 = XEXP (x1, 0);
  goto L745;

 L715: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2549 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(HImode == DImode && TARGET_ARCH32)))
    {
      return 99;  /* *movhi_cc_v9 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L745;

 L746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L747;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L747: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L748;
  x1 = XEXP (x0, 0);
  goto L324;

 L748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith10_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L749;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arith10_operand (x2, HImode))
    {
      operands[4] = x2;
      return 103;  /* *movhi_cc_reg_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (input_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L846;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L846: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2783 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(GET_CODE (operands[1]) != CONST_INT))
    {
      return 115;  /* *zero_extendqihi2_insn */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L977: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      return 133;  /* *sign_extendqihi2_insn */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3553: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L635;
    }
 L3556: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L651;
    }
  goto L324;

 L635: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L636;
    }
  x1 = XEXP (x0, 0);
  goto L3556;

 L636: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1818 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (register_operand (operands[0], SFmode)
       || register_or_zero_operand (operands[1], SFmode))))
    {
      return 82;  /* *movsf_insn */
    }
 L648: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1866 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && (register_operand (operands[0], SFmode)
       || register_or_zero_operand (operands[1], SFmode))))
    {
      return 85;  /* *movsf_insn_no_fpu */
    }
  x1 = XEXP (x0, 0);
  goto L3556;

 L651: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L3802;
  x1 = XEXP (x0, 0);
  goto L324;

 L3802: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case LO_SUM:
      goto L652;
    case HIGH:
      goto L657;
    case IF_THEN_ELSE:
      goto L769;
    case FLOAT_TRUNCATE:
      goto L1028;
    case FLOAT:
      goto L1043;
    case PLUS:
      goto L2101;
    case MINUS:
      goto L2119;
    case MULT:
      goto L2137;
    case DIV:
      goto L2171;
    case NEG:
      goto L2197;
    case ABS:
      goto L2227;
    case SQRT:
      goto L2242;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L324;

 L652: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L653;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fp_const_high_losum_operand (x2, SFmode))
    {
      operands[2] = x2;
      return 86;  /* *movsf_lo_sum */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L657: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fp_const_high_losum_operand (x2, SFmode))
    {
      operands[1] = x2;
      return 87;  /* *movsf_high */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L770;
    }
 L778: ATTRIBUTE_UNUSED_LABEL
  if (v9_register_compare_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L779;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L771;
    }
  goto L778;

 L771: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L772;
  goto L778;

 L772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L773;
    }
  x2 = XEXP (x1, 0);
  goto L778;

 L773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[4] = x2;
      goto L774;
    }
  x2 = XEXP (x1, 0);
  goto L778;

 L774: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2575 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU))
    {
      return 106;  /* *movsf_cc_v9 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L778;

 L779: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L780;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L780: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L781;
  x1 = XEXP (x0, 0);
  goto L324;

 L781: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L782;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[4] = x2;
      goto L783;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L783: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2588 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU))
    {
      return 107;  /* *movsf_cc_reg_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3814;
    case TFmode:
      goto L3815;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3814: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1029;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1029: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3287 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 143;  /* truncdfsf2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3815: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L1034;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1034: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3303 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 144;  /* *trunctfsf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3816;
    case DImode:
      goto L3817;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3816: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1044;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1044: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3328 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 146;  /* floatsisf2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3817: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1059;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1059: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3365 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU))
    {
      return 149;  /* floatdisf2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2102;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2103;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2103: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5275 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 275;  /* addsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2120;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2121;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2121: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5307 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 278;  /* subsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2138;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2139;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2139: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5339 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 281;  /* mulsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2172;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2173;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2173: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5389 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 286;  /* divsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2198;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2198: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5477 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 291;  /* negsf2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2228;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2228: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5573 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 297;  /* abssf2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2243;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2243: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5601 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 300;  /* sqrtsf2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3554: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L639;
    }
 L3571: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L1628;
    }
  goto L324;

 L639: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, V2HImode))
    {
      operands[1] = x1;
      goto L640;
    }
  x1 = XEXP (x0, 0);
  goto L3571;

 L640: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1818 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (register_operand (operands[0], V2HImode)
       || register_or_zero_operand (operands[1], V2HImode))))
    {
      return 83;  /* *movsf_insn */
    }
  x1 = XEXP (x0, 0);
  goto L3571;

 L1628: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HImode)
    goto L3818;
  x1 = XEXP (x0, 0);
  goto L324;

 L3818: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1669;
    case IOR:
      goto L1746;
    case XOR:
      goto L1783;
    case NOT:
      goto L1823;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L324;

 L1669: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == NOT)
    goto L1670;
  if (arith_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L1630;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L1671;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      return 212;  /* *and_not_v2hi */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1630: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V2HImode))
    {
      operands[2] = x2;
      return 205;  /* andv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == NOT)
    goto L1747;
  if (arith_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L1707;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1747: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L1748;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      return 226;  /* *or_not_v2hi */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1707: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V2HImode))
    {
      operands[2] = x2;
      return 219;  /* iorv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1783: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L1784;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V2HImode))
    {
      operands[2] = x2;
      return 233;  /* xorv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == XOR)
    goto L1824;
  if (arith_operand (x2, V2HImode))
    {
      operands[1] = x2;
      return 265;  /* one_cmplv2hi2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L1825;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1825: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, V2HImode))
    {
      operands[2] = x3;
      return 240;  /* *xor_not_v2hi */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3555: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L643;
    }
 L3572: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L1633;
    }
  goto L324;

 L643: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, V4QImode))
    {
      operands[1] = x1;
      goto L644;
    }
  x1 = XEXP (x0, 0);
  goto L3572;

 L644: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1818 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (register_operand (operands[0], V4QImode)
       || register_or_zero_operand (operands[1], V4QImode))))
    {
      return 84;  /* *movsf_insn */
    }
  x1 = XEXP (x0, 0);
  goto L3572;

 L1633: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QImode)
    goto L3822;
  x1 = XEXP (x0, 0);
  goto L324;

 L3822: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1675;
    case IOR:
      goto L1752;
    case XOR:
      goto L1788;
    case NOT:
      goto L1829;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L324;

 L1675: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == NOT)
    goto L1676;
  if (arith_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L1635;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1676: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L1677;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      return 213;  /* *and_not_v4qi */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V4QImode))
    {
      operands[2] = x2;
      return 206;  /* andv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == NOT)
    goto L1753;
  if (arith_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L1712;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1753: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L1754;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1754: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      return 227;  /* *or_not_v4qi */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V4QImode))
    {
      operands[2] = x2;
      return 220;  /* iorv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1788: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L1789;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1789: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V4QImode))
    {
      operands[2] = x2;
      return 234;  /* xorv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == XOR)
    goto L1830;
  if (arith_operand (x2, V4QImode))
    {
      operands[1] = x2;
      return 266;  /* one_cmplv4qi2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1830: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L1831;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1831: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, V4QImode))
    {
      operands[2] = x3;
      return 241;  /* *xor_not_v4qi */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3557: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L660;
    }
 L3563: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L786;
    }
  goto L324;

 L660: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L661;
    }
  x1 = XEXP (x0, 0);
  goto L3563;

 L661: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1953 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_V9
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))))
    {
      return 88;  /* *movdf_insn_sp32 */
    }
 L665: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1974 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && ! TARGET_V9
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))))
    {
      return 89;  /* *movdf_insn_sp32_no_fpu */
    }
 L669: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))))
    {
      return 90;  /* *movdf_insn_sp64 */
    }
 L685: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2052 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))))
    {
      return 94;  /* *movdf_insn_sp64_no_fpu */
    }
  x1 = XEXP (x0, 0);
  goto L3563;

 L786: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L3826;
  x1 = XEXP (x0, 0);
  goto L324;

 L3826: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L787;
    case FLOAT_EXTEND:
      goto L1013;
    case FLOAT_TRUNCATE:
      goto L1038;
    case FLOAT:
      goto L1048;
    case PLUS:
      goto L2095;
    case MINUS:
      goto L2113;
    case MULT:
      goto L2131;
    case DIV:
      goto L2165;
    case NEG:
      goto L2187;
    case ABS:
      goto L2217;
    case SQRT:
      goto L2237;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L324;

 L787: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L788;
    }
 L796: ATTRIBUTE_UNUSED_LABEL
  if (v9_register_compare_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L797;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L789;
    }
  goto L796;

 L789: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L790;
  goto L796;

 L790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L791;
    }
  x2 = XEXP (x1, 0);
  goto L796;

 L791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[4] = x2;
      goto L792;
    }
  x2 = XEXP (x1, 0);
  goto L796;

 L792: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2602 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU))
    {
      return 108;  /* movdf_cc_v9 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L796;

 L797: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L798;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L798: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L799;
  x1 = XEXP (x0, 0);
  goto L324;

 L799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L800;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L800: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[4] = x2;
      goto L801;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L801: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2617 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU))
    {
      return 109;  /* movdf_cc_reg_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1014;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1014: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3248 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 140;  /* extendsfdf2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L1039;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1039: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3318 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 145;  /* *trunctfdf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3837;
    case DImode:
      goto L3838;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3837: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1049;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1049: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3336 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 147;  /* floatsidf2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3838: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1064;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1064: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3379 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU))
    {
      return 150;  /* floatdidf2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2096;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2097;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2097: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5266 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 274;  /* adddf3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2114;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2115;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2115: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5298 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 277;  /* subdf3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L3840;
  x1 = XEXP (x0, 0);
  goto L324;

 L3840: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L2144;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2132;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2145;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == FLOAT_EXTEND)
    goto L2146;
  x1 = XEXP (x0, 0);
  goto L324;

 L2146: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L2147;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2147: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5347 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_V9) && TARGET_FPU))
    {
      return 282;  /* *muldf3_extend */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2133;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2133: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5330 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 280;  /* muldf3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2166;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2167;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2167: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5380 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 285;  /* divdf3 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2188;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2188: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5451 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9))
    {
      return 289;  /* *negdf2_notv9 */
    }
 L2193: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5469 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9))
    {
      return 290;  /* *negdf2_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2218;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2218: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5547 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9))
    {
      return 295;  /* *absdf2_notv9 */
    }
 L2223: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5565 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9))
    {
      return 296;  /* *absdf2_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2238;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2238: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5593 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 299;  /* sqrtdf2 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3558: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L672;
    }
 L3568: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L1608;
    }
  goto L324;

 L672: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L673;
    }
  x1 = XEXP (x0, 0);
  goto L3568;

 L673: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], V2SImode)
       || register_or_zero_operand (operands[1], V2SImode))))
    {
      return 91;  /* *movdf_insn_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L3568;

 L1608: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L3841;
  x1 = XEXP (x0, 0);
  goto L324;

 L3841: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1645;
    case IOR:
      goto L1722;
    case XOR:
      goto L1763;
    case NOT:
      goto L1799;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L324;

 L1645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == NOT)
    goto L1646;
  if (arith_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L1610;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L1647;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1647: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      return 208;  /* *and_not_v2si_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V2SImode))
    {
      operands[2] = x2;
      return 201;  /* *andv2si3_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == NOT)
    goto L1723;
  if (arith_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L1687;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1723: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L1724;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      return 222;  /* *or_not_v2si_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V2SImode))
    {
      operands[2] = x2;
      return 215;  /* *iorv2si3_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L1764;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V2SImode))
    {
      operands[2] = x2;
      return 229;  /* *xorv2si3_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == XOR)
    goto L1800;
  if (arith_operand (x2, V2SImode))
    {
      operands[1] = x2;
      return 261;  /* *one_cmplv2si2_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L1801;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, V2SImode))
    {
      operands[2] = x3;
      return 236;  /* *xor_not_v2si_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3559: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L676;
    }
 L3569: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L1613;
    }
  goto L324;

 L676: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L677;
    }
  x1 = XEXP (x0, 0);
  goto L3569;

 L677: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], V4HImode)
       || register_or_zero_operand (operands[1], V4HImode))))
    {
      return 92;  /* *movdf_insn_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L3569;

 L1613: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L3845;
  x1 = XEXP (x0, 0);
  goto L324;

 L3845: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1651;
    case IOR:
      goto L1728;
    case XOR:
      goto L1768;
    case NOT:
      goto L1805;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L324;

 L1651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == NOT)
    goto L1652;
  if (arith_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L1615;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1652: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L1653;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      return 209;  /* *and_not_v4hi_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V4HImode))
    {
      operands[2] = x2;
      return 202;  /* *andv4hi3_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1728: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == NOT)
    goto L1729;
  if (arith_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L1692;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L1730;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      return 223;  /* *or_not_v4hi_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V4HImode))
    {
      operands[2] = x2;
      return 216;  /* *iorv4hi3_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1768: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L1769;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V4HImode))
    {
      operands[2] = x2;
      return 230;  /* *xorv4hi3_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == XOR)
    goto L1806;
  if (arith_operand (x2, V4HImode))
    {
      operands[1] = x2;
      return 262;  /* *one_cmplv4hi2_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1806: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L1807;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, V4HImode))
    {
      operands[2] = x3;
      return 237;  /* *xor_not_v4hi_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3560: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L680;
    }
 L3570: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L1618;
    }
  goto L324;

 L680: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L681;
    }
  x1 = XEXP (x0, 0);
  goto L3570;

 L681: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2032 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], V8QImode)
       || register_or_zero_operand (operands[1], V8QImode))))
    {
      return 93;  /* *movdf_insn_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L3570;

 L1618: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L3849;
  x1 = XEXP (x0, 0);
  goto L324;

 L3849: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1657;
    case IOR:
      goto L1734;
    case XOR:
      goto L1773;
    case NOT:
      goto L1811;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L324;

 L1657: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == NOT)
    goto L1658;
  if (arith_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L1620;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L1659;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      return 210;  /* *and_not_v8qi_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V8QImode))
    {
      operands[2] = x2;
      return 203;  /* *andv8qi3_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == NOT)
    goto L1735;
  if (arith_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L1697;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1735: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L1736;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      return 224;  /* *or_not_v8qi_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V8QImode))
    {
      operands[2] = x2;
      return 217;  /* *iorv8qi3_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L1774;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V8QImode))
    {
      operands[2] = x2;
      return 231;  /* *xorv8qi3_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == XOR)
    goto L1812;
  if (arith_operand (x2, V8QImode))
    {
      operands[1] = x2;
      return 263;  /* *one_cmplv8qi2_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1812: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L1813;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1813: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, V8QImode))
    {
      operands[2] = x3;
      return 238;  /* *xor_not_v8qi_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3561: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L688;
    }
 L3564: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L804;
    }
  goto L324;

 L688: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L689;
    }
  x1 = XEXP (x0, 0);
  goto L3564;

 L689: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2317 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && ! TARGET_HARD_QUAD
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode))))
    {
      return 95;  /* *movtf_insn_sp64 */
    }
 L693: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2328 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_ARCH64
   && TARGET_HARD_QUAD
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode))))
    {
      return 96;  /* *movtf_insn_sp64_hq */
    }
 L697: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2346 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && TARGET_ARCH64
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode))))
    {
      return 97;  /* *movtf_insn_sp64_no_fpu */
    }
  x1 = XEXP (x0, 0);
  goto L3564;

 L804: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L3853;
  x1 = XEXP (x0, 0);
  goto L324;

 L3853: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L805;
    case FLOAT_EXTEND:
      goto L1018;
    case FLOAT:
      goto L1053;
    case PLUS:
      goto L2089;
    case MINUS:
      goto L2107;
    case MULT:
      goto L2125;
    case DIV:
      goto L2159;
    case NEG:
      goto L2177;
    case ABS:
      goto L2202;
    case SQRT:
      goto L2232;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L324;

 L805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L806;
    }
 L814: ATTRIBUTE_UNUSED_LABEL
  if (v9_register_compare_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L815;
    }
 L823: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L824;
    }
 L832: ATTRIBUTE_UNUSED_LABEL
  if (v9_register_compare_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L833;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L806: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L807;
    }
  goto L814;

 L807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L808;
  goto L814;

 L808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[3] = x2;
      goto L809;
    }
  x2 = XEXP (x1, 0);
  goto L814;

 L809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, TFmode))
    {
      operands[4] = x2;
      goto L810;
    }
  x2 = XEXP (x1, 0);
  goto L814;

 L810: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2631 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 110;  /* *movtf_cc_hq_v9 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L814;

 L815: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L816;
    }
  goto L823;

 L816: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L817;
  goto L823;

 L817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[3] = x2;
      goto L818;
    }
  x2 = XEXP (x1, 0);
  goto L823;

 L818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, TFmode))
    {
      operands[4] = x2;
      goto L819;
    }
  x2 = XEXP (x1, 0);
  goto L823;

 L819: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2644 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 111;  /* *movtf_cc_reg_hq_sp64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L823;

 L824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L825;
    }
  goto L832;

 L825: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L826;
  goto L832;

 L826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[3] = x2;
      goto L827;
    }
  x2 = XEXP (x1, 0);
  goto L832;

 L827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, TFmode))
    {
      operands[4] = x2;
      goto L828;
    }
  x2 = XEXP (x1, 0);
  goto L832;

 L828: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2657 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && !TARGET_HARD_QUAD))
    {
      return 112;  /* *movtf_cc_v9 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L832;

 L833: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L834;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L834: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L835;
  x1 = XEXP (x0, 0);
  goto L324;

 L835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[3] = x2;
      goto L836;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, TFmode))
    {
      operands[4] = x2;
      goto L837;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L837: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2700 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU && ! TARGET_HARD_QUAD))
    {
      return 113;  /* *movtf_cc_reg_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3863;
    case DFmode:
      goto L3864;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3863: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1019;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1019: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3264 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 141;  /* *extendsftf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3864: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1024;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1024: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3279 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 142;  /* *extenddftf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3865;
    case DImode:
      goto L3866;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3865: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1054;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1054: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3350 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 148;  /* *floatsitf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3866: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1069;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1069: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3399 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 151;  /* *floatditf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2090;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L2091;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2091: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5258 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 273;  /* *addtf3_hq */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2108;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L2109;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2109: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5290 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 276;  /* *subtf3_hq */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TFmode)
    goto L3868;
  x1 = XEXP (x0, 0);
  goto L324;

 L3868: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L2152;
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2126;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2152: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2153;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TFmode
      && GET_CODE (x2) == FLOAT_EXTEND)
    goto L2154;
  x1 = XEXP (x0, 0);
  goto L324;

 L2154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L2155;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2155: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5356 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_V9) && TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 283;  /* *multf3_extend */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L2127;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2127: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5322 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 279;  /* *multf3_hq */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2160;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2160: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L2161;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2161: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5372 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 284;  /* *divtf3_hq */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2178;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2178: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5403 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_V9))
    {
      return 287;  /* *negtf2_notv9 */
    }
 L2183: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5426 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9))
    {
      return 288;  /* *negtf2_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2203;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2203: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5491 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9))
    {
      return 292;  /* *abstf2_notv9 */
    }
 L2208: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5512 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && TARGET_HARD_QUAD))
    {
      return 293;  /* *abstf2_hq_v9 */
    }
 L2213: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5522 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && !TARGET_HARD_QUAD))
    {
      return 294;  /* *abstf2_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2233;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2233: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5586 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 298;  /* *sqrttf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3565: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 100)
    goto L1135;
  goto L324;

 L1135: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_NOOVmode
      && GET_CODE (x1) == COMPARE)
    goto L1136;
  x1 = XEXP (x0, 0);
  goto L324;

 L1136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3869;
  x1 = XEXP (x0, 0);
  goto L324;

 L3869: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1137;
    case MINUS:
      goto L1206;
    case NEG:
      goto L1976;
    case ASHIFT:
      goto L2273;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L324;

 L1137: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1138;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1139;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 162;  /* *cmp_cc_plus */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1206: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1207;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1208;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 170;  /* *cmp_minus_cc */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1976: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1977;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1977: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 256;  /* *cmp_cc_neg */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2274;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L2274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2275;
  x1 = XEXP (x0, 0);
  goto L324;

 L2275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 304;  /* *cmp_cc_ashift_1 */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L3566: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 100)
    goto L1142;
  goto L324;

 L1142: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCX_NOOVmode
      && GET_CODE (x1) == COMPARE)
    goto L1143;
  x1 = XEXP (x0, 0);
  goto L324;

 L1143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3873;
  x1 = XEXP (x0, 0);
  goto L324;

 L3873: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1144;
    case MINUS:
      goto L1213;
    case NEG:
      goto L1982;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L324;

 L1144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L1145;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1146;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 163;  /* *cmp_ccx_plus */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1213: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L1214;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1214: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1215;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 171;  /* *cmp_minus_ccx */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1982: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L1983;
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L1983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 257;  /* *cmp_ccx_neg */
    }
  x1 = XEXP (x0, 0);
  goto L324;

 L325: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L326;
    case LABEL_REF:
      goto L2409;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2451;

 L326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (noov_compare_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L327;
    }
 L344: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L345;
    }
 L380: ATTRIBUTE_UNUSED_LABEL
  if (v9_register_compare_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L381;
    }
  x1 = XEXP (x0, 0);
  goto L2451;

 L327: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L328;
  goto L344;

 L328: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L329;
  goto L344;

 L329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L330;
    case PC:
      goto L339;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L344;

 L330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L331;

 L331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 37;  /* *normal_branch */
    }
  x2 = XEXP (x1, 0);
  goto L344;

 L339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L340;
  x2 = XEXP (x1, 0);
  goto L344;

 L340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  return 38;  /* *inverted_branch */

 L345: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case CCFPmode:
      goto L3876;
    case CCFPEmode:
      goto L3877;
    default:
      break;
    }
  goto L380;

 L3876: ATTRIBUTE_UNUSED_LABEL
  if (fcc_register_operand (x3, CCFPmode))
    {
      operands[0] = x3;
      goto L346;
    }
  goto L380;

 L346: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L347;
  goto L380;

 L347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L348;
    case PC:
      goto L357;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L380;

 L348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  goto L349;

 L349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 39;  /* *normal_fp_branch */
    }
  x2 = XEXP (x1, 0);
  goto L380;

 L357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L358;
  x2 = XEXP (x1, 0);
  goto L380;

 L358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  return 40;  /* *inverted_fp_branch */

 L3877: ATTRIBUTE_UNUSED_LABEL
  if (fcc_register_operand (x3, CCFPEmode))
    {
      operands[0] = x3;
      goto L364;
    }
  goto L380;

 L364: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L365;
  goto L380;

 L365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L366;
    case PC:
      goto L375;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L380;

 L366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  goto L367;

 L367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 41;  /* *normal_fpe_branch */
    }
  x2 = XEXP (x1, 0);
  goto L380;

 L375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L376;
  x2 = XEXP (x1, 0);
  goto L380;

 L376: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  return 42;  /* *inverted_fpe_branch */

 L381: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L382;
    }
  x1 = XEXP (x0, 0);
  goto L2451;

 L382: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L383;
  x1 = XEXP (x0, 0);
  goto L2451;

 L383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L384;
    case PC:
      goto L393;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2451;

 L384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  goto L385;

 L385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 43;  /* *normal_int_branch_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2451;

 L393: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L394;
  x1 = XEXP (x0, 0);
  goto L2451;

 L394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  return 44;  /* *inverted_int_branch_sp64 */

 L2409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  return 320;  /* jump */

 L2452: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L2453;
  x1 = XEXP (x0, 0);
  goto L2503;

 L2453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MEM)
    goto L2454;
  x1 = XEXP (x0, 0);
  goto L2503;

 L2454: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (address_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2455;
    }
 L2470: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2471;
    }
  x1 = XEXP (x0, 0);
  goto L2503;

 L2455: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L2456;

 L2456: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 324;  /* *call_value_address_sp64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2470;

 L2471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L2472;

 L2472: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 325;  /* *call_value_symbolic_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2503;

 L3580: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L2509;

 L3579: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2841;
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2532;
    }
  goto L2509;

 L2841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L2842;
  goto L2509;

 L2842: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2843;
  goto L2509;

 L2843: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2844;
    }
  goto L2509;

 L2844: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2845;
    }
  goto L2509;

 L2845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2846;
    }
  goto L2509;

 L2846: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      return 380;  /* *tldo_stw_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2532: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3916;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3916: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FFS:
      goto L2533;
    case HIGH:
      goto L2560;
    case LO_SUM:
      goto L2565;
    case ZERO_EXTEND:
      goto L2703;
    case SIGN_EXTEND:
      goto L2730;
    case MEM:
      goto L2792;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2534;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2534: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6608 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SPARCLITE || TARGET_SPARCLET)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 339;  /* ffssi2 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3922;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3922: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L3926;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3926: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L3930;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3930: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 30L:
      goto L2561;
    case 31L:
      goto L2599;
    case 32L:
      goto L2634;
    case 33L:
      goto L2652;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2561: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tgd_symbolic_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      return 345;  /* tgd_hi22 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2599: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 349;  /* tldm_hi22 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2634: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tld_symbolic_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      return 353;  /* tldo_hix22 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2652: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tie_symbolic_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      return 356;  /* tie_hi22 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2566;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3934;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3934: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L3938;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3938: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L3942;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3942: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 30L:
      goto L2567;
    case 31L:
      goto L2605;
    case 32L:
      goto L2640;
    case 33L:
      goto L2658;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2567: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tgd_symbolic_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      return 346;  /* tgd_lo10 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2605: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 350;  /* tldm_lo10 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2640: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tld_symbolic_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      return 354;  /* tldo_lox10 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2658: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tie_symbolic_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      return 357;  /* tie_lo10 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L3946;
    case HImode:
      goto L3947;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3946: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2704;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2704: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2705;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2705: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2706;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2706: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2707;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2707: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2708;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2708: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      return 364;  /* *tldo_ldub2_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3947: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2757;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2757: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2758;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2758: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2759;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2759: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2760;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2760: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2761;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2761: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      return 370;  /* *tldo_lduh1_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L3948;
    case HImode:
      goto L3949;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3948: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2731;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2732;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2732: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2733;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2733: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2734;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2734: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2735;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2735: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      return 367;  /* *tldo_ldsb2_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3949: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2775;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2775: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2776;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2776: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2777;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2777: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2778;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2778: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2779;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2779: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      return 372;  /* *tldo_ldsh1_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2792: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L2793;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2793: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2794;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2794: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2795;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2795: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2796;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2796: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      return 374;  /* *tldo_lduw_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3577: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2825;
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L2685;
    }
  goto L2509;

 L2825: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L2826;
  goto L2509;

 L2826: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2827;
  goto L2509;

 L2827: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2828;
    }
  goto L2509;

 L2828: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2829;
    }
  goto L2509;

 L2829: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2830;
    }
  goto L2509;

 L2830: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      return 378;  /* *tldo_stb_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2685: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == MEM)
    goto L2686;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L2687;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2687: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2688;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2688: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2689;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2689: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2690;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2690: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      return 362;  /* *tldo_ldub_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3578: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2833;
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L2693;
    }
  goto L2509;

 L2833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L2834;
  goto L2509;

 L2834: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2835;
  goto L2509;

 L2835: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2836;
    }
  goto L2509;

 L2836: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2837;
    }
  goto L2509;

 L2837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2838;
    }
  goto L2509;

 L2838: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      return 379;  /* *tldo_sth_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2693: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3950;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3950: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L2694;
    case SIGN_EXTEND:
      goto L2721;
    case MEM:
      goto L2748;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2694: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L2695;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2695: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2696;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2696: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2697;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2697: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2698;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2698: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2699;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2699: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      return 363;  /* *tldo_ldub1_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L2722;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2723;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2723: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2724;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2724: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2725;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2725: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2726;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2726: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      return 366;  /* *tldo_ldsb1_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L2749;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2749: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2750;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2750: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2751;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2751: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2752;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2752: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      return 369;  /* *tldo_lduh_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3581: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L2874;
    }
  goto L2509;

 L2874: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L3953;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3953: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L2875;
    case MINUS:
      goto L2893;
    case IOR:
      goto L2919;
    case MULT:
      goto L3024;
    case UNSPEC:
      goto L3959;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2876;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L2877;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2877: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7575 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 384;  /* addv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2894;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L2895;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2895: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7604 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 387;  /* subv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2919: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == NOT)
    goto L2920;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2920: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L2921;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == NOT)
    goto L2922;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2922: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L2923;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2923: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7638 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 391;  /* *nandv2si_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3024: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3025;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3025: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L3026;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3026: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7761 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 407;  /* fmuld8sux16_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3959: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L3961;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3961: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 47L:
      goto L3030;
    case 48L:
      goto L3042;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3030: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3031;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3031: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L3032;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3032: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7771 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 408;  /* fmuld8ulx16_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3042: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L3043;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3043: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L3044;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3044: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7784 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 410;  /* faligndatav2si_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3582: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L2880;
    }
  goto L2509;

 L2880: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L3963;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3963: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L2881;
    case MINUS:
      goto L2899;
    case IOR:
      goto L2927;
    case UNSPEC:
      goto L3971;
    case MULT:
      goto L2994;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L2882;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2883;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2883: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7584 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 385;  /* addv4hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L2900;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2900: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2901;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2901: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7613 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 388;  /* subv4hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == NOT)
    goto L2928;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2928: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L2929;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == NOT)
    goto L2930;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2930: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L2931;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2931: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7638 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 392;  /* *nandv4hi_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3971: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L3975;
    case 2:
      goto L3976;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3975: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 43)
    goto L2983;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2983: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2984;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2984: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7686 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 400;  /* fexpand_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3976: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 45L:
      goto L3006;
    case 46L:
      goto L3018;
    case 48L:
      goto L3048;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3006: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L3007;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3007: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L3008;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3008: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7731 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 404;  /* fmul8x16al_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3018: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L3019;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3019: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L3020;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3020: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7751 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 406;  /* fmul8ulx16_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3048: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L3049;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3049: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L3050;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3050: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7784 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 411;  /* faligndatav4hi_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V4QImode:
      goto L3979;
    case V8QImode:
      goto L3980;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3979: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2995;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case V4HImode:
      goto L3981;
    case V2HImode:
      goto L3982;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3981: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2996;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2996: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7711 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 402;  /* fmul8x16_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3982: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L3002;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3002: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7721 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 403;  /* fmul8x16au_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3980: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L3013;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L3014;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3014: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7741 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 405;  /* fmul8sux16_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3583: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L2886;
    }
  goto L2509;

 L2886: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HImode)
    goto L3983;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3983: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L2887;
    case MINUS:
      goto L2905;
    case IOR:
      goto L2951;
    case UNSPEC:
      goto L3987;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2888;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2888: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L2889;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2889: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7595 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 386;  /* addv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2906;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L2907;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2907: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7624 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 389;  /* subv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == NOT)
    goto L2952;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2952: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L2953;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2953: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == NOT)
    goto L2954;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2954: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L2955;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2955: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7647 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 395;  /* *nandv2hi_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3987: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 42)
    goto L2972;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2972: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2973;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2973: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7667 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 398;  /* fpackfix_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3584: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2910;
    }
  goto L2509;

 L2910: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == IOR)
    goto L2911;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == NOT)
    goto L2912;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2912: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2913;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == NOT)
    goto L2914;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2914: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L2915;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2915: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7638 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 390;  /* *nanddf_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3585: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L2934;
    }
  goto L2509;

 L2934: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L3988;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3988: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IOR:
      goto L2935;
    case UNSPEC:
      goto L3992;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == NOT)
    goto L2936;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2936: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L2937;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == NOT)
    goto L2938;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2938: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L2939;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2939: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7638 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 393;  /* *nandv8qi_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3992: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L3995;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3995: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 41L:
      goto L2977;
    case 44L:
      goto L2988;
    case 48L:
      goto L3054;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2977: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2978;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2978: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L2979;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2979: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7677 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 399;  /* fpack32_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2988: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2989;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2989: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L2990;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2990: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7701 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 401;  /* fpmerge_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3054: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L3055;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3055: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L3056;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3056: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7784 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 412;  /* faligndatav8qi_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3586: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2942;
    }
  goto L2509;

 L2942: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == IOR)
    goto L2943;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2943: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == NOT)
    goto L2944;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2944: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2945;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == NOT)
    goto L2946;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2946: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L2947;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2947: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7647 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 394;  /* *nandsf_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L3587: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L2958;
    }
  goto L2509;

 L2958: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QImode)
    goto L3998;
  x1 = XEXP (x0, 0);
  goto L2509;

 L3998: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IOR:
      goto L2959;
    case UNSPEC:
      goto L4000;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2959: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == NOT)
    goto L2960;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L2961;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == NOT)
    goto L2962;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2962: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L2963;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2963: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7647 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 396;  /* *nandv4qi_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L4000: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 40)
    goto L2967;
  x1 = XEXP (x0, 0);
  goto L2509;

 L2967: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L2968;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2968: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7658 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 397;  /* fpack16_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2509;

 L2510: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (address_operand (x1, DImode))
    {
      operands[0] = x1;
      return 333;  /* *branch_sp64 */
    }
  x1 = XEXP (x0, 0);
  goto L3071;

 L2588: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L2589;
  x1 = XEXP (x0, 0);
  goto L3071;

 L2589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MEM)
    goto L2590;
  x1 = XEXP (x0, 0);
  goto L3071;

 L2590: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L4001;
  x1 = XEXP (x0, 0);
  goto L3071;

 L4001: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == UNSPEC)
    goto L4003;
  x1 = XEXP (x0, 0);
  goto L3071;

 L4003: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x3, 0))
    {
    case 2:
      goto L4005;
    case 1:
      goto L4006;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3071;

 L4005: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x3, 1) == 30)
    goto L2591;
  x1 = XEXP (x0, 0);
  goto L3071;

 L2591: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (symbolic_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2592;
    }
  x1 = XEXP (x0, 0);
  goto L3071;

 L2592: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tgd_symbolic_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2593;
    }
  x1 = XEXP (x0, 0);
  goto L3071;

 L2593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  goto L2594;

 L2594: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 348;  /* tgd_call64 */
    }
  x1 = XEXP (x0, 0);
  goto L3071;

 L4006: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x3, 1) == 31)
    goto L2627;
  x1 = XEXP (x0, 0);
  goto L3071;

 L2627: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (symbolic_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2628;
    }
  x1 = XEXP (x0, 0);
  goto L3071;

 L2628: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L2629;

 L2629: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 352;  /* tldm_call64 */
    }
  x1 = XEXP (x0, 0);
  goto L3071;

 L3072: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 20)
    goto L3073;
  goto ret0;

 L3073: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 39 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V8))
    {
      return 415;  /* *stbar */
    }
 L3077: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && 
#line 47 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V9))
    {
      return 416;  /* *membar */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case NE:
      goto L50;
    case NEG:
      goto L63;
    case EQ:
      goto L107;
    case PLUS:
      goto L164;
    case MINUS:
      goto L182;
    case UNSPEC:
      goto L4028;
    case TRUNCATE:
      goto L1338;
    case SUBREG:
      goto L4029;
    case DIV:
      goto L1510;
    default:
     break;
   }
 L4027: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2072;
    }
  goto ret0;

 L50: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L51;
    }
  goto ret0;

 L51: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L52;
  goto ret0;

 L52: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L53;
  goto ret0;

 L53: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 8;  /* *snesi_zero */
    }
  goto ret0;

 L63: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L4030;
  goto ret0;

 L4030: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NE:
      goto L64;
    case EQ:
      goto L121;
    default:
     break;
   }
  goto ret0;

 L64: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L65;
    }
  goto ret0;

 L65: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L66;
  goto ret0;

 L66: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L67;
  goto ret0;

 L67: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 9;  /* *neg_snesi_zero */
    }
  goto ret0;

 L121: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L122;
    }
  goto ret0;

 L122: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L123;
  goto ret0;

 L123: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L124;
  goto ret0;

 L124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 15;  /* *neg_seqsi_zero */
    }
  goto ret0;

 L107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L108;
    }
  goto ret0;

 L108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L109;
  goto ret0;

 L109: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L110;
  goto ret0;

 L110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 14;  /* *seqsi_zero */
    }
  goto ret0;

 L164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L4032;
  goto ret0;

 L4032: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NE:
      goto L165;
    case EQ:
      goto L200;
    default:
     break;
   }
  goto ret0;

 L165: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L166;
    }
  goto ret0;

 L166: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L167;
  goto ret0;

 L167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L168;
    }
  goto ret0;

 L168: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L169;
  goto ret0;

 L169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 20;  /* *x_plus_i_ne_0 */
    }
  goto ret0;

 L200: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L201;
    }
  goto ret0;

 L201: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L202;
  goto ret0;

 L202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L203;
    }
  goto ret0;

 L203: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L204;
  goto ret0;

 L204: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 22;  /* *x_plus_i_eq_0 */
    }
  goto ret0;

 L182: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L183;
    }
  goto ret0;

 L183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L4034;
  goto ret0;

 L4034: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NE:
      goto L184;
    case EQ:
      goto L219;
    default:
     break;
   }
  goto ret0;

 L184: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L185;
    }
  goto ret0;

 L185: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L186;
  goto ret0;

 L186: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L187;
  goto ret0;

 L187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 21;  /* *x_minus_i_ne_0 */
    }
  goto ret0;

 L219: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L220;
    }
  goto ret0;

 L220: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L221;
  goto ret0;

 L221: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L222;
  goto ret0;

 L222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 23;  /* *x_minus_i_eq_0 */
    }
  goto ret0;

 L4028: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 2)
    goto L399;
  goto ret0;

 L399: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L400;
    }
  goto ret0;

 L400: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (call_address_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L401;
    }
  goto ret0;

 L401: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (const_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L402;
    }
  goto ret0;

 L402: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L403;
  goto ret0;

 L403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15
      && (
#line 1124 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(REGNO (operands[0]) == INTVAL (operands[3])) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == SImode)))
    {
      return 45;  /* load_pcrel_symsi */
    }
  goto ret0;

 L1338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L1339;
  goto ret0;

 L1339: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L1340;
  goto ret0;

 L1340: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L4036;
  goto ret0;

 L4036: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L1341;
    case ZERO_EXTEND:
      goto L1465;
    default:
     break;
   }
  goto ret0;

 L1341: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L1342;
    }
  goto ret0;

 L1342: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L1343;
  if (small_int_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L1393;
    }
  goto ret0;

 L1343: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L1344;
    }
  goto ret0;

 L1344: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L1345;
    }
  goto ret0;

 L1345: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1346;
  goto ret0;

 L1346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1347;
    }
  goto ret0;

 L1347: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4073 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 182;  /* smulsi3_highpart_v8plus */
    }
  goto ret0;

 L1393: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L1394;
    }
  goto ret0;

 L1394: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1395;
  goto ret0;

 L1395: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1396;
    }
  goto ret0;

 L1396: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4106 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 184;  /* const_smulsi3_highpart_v8plus */
    }
  goto ret0;

 L1465: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L1466;
    }
  goto ret0;

 L1466: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L1467;
  if (uns_small_int_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L1492;
    }
  goto ret0;

 L1467: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L1468;
    }
  goto ret0;

 L1468: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L1469;
    }
  goto ret0;

 L1469: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1470;
  goto ret0;

 L1470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1471;
    }
  goto ret0;

 L1471: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4280 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 189;  /* umulsi3_highpart_v8plus */
    }
  goto ret0;

 L1492: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L1493;
    }
  goto ret0;

 L1493: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1494;
  goto ret0;

 L1494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1495;
    }
  goto ret0;

 L1495: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4295 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 190;  /* const_umulsi3_highpart_v8plus */
    }
  goto ret0;

 L4029: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 4)
    goto L1363;
  goto L4027;

 L1363: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L1364;
  goto L4027;

 L1364: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L1365;
  goto L4027;

 L1365: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L1366;
  goto L4027;

 L1366: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L1367;
    }
  goto L4027;

 L1367: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L1368;
  goto L4027;

 L1368: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L1369;
    }
  goto L4027;

 L1369: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L1370;
    }
  goto L4027;

 L1370: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1371;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L4027;

 L1371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1372;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L4027;

 L1372: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4091 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 183;  /* *sparc.md:4082 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L4027;

 L1510: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1511;
    }
  goto ret0;

 L1511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (input_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1512;
    }
  goto ret0;

 L1512: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1513;
  goto ret0;

 L1513: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1514;
    }
  goto ret0;

 L1514: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4388 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_DEPRECATED_V8_INSNS && TARGET_ARCH64))
    {
      return 191;  /* divsi3_sp64 */
    }
  goto ret0;

 L2072: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2073;
  goto ret0;

 L2073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L2074;
  goto ret0;

 L2074: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == COMPARE)
    goto L2075;
  goto ret0;

 L2075: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2076;
  goto ret0;

 L2076: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 271;  /* *cmp_cc_set */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_7 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4007;
    case DImode:
      goto L4008;
    case CCmode:
      goto L4009;
    case CCXmode:
      goto L4010;
    case CC_NOOVmode:
      goto L4011;
    case CCX_NOOVmode:
      goto L4012;
    default:
      break;
    }
 L2412: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L2413;
 L2443: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x2;
  goto L2444;
 L2524: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4013;
    case DImode:
      goto L4014;
    case QImode:
      goto L4016;
    case HImode:
      goto L4017;
    default:
      break;
    }
 L2577: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2578;
    }
  goto ret0;

 L4007: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L49;
    }
  goto L2412;

 L49: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L4018;
  x2 = XEXP (x1, 0);
  goto L2412;

 L4018: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L2412;

 L4008: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L77;
    }
  goto L2412;

 L77: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L4038;
  x2 = XEXP (x1, 0);
  goto L2412;

 L4038: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NE:
      goto L78;
    case EQ:
      goto L135;
    case UNSPEC:
      goto L4046;
    case MULT:
      goto L1287;
    case ASHIFT:
      goto L2258;
    case ASHIFTRT:
      goto L2318;
    case LSHIFTRT:
      goto L2359;
    case REG:
    case SUBREG:
      goto L4042;
    default:
      x2 = XEXP (x1, 0);
      goto L2412;
   }
 L4042: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2081;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L78: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L79;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L79: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L80;
  x2 = XEXP (x1, 0);
  goto L2412;

 L80: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L81;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L81: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 10;  /* *snesi_zero_extend */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L136;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L137;
  x2 = XEXP (x1, 0);
  goto L2412;

 L137: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L138;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 16;  /* *seqsi_zero_extend */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L4046: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 2)
    goto L415;
  x2 = XEXP (x1, 0);
  goto L2412;

 L415: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L416;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L416: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (call_address_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L417;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L417: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (const_int_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L418;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L418: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L419;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15
      && (
#line 1124 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(REGNO (operands[0]) == INTVAL (operands[3])) && 
#line 82 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(Pmode == DImode)))
    {
      return 46;  /* load_pcrel_symdi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L4047;
  x2 = XEXP (x1, 0);
  goto L2412;

 L4047: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L1288;
    case ZERO_EXTEND:
      goto L1412;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1288: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1289;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L1290;
  if (small_int_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1309;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1290: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1291;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1291: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1292;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1293;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1293: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3962 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 178;  /* mulsidi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1309: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1310;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1311;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1311: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3975 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 179;  /* const_mulsidi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1412: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1413;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1413: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L1414;
  if (uns_small_int_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1448;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1414: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1415;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1415: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1416;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1416: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1417;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1417: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4169 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 185;  /* umulsidi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1448: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1449;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1450;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1450: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4236 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 188;  /* const_umulsidi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2258: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2259;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L2259: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2260;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L2260: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2261;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2261: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2262;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2262: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5657 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 303;  /* ashldi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2318: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2319;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L2319: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2320;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L2320: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2321;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2321: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2322;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2322: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5767 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 310;  /* ashrdi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2360;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L2360: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2361;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L2361: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2362;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2363;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2363: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5844 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 315;  /* lshrdi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2081: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2082;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2082: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCXmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L2083;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCXmode
      && GET_CODE (x2) == COMPARE)
    goto L2084;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2084: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2085;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 272;  /* *cmp_ccx_set64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L4009: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L880;
  goto L2412;

 L880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == COMPARE)
    goto L881;
  x2 = XEXP (x1, 0);
  goto L2412;

 L881: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L4049;
    case QImode:
      goto L4051;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L4049: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L882;
    case AND:
      goto L893;
    case MULT:
      goto L1275;
    case DIV:
      goto L1541;
    case UDIV:
      goto L1565;
    case NOT:
      goto L1893;
    default:
     break;
   }
 L4056: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L1851;
    }
 L4058: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_not_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L1939;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L882: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L883;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L884;
  x2 = XEXP (x1, 0);
  goto L2412;

 L884: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L885;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L885: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L886;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L887;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L887: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 122;  /* *cmp_zero_extendqisi2_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L893: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L894;
    }
  goto L4056;

 L894: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 255L)
    goto L895;
  goto L4056;

 L895: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L896;
  x3 = XEXP (x2, 0);
  goto L4056;

 L896: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L897;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4056;

 L897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L898;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4056;

 L898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L899;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4056;

 L899: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L900;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4056;

 L900: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    {
      return 123;  /* *cmp_zero_extendqisi2_andcc_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4056;

 L1275: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1276;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1276: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1277;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1278;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1278: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1279;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1279: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1280;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1280: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L1281;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1281: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1282;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1282: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 3924 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8 || TARGET_SPARCLITE || TARGET_DEPRECATED_V8_INSNS))
    {
      return 177;  /* *cmp_mul_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1541: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1542;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1542: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1543;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1544;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1544: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1545;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1546;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == DIV)
    goto L1547;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1547: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1548;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1548: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 4409 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8 || TARGET_DEPRECATED_V8_INSNS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 193;  /* *cmp_sdiv_cc_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1565: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1566;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1566: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1567;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1568;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1568: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1569;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1570;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UDIV)
    goto L1571;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1571: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1572;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1572: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 4499 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8 || TARGET_DEPRECATED_V8_INSNS))
    {
      return 196;  /* *cmp_udiv_cc_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1893: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == XOR)
    goto L1894;
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2052;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1894: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_or_zero_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1895;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1895: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arith_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1896;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1896: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1897;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1897: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1898;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1899;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1900;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1900: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == XOR)
    goto L1901;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1901: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1902;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1902: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    {
      return 248;  /* *cmp_cc_xor_not_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2052: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2053;
  x2 = XEXP (x1, 0);
  goto L2412;

 L2053: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2054;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2055;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L2056;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 269;  /* *cmp_cc_set_not */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1851: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1852;
    }
  goto L4058;

 L1852: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1853;
    }
  goto L4058;

 L1853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1854;
  x3 = XEXP (x2, 0);
  goto L4058;

 L1854: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1855;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4058;

 L1855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1856;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4058;

 L1856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cc_arith_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L1857;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4058;

 L1857: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1858;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4058;

 L1858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 4937 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(GET_CODE (operands[3]) == GET_CODE (operands[4])))
    {
      return 244;  /* *cmp_cc_arith_op_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4058;

 L1939: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == NOT)
    goto L1940;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1940: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (arith_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1941;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1941: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_or_zero_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1942;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1943;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1943: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1944;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1945;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cc_arith_not_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L1946;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1946: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L1947;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1947: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1948;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5030 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(GET_CODE (operands[3]) == GET_CODE (operands[4])))
    {
      return 252;  /* *cmp_cc_arith_op_not_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L4051: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == SUBREG)
    goto L4059;
  x2 = XEXP (x1, 0);
  goto L2412;

 L4059: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x3, 1))
    {
    case 3L:
      goto L947;
    case 7L:
      goto L964;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L947: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L948;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L949;
  x2 = XEXP (x1, 0);
  goto L2412;

 L949: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L950;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L951;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 3)
    goto L952;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L952: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 129;  /* *cmp_siqi_trunc_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L964: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L965;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L965: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L966;
  x2 = XEXP (x1, 0);
  goto L2412;

 L966: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L967;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L967: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L968;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L968: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 7)
    goto L969;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L969: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 131;  /* *cmp_diqi_trunc_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L4010: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L915;
  goto L2412;

 L915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCXmode
      && GET_CODE (x2) == COMPARE)
    goto L916;
  x2 = XEXP (x1, 0);
  goto L2412;

 L916: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L4061;
  x2 = XEXP (x1, 0);
  goto L2412;

 L4061: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L917;
    case AND:
      goto L928;
    case NOT:
      goto L1908;
    default:
     break;
   }
 L4063: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_operator (x3, DImode))
    {
      operands[3] = x3;
      goto L1864;
    }
 L4065: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_not_operator (x3, DImode))
    {
      operands[3] = x3;
      goto L1954;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L917: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L918;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L919;
  x2 = XEXP (x1, 0);
  goto L2412;

 L919: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L920;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L921;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L922;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L922: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 126;  /* *cmp_zero_extendqidi2_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L928: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L929;
    }
  goto L4063;

 L929: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 255L)
    goto L930;
  goto L4063;

 L930: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L931;
  x3 = XEXP (x2, 0);
  goto L4063;

 L931: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L932;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4063;

 L932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L933;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4063;

 L933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L934;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4063;

 L934: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L935;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4063;

 L935: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    {
      return 127;  /* *cmp_zero_extendqidi2_andcc_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4063;

 L1908: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == XOR)
    goto L1909;
  if (arith_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2063;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1909: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_or_zero_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L1910;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1910: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arith_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L1911;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1911: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1912;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1912: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1913;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1914;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L1915;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1915: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == XOR)
    goto L1916;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1916: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1917;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1917: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    {
      return 249;  /* *cmp_ccx_xor_not_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2064;
  x2 = XEXP (x1, 0);
  goto L2412;

 L2064: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2065;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2066;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2066: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L2067;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2067: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 270;  /* *cmp_ccx_set_not */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1864: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L1865;
    }
  goto L4065;

 L1865: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1866;
    }
  goto L4065;

 L1866: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1867;
  x3 = XEXP (x2, 0);
  goto L4065;

 L1867: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1868;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4065;

 L1868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1869;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4065;

 L1869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cc_arith_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L1870;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4065;

 L1870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1871;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4065;

 L1871: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 4950 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && GET_CODE (operands[3]) == GET_CODE (operands[4])))
    {
      return 245;  /* *cmp_ccx_arith_op_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4065;

 L1954: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == NOT)
    goto L1955;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1955: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (arith_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L1956;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1956: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_or_zero_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1957;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1958;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1958: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1959;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1959: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1960;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1960: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cc_arith_not_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L1961;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1961: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == NOT)
    goto L1962;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1962: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1963;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1963: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5044 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && GET_CODE (operands[3]) == GET_CODE (operands[4])))
    {
      return 253;  /* *cmp_ccx_arith_op_not_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L4011: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L1150;
  goto L2412;

 L1150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CC_NOOVmode
      && GET_CODE (x2) == COMPARE)
    goto L1151;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1151: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L4066;
  x2 = XEXP (x1, 0);
  goto L2412;

 L4066: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1152;
    case MINUS:
      goto L1221;
    case NEG:
      goto L1989;
    case ASHIFT:
      goto L2281;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1152: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1153;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1153: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1154;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1155;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1155: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1156;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1157;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1158;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1158: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1159;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1159: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      return 164;  /* *cmp_cc_plus_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1221: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_or_zero_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1222;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1222: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1223;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1224;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1224: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1225;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1225: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1226;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L1227;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1227: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1228;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1228: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      return 172;  /* cmp_minus_cc_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1989: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1990;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1990: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1991;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1991: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1992;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1992: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1993;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NEG)
    goto L1994;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1994: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 258;  /* *cmp_cc_set_neg */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2281: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2282;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L2282: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2283;
  x2 = XEXP (x1, 0);
  goto L2412;

 L2283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2284;
  x2 = XEXP (x1, 0);
  goto L2412;

 L2284: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2285;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2286;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L2287;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2288;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    {
      return 305;  /* *cmp_cc_set_ashift_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L4012: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L1163;
  goto L2412;

 L1163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCX_NOOVmode
      && GET_CODE (x2) == COMPARE)
    goto L1164;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L4070;
  x2 = XEXP (x1, 0);
  goto L2412;

 L4070: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1165;
    case MINUS:
      goto L1234;
    case NEG:
      goto L2000;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1165: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L1166;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1166: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1167;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1168;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1168: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1169;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1170;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L1171;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1172;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1172: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      return 165;  /* *cmp_ccx_plus_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1234: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L1235;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1235: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1236;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L1236: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1237;
  x2 = XEXP (x1, 0);
  goto L2412;

 L1237: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1238;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1239;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MINUS)
    goto L1240;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1241;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L1241: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      return 173;  /* *cmp_minus_ccx_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2000: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2001;
    }
  x2 = XEXP (x1, 0);
  goto L2412;

 L2001: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2002;
  x2 = XEXP (x1, 0);
  goto L2412;

 L2002: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2003;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2004;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NEG)
    goto L2005;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2005: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 259;  /* *cmp_ccx_set_neg */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2412;

 L2413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (address_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2414;
    }
  x2 = XEXP (x1, 0);
  goto L2443;

 L2414: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2415;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2443;

 L2415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2416;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2443;

 L2416: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  return 321;  /* *tablejump_sp64 */

 L2444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2445;
  x2 = XEXP (x1, 0);
  goto L2524;

 L2445: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MEM)
    goto L2446;
  x2 = XEXP (x1, 0);
  goto L2524;

 L2446: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (address_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2447;
    }
 L2462: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2463;
    }
  x2 = XEXP (x1, 0);
  goto L2524;

 L2447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2448;

 L2448: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2449;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2462;

 L2449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 324;  /* *call_value_address_sp64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2462;

 L2463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2464;

 L2464: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L2465;
    case RETURN:
      goto L4073;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2524;

 L2465: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 325;  /* *call_value_symbolic_sp64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2524;

 L4073: ATTRIBUTE_UNUSED_LABEL
  return 327;  /* *sibcall_value_symbolic_sp64 */

 L4013: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2525;
    }
  goto L2577;

 L2525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L4074;
  x2 = XEXP (x1, 0);
  goto L2577;

 L4074: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FFS:
      goto L2526;
    case MEM:
      goto L3082;
    case UNSPEC_VOLATILE:
      goto L4078;
    case ZERO_EXTEND:
      goto L3144;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2577;

 L2526: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2527;
    }
  x2 = XEXP (x1, 0);
  goto L2577;

 L2527: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2528;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L2528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2529;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L2529: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6608 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_SPARCLITE || TARGET_SPARCLET))
    {
      return 339;  /* ffssi2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3082: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3083;
    }
  x2 = XEXP (x1, 0);
  goto L2577;

 L3083: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3084;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3085;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3086;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 8)
    goto L3087;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3087: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3088;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3088: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3089;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3089: ATTRIBUTE_UNUSED_LABEL
  if (
#line 90 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V9 && (SImode == SImode || TARGET_ARCH64)))
    {
      return 417;  /* *sync_compare_and_swapsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L4078: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 9)
    goto L3118;
  x2 = XEXP (x1, 0);
  goto L2577;

 L3118: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3119;
    }
  x2 = XEXP (x1, 0);
  goto L2577;

 L3119: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3120;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L3121;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3122;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3122: ATTRIBUTE_UNUSED_LABEL
  if (
#line 161 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V8 || TARGET_V9))
    {
      return 420;  /* *swapsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == UNSPEC_VOLATILE
      && XVECLEN (x3, 0) == 1
      && XINT (x3, 1) == 10)
    goto L3145;
  x2 = XEXP (x1, 0);
  goto L2577;

 L3145: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (memory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3146;
    }
  x2 = XEXP (x1, 0);
  goto L2577;

 L3146: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3147;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L3148;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    {
      return 423;  /* *ldstubsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L4014: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2858;
    }
 L4015: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2866;
    }
  goto L2577;

 L2858: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 60)
    goto L2859;
  x2 = XEXP (x1, 0);
  goto L4015;

 L2859: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2860;
    }
  x2 = XEXP (x1, 0);
  goto L4015;

 L2860: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2861;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4015;

 L2861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2862;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4015;

 L2862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 382;  /* stack_protect_setdi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4015;

 L2866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L4079;
  x2 = XEXP (x1, 0);
  goto L2577;

 L4079: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L4081;
    case MEM:
      goto L3094;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2577;

 L4081: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 61)
    goto L2867;
  x2 = XEXP (x1, 0);
  goto L2577;

 L2867: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2868;
    }
  x2 = XEXP (x1, 0);
  goto L2577;

 L2868: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (memory_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2869;
    }
  x2 = XEXP (x1, 0);
  goto L2577;

 L2869: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2870;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L2870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2871;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L2871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 383;  /* stack_protect_testdi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3095;
    }
  x2 = XEXP (x1, 0);
  goto L2577;

 L3095: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3096;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MEM)
    goto L3097;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3098;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3098: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 8)
    goto L3099;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3099: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3100;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3100: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L3101;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3101: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 90 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V9 && (DImode == SImode || TARGET_ARCH64)) && 
#line 23 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_ARCH64 || TARGET_V8PLUS)))
    {
      return 418;  /* *sync_compare_and_swapdi */
    }
 L3113: ATTRIBUTE_UNUSED_LABEL
  if (
#line 102 "../../gcc-4.6.1/gcc/config/sparc/sync.md"
(TARGET_V8PLUS))
    {
      return 419;  /* *sync_compare_and_swapdi_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L4016: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3126;
    }
  goto L2577;

 L3126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 10)
    goto L3127;
  x2 = XEXP (x1, 0);
  goto L2577;

 L3127: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3128;
    }
  x2 = XEXP (x1, 0);
  goto L2577;

 L3128: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3129;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3129: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L3130;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    {
      return 421;  /* *ldstubqi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L4017: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3134;
    }
  goto L2577;

 L3134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L3135;
  x2 = XEXP (x1, 0);
  goto L2577;

 L3135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == UNSPEC_VOLATILE
      && XVECLEN (x3, 0) == 1
      && XINT (x3, 1) == 10)
    goto L3136;
  x2 = XEXP (x1, 0);
  goto L2577;

 L3136: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (memory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3137;
    }
  x2 = XEXP (x1, 0);
  goto L2577;

 L3137: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3138;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L3139;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L3139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    {
      return 422;  /* *ldstubhi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2577;

 L2578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2579;
  goto ret0;

 L2579: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MEM)
    goto L2580;
  goto ret0;

 L2580: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L4082;
  goto ret0;

 L4082: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == UNSPEC)
    goto L4084;
  goto ret0;

 L4084: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x4, 0))
    {
    case 2:
      goto L4086;
    case 1:
      goto L4087;
    default:
      break;
    }
  goto ret0;

 L4086: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x4, 1) == 30)
    goto L2581;
  goto ret0;

 L2581: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (symbolic_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L2582;
    }
  goto ret0;

 L2582: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tgd_symbolic_operand (x5, VOIDmode))
    {
      operands[2] = x5;
      goto L2583;
    }
  goto ret0;

 L2583: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  goto L2584;

 L2584: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2585;
  goto ret0;

 L2585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 348;  /* tgd_call64 */
    }
  goto ret0;

 L4087: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x4, 1) == 31)
    goto L2618;
  goto ret0;

 L2618: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (symbolic_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L2619;
    }
  goto ret0;

 L2619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2620;

 L2620: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2621;
  goto ret0;

 L2621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 352;  /* tldm_call64 */
    }
  goto ret0;
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L1;
    case PARALLEL:
      goto L3533;
    case CALL:
      goto L2425;
    case RETURN:
      goto L3535;
    case UNSPEC_VOLATILE:
      goto L3536;
    case CONST_INT:
      goto L3537;
    case PREFETCH:
      goto L2536;
    case TRAP_IF:
      goto L2544;
    default:
     break;
   }
  goto ret0;

 L1: ATTRIBUTE_UNUSED_LABEL
  return recog_5 (x0, insn, pnum_clobbers);

 L3533: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L47;
    case 3:
      goto L1254;
    default:
      break;
    }
  goto ret0;

 L47: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L48;
    case CALL:
      goto L2419;
    default:
     break;
   }
  goto ret0;

 L48: ATTRIBUTE_UNUSED_LABEL
  return recog_7 (x0, insn, pnum_clobbers);

 L2419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MEM)
    goto L2420;
  goto ret0;

 L2420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (address_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L2421;
    }
 L2432: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L2433;
    }
  goto ret0;

 L2421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2422;

 L2422: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2423;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2432;

 L2423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 322;  /* *call_address_sp64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2432;

 L2433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2434;

 L2434: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L2435;
    case RETURN:
      goto L4088;
    default:
     break;
   }
  goto ret0;

 L2435: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 323;  /* *call_symbolic_sp64 */
    }
  goto ret0;

 L4088: ATTRIBUTE_UNUSED_LABEL
  return 326;  /* *sibcall_symbolic_sp64 */

 L1254: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1255;
  goto ret0;

 L1255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L4091;
    case CCmode:
      goto L4090;
    default:
      break;
    }
  goto ret0;

 L4091: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 30)
    goto L2490;
 L4089: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1256;
    }
  goto ret0;

 L2490: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14)
    goto L2491;
  x2 = XEXP (x1, 0);
  goto L4089;

 L2491: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2492;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4089;

 L2492: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14)
    goto L2493;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4089;

 L2493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 6)
    goto L2494;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4089;

 L2494: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 14)
    goto L2495;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4089;

 L2495: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L2496;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4089;

 L2496: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L2497;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4089;

 L2497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L2498;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4089;

 L2498: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 328;  /* save_register_windowdi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4089;

 L1256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L1257;
  goto ret0;

 L1257: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1258;
    }
  goto ret0;

 L1258: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1259;
    }
  goto ret0;

 L1259: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1260;
  goto ret0;

 L1260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1261;
    }
  goto ret0;

 L1261: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1262;
  goto ret0;

 L1262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1263;
    }
  goto ret0;

 L1263: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3887 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 176;  /* muldi3_v8plus */
    }
  goto ret0;

 L4090: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L1523;
  goto ret0;

 L1523: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == COMPARE)
    goto L1524;
  goto ret0;

 L1524: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == DIV)
    goto L1525;
  goto ret0;

 L1525: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1526;
    }
  goto ret0;

 L1526: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1527;
    }
  goto ret0;

 L1527: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1528;
  goto ret0;

 L1528: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1529;
  goto ret0;

 L1529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1530;
    }
  goto ret0;

 L1530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == DIV)
    goto L1531;
  goto ret0;

 L1531: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1532;
  goto ret0;

 L1532: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1533;
  goto ret0;

 L1533: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1534;
  goto ret0;

 L1534: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1535;
    }
  goto ret0;

 L1535: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4409 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V8 || TARGET_DEPRECATED_V8_INSNS))
    {
      return 193;  /* *cmp_sdiv_cc_set */
    }
  goto ret0;

 L2425: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == MEM)
    goto L2426;
  goto ret0;

 L2426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (address_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2427;
    }
 L2438: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2439;
    }
  goto ret0;

 L2427: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L2428;

 L2428: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 322;  /* *call_address_sp64 */
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L2438;

 L2439: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L2440;

 L2440: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 323;  /* *call_symbolic_sp64 */
    }
  goto ret0;

 L3535: ATTRIBUTE_UNUSED_LABEL
  return 329;  /* *return_internal */

 L3536: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1)
    goto L4092;
  goto ret0;

 L4092: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 0L:
      goto L2501;
    case 1L:
      goto L2512;
    case 2L:
      goto L2514;
    case 5L:
      goto L2517;
    case 4L:
      goto L2519;
    default:
      break;
    }
  goto ret0;

 L2501: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 330;  /* blockage */
    }
  goto ret0;

 L2512: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 334;  /* flush_register_windows */
    }
  goto ret0;

 L2514: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2515;
    }
  goto ret0;

 L2515: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6494 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(GET_MODE (operands[0]) == Pmode))
    {
      return 335;  /* goto_handler_and_restore */
    }
  goto ret0;

 L2517: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 336;  /* do_builtin_setjmp_setup */
    }
  goto ret0;

 L2519: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L4097;
    case DImode:
      goto L4098;
    default:
      break;
    }
  goto ret0;

 L4097: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      return 337;  /* flush */
    }
  goto ret0;

 L4098: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      return 338;  /* flushdi */
    }
  goto ret0;

 L3537: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x0, 0) == 0L)
    {
      return 332;  /* nop */
    }
  goto ret0;

 L2536: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (address_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2537;
    }
 L2540: ATTRIBUTE_UNUSED_LABEL
  if (address_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2541;
    }
  goto ret0;

 L2537: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2538;
    }
  x1 = XEXP (x0, 0);
  goto L2540;

 L2538: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, DImode))
    {
      operands[2] = x1;
      return 340;  /* prefetch_64 */
    }
  x1 = XEXP (x0, 0);
  goto L2540;

 L2541: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2542;
    }
  goto ret0;

 L2542: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, SImode))
    {
      operands[2] = x1;
      return 341;  /* prefetch_32 */
    }
  goto ret0;

 L2544: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2545;
  if (noov_compare_operator (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2548;
    }
  goto ret0;

 L2545: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    {
      return 342;  /* trap */
    }
  goto ret0;

 L2548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case CCmode:
      goto L4099;
    case CCXmode:
      goto L4100;
    default:
      break;
    }
  goto ret0;

 L4099: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L2549;
  goto ret0;

 L2549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2550;
  goto ret0;

 L2550: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (arith_operand (x1, SImode))
    {
      operands[1] = x1;
      return 343;  /* *sparc.md:6894 */
    }
  goto ret0;

 L4100: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L2554;
  goto ret0;

 L2554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2555;
  goto ret0;

 L2555: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (arith_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2556;
    }
  goto ret0;

 L2556: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6909 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9))
    {
      return 344;  /* *sparc.md:6906 */
    }
  goto ret0;
 ret0:
  return -1;
}

static rtx
split_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case DImode:
      goto L4121;
    case SImode:
      goto L4122;
    case SFmode:
      goto L4124;
    case DFmode:
      goto L4125;
    case V2SImode:
      goto L4126;
    case V4HImode:
      goto L4127;
    case V8QImode:
      goto L4128;
    case TFmode:
      goto L4133;
    default:
      break;
    }
  goto ret0;

 L4121: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L3176;
    }
 L4123: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L3286;
    }
  goto ret0;

 L3176: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L4136;
 L3278: ATTRIBUTE_UNUSED_LABEL
  if (const_double_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L3279;
    }
  x1 = XEXP (x0, 0);
  goto L4123;

 L4136: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NE:
      goto L3177;
    case NEG:
      goto L3182;
    case EQ:
      goto L3218;
    case REG:
    case SUBREG:
      goto L4139;
    default:
      goto L3278;
   }
 L4139: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L3283;
    }
  goto L3278;

 L3177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3178;
    }
  goto L3278;

 L3178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 594 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64) && 
#line 596 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( ! reg_overlap_mentioned_p (operands[1], operands[0]))))
    {
      return gen_split_436 (insn, operands);
    }
  goto L3278;

 L3182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L4140;
  goto L3278;

 L4140: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NE:
      goto L3183;
    case EQ:
      goto L3224;
    default:
     break;
   }
  goto L3278;

 L3183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3184;
    }
  goto L3278;

 L3184: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 609 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64) && 
#line 611 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( ! reg_overlap_mentioned_p (operands[1], operands[0]))))
    {
      return gen_split_437 (insn, operands);
    }
  goto L3278;

 L3224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3225;
    }
  goto L3278;

 L3225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 700 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64) && 
#line 702 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( ! reg_overlap_mentioned_p (operands[1], operands[0]))))
    {
      return gen_split_443 (insn, operands);
    }
  goto L3278;

 L3218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3219;
    }
  goto L3278;

 L3219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 685 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64) && 
#line 687 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( ! reg_overlap_mentioned_p (operands[1], operands[0]))))
    {
      return gen_split_442 (insn, operands);
    }
  goto L3278;

 L3283: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1709 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
           && ((GET_CODE (operands[0]) == REG
                && REGNO (operands[0]) < 32)
               || (GET_CODE (operands[0]) == SUBREG
                   && GET_CODE (SUBREG_REG (operands[0])) == REG
                   && REGNO (SUBREG_REG (operands[0])) < 32))))))
    {
      return gen_split_465 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3278;

 L3279: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1676 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
           && ((GET_CODE (operands[0]) == REG
                && REGNO (operands[0]) < 32)
               || (GET_CODE (operands[0]) == SUBREG
                   && GET_CODE (SUBREG_REG (operands[0])) == REG
                   && REGNO (SUBREG_REG (operands[0])) < 32))))))
    {
      return gen_split_464 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4123;

 L3286: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_zero_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L3287;
    }
  goto ret0;

 L3287: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1790 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_466 (insn, operands);
    }
  goto ret0;

 L4122: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3187;
    }
  goto ret0;

 L3187: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L4142;
  goto ret0;

 L4142: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NE:
      goto L3188;
    case EQ:
      goto L3229;
    default:
     break;
   }
 L4144: ATTRIBUTE_UNUSED_LABEL
  if (noov_compare_operator (x1, SImode))
    {
      operands[2] = x1;
      goto L3274;
    }
  goto ret0;

 L3188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3189;
    }
  goto L4144;

 L3189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 624 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64) && 
#line 626 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( ! reg_overlap_mentioned_p (operands[1], operands[0]))))
    {
      return gen_split_438 (insn, operands);
    }
  goto L4144;

 L3229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3230;
    }
  goto L4144;

 L3230: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 715 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64) && 
#line 717 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( ! reg_overlap_mentioned_p (operands[1], operands[0]))))
    {
      return gen_split_444 (insn, operands);
    }
  goto L4144;

 L3274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (icc_or_fcc_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L3275;
    }
  goto ret0;

 L3275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 912 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9
   && REGNO (operands[1]) == SPARC_ICC_REG
   && (GET_MODE (operands[1]) == CCXmode
       /* 32-bit LTU/GEU are better implemented using addx/subx.  */
       || (GET_CODE (operands[2]) != LTU && GET_CODE (operands[2]) != GEU))))
    {
      return gen_split_449 (insn, operands);
    }
  goto ret0;

 L4124: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L3290;
    }
  goto ret0;

 L3290: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (fp_const_high_losum_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L3291;
    }
  goto ret0;

 L3291: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1935 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(REG_P (operands[0]) && REGNO (operands[0]) < 32))
    {
      return gen_split_470 (insn, operands);
    }
  goto ret0;

 L4125: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L3294;
    }
 L4129: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L3326;
    }
  goto ret0;

 L3294: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L4147;
  x1 = XEXP (x0, 0);
  goto L4129;

 L4147: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L3420;
    case ABS:
      goto L3435;
    case CONST_DOUBLE:
    case CONST_VECTOR:
      goto L4145;
    case REG:
    case SUBREG:
      goto L4146;
    default:
      x1 = XEXP (x0, 0);
      goto L4129;
   }
 L4145: ATTRIBUTE_UNUSED_LABEL
  if (const_double_or_vector_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L3295;
    }
 L4146: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L3311;
    }
  x1 = XEXP (x0, 0);
  goto L4129;

 L3420: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3421;
    }
  x1 = XEXP (x0, 0);
  goto L4129;

 L3421: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5451 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9) && 
#line 5455 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))))
    {
      return gen_split_565 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4129;

 L3435: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3436;
    }
  x1 = XEXP (x0, 0);
  goto L4129;

 L3436: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5547 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9) && 
#line 5551 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))))
    {
      return gen_split_570 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4129;

 L3295: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (GET_CODE (operands[0]) == REG
       && REGNO (operands[0]) < 32)
   && ! const_zero_operand (operands[1], GET_MODE (operands[0]))
   && reload_completed))
    {
      return gen_split_475 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4129;

 L3311: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2121 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((! TARGET_V9
    || (! TARGET_ARCH64
        && ((GET_CODE (operands[0]) == REG
             && REGNO (operands[0]) < 32)
            || (GET_CODE (operands[0]) == SUBREG
                && GET_CODE (SUBREG_REG (operands[0])) == REG
                && REGNO (SUBREG_REG (operands[0])) < 32))))
   && reload_completed))
    {
      return gen_split_479 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4129;

 L3326: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_zero_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L3327;
    }
  goto ret0;

 L3327: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2228 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_483 (insn, operands);
    }
  goto ret0;

 L4126: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L3298;
    }
 L4130: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L3330;
    }
  goto ret0;

 L3298: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L4149;
  x1 = XEXP (x0, 0);
  goto L4130;

 L4149: ATTRIBUTE_UNUSED_LABEL
  if (const_double_or_vector_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L3299;
    }
  if (register_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L3315;
    }
  x1 = XEXP (x0, 0);
  goto L4130;

 L3299: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (GET_CODE (operands[0]) == REG
       && REGNO (operands[0]) < 32)
   && ! const_zero_operand (operands[1], GET_MODE (operands[0]))
   && reload_completed))
    {
      return gen_split_476 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4130;

 L3315: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2121 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((! TARGET_V9
    || (! TARGET_ARCH64
        && ((GET_CODE (operands[0]) == REG
             && REGNO (operands[0]) < 32)
            || (GET_CODE (operands[0]) == SUBREG
                && GET_CODE (SUBREG_REG (operands[0])) == REG
                && REGNO (SUBREG_REG (operands[0])) < 32))))
   && reload_completed))
    {
      return gen_split_480 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4130;

 L3330: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_zero_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L3331;
    }
  goto ret0;

 L3331: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2228 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_484 (insn, operands);
    }
  goto ret0;

 L4127: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L3302;
    }
 L4131: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L3334;
    }
  goto ret0;

 L3302: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L4151;
  x1 = XEXP (x0, 0);
  goto L4131;

 L4151: ATTRIBUTE_UNUSED_LABEL
  if (const_double_or_vector_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L3303;
    }
  if (register_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L3319;
    }
  x1 = XEXP (x0, 0);
  goto L4131;

 L3303: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (GET_CODE (operands[0]) == REG
       && REGNO (operands[0]) < 32)
   && ! const_zero_operand (operands[1], GET_MODE (operands[0]))
   && reload_completed))
    {
      return gen_split_477 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4131;

 L3319: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2121 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((! TARGET_V9
    || (! TARGET_ARCH64
        && ((GET_CODE (operands[0]) == REG
             && REGNO (operands[0]) < 32)
            || (GET_CODE (operands[0]) == SUBREG
                && GET_CODE (SUBREG_REG (operands[0])) == REG
                && REGNO (SUBREG_REG (operands[0])) < 32))))
   && reload_completed))
    {
      return gen_split_481 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4131;

 L3334: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_zero_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L3335;
    }
  goto ret0;

 L3335: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2228 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_485 (insn, operands);
    }
  goto ret0;

 L4128: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L3306;
    }
 L4132: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L3338;
    }
  goto ret0;

 L3306: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L4153;
  x1 = XEXP (x0, 0);
  goto L4132;

 L4153: ATTRIBUTE_UNUSED_LABEL
  if (const_double_or_vector_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L3307;
    }
  if (register_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L3323;
    }
  x1 = XEXP (x0, 0);
  goto L4132;

 L3307: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2066 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (GET_CODE (operands[0]) == REG
       && REGNO (operands[0]) < 32)
   && ! const_zero_operand (operands[1], GET_MODE (operands[0]))
   && reload_completed))
    {
      return gen_split_478 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4132;

 L3323: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2121 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((! TARGET_V9
    || (! TARGET_ARCH64
        && ((GET_CODE (operands[0]) == REG
             && REGNO (operands[0]) < 32)
            || (GET_CODE (operands[0]) == SUBREG
                && GET_CODE (SUBREG_REG (operands[0])) == REG
                && REGNO (SUBREG_REG (operands[0])) < 32))))
   && reload_completed))
    {
      return gen_split_482 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4132;

 L3338: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_zero_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L3339;
    }
  goto ret0;

 L3339: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2228 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_486 (insn, operands);
    }
  goto ret0;

 L4133: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L3342;
    }
 L4134: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L3346;
    }
 L4135: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L3354;
    }
  goto ret0;

 L3342: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L4157;
  x1 = XEXP (x0, 0);
  goto L4134;

 L4157: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L3359;
    case NEG:
      goto L3410;
    case ABS:
      goto L3425;
    case REG:
    case SUBREG:
      goto L4155;
    default:
      goto L4156;
   }
 L4155: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L3343;
    }
 L4156: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L3351;
    }
  x1 = XEXP (x0, 0);
  goto L4134;

 L3359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L3360;
    }
 L3368: ATTRIBUTE_UNUSED_LABEL
  if (v9_register_compare_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L3369;
    }
  x1 = XEXP (x0, 0);
  goto L4134;

 L3360: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3361;
    }
  goto L3368;

 L3361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3362;
  goto L3368;

 L3362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[3] = x2;
      goto L3363;
    }
  x2 = XEXP (x1, 0);
  goto L3368;

 L3363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, TFmode))
    {
      operands[4] = x2;
      goto L3364;
    }
  x2 = XEXP (x1, 0);
  goto L3368;

 L3364: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2657 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && !TARGET_HARD_QUAD) && 
#line 2659 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed)))
    {
      return gen_split_499 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3368;

 L3369: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3370;
    }
  x1 = XEXP (x0, 0);
  goto L4134;

 L3370: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3371;
  x1 = XEXP (x0, 0);
  goto L4134;

 L3371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[3] = x2;
      goto L3372;
    }
  x1 = XEXP (x0, 0);
  goto L4134;

 L3372: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, TFmode))
    {
      operands[4] = x2;
      goto L3373;
    }
  x1 = XEXP (x0, 0);
  goto L4134;

 L3373: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2700 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64 && TARGET_FPU && ! TARGET_HARD_QUAD) && 
#line 2702 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed)))
    {
      return gen_split_500 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4134;

 L3410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L3411;
    }
  x1 = XEXP (x0, 0);
  goto L4134;

 L3411: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5403 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_V9) && 
#line 5408 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))))
    {
      return gen_split_562 (insn, operands);
    }
 L3416: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5426 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9) && 
#line 5430 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))))
    {
      return gen_split_563 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4134;

 L3425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L3426;
    }
  x1 = XEXP (x0, 0);
  goto L4134;

 L3426: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5491 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9) && 
#line 5495 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))))
    {
      return gen_split_567 (insn, operands);
    }
 L3431: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5522 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && !TARGET_HARD_QUAD) && 
#line 5526 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))))
    {
      return gen_split_568 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4134;

 L3343: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2357 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_ARCH64
       || (TARGET_FPU
           && ! TARGET_HARD_QUAD)
       || ! fp_register_operand (operands[0], TFmode))))
    {
      return gen_split_488 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L4156;

 L3351: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2420 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((reload_completed
    && offsettable_memref_p (operands[1])
    && (! TARGET_ARCH64
	|| ! TARGET_HARD_QUAD
	|| ! fp_register_operand (operands[0], TFmode)))))
    {
      return gen_split_490 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4134;

 L3346: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_zero_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L3347;
    }
  x1 = XEXP (x0, 0);
  goto L4135;

 L3347: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2392 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(reload_completed))
    {
      return gen_split_489 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4135;

 L3354: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L3355;
    }
  goto ret0;

 L3355: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2455 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((reload_completed
    && offsettable_memref_p (operands[0])
    && (! TARGET_ARCH64
	|| ! TARGET_HARD_QUAD
	|| ! fp_register_operand (operands[1], TFmode)))))
    {
      return gen_split_491 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
split_insns (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L4101;
    case SET:
      goto L3175;
    default:
     break;
   }
  goto ret0;

 L4101: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L3150;
  goto ret0;

 L3150: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L3151;
  goto ret0;

 L3151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4102;
    case DImode:
      goto L4103;
    default:
      break;
    }
  goto ret0;

 L4102: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3152;
    }
  goto ret0;

 L3152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L4104;
  goto ret0;

 L4104: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NE:
      goto L3153;
    case NEG:
      goto L3161;
    case EQ:
      goto L3194;
    case PLUS:
      goto L3235;
    case MINUS:
      goto L3245;
    case AND:
      goto L3378;
    case IOR:
      goto L3386;
    case XOR:
      goto L3394;
    case NOT:
      goto L3402;
    default:
     break;
   }
  goto ret0;

 L3153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3154;
    }
  goto ret0;

 L3154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3155;
  goto ret0;

 L3155: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3156;
  goto ret0;

 L3156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_433 (insn, operands);
    }
  goto ret0;

 L3161: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L4113;
  goto ret0;

 L4113: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NE:
      goto L3162;
    case EQ:
      goto L3203;
    default:
     break;
   }
  goto ret0;

 L3162: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3163;
    }
  goto ret0;

 L3163: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3164;
  goto ret0;

 L3164: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3165;
  goto ret0;

 L3165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_434 (insn, operands);
    }
  goto ret0;

 L3203: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3204;
    }
  goto ret0;

 L3204: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3205;
  goto ret0;

 L3205: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3206;
  goto ret0;

 L3206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_440 (insn, operands);
    }
  goto ret0;

 L3194: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3195;
    }
  goto ret0;

 L3195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3196;
  goto ret0;

 L3196: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3197;
  goto ret0;

 L3197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_439 (insn, operands);
    }
  goto ret0;

 L3235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L4115;
  goto ret0;

 L4115: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NE:
      goto L3236;
    case EQ:
      goto L3256;
    default:
     break;
   }
  goto ret0;

 L3236: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3237;
    }
  goto ret0;

 L3237: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3238;
  goto ret0;

 L3238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3239;
    }
  goto ret0;

 L3239: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3240;
  goto ret0;

 L3240: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_445 (insn, operands);
    }
  goto ret0;

 L3256: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3257;
    }
  goto ret0;

 L3257: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3258;
  goto ret0;

 L3258: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3259;
    }
  goto ret0;

 L3259: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3260;
  goto ret0;

 L3260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_447 (insn, operands);
    }
  goto ret0;

 L3245: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3246;
    }
  goto ret0;

 L3246: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L4117;
  goto ret0;

 L4117: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NE:
      goto L3247;
    case EQ:
      goto L3267;
    default:
     break;
   }
  goto ret0;

 L3247: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3248;
    }
  goto ret0;

 L3248: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3249;
  goto ret0;

 L3249: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3250;
  goto ret0;

 L3250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_446 (insn, operands);
    }
  goto ret0;

 L3267: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3268;
    }
  goto ret0;

 L3268: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3269;
  goto ret0;

 L3269: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3270;
  goto ret0;

 L3270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_448 (insn, operands);
    }
  goto ret0;

 L3378: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3379;
    }
  goto ret0;

 L3379: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_compl_high_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3380;
    }
  goto ret0;

 L3380: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3381;
  goto ret0;

 L3381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      return gen_split_540 (insn, operands);
    }
  goto ret0;

 L3386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3387;
    }
  goto ret0;

 L3387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_compl_high_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3388;
    }
  goto ret0;

 L3388: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3389;
  goto ret0;

 L3389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      return gen_split_545 (insn, operands);
    }
  goto ret0;

 L3394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3395;
    }
  goto ret0;

 L3395: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_compl_high_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3396;
    }
  goto ret0;

 L3396: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3397;
  goto ret0;

 L3397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      return gen_split_550 (insn, operands);
    }
  goto ret0;

 L3402: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == XOR)
    goto L3403;
  goto ret0;

 L3403: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3404;
    }
  goto ret0;

 L3404: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_compl_high_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3405;
    }
  goto ret0;

 L3405: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3406;
  goto ret0;

 L3406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      return gen_split_551 (insn, operands);
    }
  goto ret0;

 L4103: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3169;
    }
  goto ret0;

 L3169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L4119;
  goto ret0;

 L4119: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NE:
      goto L3170;
    case EQ:
      goto L3211;
    default:
     break;
   }
  goto ret0;

 L3170: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3171;
    }
  goto ret0;

 L3171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3172;
  goto ret0;

 L3172: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3173;
  goto ret0;

 L3173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_435 (insn, operands);
    }
  goto ret0;

 L3211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3212;
    }
  goto ret0;

 L3212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3213;
  goto ret0;

 L3213: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3214;
  goto ret0;

 L3214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_441 (insn, operands);
    }
  goto ret0;

 L3175: ATTRIBUTE_UNUSED_LABEL
  return split_1 (x0, insn);
 ret0:
  return 0;
}

rtx
peephole2_insns (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  if (peep2_current_count >= 2)
    goto L3438;
  goto ret0;

 L3438: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L3439;
  goto ret0;

 L3439: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L4160;
    case SFmode:
      goto L4163;
    case DImode:
      goto L4169;
    default:
      break;
    }
  goto ret0;

 L4160: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3440;
    }
 L4161: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3454;
    }
 L4162: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3462;
    }
 L4165: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3486;
    }
 L4166: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3494;
    }
  goto ret0;

 L3440: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3441;
  x1 = XEXP (x0, 0);
  goto L4161;

 L3441: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3442;
  x1 = XEXP (x0, 0);
  goto L4161;

 L3442: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3443;
    }
  x1 = XEXP (x0, 0);
  goto L4161;

 L3443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L4170;
  x1 = XEXP (x0, 0);
  goto L4161;

 L4170: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L4172;
  x1 = XEXP (x0, 0);
  goto L4161;

 L4172: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6643 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9
   && mems_ok_for_ldd_peep (operands[0], operands[1], NULL_RTX)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_591 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L4173: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6654 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_V9
   && mems_ok_for_ldd_peep (operands[1], operands[0], NULL_RTX)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_592 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L4161;

 L3454: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (memory_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3455;
    }
  x1 = XEXP (x0, 0);
  goto L4162;

 L3455: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3456;
  x1 = XEXP (x0, 0);
  goto L4162;

 L3456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3457;
    }
  x1 = XEXP (x0, 0);
  goto L4162;

 L3457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3458;
    }
  x1 = XEXP (x0, 0);
  goto L4162;

 L3458: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6665 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[0], operands[2]) 
   && mems_ok_for_ldd_peep (operands[1], operands[3], operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_593 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L4162;

 L3462: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3463;
    }
  x1 = XEXP (x0, 0);
  goto L4165;

 L3463: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3464;
  x1 = XEXP (x0, 0);
  goto L4165;

 L3464: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3465;
    }
  x1 = XEXP (x0, 0);
  goto L4165;

 L3465: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3466;
    }
  x1 = XEXP (x0, 0);
  goto L4165;

 L3466: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6677 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[1], operands[3]) 
   && mems_ok_for_ldd_peep (operands[0], operands[2], NULL_RTX)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_594 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L4165;

 L3486: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L4174;
  x1 = XEXP (x0, 0);
  goto L4166;

 L4174: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3487;
    }
 L4175: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3519;
    }
  x1 = XEXP (x0, 0);
  goto L4166;

 L3487: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3488;
  x1 = XEXP (x0, 1);
  goto L4175;

 L3488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3489;
    }
  x1 = XEXP (x0, 1);
  goto L4175;

 L3489: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3490;
    }
  x1 = XEXP (x0, 1);
  goto L4175;

 L3490: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6713 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[2], operands[0]) 
  && mems_ok_for_ldd_peep (operands[3], operands[1], operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_597 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L4175;

 L3519: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3520;
  x1 = XEXP (x0, 0);
  goto L4166;

 L3520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L3521;
  x1 = XEXP (x0, 0);
  goto L4166;

 L3521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == COMPARE)
    goto L3522;
  x1 = XEXP (x0, 0);
  goto L4166;

 L3522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3523;
    }
  x1 = XEXP (x0, 0);
  goto L4166;

 L3523: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 6767 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
((rtx_equal_p (operands[2], operands[0])
    || rtx_equal_p (operands[2], operands[1]))
    && ! SPARC_FP_REG_P (REGNO (operands[0]))
    && ! SPARC_FP_REG_P (REGNO (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_601 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L4166;

 L3494: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3495;
    }
  goto ret0;

 L3495: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3496;
  goto ret0;

 L3496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3497;
    }
  goto ret0;

 L3497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3498;
    }
  goto ret0;

 L3498: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6725 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[3], operands[1]) 
  && mems_ok_for_ldd_peep (operands[2], operands[0], NULL_RTX)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_598 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L4163: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L3470;
    }
 L4164: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L3478;
    }
 L4167: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L3502;
    }
 L4168: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L3510;
    }
  goto ret0;

 L3470: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (memory_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L3471;
    }
  x1 = XEXP (x0, 0);
  goto L4164;

 L3471: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3472;
  x1 = XEXP (x0, 0);
  goto L4164;

 L3472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3473;
    }
  x1 = XEXP (x0, 0);
  goto L4164;

 L3473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L3474;
    }
  x1 = XEXP (x0, 0);
  goto L4164;

 L3474: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6689 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[0], operands[2]) 
   && mems_ok_for_ldd_peep (operands[1], operands[3], operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_595 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L4164;

 L3478: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L3479;
    }
  x1 = XEXP (x0, 0);
  goto L4167;

 L3479: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3480;
  x1 = XEXP (x0, 0);
  goto L4167;

 L3480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3481;
    }
  x1 = XEXP (x0, 0);
  goto L4167;

 L3481: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L3482;
    }
  x1 = XEXP (x0, 0);
  goto L4167;

 L3482: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6701 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[1], operands[3]) 
  && mems_ok_for_ldd_peep (operands[0], operands[2], NULL_RTX)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_596 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L4167;

 L3502: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (memory_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L3503;
    }
  x1 = XEXP (x0, 0);
  goto L4168;

 L3503: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3504;
  x1 = XEXP (x0, 0);
  goto L4168;

 L3504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3505;
    }
  x1 = XEXP (x0, 0);
  goto L4168;

 L3505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L3506;
    }
  x1 = XEXP (x0, 0);
  goto L4168;

 L3506: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6738 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[2], operands[0]) 
  && mems_ok_for_ldd_peep (operands[3], operands[1], operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_599 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L4168;

 L3510: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L3511;
    }
  goto ret0;

 L3511: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3512;
  goto ret0;

 L3512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3513;
    }
  goto ret0;

 L3513: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L3514;
    }
  goto ret0;

 L3514: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6750 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[3], operands[1]) 
  && mems_ok_for_ldd_peep (operands[2], operands[0], NULL_RTX)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_600 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L4169: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L3527;
    }
  goto ret0;

 L3527: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L3528;
    }
  goto ret0;

 L3528: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3529;
  goto ret0;

 L3529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCXmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L3530;
  goto ret0;

 L3530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCXmode
      && GET_CODE (x2) == COMPARE)
    goto L3531;
  goto ret0;

 L3531: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3532;
    }
  goto ret0;

 L3532: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 6782 "../../gcc-4.6.1/gcc/config/sparc/sparc.md"
(TARGET_ARCH64
   && (rtx_equal_p (operands[2], operands[0])
       || rtx_equal_p (operands[2], operands[1]))
   && ! SPARC_FP_REG_P (REGNO (operands[0]))
   && ! SPARC_FP_REG_P (REGNO (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_602 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

