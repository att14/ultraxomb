/* Generated automatically by the program `genattr'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_H
#define GCC_INSN_ATTR_H

#define HAVE_ATTR_alternative
#define get_attr_alternative(insn) which_alternative
#define HAVE_ATTR_cpu
enum attr_cpu {CPU_V7, CPU_CYPRESS, CPU_V8, CPU_SUPERSPARC, CPU_HYPERSPARC, CPU_LEON, CPU_SPARCLITE, CPU_F930, CPU_F934, CPU_SPARCLITE86X, CPU_SPARCLET, CPU_TSC701, CPU_V9, CPU_ULTRASPARC, CPU_ULTRASPARC3, CPU_NIAGARA, CPU_NIAGARA2};
extern enum attr_cpu get_attr_cpu (void);

#define HAVE_ATTR_isa
enum attr_isa {ISA_V7, ISA_V8, ISA_V9, ISA_SPARCLET};
extern enum attr_isa get_attr_isa (void);

#define HAVE_ATTR_type
enum attr_type {TYPE_IALU, TYPE_COMPARE, TYPE_SHIFT, TYPE_LOAD, TYPE_SLOAD, TYPE_STORE, TYPE_UNCOND_BRANCH, TYPE_BRANCH, TYPE_CALL, TYPE_SIBCALL, TYPE_CALL_NO_DELAY_SLOT, TYPE_RETURN, TYPE_IMUL, TYPE_IDIV, TYPE_FPLOAD, TYPE_FPSTORE, TYPE_FP, TYPE_FPMOVE, TYPE_FPCMOVE, TYPE_FPCRMOVE, TYPE_FPCMP, TYPE_FPMUL, TYPE_FPDIVS, TYPE_FPDIVD, TYPE_FPSQRTS, TYPE_FPSQRTD, TYPE_FGA, TYPE_FGM_PACK, TYPE_FGM_MUL, TYPE_FGM_PDIST, TYPE_FGM_CMP, TYPE_CMOVE, TYPE_IALUX, TYPE_MULTI, TYPE_SAVEW, TYPE_FLUSHW, TYPE_IFLUSH, TYPE_TRAP};
extern enum attr_type get_attr_type (rtx);

#define HAVE_ATTR_empty_delay_slot
enum attr_empty_delay_slot {EMPTY_DELAY_SLOT_FALSE, EMPTY_DELAY_SLOT_TRUE};
extern enum attr_empty_delay_slot get_attr_empty_delay_slot (rtx);

#define HAVE_ATTR_branch_type
enum attr_branch_type {BRANCH_TYPE_NONE, BRANCH_TYPE_ICC, BRANCH_TYPE_FCC, BRANCH_TYPE_REG};
extern enum attr_branch_type get_attr_branch_type (rtx);

#define HAVE_ATTR_pic
enum attr_pic {PIC_FALSE, PIC_TRUE};
extern enum attr_pic get_attr_pic (rtx);

#define HAVE_ATTR_calls_alloca
enum attr_calls_alloca {CALLS_ALLOCA_FALSE, CALLS_ALLOCA_TRUE};
extern enum attr_calls_alloca get_attr_calls_alloca (rtx);

#define HAVE_ATTR_calls_eh_return
enum attr_calls_eh_return {CALLS_EH_RETURN_FALSE, CALLS_EH_RETURN_TRUE};
extern enum attr_calls_eh_return get_attr_calls_eh_return (rtx);

#define HAVE_ATTR_leaf_function
enum attr_leaf_function {LEAF_FUNCTION_FALSE, LEAF_FUNCTION_TRUE};
extern enum attr_leaf_function get_attr_leaf_function (rtx);

#define HAVE_ATTR_delayed_branch
enum attr_delayed_branch {DELAYED_BRANCH_FALSE, DELAYED_BRANCH_TRUE};
extern enum attr_delayed_branch get_attr_delayed_branch (rtx);

#define HAVE_ATTR_length
extern int get_attr_length (rtx);
extern void shorten_branches (rtx);
extern int insn_default_length (rtx);
extern int insn_min_length (rtx);
extern int insn_variable_length_p (rtx);
extern int insn_current_length (rtx);

#include "insn-addr.h"

#define HAVE_ATTR_fptype
enum attr_fptype {FPTYPE_SINGLE, FPTYPE_DOUBLE};
extern enum attr_fptype get_attr_fptype (rtx);

#define HAVE_ATTR_us3load_type
enum attr_us3load_type {US3LOAD_TYPE_2CYCLE, US3LOAD_TYPE_3CYCLE};
extern enum attr_us3load_type get_attr_us3load_type (rtx);

#define HAVE_ATTR_tls_call_delay
enum attr_tls_call_delay {TLS_CALL_DELAY_FALSE, TLS_CALL_DELAY_TRUE};
extern enum attr_tls_call_delay get_attr_tls_call_delay (rtx);

#define HAVE_ATTR_in_call_delay
enum attr_in_call_delay {IN_CALL_DELAY_FALSE, IN_CALL_DELAY_TRUE};
extern enum attr_in_call_delay get_attr_in_call_delay (rtx);

#define HAVE_ATTR_eligible_for_sibcall_delay
enum attr_eligible_for_sibcall_delay {ELIGIBLE_FOR_SIBCALL_DELAY_FALSE, ELIGIBLE_FOR_SIBCALL_DELAY_TRUE};
extern enum attr_eligible_for_sibcall_delay get_attr_eligible_for_sibcall_delay (rtx);

#define HAVE_ATTR_eligible_for_return_delay
enum attr_eligible_for_return_delay {ELIGIBLE_FOR_RETURN_DELAY_FALSE, ELIGIBLE_FOR_RETURN_DELAY_TRUE};
extern enum attr_eligible_for_return_delay get_attr_eligible_for_return_delay (rtx);

#define HAVE_ATTR_in_branch_delay
enum attr_in_branch_delay {IN_BRANCH_DELAY_FALSE, IN_BRANCH_DELAY_TRUE};
extern enum attr_in_branch_delay get_attr_in_branch_delay (rtx);

#define HAVE_ATTR_in_uncond_branch_delay
enum attr_in_uncond_branch_delay {IN_UNCOND_BRANCH_DELAY_FALSE, IN_UNCOND_BRANCH_DELAY_TRUE};
extern enum attr_in_uncond_branch_delay get_attr_in_uncond_branch_delay (rtx);

#define HAVE_ATTR_in_annul_branch_delay
enum attr_in_annul_branch_delay {IN_ANNUL_BRANCH_DELAY_FALSE, IN_ANNUL_BRANCH_DELAY_TRUE};
extern enum attr_in_annul_branch_delay get_attr_in_annul_branch_delay (rtx);

#define DELAY_SLOTS
extern int num_delay_slots (rtx);
extern int eligible_for_delay (rtx, int, rtx, int);

extern int const_num_delay_slots (rtx);

#define ANNUL_IFFALSE_SLOTS
extern int eligible_for_annul_false (rtx, int, rtx, int);

#define INSN_SCHEDULING

/* DFA based pipeline interface.  */
#ifndef AUTOMATON_ALTS
#define AUTOMATON_ALTS 0
#endif


