/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "dfp.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "regs.h"
#include "tm-constrs.h"
#include "ggc.h"
#include "basic-block.h"
#include "integrate.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1111 */
rtx
gen_load_pcrel_symsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	2)),
		gen_hard_reg_clobber (SImode, 15)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1111 */
rtx
gen_load_pcrel_symdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	2)),
		gen_hard_reg_clobber (DImode, 15)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1224 */
rtx
gen_movsi_lo_sum_pic (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand2),
	0)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1237 */
rtx
gen_movsi_high_pic (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	0)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1249 */
rtx
gen_movsi_pic_gotdata_op (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	19));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1457 */
rtx
gen_movdi_lo_sum_pic (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand2),
	0)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1470 */
rtx
gen_movdi_high_pic (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	0)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1482 */
rtx
gen_movdi_pic_gotdata_op (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	19));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1516 */
rtx
gen_seth44 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	6)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1522 */
rtx
gen_setm44 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand2),
	7)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1529 */
rtx
gen_setl44 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1536 */
rtx
gen_sethh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	9)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1542 */
rtx
gen_setlm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	10)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1548 */
rtx
gen_sethm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand2),
	18)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1555 */
rtx
gen_setlo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1562 */
rtx
gen_embmedany_sethi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	11)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1568 */
rtx
gen_embmedany_losum (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1575 */
rtx
gen_embmedany_brsum (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	11));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1581 */
rtx
gen_embmedany_textuhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	13)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1587 */
rtx
gen_embmedany_texthi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	14)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1593 */
rtx
gen_embmedany_textulo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand2),
	15)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1600 */
rtx
gen_embmedany_textlo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2588 */
rtx
gen_movdf_cc_v9 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand2,
		const0_rtx),
	operand3,
	operand4));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2603 */
rtx
gen_movdf_cc_reg_sp64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand2,
		const0_rtx),
	operand3,
	operand4));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3237 */
rtx
gen_extendsfdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3276 */
rtx
gen_truncdfsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3318 */
rtx
gen_floatsisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3326 */
rtx
gen_floatsidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3355 */
rtx
gen_floatdisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3369 */
rtx
gen_floatdidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3405 */
rtx
gen_fix_truncsfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_FIX (SFmode,
	operand1)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3413 */
rtx
gen_fix_truncdfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_FIX (DFmode,
	operand1)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3442 */
rtx
gen_fix_truncsfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	gen_rtx_FIX (SFmode,
	operand1)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3456 */
rtx
gen_fix_truncdfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	gen_rtx_FIX (DFmode,
	operand1)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3549 */
rtx
gen_addx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	const0_rtx)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3613 */
rtx
gen_addsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3722 */
rtx
gen_subx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	const0_rtx)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3785 */
rtx
gen_subsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3815 */
rtx
gen_cmp_minus_cc_set (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3843 */
rtx
gen_mulsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3874 */
rtx
gen_muldi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3950 */
rtx
gen_mulsidi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3963 */
rtx
gen_const_mulsidi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4021 */
rtx
gen_const_mulsidi3_sp64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4059 */
rtx
gen_smulsi3_highpart_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4092 */
rtx
gen_const_smulsi3_highpart_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	operand2),
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4157 */
rtx
gen_umulsidi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4215 */
rtx
gen_const_umulsidi3_sp64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4224 */
rtx
gen_const_umulsidi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4266 */
rtx
gen_umulsi3_highpart_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4281 */
rtx
gen_const_umulsi3_highpart_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	operand2),
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4376 */
rtx
gen_divsi3_sp64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4386 */
rtx
gen_divdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4468 */
rtx
gen_udivsi3_sp64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4477 */
rtx
gen_udivdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4575 */
rtx
gen_andsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4575 */
rtx
gen_andv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4575 */
rtx
gen_andv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4676 */
rtx
gen_iorsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4676 */
rtx
gen_iorv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4676 */
rtx
gen_iorv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4777 */
rtx
gen_xorsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4777 */
rtx
gen_xorv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4777 */
rtx
gen_xorv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5088 */
rtx
gen_negsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5171 */
rtx
gen_one_cmplsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5171 */
rtx
gen_one_cmplv2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V2HImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5171 */
rtx
gen_one_cmplv4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V4QImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5255 */
rtx
gen_adddf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5264 */
rtx
gen_addsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5287 */
rtx
gen_subdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5296 */
rtx
gen_subsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5319 */
rtx
gen_muldf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5328 */
rtx
gen_mulsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5369 */
rtx
gen_divdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5378 */
rtx
gen_divsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5467 */
rtx
gen_negsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5563 */
rtx
gen_abssf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5583 */
rtx
gen_sqrtdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5591 */
rtx
gen_sqrtsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5601 */
rtx
gen_ashlsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5645 */
rtx
gen_ashldi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5692 */
rtx
gen_ashrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5755 */
rtx
gen_ashrdi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5765 */
rtx
gen_lshrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5832 */
rtx
gen_lshrdi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5901 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6274 */
rtx
gen_save_register_windowdi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	30),
	gen_rtx_REG (DImode,
	14)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	14),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		gen_rtx_REG (DImode,
	14),
		operand0),
	6)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	31),
	gen_rtx_REG (DImode,
	15))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6330 */
rtx
gen_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	0);
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6409 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6472 */
rtx
gen_flush_register_windows (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	1);
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6478 */
rtx
gen_goto_handler_and_restore (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	2);
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6504 */
rtx
gen_do_builtin_setjmp_setup (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	5);
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6562 */
rtx
gen_flush (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	4);
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6568 */
rtx
gen_flushdi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	4);
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6583 */
rtx
gen_ffssi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6791 */
rtx
gen_prefetch_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2);
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6816 */
rtx
gen_prefetch_32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2);
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6844 */
rtx
gen_trap (void)
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	const_int_rtx[MAX_SAVED_CONST_INT + (5)]);
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6895 */
rtx
gen_tgd_hi22 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	30)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6902 */
rtx
gen_tgd_lo10 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand2),
	30)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6919 */
rtx
gen_tgd_add64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand2,
		operand3),
	30)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6939 */
rtx
gen_tgd_call64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	30)),
	operand3)),
		gen_hard_reg_clobber (DImode, 15)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6950 */
rtx
gen_tldm_hi22 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	31)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6956 */
rtx
gen_tldm_lo10 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	31)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6971 */
rtx
gen_tldm_add64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand2),
	31)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6989 */
rtx
gen_tldm_call64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	31)),
	operand2)),
		gen_hard_reg_clobber (DImode, 15)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6999 */
rtx
gen_tldo_hix22 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7006 */
rtx
gen_tldo_lox10 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand2),
	32)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7023 */
rtx
gen_tldo_add64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand2,
		operand3),
	32)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7032 */
rtx
gen_tie_hi22 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	33)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7039 */
rtx
gen_tie_lo10 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand2),
	33)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7057 */
rtx
gen_tie_ld64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	33));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7076 */
rtx
gen_tie_add64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand2,
		operand3),
	33)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7100 */
rtx
gen_tle_hix22_sp64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	34)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7107 */
rtx
gen_tle_lox10_sp64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand2),
	34)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7486 */
rtx
gen_stack_protect_setdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	60)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (DImode),
	const0_rtx)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7536 */
rtx
gen_stack_protect_testdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	61)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (DImode),
	const0_rtx)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7550 */
rtx
gen_addv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7559 */
rtx
gen_addv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7570 */
rtx
gen_addv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7579 */
rtx
gen_subv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7588 */
rtx
gen_subv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7599 */
rtx
gen_subv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7633 */
rtx
gen_fpack16_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		operand1),
	40));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7642 */
rtx
gen_fpackfix_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		operand1),
	42));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7651 */
rtx
gen_fpack32_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	41));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7661 */
rtx
gen_fexpand_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		operand1),
	43));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7675 */
rtx
gen_fpmerge_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	44));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7686 */
rtx
gen_fmul8x16_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7696 */
rtx
gen_fmul8x16au_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7705 */
rtx
gen_fmul8x16al_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	45));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7716 */
rtx
gen_fmul8sux16_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7725 */
rtx
gen_fmul8ulx16_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	46));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7736 */
rtx
gen_fmuld8sux16_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7745 */
rtx
gen_fmuld8ulx16_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	47));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7758 */
rtx
gen_faligndatadi_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	48));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7758 */
rtx
gen_faligndatav2si_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	48));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7758 */
rtx
gen_faligndatav4hi_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	48));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7758 */
rtx
gen_faligndatav8qi_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	48));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7768 */
rtx
gen_alignaddrdi_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	49));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7776 */
rtx
gen_pdist_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:454 */
rtx
gen_cstoresi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 460 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[2]) == ZERO_EXTRACT && operands[3] != const0_rtx)
    operands[2] = force_reg (SImode, operands[2]);
  if (emit_scc_insn (operands)) DONE; else FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand2,
		operand3)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:466 */
rtx
gen_cstoredi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 472 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[2]) == ZERO_EXTRACT && operands[3] != const0_rtx)
    operands[2] = force_reg (DImode, operands[2]);
  if (emit_scc_insn (operands)) DONE; else FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand2,
		operand3)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:478 */
rtx
gen_cstoresf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 484 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ if (emit_scc_insn (operands)) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand2,
		operand3)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:478 */
