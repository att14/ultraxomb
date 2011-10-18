#ifndef GCC_TM_H
#define GCC_TM_H
#define TARGET_CPU_DEFAULT (TARGET_CPU_v9)
#ifndef LIBC_GLIBC
# define LIBC_GLIBC 1
#endif
#ifndef LIBC_UCLIBC
# define LIBC_UCLIBC 2
#endif
#ifndef LIBC_BIONIC
# define LIBC_BIONIC 3
#endif
#ifdef IN_GCC
# include "options.h"
# include "insn-constants.h"
# include "config/sparc/sparc.h"
# include "config/dbxelf.h"
# include "config/elfos.h"
# include "config/sparc/sysv4.h"
# include "config/sparc/sp64-elf.h"
# include "config/xomb.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-flags.h"
#endif
# include "defaults.h"
#endif /* GCC_TM_H */
