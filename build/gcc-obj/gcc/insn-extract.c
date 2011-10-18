/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 423:  /* *ldstubsi */
    case 422:  /* *ldstubhi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 421:  /* *ldstubqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 420:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 419:  /* *sync_compare_and_swapdi_v8plus */
    case 418:  /* *sync_compare_and_swapdi */
    case 417:  /* *sync_compare_and_swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 416:  /* *membar */
    case 415:  /* *stbar */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 383:  /* stack_protect_testdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 382:  /* stack_protect_setdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 381:  /* *tldo_stx_sp64 */
    case 380:  /* *tldo_stw_sp64 */
    case 379:  /* *tldo_sth_sp64 */
    case 378:  /* *tldo_stb_sp64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0, 1));
      break;

    case 376:  /* *tldo_ldsw1_sp64 */
    case 375:  /* *tldo_lduw1_sp64 */
    case 373:  /* *tldo_ldsh2_sp64 */
    case 372:  /* *tldo_ldsh1_sp64 */
    case 371:  /* *tldo_lduh2_sp64 */
    case 370:  /* *tldo_lduh1_sp64 */
    case 368:  /* *tldo_ldsb3_sp64 */
    case 367:  /* *tldo_ldsb2_sp64 */
    case 366:  /* *tldo_ldsb1_sp64 */
    case 365:  /* *tldo_ldub3_sp64 */
    case 364:  /* *tldo_ldub2_sp64 */
    case 363:  /* *tldo_ldub1_sp64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 1));
      break;

    case 377:  /* *tldo_ldx_sp64 */
    case 374:  /* *tldo_lduw_sp64 */
    case 369:  /* *tldo_lduh_sp64 */
    case 362:  /* *tldo_ldub_sp64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 352:  /* tldm_call64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 348:  /* tgd_call64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 341:  /* prefetch_32 */
    case 340:  /* prefetch_64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 339:  /* ffssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 338:  /* flushdi */
    case 337:  /* flush */
    case 335:  /* goto_handler_and_restore */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 333:  /* *branch_sp64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 413:  /* alignaddrdi_vis */
    case 412:  /* faligndatav8qi_vis */
    case 411:  /* faligndatav4hi_vis */
    case 410:  /* faligndatav2si_vis */
    case 409:  /* faligndatadi_vis */
    case 408:  /* fmuld8ulx16_vis */
    case 406:  /* fmul8ulx16_vis */
    case 404:  /* fmul8x16al_vis */
    case 401:  /* fpmerge_vis */
    case 399:  /* fpack32_vis */
    case 331:  /* probe_stack_rangedi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 342:  /* trap */
    case 336:  /* do_builtin_setjmp_setup */
    case 334:  /* flush_register_windows */
    case 332:  /* nop */
    case 330:  /* blockage */
    case 329:  /* *return_internal */
      break;

    case 328:  /* save_register_windowdi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      break;

    case 326:  /* *sibcall_symbolic_sp64 */
    case 323:  /* *call_symbolic_sp64 */
    case 322:  /* *call_address_sp64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 321:  /* *tablejump_sp64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 319:  /* *sparc.md:5889 */
    case 318:  /* *sparc.md:5873 */
    case 312:  /* *lshrsi3_extend */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 317:  /* *sparc.md:5861 */
    case 316:  /* *sparc.md:5849 */
    case 308:  /* *ashrsi3_extend2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 272:  /* *cmp_ccx_set64 */
    case 271:  /* *cmp_cc_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 253:  /* *cmp_ccx_arith_op_not_set */
    case 252:  /* *cmp_cc_arith_op_not_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 251:  /* *cmp_ccx_arith_op_not */
    case 250:  /* *cmp_cc_arith_op_not */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 249:  /* *cmp_ccx_xor_not_set */
    case 248:  /* *cmp_cc_xor_not_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 247:  /* *cmp_ccx_xor_not */
    case 246:  /* *cmp_cc_xor_not */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 245:  /* *cmp_ccx_arith_op_set */
    case 244:  /* *cmp_cc_arith_op_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 243:  /* *cmp_ccx_arith_op */
    case 242:  /* *cmp_cc_arith_op */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 199:  /* *umacdi */
    case 198:  /* *smacdi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 197:  /* *smacsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 193:  /* *cmp_sdiv_cc_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 315:  /* lshrdi3_v8plus */
    case 310:  /* ashrdi3_v8plus */
    case 303:  /* ashldi3_v8plus */
    case 191:  /* divsi3_sp64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 190:  /* const_umulsi3_highpart_v8plus */
    case 184:  /* const_smulsi3_highpart_v8plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 189:  /* umulsi3_highpart_v8plus */
    case 183:  /* *sparc.md:4082 */
    case 182:  /* smulsi3_highpart_v8plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 313:  /* *lshrsi3_extend2 */
    case 227:  /* *or_not_v4qi */
    case 226:  /* *or_not_v2hi */
    case 225:  /* *or_not_si */
    case 224:  /* *or_not_v8qi_sp64 */
    case 223:  /* *or_not_v4hi_sp64 */
    case 222:  /* *or_not_v2si_sp64 */
    case 221:  /* *or_not_di_sp64 */
    case 213:  /* *and_not_v4qi */
    case 212:  /* *and_not_v2hi */
    case 211:  /* *and_not_si */
    case 210:  /* *and_not_v8qi_sp64 */
    case 209:  /* *and_not_v4hi_sp64 */
    case 208:  /* *and_not_v2si_sp64 */
    case 207:  /* *and_not_di_sp64 */
    case 187:  /* const_umulsidi3_sp64 */
    case 181:  /* const_mulsidi3_sp64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 396:  /* *nandv4qi_vis */
    case 395:  /* *nandv2hi_vis */
    case 394:  /* *nandsf_vis */
    case 393:  /* *nandv8qi_vis */
    case 392:  /* *nandv4hi_vis */
    case 391:  /* *nandv2si_vis */
    case 390:  /* *nanddf_vis */
    case 283:  /* *multf3_extend */
    case 282:  /* *muldf3_extend */
    case 186:  /* *umulsidi3_sp64 */
    case 180:  /* *mulsidi3_sp64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 188:  /* const_umulsidi3_v8plus */
    case 179:  /* const_mulsidi3_v8plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 185:  /* umulsidi3_v8plus */
    case 178:  /* mulsidi3_v8plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 176:  /* muldi3_v8plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 196:  /* *cmp_udiv_cc_set */
    case 177:  /* *cmp_mul_set */
    case 173:  /* *cmp_minus_ccx_set */
    case 172:  /* cmp_minus_cc_set */
    case 165:  /* *cmp_ccx_plus_set */
    case 164:  /* *cmp_cc_plus_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 171:  /* *cmp_minus_ccx */
    case 170:  /* *cmp_minus_cc */
    case 163:  /* *cmp_ccx_plus */
    case 162:  /* *cmp_cc_plus */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 167:  /* *subx_extend_sp64 */
    case 159:  /* *addx_extend_sp64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 139:  /* *cmp_zero_extract_sp64 */
    case 138:  /* *cmp_zero_extract */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 127:  /* *cmp_zero_extendqidi2_andcc_set */
    case 123:  /* *cmp_zero_extendqisi2_andcc_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 305:  /* *cmp_cc_set_ashift_1 */
    case 270:  /* *cmp_ccx_set_not */
    case 269:  /* *cmp_cc_set_not */
    case 259:  /* *cmp_ccx_set_neg */
    case 258:  /* *cmp_cc_set_neg */
    case 131:  /* *cmp_diqi_trunc_set */
    case 129:  /* *cmp_siqi_trunc_set */
    case 126:  /* *cmp_zero_extendqidi2_set */
    case 122:  /* *cmp_zero_extendqisi2_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 320:  /* jump */
    case 125:  /* *cmp_zero_qi_sp64 */
    case 121:  /* *cmp_zero_qi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 304:  /* *cmp_cc_ashift_1 */
    case 268:  /* *cmp_ccx_not */
    case 267:  /* *cmp_cc_not */
    case 257:  /* *cmp_ccx_neg */
    case 256:  /* *cmp_cc_neg */
    case 130:  /* *cmp_diqi_trunc */
    case 128:  /* *cmp_siqi_trunc */
    case 124:  /* *cmp_zero_extendqidi2 */
    case 120:  /* *cmp_zero_extendqisi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 113:  /* *movtf_cc_reg_sp64 */
    case 112:  /* *movtf_cc_v9 */
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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 400:  /* fexpand_vis */
    case 398:  /* fpackfix_vis */
    case 397:  /* fpack16_vis */
    case 77:  /* embmedany_brsum */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 359:  /* tie_add64 */
    case 355:  /* tldo_add64 */
    case 347:  /* tgd_add64 */
    case 61:  /* *movdi_lo_sum_pic_label_ref */
    case 57:  /* *movsi_lo_sum_pic_label_ref */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 60:  /* *movdi_high_pic_label_ref */
    case 56:  /* *movsi_high_pic_label_ref */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 414:  /* pdist_vis */
    case 358:  /* tie_ld64 */
    case 64:  /* movdi_pic_gotdata_op */
    case 55:  /* movsi_pic_gotdata_op */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 360:  /* tle_hix22_sp64 */
    case 356:  /* tie_hi22 */
    case 353:  /* tldo_hix22 */
    case 345:  /* tgd_hi22 */
    case 79:  /* embmedany_texthi */
    case 78:  /* embmedany_textuhi */
    case 75:  /* embmedany_sethi */
    case 72:  /* setlm */
    case 71:  /* sethh */
    case 68:  /* seth44 */
    case 63:  /* movdi_high_pic */
    case 54:  /* movsi_high_pic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 361:  /* tle_lox10_sp64 */
    case 357:  /* tie_lo10 */
    case 354:  /* tldo_lox10 */
    case 351:  /* tldm_add64 */
    case 346:  /* tgd_lo10 */
    case 80:  /* embmedany_textulo */
    case 73:  /* sethm */
    case 69:  /* setm44 */
    case 62:  /* movdi_lo_sum_pic */
    case 53:  /* movsi_lo_sum_pic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 344:  /* *sparc.md:6906 */
    case 343:  /* *sparc.md:6894 */
    case 97:  /* *movtf_insn_sp64_no_fpu */
    case 96:  /* *movtf_insn_sp64_hq */
    case 95:  /* *movtf_insn_sp64 */
    case 94:  /* *movdf_insn_sp64_no_fpu */
    case 93:  /* *movdf_insn_sp64 */
    case 92:  /* *movdf_insn_sp64 */
    case 91:  /* *movdf_insn_sp64 */
    case 90:  /* *movdf_insn_sp64 */
    case 89:  /* *movdf_insn_sp32_no_fpu */
    case 88:  /* *movdf_insn_sp32 */
    case 85:  /* *movsf_insn_no_fpu */
    case 84:  /* *movsf_insn */
    case 83:  /* *movsf_insn */
    case 82:  /* *movsf_insn */
    case 59:  /* *movdi_insn_sp64 */
    case 58:  /* *movdi_insn_sp32 */
    case 50:  /* *movsi_insn */
    case 48:  /* *movhi_insn */
    case 47:  /* *movqi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 46:  /* load_pcrel_symdi */
    case 45:  /* load_pcrel_symsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 44:  /* *inverted_int_branch_sp64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 43:  /* *normal_int_branch_sp64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 42:  /* *inverted_fpe_branch */
    case 40:  /* *inverted_fp_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 41:  /* *normal_fpe_branch */
    case 39:  /* *normal_fp_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 38:  /* *inverted_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 37:  /* *normal_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 34:  /* *x_minus_sltu_plus_y */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 307:  /* *ashrsi3_extend */
    case 241:  /* *xor_not_v4qi */
    case 240:  /* *xor_not_v2hi */
    case 239:  /* *xor_not_si */
    case 238:  /* *xor_not_v8qi_sp64 */
    case 237:  /* *xor_not_v4hi_sp64 */
    case 236:  /* *xor_not_v2si_sp64 */
    case 235:  /* *xor_not_di_sp64 */
    case 166:  /* subx */
    case 158:  /* addx */
    case 33:  /* *x_minus_y_minus_sltu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 31:  /* *sltu_plus_x_plus_y */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 27:  /* *neg_sltu_plus_x */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 35:  /* *sgeu_plus_x */
    case 30:  /* *sltu_plus_x */
    case 26:  /* *neg_sltu_minus_x */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 349:  /* tldm_hi22 */
    case 29:  /* *neg_sgeu_insn */
    case 28:  /* *sgeu_insn */
    case 25:  /* *neg_sltu_insn */
    case 24:  /* *sltu_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 23:  /* *x_minus_i_eq_0 */
    case 21:  /* *x_minus_i_ne_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 327:  /* *sibcall_value_symbolic_sp64 */
    case 325:  /* *call_value_symbolic_sp64 */
    case 324:  /* *call_value_address_sp64 */
    case 22:  /* *x_plus_i_eq_0 */
    case 20:  /* *x_plus_i_ne_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 156:  /* fix_truncdfdi2 */
    case 155:  /* fix_truncsfdi2 */
    case 153:  /* fix_truncdfsi2 */
    case 152:  /* fix_truncsfsi2 */
    case 18:  /* *neg_seqdi_zero */
    case 12:  /* *neg_snedi_zero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 350:  /* tldm_lo10 */
    case 300:  /* sqrtsf2 */
    case 299:  /* sqrtdf2 */
    case 298:  /* *sqrttf2_hq */
    case 297:  /* abssf2 */
    case 296:  /* *absdf2_v9 */
    case 295:  /* *absdf2_notv9 */
    case 294:  /* *abstf2_v9 */
    case 293:  /* *abstf2_hq_v9 */
    case 292:  /* *abstf2_notv9 */
    case 291:  /* negsf2 */
    case 290:  /* *negdf2_v9 */
    case 289:  /* *negdf2_notv9 */
    case 288:  /* *negtf2_v9 */
    case 287:  /* *negtf2_notv9 */
    case 266:  /* one_cmplv4qi2 */
    case 265:  /* one_cmplv2hi2 */
    case 264:  /* one_cmplsi2 */
    case 263:  /* *one_cmplv8qi2_sp64 */
    case 262:  /* *one_cmplv4hi2_sp64 */
    case 261:  /* *one_cmplv2si2_sp64 */
    case 260:  /* *one_cmpldi2_sp64 */
    case 255:  /* negsi2 */
    case 254:  /* *negdi2_sp64 */
    case 157:  /* *fix_trunctfdi2_hq */
    case 154:  /* *fix_trunctfsi2_hq */
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
    case 117:  /* *zero_extendqidi2_insn */
    case 116:  /* *zero_extendqisi2_insn */
    case 115:  /* *zero_extendqihi2_insn */
    case 114:  /* *zero_extendhisi2_insn */
    case 87:  /* *movsf_high */
    case 66:  /* *sethi_di_medlow */
    case 65:  /* *sethi_di_medlow_embmedany_pic */
    case 52:  /* *movsi_high */
    case 36:  /* *x_minus_sgeu */
    case 32:  /* *x_minus_sltu */
    case 19:  /* *seqdi_zero_trunc */
    case 17:  /* *seqdi_zero */
    case 13:  /* *snedi_zero_trunc */
    case 11:  /* *snedi_zero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 15:  /* *neg_seqsi_zero */
    case 9:  /* *neg_snesi_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 16:  /* *seqsi_zero_extend */
    case 14:  /* *seqsi_zero */
    case 10:  /* *snesi_zero_extend */
    case 8:  /* *snesi_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 407:  /* fmuld8sux16_vis */
    case 405:  /* fmul8sux16_vis */
    case 403:  /* fmul8x16au_vis */
    case 402:  /* fmul8x16_vis */
    case 389:  /* subv2hi3 */
    case 388:  /* subv4hi3 */
    case 387:  /* subv2si3 */
    case 386:  /* addv2hi3 */
    case 385:  /* addv4hi3 */
    case 384:  /* addv2si3 */
    case 314:  /* *lshrdi3_sp64 */
    case 311:  /* lshrsi3 */
    case 309:  /* *ashrdi3_sp64 */
    case 306:  /* ashrsi3 */
    case 302:  /* *ashldi3_sp64 */
    case 301:  /* ashlsi3 */
    case 286:  /* divsf3 */
    case 285:  /* divdf3 */
    case 284:  /* *divtf3_hq */
    case 281:  /* mulsf3 */
    case 280:  /* muldf3 */
    case 279:  /* *multf3_hq */
    case 278:  /* subsf3 */
    case 277:  /* subdf3 */
    case 276:  /* *subtf3_hq */
    case 275:  /* addsf3 */
    case 274:  /* adddf3 */
    case 273:  /* *addtf3_hq */
    case 234:  /* xorv4qi3 */
    case 233:  /* xorv2hi3 */
    case 232:  /* xorsi3 */
    case 231:  /* *xorv8qi3_sp64 */
    case 230:  /* *xorv4hi3_sp64 */
    case 229:  /* *xorv2si3_sp64 */
    case 228:  /* *xordi3_sp64 */
    case 220:  /* iorv4qi3 */
    case 219:  /* iorv2hi3 */
    case 218:  /* iorsi3 */
    case 217:  /* *iorv8qi3_sp64 */
    case 216:  /* *iorv4hi3_sp64 */
    case 215:  /* *iorv2si3_sp64 */
    case 214:  /* *iordi3_sp64 */
    case 206:  /* andv4qi3 */
    case 205:  /* andv2hi3 */
    case 204:  /* andsi3 */
    case 203:  /* *andv8qi3_sp64 */
    case 202:  /* *andv4hi3_sp64 */
    case 201:  /* *andv2si3_sp64 */
    case 200:  /* *anddi3_sp64 */
    case 195:  /* udivdi3 */
    case 194:  /* udivsi3_sp64 */
    case 192:  /* divdi3 */
    case 175:  /* *muldi3_sp64 */
    case 174:  /* mulsi3 */
    case 169:  /* subsi3 */
    case 168:  /* *subdi3_sp64 */
    case 161:  /* addsi3 */
    case 160:  /* *adddi3_sp64 */
    case 86:  /* *movsf_lo_sum */
    case 81:  /* embmedany_textlo */
    case 76:  /* embmedany_losum */
    case 74:  /* setlo */
    case 70:  /* setl44 */
    case 67:  /* *losum_di_medlow */
    case 51:  /* *movsi_lo_sum */
    case 49:  /* *movhi_lo_sum */
    case 7:  /* *cmptf_fp */
    case 6:  /* *cmpdf_fp */
    case 5:  /* *cmpsf_fp */
    case 4:  /* *cmptf_fpe */
    case 3:  /* *cmpdf_fpe */
    case 2:  /* *cmpsf_fpe */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1:  /* *cmpdi_sp64 */
    case 0:  /* *cmpsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