rtx
gen_cstoredf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 484 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ if (emit_scc_insn (operands)) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand2,
		operand3)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:478 */
rtx
gen_cstoretf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 484 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ if (emit_scc_insn (operands)) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand2,
		operand3)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:491 */
rtx
gen_seqsi_special (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 499 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ operands[3] = gen_reg_rtx (SImode); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (SImode,
	copy_rtx (operand3),
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 100))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:501 */
rtx
gen_seqdi_special (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 508 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ operands[3] = gen_reg_rtx (DImode); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_XOR (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (SImode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:510 */
rtx
gen_snesi_special (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 518 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ operands[3] = gen_reg_rtx (SImode); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (SImode,
	copy_rtx (operand3),
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 100))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:520 */
rtx
gen_snedi_special (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 527 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ operands[3] = gen_reg_rtx (DImode); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_XOR (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (SImode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:537 */
extern rtx gen_split_432 (rtx, rtx *);
rtx
gen_split_432 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 548 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:551 */
extern rtx gen_split_433 (rtx, rtx *);
rtx
gen_split_433 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 562 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:565 */
extern rtx gen_split_434 (rtx, rtx *);
rtx
gen_split_434 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 580 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_MINUS (SImode,
	const0_rtx,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	const0_rtx,
	const0_rtx),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	const0_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:583 */
extern rtx gen_split_435 (rtx, rtx *);
rtx
gen_split_435 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 595 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (DImode,
	gen_rtx_NE (DImode,
	operand1,
	const0_rtx),
	const1_rtx,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:598 */
extern rtx gen_split_436 (rtx, rtx *);
rtx
gen_split_436 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 610 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (DImode,
	gen_rtx_NE (DImode,
	operand1,
	const0_rtx),
	constm1_rtx,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:613 */
extern rtx gen_split_437 (rtx, rtx *);
rtx
gen_split_437 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 625 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_NE (DImode,
	operand1,
	const0_rtx),
	const1_rtx,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:628 */
extern rtx gen_split_438 (rtx, rtx *);
rtx
gen_split_438 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 639 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:642 */
extern rtx gen_split_439 (rtx, rtx *);
rtx
gen_split_439 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 653 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_GEU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:656 */
extern rtx gen_split_440 (rtx, rtx *);
rtx
gen_split_440 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 671 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_MINUS (SImode,
	const0_rtx,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	const0_rtx,
	constm1_rtx),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	const0_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:674 */
extern rtx gen_split_441 (rtx, rtx *);
rtx
gen_split_441 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 686 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (DImode,
	gen_rtx_EQ (DImode,
	operand1,
	const0_rtx),
	const1_rtx,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:689 */
extern rtx gen_split_442 (rtx, rtx *);
rtx
gen_split_442 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 701 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (DImode,
	gen_rtx_EQ (DImode,
	operand1,
	const0_rtx),
	constm1_rtx,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:704 */
extern rtx gen_split_443 (rtx, rtx *);
rtx
gen_split_443 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 716 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_EQ (DImode,
	operand1,
	const0_rtx),
	const1_rtx,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:723 */
extern rtx gen_split_444 (rtx, rtx *);
rtx
gen_split_444 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 736 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:739 */
extern rtx gen_split_445 (rtx, rtx *);
rtx
gen_split_445 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 752 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand2,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:755 */
extern rtx gen_split_446 (rtx, rtx *);
rtx
gen_split_446 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 768 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_GEU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:771 */
extern rtx gen_split_447 (rtx, rtx *);
rtx
gen_split_447 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 784 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand2,
	gen_rtx_GEU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:900 */
extern rtx gen_split_448 (rtx, rtx *);
rtx
gen_split_448 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 915 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand2), SImode,
		operand1,
		const0_rtx),
	const1_rtx,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:920 */
rtx
gen_cbranchcc4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:930 */
rtx
gen_cbranchsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 936 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[1]) == ZERO_EXTRACT && operands[2] != const0_rtx)
    operands[1] = force_reg (SImode, operands[1]);
  emit_conditional_branch_insn (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:943 */
rtx
gen_cbranchdi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 949 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[1]) == ZERO_EXTRACT && operands[2] != const0_rtx)
    operands[1] = force_reg (DImode, operands[1]);
  emit_conditional_branch_insn (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:956 */
rtx
gen_cbranchsf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 962 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ emit_conditional_branch_insn (operands); DONE; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:956 */
rtx
gen_cbranchdf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 962 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ emit_conditional_branch_insn (operands); DONE; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:956 */
rtx
gen_cbranchtf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 962 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{ emit_conditional_branch_insn (operands); DONE; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1133 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1137 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (QImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1154 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1158 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (HImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1184 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1188 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (SImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1264 */
rtx
gen_movsi_pic_label_ref (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1273 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  crtl->uses_pic_offset_table = 1;
  operands[2] = gen_rtx_SYMBOL_REF (Pmode, "_GLOBAL_OFFSET_TABLE_");
  if (!can_create_pseudo_p ())
    {
      operands[3] = operands[0];
      operands[4] = operands[0];
    }
  else
    {
      operands[3] = gen_reg_rtx (SImode);
      operands[4] = gen_reg_rtx (SImode);
    }
  operands[5] = pic_offset_table_rtx;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_LO_SUM (SImode,
	copy_rtx (operand3),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand5,
	copy_rtx (operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1321 */
rtx
gen_movdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1325 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (DImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1413 */
rtx
gen_movdi_pic_label_ref (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1422 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  crtl->uses_pic_offset_table = 1;
  operands[2] = gen_rtx_SYMBOL_REF (Pmode, "_GLOBAL_OFFSET_TABLE_");
  if (!can_create_pseudo_p ())
    {
      operands[3] = operands[0];
      operands[4] = operands[0];
    }
  else
    {
      operands[3] = gen_reg_rtx (DImode);
      operands[4] = gen_reg_rtx (DImode);
    }
  operands[5] = pic_offset_table_rtx;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_LO_SUM (DImode,
	copy_rtx (operand3),
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand5,
	copy_rtx (operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1608 */
rtx
gen_reload_indi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1615 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  sparc_emit_set_symbolic_const64 (operands[0], operands[1], operands[2]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1620 */
rtx
gen_reload_outdi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1627 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  sparc_emit_set_symbolic_const64 (operands[0], operands[1], operands[2]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1666 */
extern rtx gen_split_463 (rtx, rtx *);
rtx
gen_split_463 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1678 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  emit_insn (gen_movsi (gen_highpart (SImode, operands[0]),
			GEN_INT (CONST_DOUBLE_HIGH (operands[1]))));

  /* Slick... but this trick loses if this subreg constant part
     can be done in one insn.  */
  if (CONST_DOUBLE_LOW (operands[1]) == CONST_DOUBLE_HIGH (operands[1])
      && ! SPARC_SETHI32_P (CONST_DOUBLE_HIGH (operands[1]))
      && ! SPARC_SIMM13_P (CONST_DOUBLE_HIGH (operands[1])))
    {
      emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			    gen_highpart (SImode, operands[0])));
    }
  else
    {
      emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			    GEN_INT (CONST_DOUBLE_LOW (operands[1]))));
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1699 */
extern rtx gen_split_464 (rtx, rtx *);
rtx
gen_split_464 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1711 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_src = operands[1];
  rtx dest1, dest2;
  rtx src1, src2;

  dest1 = gen_highpart (SImode, set_dest);
  dest2 = gen_lowpart (SImode, set_dest);
  src1 = gen_highpart (SImode, set_src);
  src2 = gen_lowpart (SImode, set_src);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if (reg_overlap_mentioned_p (dest1, src2))
    {
      emit_insn (gen_movsi (dest2, src2));
      emit_insn (gen_movsi (dest1, src1));
    }
  else
    {
      emit_insn (gen_movsi (dest1, src1));
      emit_insn (gen_movsi (dest2, src2));
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1780 */
extern rtx gen_split_465 (rtx, rtx *);
rtx
gen_split_465 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1789 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  emit_insn (gen_movsi (adjust_address (operands[0], SImode, 0), const0_rtx));
  emit_insn (gen_movsi (adjust_address (operands[0], SImode, 4), const0_rtx));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1799 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1803 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (SFmode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1799 */
rtx
gen_movv2hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1803 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (V2HImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1799 */
rtx
gen_movv4qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1803 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (V4QImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1925 */
extern rtx gen_split_469 (rtx, rtx *);
rtx
gen_split_469 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LO_SUM (SFmode,
	copy_rtx (operand0),
	copy_rtx (operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1933 */
rtx
gen_movdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1937 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (DFmode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1933 */
rtx
gen_movv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1937 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (V2SImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1933 */
rtx
gen_movv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1937 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (V4HImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:1933 */
rtx
gen_movv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1937 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (V8QImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2056 */
extern rtx gen_split_474 (rtx, rtx *);
rtx
gen_split_474 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2065 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[0] = gen_rtx_raw_REG (DImode, REGNO (operands[0]));

  if (TARGET_ARCH64)
    {
#if HOST_BITS_PER_WIDE_INT == 32
      gcc_unreachable ();
#else
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx tem = simplify_subreg (DImode, operands[1], mode, 0);
      emit_insn (gen_movdi (operands[0], tem));
#endif
    }
  else
    {
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx hi = simplify_subreg (SImode, operands[1], mode, 0);
      rtx lo = simplify_subreg (SImode, operands[1], mode, 4);

      gcc_assert (GET_CODE (hi) == CONST_INT);
      gcc_assert (GET_CODE (lo) == CONST_INT);

      emit_insn (gen_movsi (gen_highpart (SImode, operands[0]), hi));

      /* Slick... but this trick loses if this subreg constant part
         can be done in one insn.  */
      if (lo == hi
	  && ! SPARC_SETHI32_P (INTVAL (hi))
	  && ! SPARC_SIMM13_P (INTVAL (hi)))
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			        gen_highpart (SImode, operands[0])));
        }
      else
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]), lo));
        }
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2056 */
extern rtx gen_split_475 (rtx, rtx *);
rtx
gen_split_475 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2065 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[0] = gen_rtx_raw_REG (DImode, REGNO (operands[0]));

  if (TARGET_ARCH64)
    {
#if HOST_BITS_PER_WIDE_INT == 32
      gcc_unreachable ();
#else
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx tem = simplify_subreg (DImode, operands[1], mode, 0);
      emit_insn (gen_movdi (operands[0], tem));
#endif
    }
  else
    {
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx hi = simplify_subreg (SImode, operands[1], mode, 0);
      rtx lo = simplify_subreg (SImode, operands[1], mode, 4);

      gcc_assert (GET_CODE (hi) == CONST_INT);
      gcc_assert (GET_CODE (lo) == CONST_INT);

      emit_insn (gen_movsi (gen_highpart (SImode, operands[0]), hi));

      /* Slick... but this trick loses if this subreg constant part
         can be done in one insn.  */
      if (lo == hi
	  && ! SPARC_SETHI32_P (INTVAL (hi))
	  && ! SPARC_SIMM13_P (INTVAL (hi)))
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			        gen_highpart (SImode, operands[0])));
        }
      else
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]), lo));
        }
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2056 */
extern rtx gen_split_476 (rtx, rtx *);
rtx
gen_split_476 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2065 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[0] = gen_rtx_raw_REG (DImode, REGNO (operands[0]));

  if (TARGET_ARCH64)
    {
#if HOST_BITS_PER_WIDE_INT == 32
      gcc_unreachable ();
#else
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx tem = simplify_subreg (DImode, operands[1], mode, 0);
      emit_insn (gen_movdi (operands[0], tem));
#endif
    }
  else
    {
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx hi = simplify_subreg (SImode, operands[1], mode, 0);
      rtx lo = simplify_subreg (SImode, operands[1], mode, 4);

      gcc_assert (GET_CODE (hi) == CONST_INT);
      gcc_assert (GET_CODE (lo) == CONST_INT);

      emit_insn (gen_movsi (gen_highpart (SImode, operands[0]), hi));

      /* Slick... but this trick loses if this subreg constant part
         can be done in one insn.  */
      if (lo == hi
	  && ! SPARC_SETHI32_P (INTVAL (hi))
	  && ! SPARC_SIMM13_P (INTVAL (hi)))
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			        gen_highpart (SImode, operands[0])));
        }
      else
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]), lo));
        }
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2056 */
extern rtx gen_split_477 (rtx, rtx *);
rtx
gen_split_477 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2065 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[0] = gen_rtx_raw_REG (DImode, REGNO (operands[0]));

  if (TARGET_ARCH64)
    {
#if HOST_BITS_PER_WIDE_INT == 32
      gcc_unreachable ();
#else
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx tem = simplify_subreg (DImode, operands[1], mode, 0);
      emit_insn (gen_movdi (operands[0], tem));
#endif
    }
  else
    {
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx hi = simplify_subreg (SImode, operands[1], mode, 0);
      rtx lo = simplify_subreg (SImode, operands[1], mode, 4);

      gcc_assert (GET_CODE (hi) == CONST_INT);
      gcc_assert (GET_CODE (lo) == CONST_INT);

      emit_insn (gen_movsi (gen_highpart (SImode, operands[0]), hi));

      /* Slick... but this trick loses if this subreg constant part
         can be done in one insn.  */
      if (lo == hi
	  && ! SPARC_SETHI32_P (INTVAL (hi))
	  && ! SPARC_SIMM13_P (INTVAL (hi)))
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			        gen_highpart (SImode, operands[0])));
        }
      else
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]), lo));
        }
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2111 */
extern rtx gen_split_478 (rtx, rtx *);
rtx
gen_split_478 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2123 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_src = operands[1];
  rtx dest1, dest2;
  rtx src1, src2;
  enum machine_mode half_mode;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (DFmode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;
  
  dest1 = gen_highpart (half_mode, set_dest);
  dest2 = gen_lowpart (half_mode, set_dest);
  src1 = gen_highpart (half_mode, set_src);
  src2 = gen_lowpart (half_mode, set_src);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if (reg_overlap_mentioned_p (dest1, src2))
    {
      emit_move_insn_1 (dest2, src2);
      emit_move_insn_1 (dest1, src1);
    }
  else
    {
      emit_move_insn_1 (dest1, src1);
      emit_move_insn_1 (dest2, src2);
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2111 */
extern rtx gen_split_479 (rtx, rtx *);
rtx
gen_split_479 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2123 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_src = operands[1];
  rtx dest1, dest2;
  rtx src1, src2;
  enum machine_mode half_mode;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V2SImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;
  
  dest1 = gen_highpart (half_mode, set_dest);
  dest2 = gen_lowpart (half_mode, set_dest);
  src1 = gen_highpart (half_mode, set_src);
  src2 = gen_lowpart (half_mode, set_src);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if (reg_overlap_mentioned_p (dest1, src2))
    {
      emit_move_insn_1 (dest2, src2);
      emit_move_insn_1 (dest1, src1);
    }
  else
    {
      emit_move_insn_1 (dest1, src1);
      emit_move_insn_1 (dest2, src2);
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2111 */
extern rtx gen_split_480 (rtx, rtx *);
rtx
gen_split_480 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2123 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_src = operands[1];
  rtx dest1, dest2;
  rtx src1, src2;
  enum machine_mode half_mode;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V4HImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;
  
  dest1 = gen_highpart (half_mode, set_dest);
  dest2 = gen_lowpart (half_mode, set_dest);
  src1 = gen_highpart (half_mode, set_src);
  src2 = gen_lowpart (half_mode, set_src);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if (reg_overlap_mentioned_p (dest1, src2))
    {
      emit_move_insn_1 (dest2, src2);
      emit_move_insn_1 (dest1, src1);
    }
  else
    {
      emit_move_insn_1 (dest1, src1);
      emit_move_insn_1 (dest2, src2);
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2111 */
extern rtx gen_split_481 (rtx, rtx *);
rtx
gen_split_481 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2123 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_src = operands[1];
  rtx dest1, dest2;
  rtx src1, src2;
  enum machine_mode half_mode;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V8QImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;
  
  dest1 = gen_highpart (half_mode, set_dest);
  dest2 = gen_lowpart (half_mode, set_dest);
  src1 = gen_highpart (half_mode, set_src);
  src2 = gen_lowpart (half_mode, set_src);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if (reg_overlap_mentioned_p (dest1, src2))
    {
      emit_move_insn_1 (dest2, src2);
      emit_move_insn_1 (dest1, src1);
    }
  else
    {
      emit_move_insn_1 (dest1, src1);
      emit_move_insn_1 (dest2, src2);
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2218 */
extern rtx gen_split_482 (rtx, rtx *);
rtx
gen_split_482 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2227 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx dest1, dest2;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (DFmode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  dest1 = adjust_address (operands[0], half_mode, 0);
  dest2 = adjust_address (operands[0], half_mode, 4);

  emit_move_insn_1 (dest1, CONST0_RTX (half_mode));
  emit_move_insn_1 (dest2, CONST0_RTX (half_mode));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2218 */
extern rtx gen_split_483 (rtx, rtx *);
rtx
gen_split_483 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2227 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx dest1, dest2;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V2SImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  dest1 = adjust_address (operands[0], half_mode, 0);
  dest2 = adjust_address (operands[0], half_mode, 4);

  emit_move_insn_1 (dest1, CONST0_RTX (half_mode));
  emit_move_insn_1 (dest2, CONST0_RTX (half_mode));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2218 */
extern rtx gen_split_484 (rtx, rtx *);
rtx
gen_split_484 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2227 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx dest1, dest2;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V4HImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  dest1 = adjust_address (operands[0], half_mode, 0);
  dest2 = adjust_address (operands[0], half_mode, 4);

  emit_move_insn_1 (dest1, CONST0_RTX (half_mode));
  emit_move_insn_1 (dest2, CONST0_RTX (half_mode));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2218 */
extern rtx gen_split_485 (rtx, rtx *);
rtx
gen_split_485 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2227 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx dest1, dest2;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V8QImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  dest1 = adjust_address (operands[0], half_mode, 0);
  dest2 = adjust_address (operands[0], half_mode, 4);

  emit_move_insn_1 (dest1, CONST0_RTX (half_mode));
  emit_move_insn_1 (dest2, CONST0_RTX (half_mode));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2274 */
rtx
gen_movtf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2278 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (TFmode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2347 */
extern rtx gen_split_487 (rtx, rtx *);
rtx
gen_split_487 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2356 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_src = operands[1];
  rtx dest1, dest2;
  rtx src1, src2;

  dest1 = gen_df_reg (set_dest, 0);
  dest2 = gen_df_reg (set_dest, 1);
  src1 = gen_df_reg (set_src, 0);
  src2 = gen_df_reg (set_src, 1);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if (reg_overlap_mentioned_p (dest1, src2))
    {
      emit_insn (gen_movdf (dest2, src2));
      emit_insn (gen_movdf (dest1, src1));
    }
  else
    {
      emit_insn (gen_movdf (dest1, src1));
      emit_insn (gen_movdf (dest2, src2));
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2382 */
extern rtx gen_split_488 (rtx, rtx *);
rtx
gen_split_488 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2387 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx dest1, dest2;

  switch (GET_CODE (set_dest))
    {
    case REG:
      dest1 = gen_df_reg (set_dest, 0);
      dest2 = gen_df_reg (set_dest, 1);
      break;
    case MEM:
      dest1 = adjust_address (set_dest, DFmode, 0);
      dest2 = adjust_address (set_dest, DFmode, 8);
      break;
    default:
      gcc_unreachable ();      
    }

  emit_insn (gen_movdf (dest1, CONST0_RTX (DFmode)));
  emit_insn (gen_movdf (dest2, CONST0_RTX (DFmode)));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2410 */
extern rtx gen_split_489 (rtx, rtx *);
rtx
gen_split_489 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2419 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx word0 = adjust_address (operands[1], DFmode, 0);
  rtx word1 = adjust_address (operands[1], DFmode, 8);
  rtx set_dest, dest1, dest2;

  set_dest = operands[0];

  dest1 = gen_df_reg (set_dest, 0);
  dest2 = gen_df_reg (set_dest, 1);

  /* Now output, ordering such that we don't clobber any registers
     mentioned in the address.  */
  if (reg_overlap_mentioned_p (dest1, word1))

    {
      emit_insn (gen_movdf (dest2, word1));
      emit_insn (gen_movdf (dest1, word0));
    }
  else
   {
      emit_insn (gen_movdf (dest1, word0));
      emit_insn (gen_movdf (dest2, word1));
   }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2445 */
extern rtx gen_split_490 (rtx, rtx *);
rtx
gen_split_490 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2454 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx set_src = operands[1];

  emit_insn (gen_movdf (adjust_address (operands[0], DFmode, 0),
			gen_df_reg (set_src, 0)));
  emit_insn (gen_movdf (adjust_address (operands[0], DFmode, 8),
			gen_df_reg (set_src, 1)));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2473 */
rtx
gen_movqicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2479 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);
  rtx cc_reg;

  if (GET_MODE (XEXP (operands[1], 0)) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (GET_MODE (XEXP (operands[1], 0)) == TFmode && !TARGET_HARD_QUAD)
    operands[1]
      = sparc_emit_float_lib_cmp (XEXP (operands[1], 0), XEXP (operands[1], 1),
				  GET_CODE (operands[1]));

  if (XEXP (operands[1], 1) == const0_rtx
      && GET_CODE (XEXP (operands[1], 0)) == REG
      && GET_MODE (XEXP (operands[1], 0)) == DImode
      && v9_regcmp_p (code))
    cc_reg = XEXP (operands[1], 0);
  else
    cc_reg = gen_compare_reg (operands[1]);

  operands[1] = gen_rtx_fmt_ee (code, GET_MODE (cc_reg), cc_reg, const0_rtx);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2473 */
rtx
gen_movhicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2479 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);
  rtx cc_reg;

  if (GET_MODE (XEXP (operands[1], 0)) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (GET_MODE (XEXP (operands[1], 0)) == TFmode && !TARGET_HARD_QUAD)
    operands[1]
      = sparc_emit_float_lib_cmp (XEXP (operands[1], 0), XEXP (operands[1], 1),
				  GET_CODE (operands[1]));

  if (XEXP (operands[1], 1) == const0_rtx
      && GET_CODE (XEXP (operands[1], 0)) == REG
      && GET_MODE (XEXP (operands[1], 0)) == DImode
      && v9_regcmp_p (code))
    cc_reg = XEXP (operands[1], 0);
  else
    cc_reg = gen_compare_reg (operands[1]);

  operands[1] = gen_rtx_fmt_ee (code, GET_MODE (cc_reg), cc_reg, const0_rtx);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2473 */
rtx
gen_movsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2479 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);
  rtx cc_reg;

  if (GET_MODE (XEXP (operands[1], 0)) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (GET_MODE (XEXP (operands[1], 0)) == TFmode && !TARGET_HARD_QUAD)
    operands[1]
      = sparc_emit_float_lib_cmp (XEXP (operands[1], 0), XEXP (operands[1], 1),
				  GET_CODE (operands[1]));

  if (XEXP (operands[1], 1) == const0_rtx
      && GET_CODE (XEXP (operands[1], 0)) == REG
      && GET_MODE (XEXP (operands[1], 0)) == DImode
      && v9_regcmp_p (code))
    cc_reg = XEXP (operands[1], 0);
  else
    cc_reg = gen_compare_reg (operands[1]);

  operands[1] = gen_rtx_fmt_ee (code, GET_MODE (cc_reg), cc_reg, const0_rtx);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2473 */
rtx
gen_movdicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2479 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);
  rtx cc_reg;

  if (GET_MODE (XEXP (operands[1], 0)) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (GET_MODE (XEXP (operands[1], 0)) == TFmode && !TARGET_HARD_QUAD)
    operands[1]
      = sparc_emit_float_lib_cmp (XEXP (operands[1], 0), XEXP (operands[1], 1),
				  GET_CODE (operands[1]));

  if (XEXP (operands[1], 1) == const0_rtx
      && GET_CODE (XEXP (operands[1], 0)) == REG
      && GET_MODE (XEXP (operands[1], 0)) == DImode
      && v9_regcmp_p (code))
    cc_reg = XEXP (operands[1], 0);
  else
    cc_reg = gen_compare_reg (operands[1]);

  operands[1] = gen_rtx_fmt_ee (code, GET_MODE (cc_reg), cc_reg, const0_rtx);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2503 */
rtx
gen_movsfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2509 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);
  rtx cc_reg;

  if (GET_MODE (XEXP (operands[1], 0)) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (GET_MODE (XEXP (operands[1], 0)) == TFmode && !TARGET_HARD_QUAD)
    operands[1]
      = sparc_emit_float_lib_cmp (XEXP (operands[1], 0), XEXP (operands[1], 1),
				  GET_CODE (operands[1]));

  if (XEXP (operands[1], 1) == const0_rtx
      && GET_CODE (XEXP (operands[1], 0)) == REG
      && GET_MODE (XEXP (operands[1], 0)) == DImode
      && v9_regcmp_p (code))
    cc_reg = XEXP (operands[1], 0);
  else
    cc_reg = gen_compare_reg (operands[1]);

  operands[1] = gen_rtx_fmt_ee (code, GET_MODE (cc_reg), cc_reg, const0_rtx);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2503 */
rtx
gen_movdfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2509 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);
  rtx cc_reg;

  if (GET_MODE (XEXP (operands[1], 0)) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (GET_MODE (XEXP (operands[1], 0)) == TFmode && !TARGET_HARD_QUAD)
    operands[1]
      = sparc_emit_float_lib_cmp (XEXP (operands[1], 0), XEXP (operands[1], 1),
				  GET_CODE (operands[1]));

  if (XEXP (operands[1], 1) == const0_rtx
      && GET_CODE (XEXP (operands[1], 0)) == REG
      && GET_MODE (XEXP (operands[1], 0)) == DImode
      && v9_regcmp_p (code))
    cc_reg = XEXP (operands[1], 0);
  else
    cc_reg = gen_compare_reg (operands[1]);

  operands[1] = gen_rtx_fmt_ee (code, GET_MODE (cc_reg), cc_reg, const0_rtx);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2503 */
rtx
gen_movtfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2509 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);
  rtx cc_reg;

  if (GET_MODE (XEXP (operands[1], 0)) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (GET_MODE (XEXP (operands[1], 0)) == TFmode && !TARGET_HARD_QUAD)
    operands[1]
      = sparc_emit_float_lib_cmp (XEXP (operands[1], 0), XEXP (operands[1], 1),
				  GET_CODE (operands[1]));

  if (XEXP (operands[1], 1) == const0_rtx
      && GET_CODE (XEXP (operands[1], 0)) == REG
      && GET_MODE (XEXP (operands[1], 0)) == DImode
      && v9_regcmp_p (code))
    cc_reg = XEXP (operands[1], 0);
  else
    cc_reg = gen_compare_reg (operands[1]);

  operands[1] = gen_rtx_fmt_ee (code, GET_MODE (cc_reg), cc_reg, const0_rtx);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (TFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2643 */
extern rtx gen_split_498 (rtx, rtx *);
rtx
gen_split_498 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2654 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_srca = operands[3];
  rtx set_srcb = operands[4];
  int third = rtx_equal_p (set_dest, set_srca);
  rtx dest1, dest2;
  rtx srca1, srca2, srcb1, srcb2;

  dest1 = gen_df_reg (set_dest, 0);
  dest2 = gen_df_reg (set_dest, 1);
  srca1 = gen_df_reg (set_srca, 0);
  srca2 = gen_df_reg (set_srca, 1);
  srcb1 = gen_df_reg (set_srcb, 0);
  srcb2 = gen_df_reg (set_srcb, 1);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if ((third && reg_overlap_mentioned_p (dest1, srcb2))
      || (!third && reg_overlap_mentioned_p (dest1, srca2)))
    {
      emit_insn (gen_movdf_cc_v9 (dest2, operands[1], operands[2], srca2, srcb2));
      emit_insn (gen_movdf_cc_v9 (dest1, operands[1], operands[2], srca1, srcb1));
    }
  else
    {
      emit_insn (gen_movdf_cc_v9 (dest1, operands[1], operands[2], srca1, srcb1));
      emit_insn (gen_movdf_cc_v9 (dest2, operands[1], operands[2], srca2, srcb2));
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2686 */
extern rtx gen_split_499 (rtx, rtx *);
rtx
gen_split_499 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2697 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_srca = operands[3];
  rtx set_srcb = operands[4];
  int third = rtx_equal_p (set_dest, set_srca);
  rtx dest1, dest2;
  rtx srca1, srca2, srcb1, srcb2;

  dest1 = gen_df_reg (set_dest, 0);
  dest2 = gen_df_reg (set_dest, 1);
  srca1 = gen_df_reg (set_srca, 0);
  srca2 = gen_df_reg (set_srca, 1);
  srcb1 = gen_df_reg (set_srcb, 0);
  srcb2 = gen_df_reg (set_srcb, 1);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if ((third && reg_overlap_mentioned_p (dest1, srcb2))
      || (!third && reg_overlap_mentioned_p (dest1, srca2)))
    {
      emit_insn (gen_movdf_cc_reg_sp64 (dest2, operands[1], operands[2], srca2, srcb2));
      emit_insn (gen_movdf_cc_reg_sp64 (dest1, operands[1], operands[2], srca1, srcb1));
    }
  else
    {
      emit_insn (gen_movdf_cc_reg_sp64 (dest1, operands[1], operands[2], srca1, srcb1));
      emit_insn (gen_movdf_cc_reg_sp64 (dest2, operands[1], operands[2], srca2, srcb2));
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2736 */
rtx
gen_zero_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2740 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx temp = gen_reg_rtx (SImode);
  rtx shift_16 = GEN_INT (16);
  int op1_subbyte = 0;

  if (GET_CODE (operand1) == SUBREG)
    {
      op1_subbyte = SUBREG_BYTE (operand1);
      op1_subbyte /= GET_MODE_SIZE (SImode);
      op1_subbyte *= GET_MODE_SIZE (SImode);
      operand1 = XEXP (operand1, 0);
    }

  emit_insn (gen_ashlsi3 (temp, gen_rtx_SUBREG (SImode, operand1, op1_subbyte),
			  shift_16));
  emit_insn (gen_lshrsi3 (operand0, temp, shift_16));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2767 */
rtx
gen_zero_extendqihi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2783 */
rtx
gen_zero_extendqisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2799 */
rtx
gen_zero_extendqidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2815 */
rtx
gen_zero_extendhidi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2819 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx temp = gen_reg_rtx (DImode);
  rtx shift_48 = GEN_INT (48);
  int op1_subbyte = 0;

  if (GET_CODE (operand1) == SUBREG)
    {
      op1_subbyte = SUBREG_BYTE (operand1);
      op1_subbyte /= GET_MODE_SIZE (DImode);
      op1_subbyte *= GET_MODE_SIZE (DImode);
      operand1 = XEXP (operand1, 0);
    }

  emit_insn (gen_ashldi3 (temp, gen_rtx_SUBREG (DImode, operand1, op1_subbyte),
			  shift_48));
  emit_insn (gen_lshrdi3 (operand0, temp, shift_48));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:2848 */
rtx
gen_zero_extendsidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3016 */
rtx
gen_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3020 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx temp = gen_reg_rtx (SImode);
  rtx shift_16 = GEN_INT (16);
  int op1_subbyte = 0;

  if (GET_CODE (operand1) == SUBREG)
    {
      op1_subbyte = SUBREG_BYTE (operand1);
      op1_subbyte /= GET_MODE_SIZE (SImode);
      op1_subbyte *= GET_MODE_SIZE (SImode);
      operand1 = XEXP (operand1, 0);
    }

  emit_insn (gen_ashlsi3 (temp, gen_rtx_SUBREG (SImode, operand1, op1_subbyte),
			  shift_16));
  emit_insn (gen_ashrsi3 (operand0, temp, shift_16));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3047 */
rtx
gen_extendqihi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3051 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx temp = gen_reg_rtx (SImode);
  rtx shift_24 = GEN_INT (24);
  int op1_subbyte = 0;
  int op0_subbyte = 0;

  if (GET_CODE (operand1) == SUBREG)
    {
      op1_subbyte = SUBREG_BYTE (operand1);
      op1_subbyte /= GET_MODE_SIZE (SImode);
      op1_subbyte *= GET_MODE_SIZE (SImode);
      operand1 = XEXP (operand1, 0);
    }
  if (GET_CODE (operand0) == SUBREG)
    {
      op0_subbyte = SUBREG_BYTE (operand0);
      op0_subbyte /= GET_MODE_SIZE (SImode);
      op0_subbyte *= GET_MODE_SIZE (SImode);
      operand0 = XEXP (operand0, 0);
    }
  emit_insn (gen_ashlsi3 (temp, gen_rtx_SUBREG (SImode, operand1, op1_subbyte),
			  shift_24));
  if (GET_MODE (operand0) != SImode)
    operand0 = gen_rtx_SUBREG (SImode, operand0, op0_subbyte);
  emit_insn (gen_ashrsi3 (operand0, temp, shift_24));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3087 */
rtx
gen_extendqisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3091 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx temp = gen_reg_rtx (SImode);
  rtx shift_24 = GEN_INT (24);
  int op1_subbyte = 0;

  if (GET_CODE (operand1) == SUBREG)
    {
      op1_subbyte = SUBREG_BYTE (operand1);
      op1_subbyte /= GET_MODE_SIZE (SImode);
      op1_subbyte *= GET_MODE_SIZE (SImode);
      operand1 = XEXP (operand1, 0);
    }

  emit_insn (gen_ashlsi3 (temp, gen_rtx_SUBREG (SImode, operand1, op1_subbyte),
			  shift_24));
  emit_insn (gen_ashrsi3 (operand0, temp, shift_24));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3118 */
rtx
gen_extendqidi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3122 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx temp = gen_reg_rtx (DImode);
  rtx shift_56 = GEN_INT (56);
  int op1_subbyte = 0;

  if (GET_CODE (operand1) == SUBREG)
    {
      op1_subbyte = SUBREG_BYTE (operand1);
      op1_subbyte /= GET_MODE_SIZE (DImode);
      op1_subbyte *= GET_MODE_SIZE (DImode);
      operand1 = XEXP (operand1, 0);
    }

  emit_insn (gen_ashldi3 (temp, gen_rtx_SUBREG (DImode, operand1, op1_subbyte),
			  shift_56));
  emit_insn (gen_ashrdi3 (operand0, temp, shift_56));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3149 */
rtx
gen_extendhidi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3153 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx temp = gen_reg_rtx (DImode);
  rtx shift_48 = GEN_INT (48);
  int op1_subbyte = 0;

  if (GET_CODE (operand1) == SUBREG)
    {
      op1_subbyte = SUBREG_BYTE (operand1);
      op1_subbyte /= GET_MODE_SIZE (DImode);
      op1_subbyte *= GET_MODE_SIZE (DImode);
      operand1 = XEXP (operand1, 0);
    }

  emit_insn (gen_ashldi3 (temp, gen_rtx_SUBREG (DImode, operand1, op1_subbyte),
			  shift_48));
  emit_insn (gen_ashrdi3 (operand0, temp, shift_48));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3180 */
rtx
gen_extendsidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3246 */
rtx
gen_extendsftf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3251 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FLOAT_EXTEND, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3261 */
rtx
gen_extenddftf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3266 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FLOAT_EXTEND, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3285 */
rtx
gen_trunctfsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3290 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FLOAT_TRUNCATE, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3300 */
rtx
gen_trunctfdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3305 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FLOAT_TRUNCATE, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3334 */
rtx
gen_floatsitf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3338 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FLOAT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3347 */
rtx
gen_floatunssitf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3351 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (UNSIGNED_FLOAT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FLOAT (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3363 */
rtx
gen_floatunsdisf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3367 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
sparc_emit_floatunsdi (operands, SFmode); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3377 */
rtx
gen_floatunsdidf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3381 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
sparc_emit_floatunsdi (operands, DFmode); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3383 */
rtx
gen_floatditf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3387 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FLOAT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3396 */
rtx
gen_floatunsditf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3400 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (UNSIGNED_FLOAT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FLOAT (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3421 */
rtx
gen_fix_trunctfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3425 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FIX, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3434 */
rtx
gen_fixuns_trunctfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3438 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (UNSIGNED_FIX, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3450 */
rtx
gen_fixuns_truncsfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3454 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
sparc_emit_fixunsdi (operands, SFmode); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3464 */
rtx
gen_fixuns_truncdfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3468 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
sparc_emit_fixunsdi (operands, DFmode); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3470 */
rtx
gen_fix_trunctfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3474 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FIX, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3483 */
rtx
gen_fixuns_trunctfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3487 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (UNSIGNED_FIX, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3492 */
rtx
gen_adddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3497 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (! TARGET_ARCH64)
    {
      emit_insn (gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
			  gen_rtx_SET (VOIDmode, operands[0],
				   gen_rtx_PLUS (DImode, operands[1],
						 operands[2])),
			  gen_rtx_CLOBBER (VOIDmode,
				   gen_rtx_REG (CCmode, SPARC_ICC_REG)))));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3665 */
rtx
gen_subdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3670 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (! TARGET_ARCH64)
    {
      emit_insn (gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
			  gen_rtx_SET (VOIDmode, operands[0],
				   gen_rtx_MINUS (DImode, operands[1],
						  operands[2])),
			  gen_rtx_CLOBBER (VOIDmode,
				   gen_rtx_REG (CCmode, SPARC_ICC_REG)))));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3851 */
rtx
gen_muldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3856 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (TARGET_V8PLUS)
    {
      emit_insn (gen_muldi3_v8plus (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:3921 */
rtx
gen_mulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3926 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (CONSTANT_P (operands[2]))
    {
      if (TARGET_V8PLUS)
	emit_insn (gen_const_mulsidi3_v8plus (operands[0], operands[1],
					      operands[2]));
      else if (TARGET_ARCH32)
	emit_insn (gen_const_mulsidi3_sp32 (operands[0], operands[1],
					    operands[2]));
      else 
	emit_insn (gen_const_mulsidi3_sp64 (operands[0], operands[1],
					    operands[2]));
      DONE;
    }
  if (TARGET_V8PLUS)
    {
      emit_insn (gen_mulsidi3_v8plus (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4130 */
rtx
gen_umulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4135 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (CONSTANT_P (operands[2]))
    {
      if (TARGET_V8PLUS)
	emit_insn (gen_const_umulsidi3_v8plus (operands[0], operands[1],
					       operands[2]));
      else if (TARGET_ARCH32)
	emit_insn (gen_const_umulsidi3_sp32 (operands[0], operands[1],
					     operands[2]));
      else 
	emit_insn (gen_const_umulsidi3_sp64 (operands[0], operands[1],
					     operands[2]));
      DONE;
    }
  if (TARGET_V8PLUS)
    {
      emit_insn (gen_umulsidi3_v8plus (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4319 */
rtx
gen_divsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4325 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (TARGET_ARCH64)
    {
      operands[3] = gen_reg_rtx(SImode);
      emit_insn (gen_ashrsi3 (operands[3], operands[1], GEN_INT (31)));
      emit_insn (gen_divsi3_sp64 (operands[0], operands[1], operands[2],
				  operands[3]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4418 */
rtx
gen_udivsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4545 */
rtx
gen_anddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4545 */
rtx
gen_andv2si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4545 */
rtx
gen_andv4hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4545 */
rtx
gen_andv8qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4586 */
extern rtx gen_split_539 (rtx, rtx *);
rtx
gen_split_539 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4594 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[4] = GEN_INT (~INTVAL (operands[2]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	copy_rtx (operand3)),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4646 */
rtx
gen_iordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4646 */
rtx
gen_iorv2si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4646 */
rtx
gen_iorv4hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4646 */
rtx
gen_iorv8qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4687 */
extern rtx gen_split_544 (rtx, rtx *);
rtx
gen_split_544 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4695 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[4] = GEN_INT (~INTVAL (operands[2]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_NOT (SImode,
	copy_rtx (operand3)),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4747 */
rtx
gen_xordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4747 */
rtx
gen_xorv2si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4747 */
rtx
gen_xorv4hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4747 */
rtx
gen_xorv8qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4788 */
extern rtx gen_split_549 (rtx, rtx *);
rtx
gen_split_549 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4796 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[4] = GEN_INT (~INTVAL (operands[2]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	copy_rtx (operand3),
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:4800 */
extern rtx gen_split_550 (rtx, rtx *);
rtx
gen_split_550 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4808 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[4] = GEN_INT (~INTVAL (operands[2]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand3),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5044 */
rtx
gen_negdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 5048 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (! TARGET_ARCH64)
    {
      emit_insn (gen_rtx_PARALLEL
		 (VOIDmode,
		  gen_rtvec (2,
			     gen_rtx_SET (VOIDmode, operand0,
					  gen_rtx_NEG (DImode, operand1)),
			     gen_rtx_CLOBBER (VOIDmode,
					      gen_rtx_REG (CCmode,
							   SPARC_ICC_REG)))));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5132 */
rtx
gen_one_cmpldi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (DImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5132 */
rtx
gen_one_cmplv2si2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V2SImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5132 */
rtx
gen_one_cmplv4hi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V4HImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5132 */
rtx
gen_one_cmplv8qi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V8QImode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5240 */
rtx
gen_addtf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5245 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_binop (PLUS, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (TFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5272 */
rtx
gen_subtf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5277 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_binop (MINUS, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (TFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5304 */
rtx
gen_multf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5309 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_binop (MULT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5353 */
rtx
gen_divtf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5358 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_binop (DIV, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (TFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5386 */
rtx
gen_negtf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (TFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5392 */
extern rtx gen_split_561 (rtx, rtx *);
rtx
gen_split_561 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
#line 5406 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[2] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]));
   operands[3] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]));
   operands[4] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]) + 1);
   operands[5] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]) + 1);
   operands[6] = gen_rtx_raw_REG (DFmode, REGNO (operands[0]) + 2);
   operands[7] = gen_rtx_raw_REG (DFmode, REGNO (operands[1]) + 2);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NEG (SFmode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	operand7));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5415 */
extern rtx gen_split_562 (rtx, rtx *);
rtx
gen_split_562 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5427 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[2] = gen_rtx_raw_REG (DFmode, REGNO (operands[0]));
   operands[3] = gen_rtx_raw_REG (DFmode, REGNO (operands[1]));
   operands[4] = gen_rtx_raw_REG (DFmode, REGNO (operands[0]) + 2);
   operands[5] = gen_rtx_raw_REG (DFmode, REGNO (operands[1]) + 2);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NEG (DFmode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5435 */
rtx
gen_negdf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5441 */
extern rtx gen_split_564 (rtx, rtx *);
rtx
gen_split_564 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5452 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[2] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]));
   operands[3] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]));
   operands[4] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]) + 1);
   operands[5] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]) + 1);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NEG (SFmode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5474 */
rtx
gen_abstf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (TFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5480 */
extern rtx gen_split_566 (rtx, rtx *);
rtx
gen_split_566 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
#line 5493 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[2] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]));
   operands[3] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]));
   operands[4] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]) + 1);
   operands[5] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]) + 1);
   operands[6] = gen_rtx_raw_REG (DFmode, REGNO (operands[0]) + 2);
   operands[7] = gen_rtx_raw_REG (DFmode, REGNO (operands[1]) + 2);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ABS (SFmode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	operand7));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5512 */
extern rtx gen_split_567 (rtx, rtx *);
rtx
gen_split_567 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5523 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[2] = gen_rtx_raw_REG (DFmode, REGNO (operands[0]));
   operands[3] = gen_rtx_raw_REG (DFmode, REGNO (operands[1]));
   operands[4] = gen_rtx_raw_REG (DFmode, REGNO (operands[0]) + 2);
   operands[5] = gen_rtx_raw_REG (DFmode, REGNO (operands[1]) + 2);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ABS (DFmode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5531 */
rtx
gen_absdf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5537 */
extern rtx gen_split_569 (rtx, rtx *);
rtx
gen_split_569 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5548 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[2] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]));
   operands[3] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]));
   operands[4] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]) + 1);
   operands[5] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]) + 1);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ABS (SFmode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5570 */
rtx
gen_sqrttf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 5574 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
emit_tfmode_unop (SQRT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5615 */
rtx
gen_ashldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5620 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (! TARGET_ARCH64)
    {
      if (GET_CODE (operands[2]) == CONST_INT)
	FAIL;
      emit_insn (gen_ashldi3_v8plus (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5726 */
rtx
gen_ashrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5731 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (! TARGET_ARCH64)
    {
      if (GET_CODE (operands[2]) == CONST_INT)
        FAIL;	/* prefer generic code in this case */
      emit_insn (gen_ashrdi3_v8plus (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5804 */
rtx
gen_lshrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5809 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (! TARGET_ARCH64)
    {
      if (GET_CODE (operands[2]) == CONST_INT)
        FAIL;
      emit_insn (gen_lshrdi3_v8plus (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5907 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 5911 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  gcc_assert (GET_MODE (operands[0]) == CASE_VECTOR_MODE);

  /* In pic mode, our address differences are against the base of the
     table.  Add that base value back in; CSE ought to be able to combine
     the two address loads.  */
  if (flag_pic)
    {
      rtx tmp, tmp2;
      tmp = gen_rtx_LABEL_REF (Pmode, operands[1]);
      tmp2 = operands[0];
      if (CASE_VECTOR_MODE != Pmode)
        tmp2 = gen_rtx_SIGN_EXTEND (Pmode, tmp2);
      tmp = gen_rtx_PLUS (Pmode, tmp2, tmp);
      operands[0] = memory_address (Pmode, tmp);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:5946 */
rtx
gen_call (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 5954 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx fn_rtx;

  gcc_assert (MEM_P (operands[0]) && GET_MODE (operands[0]) == FUNCTION_MODE);

  gcc_assert (GET_CODE (operands[3]) == CONST_INT);

  if (GET_CODE (XEXP (operands[0], 0)) == LABEL_REF)
    {
      /* This is really a PIC sequence.  We want to represent
	 it as a funny jump so its delay slots can be filled. 

	 ??? But if this really *is* a CALL, will not it clobber the
	 call-clobbered registers?  We lose this if it is a JUMP_INSN.
	 Why cannot we have delay slots filled if it were a CALL?  */

      /* We accept negative sizes for untyped calls.  */
      if (! TARGET_ARCH64 && INTVAL (operands[3]) != 0)
	emit_jump_insn
	  (gen_rtx_PARALLEL
	   (VOIDmode,
	    gen_rtvec (3,
		       gen_rtx_SET (VOIDmode, pc_rtx, XEXP (operands[0], 0)),
		       operands[3],
		       gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (Pmode, 15)))));
      else
	emit_jump_insn
	  (gen_rtx_PARALLEL
	   (VOIDmode,
	    gen_rtvec (2,
		       gen_rtx_SET (VOIDmode, pc_rtx, XEXP (operands[0], 0)),
		       gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (Pmode, 15)))));
      goto finish_call;
    }

  fn_rtx = operands[0];

  /* We accept negative sizes for untyped calls.  */
  if (! TARGET_ARCH64 && INTVAL (operands[3]) != 0)
    sparc_emit_call_insn
      (gen_rtx_PARALLEL
       (VOIDmode,
	gen_rtvec (3, gen_rtx_CALL (VOIDmode, fn_rtx, const0_rtx),
		   operands[3],
		   gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (Pmode, 15)))),
       XEXP (fn_rtx, 0));
  else
    sparc_emit_call_insn
      (gen_rtx_PARALLEL
       (VOIDmode,
	gen_rtvec (2, gen_rtx_CALL (VOIDmode, fn_rtx, const0_rtx),
		   gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (Pmode, 15)))),
       XEXP (fn_rtx, 0));

 finish_call:

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_CALL (VOIDmode,
	operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6110 */
rtx
gen_call_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
#line 6119 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx fn_rtx;
  rtvec vec;

  gcc_assert (MEM_P (operands[1]) && GET_MODE (operands[1]) == FUNCTION_MODE);

  fn_rtx = operands[1];

  vec = gen_rtvec (2,
		   gen_rtx_SET (VOIDmode, operands[0],
				gen_rtx_CALL (VOIDmode, fn_rtx, const0_rtx)),
		   gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (Pmode, 15)));

  sparc_emit_call_insn (gen_rtx_PARALLEL (VOIDmode, vec), XEXP (fn_rtx, 0));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_call_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6177 */
rtx
gen_untyped_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6183 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx valreg1 = gen_rtx_REG (DImode, 8);
  rtx valreg2 = gen_rtx_REG (TARGET_ARCH64 ? TFmode : DFmode, 32);
  rtx result = operands[1];

  /* Pass constm1 to indicate that it may expect a structure value, but
     we don't know what size it is.  */
  emit_call_insn (GEN_CALL (operands[0], const0_rtx, NULL, constm1_rtx));

  /* Save the function value registers.  */
  emit_move_insn (adjust_address (result, DImode, 0), valreg1);
  emit_move_insn (adjust_address (result, TARGET_ARCH64 ? TFmode : DFmode, 8),
				  valreg2);

  /* The optimizer does not know that the call sets the function value
     registers we stored in the result block.  We avoid problems by
     claiming that all hard registers are used and clobbered at this
     point.  */
  emit_insn (gen_blockage ());

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6208 */
rtx
gen_sibcall (rtx operand0)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		gen_rtx_RETURN (VOIDmode)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6230 */
rtx
gen_sibcall_value (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	const0_rtx)),
		gen_rtx_RETURN (VOIDmode)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6258 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6261 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  sparc_expand_prologue ();
  DONE;
}
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6283 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6286 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  sparc_expand_epilogue ();
}
  }
  emit_jump_insn (gen_rtx_RETURN (VOIDmode));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6290 */
rtx
gen_sibcall_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6293 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  sparc_expand_epilogue ();
  DONE;
}
  }
  emit_jump_insn (gen_rtx_RETURN (VOIDmode));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6298 */
rtx
gen_return (void)
{
  return gen_rtx_RETURN (VOIDmode);
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6336 */
rtx
gen_probe_stack (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 6339 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  operands[0]
    = adjust_address (operands[0], GET_MODE (operands[0]), SPARC_STACK_BIAS);
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6346 */
rtx
gen_untyped_return (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 6350 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx valreg1 = gen_rtx_REG (DImode, 24);
  rtx valreg2 = gen_rtx_REG (TARGET_ARCH64 ? TFmode : DFmode, 32);
  rtx result = operands[0];

  if (! TARGET_ARCH64)
    {
      rtx rtnreg = gen_rtx_REG (SImode, (current_function_uses_only_leaf_regs
					 ? 15 : 31));
      rtx value = gen_reg_rtx (SImode);

      /* Fetch the instruction where we will return to and see if it's an unimp
	 instruction (the most significant 10 bits will be zero).  If so,
	 update the return address to skip the unimp instruction.  */
      emit_move_insn (value,
		      gen_rtx_MEM (SImode, plus_constant (rtnreg, 8)));
      emit_insn (gen_lshrsi3 (value, value, GEN_INT (22)));
      emit_insn (gen_update_return (rtnreg, value));
    }

  /* Reload the function value registers.  */
  emit_move_insn (valreg1, adjust_address (result, DImode, 0));
  emit_move_insn (valreg2,
		  adjust_address (result, TARGET_ARCH64 ? TFmode : DFmode, 8));

  /* Put USE insns before the return.  */
  emit_use (valreg1);
  emit_use (valreg2);

  /* Construct the return.  */
  expand_naked_return ();

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6414 */
rtx
gen_indirect_jump (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6431 */
rtx
gen_nonlocal_goto (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 6437 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx lab = operands[1];
  rtx stack = operands[2];
  rtx fp = operands[3];
  rtx labreg;

  /* Trap instruction to flush all the register windows.  */
  emit_insn (gen_flush_register_windows ());

  /* Load the fp value for the containing fn into %fp.  This is needed
     because STACK refers to %fp.  Note that virtual register instantiation
     fails if the virtual %fp isn't set from a register.  */
  if (GET_CODE (fp) != REG)
    fp = force_reg (Pmode, fp);
  emit_move_insn (virtual_stack_vars_rtx, fp);

  /* Find the containing function's current nonlocal goto handler,
     which will do any cleanups and then jump to the label.  */
  labreg = gen_rtx_REG (Pmode, 8);
  emit_move_insn (labreg, lab);

  /* Restore %fp from stack pointer value for containing function.
     The restore insn that follows will move this to %sp,
     and reload the appropriate value into %fp.  */
  emit_move_insn (hard_frame_pointer_rtx, stack);

  emit_use (stack_pointer_rtx);

  /* ??? The V9-specific version was disabled in rev 1.65.  */
  emit_jump_insn (gen_goto_handler_and_restore (labreg));
  emit_barrier ();
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6496 */
rtx
gen_builtin_setjmp_setup (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 6499 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  emit_insn (gen_do_builtin_setjmp_setup ());
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6537 */
rtx
gen_setjmp (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6540 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx mem;
  
  mem = gen_rtx_MEM (Pmode,
		     plus_constant (stack_pointer_rtx,
				    SPARC_STACK_BIAS + 14 * UNITS_PER_WORD));
  emit_insn (gen_rtx_SET (VOIDmode, mem, frame_pointer_rtx));

  mem = gen_rtx_MEM (Pmode,
		     plus_constant (stack_pointer_rtx,
				    SPARC_STACK_BIAS + 15 * UNITS_PER_WORD));
  emit_insn (gen_rtx_SET (VOIDmode, mem, gen_rtx_REG (Pmode, 31)));
  DONE;
}
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6617 */
extern rtx gen_peephole2_590 (rtx, rtx *);
rtx
gen_peephole2_590 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 6626 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[0] = widen_memory_access (operands[0], DImode, 0);
  operand0 = operands[0];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6628 */
extern rtx gen_peephole2_591 (rtx, rtx *);
rtx
gen_peephole2_591 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 6637 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[1] = widen_memory_access (operands[1], DImode, 0);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6639 */
extern rtx gen_peephole2_592 (rtx, rtx *);
rtx
gen_peephole2_592 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 6648 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[1] = widen_memory_access (operands[1], DImode, 0);
   operands[0] = gen_rtx_REG (DImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6651 */
extern rtx gen_peephole2_593 (rtx, rtx *);
rtx
gen_peephole2_593 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 6660 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[0] = widen_memory_access (operands[0], DImode, 0);
   operands[1] = gen_rtx_REG (DImode, REGNO (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6663 */
extern rtx gen_peephole2_594 (rtx, rtx *);
rtx
gen_peephole2_594 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 6672 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[1] = widen_memory_access (operands[1], DFmode, 0);
   operands[0] = gen_rtx_REG (DFmode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6675 */
extern rtx gen_peephole2_595 (rtx, rtx *);
rtx
gen_peephole2_595 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 6684 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[0] = widen_memory_access (operands[0], DFmode, 0);
   operands[1] = gen_rtx_REG (DFmode, REGNO (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6687 */
extern rtx gen_peephole2_596 (rtx, rtx *);
rtx
gen_peephole2_596 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6696 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[3] = widen_memory_access (operands[3], DImode, 0);
    operands[2] = gen_rtx_REG (DImode, REGNO (operands[2]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6699 */
extern rtx gen_peephole2_597 (rtx, rtx *);
rtx
gen_peephole2_597 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6708 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[2] = widen_memory_access (operands[2], DImode, 0);
   operands[3] = gen_rtx_REG (DImode, REGNO (operands[3]));
   
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6712 */
extern rtx gen_peephole2_598 (rtx, rtx *);
rtx
gen_peephole2_598 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6721 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[3] = widen_memory_access (operands[3], DFmode, 0);
   operands[2] = gen_rtx_REG (DFmode, REGNO (operands[2]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6724 */
extern rtx gen_peephole2_599 (rtx, rtx *);
rtx
gen_peephole2_599 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6733 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[2] = widen_memory_access (operands[2], DFmode, 0);
   operands[3] = gen_rtx_REG (DFmode, REGNO (operands[3]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6740 */
extern rtx gen_peephole2_600 (rtx, rtx *);
rtx
gen_peephole2_600 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 6753 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	100),
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand1),
	const0_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6755 */
extern rtx gen_peephole2_601 (rtx, rtx *);
rtx
gen_peephole2_601 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 6769 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCXmode,
	100),
	gen_rtx_COMPARE (CCXmode,
	copy_rtx (operand1),
	const0_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6778 */
rtx
gen_prefetch (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6783 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  if (TARGET_ARCH64)
    emit_insn (gen_prefetch_64 (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_prefetch_32 (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6850 */
rtx
gen_ctrapsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 6856 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[1] = gen_compare_reg (operands[0]);
   if (GET_MODE (operands[1]) != CCmode && GET_MODE (operands[1]) != CCXmode)
     FAIL;
   operands[2] = const0_rtx;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_TRAP_IF (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:6861 */
rtx
gen_ctrapdi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 6867 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
operands[1] = gen_compare_reg (operands[0]);
   if (GET_MODE (operands[1]) != CCmode && GET_MODE (operands[1]) != CCXmode)
     FAIL;
   operands[2] = const0_rtx;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_TRAP_IF (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7460 */
rtx
gen_stack_protect_set (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 7464 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
#ifdef TARGET_THREAD_SSP_OFFSET
  rtx tlsreg = gen_rtx_REG (Pmode, 7);
  rtx addr = gen_rtx_PLUS (Pmode, tlsreg, GEN_INT (TARGET_THREAD_SSP_OFFSET));
  operands[1] = gen_rtx_MEM (Pmode, addr);
#endif
  if (TARGET_ARCH64)
    emit_insn (gen_stack_protect_setdi (operands[0], operands[1]));
  else
    emit_insn (gen_stack_protect_setsi (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sparc.md:7495 */
rtx
gen_stack_protect_test (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 7500 "../../gcc-4.5.3/gcc/config/sparc/sparc.md"
{
  rtx result, test;
#ifdef TARGET_THREAD_SSP_OFFSET
  rtx tlsreg = gen_rtx_REG (Pmode, 7);
  rtx addr = gen_rtx_PLUS (Pmode, tlsreg, GEN_INT (TARGET_THREAD_SSP_OFFSET));
  operands[1] = gen_rtx_MEM (Pmode, addr);
#endif
  if (TARGET_ARCH64)
    {
      result = gen_reg_rtx (Pmode);
      emit_insn (gen_stack_protect_testdi (result, operands[0], operands[1]));
      test = gen_rtx_EQ (VOIDmode, result, const0_rtx);
      emit_jump_insn (gen_cbranchdi4 (test, result, const0_rtx, operands[2]));
    }
  else
    {
      emit_insn (gen_stack_protect_testsi (operands[0], operands[1]));
      result = gen_rtx_REG (CCmode, SPARC_ICC_REG);
      test = gen_rtx_EQ (VOIDmode, result, const0_rtx);
      emit_jump_insn (gen_cbranchcc4 (test, result, const0_rtx, operands[2]));
    }
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sync.md:21 */
rtx
gen_memory_barrier (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 30 "../../gcc-4.5.3/gcc/config/sparc/sync.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;

}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		copy_rtx (operand0)),
	20)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sync.md:51 */
rtx
gen_sync_compare_and_swapqi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 57 "../../gcc-4.5.3/gcc/config/sparc/sync.md"
{
  sparc_expand_compare_and_swap_12 (operands[0], operands[1],
				    operands[2], operands[3]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sync.md:51 */
rtx
gen_sync_compare_and_swaphi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 57 "../../gcc-4.5.3/gcc/config/sparc/sync.md"
{
  sparc_expand_compare_and_swap_12 (operands[0], operands[1],
				    operands[2], operands[3]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sync.md:63 */
rtx
gen_sync_compare_and_swapsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 73 "../../gcc-4.5.3/gcc/config/sparc/sync.md"
{
  if (! REG_P (XEXP (operands[1], 0)))
    {
      rtx addr = force_reg (Pmode, XEXP (operands[1], 0));
      operands[1] = replace_equiv_address (operands[1], addr);
    }
  emit_insn (gen_memory_barrier ());
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	8)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sync.md:63 */
rtx
gen_sync_compare_and_swapdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 73 "../../gcc-4.5.3/gcc/config/sparc/sync.md"
{
  if (! REG_P (XEXP (operands[1], 0)))
    {
      rtx addr = force_reg (Pmode, XEXP (operands[1], 0));
      operands[1] = replace_equiv_address (operands[1], addr);
    }
  emit_insn (gen_memory_barrier ());
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		operand2,
		operand3),
	8)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sync.md:118 */
rtx
gen_sync_lock_test_and_setqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 123 "../../gcc-4.5.3/gcc/config/sparc/sync.md"
{
  if (operands[2] != const1_rtx)
    FAIL;
  if (TARGET_V8)
    emit_insn (gen_memory_barrier ());
  if (QImode != QImode)
    operands[1] = adjust_address (operands[1], QImode, 0);
  emit_insn (gen_ldstubqi (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sync.md:118 */
rtx
gen_sync_lock_test_and_sethi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 123 "../../gcc-4.5.3/gcc/config/sparc/sync.md"
{
  if (operands[2] != const1_rtx)
    FAIL;
  if (TARGET_V8)
    emit_insn (gen_memory_barrier ());
  if (HImode != QImode)
    operands[1] = adjust_address (operands[1], QImode, 0);
  emit_insn (gen_ldstubhi (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sync.md:134 */
rtx
gen_sync_lock_test_and_setsi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 142 "../../gcc-4.5.3/gcc/config/sparc/sync.md"
{
  if (! TARGET_V8 && ! TARGET_V9)
    {
      if (operands[2] != const1_rtx)
	FAIL;
      operands[1] = adjust_address (operands[1], QImode, 0);
      emit_insn (gen_ldstubsi (operands[0], operands[1]));
      DONE;
    }
  emit_insn (gen_memory_barrier ());
  operands[2] = force_reg (SImode, operands[2]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	9)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.5.3/gcc/config/sparc/sync.md:165 */
rtx
gen_ldstubqi (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		operand1),
	10)),
		gen_rtx_SET (VOIDmode,
	operand1,
	constm1_rtx)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sync.md:173 */
rtx
gen_ldstubhi (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		operand1),
	10))),
		gen_rtx_SET (VOIDmode,
	operand1,
	constm1_rtx)));
}

/* ../../gcc-4.5.3/gcc/config/sparc/sync.md:173 */
rtx
gen_ldstubsi (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		operand1),
	10))),
		gen_rtx_SET (VOIDmode,
	operand1,
	constm1_rtx)));
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 193:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 338:
    case 315:
    case 310:
    case 303:
    case 190:
    case 189:
    case 188:
    case 185:
    case 184:
    case 183:
    case 182:
    case 179:
    case 178:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 176:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 351:
    case 347:
    case 325:
    case 324:
    case 323:
    case 322:
    case 46:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (DImode, 15);
      break;

    case 45:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 15);
      break;

    case 23:
    case 22:
    case 21:
    case 20:
    case 16:
    case 15:
    case 14:
    case 10:
    case 9:
    case 8:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCmode, 100);
      break;

    default:
      gcc_unreachable ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 193:
    case 338:
    case 315:
    case 310:
    case 303:
    case 190:
    case 189:
    case 188:
    case 185:
    case 184:
    case 183:
    case 182:
    case 179:
    case 178:
    case 176:
      return 0;

    case 351:
    case 347:
    case 325:
    case 324:
    case 323:
    case 322:
    case 46:
    case 45:
    case 23:
    case 22:
    case 21:
    case 20:
    case 16:
    case 15:
    case 14:
    case 10:
    case 9:
    case 8:
      return 1;

    default:
      gcc_unreachable ();
    }
}