#ifndef AUTOMATON_STATE_ALTS
#define AUTOMATON_STATE_ALTS 0
#endif

#ifndef CPU_UNITS_QUERY
#define CPU_UNITS_QUERY 0
#endif

/* Initialize fn pointers for internal_dfa_insn_code
   and insn_default_latency.  */
extern void init_sched_attrs (void);

/* Internal insn code number used by automata.  */
extern int (*internal_dfa_insn_code) (rtx);

/* Insn latency time defined in define_insn_reservation. */
extern int (*insn_default_latency) (rtx);

/* Return nonzero if there is a bypass for given insn
   which is a data producer.  */
extern int bypass_p (rtx);

/* Insn latency time on data consumed by the 2nd insn.
   Use the function if bypass_p returns nonzero for
   the 1st insn. */
extern int insn_latency (rtx, rtx);

/* Maximal insn latency time possible of all bypasses for this insn.
   Use the function if bypass_p returns nonzero for
   the 1st insn. */
extern int maximal_insn_latency (rtx);


#if AUTOMATON_ALTS
/* The following function returns number of alternative
   reservations of given insn.  It may be used for better
   insns scheduling heuristics. */
extern int insn_alts (rtx);

#endif

/* Maximal possible number of insns waiting results being
   produced by insns whose execution is not finished. */
extern const int max_insn_queue_index;

/* Pointer to data describing current state of DFA.  */
typedef void *state_t;

/* Size of the data in bytes.  */
extern int state_size (void);

/* Initiate given DFA state, i.e. Set up the state
   as all functional units were not reserved.  */
extern void state_reset (state_t);
/* The following function returns negative value if given
   insn can be issued in processor state described by given
   DFA state.  In this case, the DFA state is changed to
   reflect the current and future reservations by given
   insn.  Otherwise the function returns minimal time
   delay to issue the insn.  This delay may be zero
   for superscalar or VLIW processors.  If the second
   parameter is NULL the function changes given DFA state
   as new processor cycle started.  */
extern int state_transition (state_t, rtx);

#if AUTOMATON_STATE_ALTS
/* The following function returns number of possible
   alternative reservations of given insn in given
   DFA state.  It may be used for better insns scheduling
   heuristics.  By default the function is defined if
   macro AUTOMATON_STATE_ALTS is defined because its
   implementation may require much memory.  */
extern int state_alts (state_t, rtx);
#endif

extern int min_issue_delay (state_t, rtx);
/* The following function returns nonzero if no one insn
   can be issued in current DFA state. */
extern int state_dead_lock_p (state_t);
/* The function returns minimal delay of issue of the 2nd
   insn after issuing the 1st insn in given DFA state.
   The 1st insn should be issued in given state (i.e.
    state_transition should return negative value for
    the insn and the state).  Data dependencies between
    the insns are ignored by the function.  */
extern int min_insn_conflict_delay (state_t, rtx, rtx);
/* The following function outputs reservations for given
   insn as they are described in the corresponding
   define_insn_reservation.  */
extern void print_reservation (FILE *, rtx);

#if CPU_UNITS_QUERY
/* The following function returns code of functional unit
   with given name (see define_cpu_unit). */
extern int get_cpu_unit_code (const char *);
/* The following function returns nonzero if functional
   unit with given code is currently reserved in given
   DFA state.  */
extern int cpu_unit_reservation_p (state_t, int);
#endif

/* The following function returns true if insn
   has a dfa reservation.  */
extern bool insn_has_dfa_reservation_p (rtx);

/* Clean insn code cache.  It should be called if there
   is a chance that condition value in a
   define_insn_reservation will be changed after
   last call of dfa_start.  */
extern void dfa_clean_insn_cache (void);

extern void dfa_clear_single_insn_cache (rtx);

/* Initiate and finish work with DFA.  They should be
   called as the first and the last interface
   functions.  */
extern void dfa_start (void);
extern void dfa_finish (void);

#define ATTR_FLAG_forward	0x1
#define ATTR_FLAG_backward	0x2
#define ATTR_FLAG_likely	0x4
#define ATTR_FLAG_very_likely	0x8
#define ATTR_FLAG_unlikely	0x10
#define ATTR_FLAG_very_unlikely	0x20

#endif /* GCC_INSN_ATTR_H */
