#!/bin/sh

# GDC -- D front-end for GCC
# Copyright (C) 2004 David Friedman
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

target=$1
target_cpu=`echo $target | sed 's/^\([^-]*\)-\([^-]*\)-\(.*\)$/\1/'`
target_vendor=`echo $target | sed 's/^\([^-]*\)-\([^-]*\)-\(.*\)$/\2/'`
target_os=`echo $target | sed 's/^\([^-]*\)-\([^-]*\)-\(.*\)$/\3/'`

d_target_os=`echo $target_os | sed 's/^\([A-Za-z_]+\)/\1/'`
case "$d_target_os" in
aix*) d_os_versym=aix ; d_unix=1 ;;
coff*) ;;
cygwin*) d_os_versym=cygwin ; d_unix=1 ;;
darwin*) d_os_versym=darwin ; d_unix=1 ;;
elf*) ;;
freebsd*) d_os_versym=FreeBSD ; d_unix=1 ;;
k*bsd*-gnu) d_os_versym=FreeBSD ; d_unix=1 ;;
kopensolaris*-gnu) d_os_versym=Solaris; d_unix=1 ;;
linux*) d_os_versym=linux ; d_unix=1 ;;
mingw32*) d_os_versym=Win32; d_os_versym2=MinGW; d_windows=1 ;;
openbsd*) d_os_versym=OpenBSD; d_unix=1 ;;
pe*)    case "$target" in
            *-skyos*-*) d_os_versym=skyos ; d_unix=1 ;;
        esac
        ;;
skyos*) d_os_versym=skyos ; d_unix=1 ;; # Doesn't actually work because SkyOS uses i386-skyos-pe
solaris*) d_os_versym=Solaris; d_unix=1 ;;
sysv3*) d_os_versym=sysv3; d_unix=1 ;;
sysv4*) d_os_versym=sysv4; d_unix=1 ;;
*bsd*) d_os_versym=bsd; d_unix=1 ;;
gnu*) d_os_versym=hurd; d_unix=1 ;;

*) d_os_versym="$d_target_os"
esac

case "$target_vendor" in
*) ;;
esac

case "$target_cpu" in
i*86 | x86_64) gdc_target_cpu=x86 ;;
parisc* | hppa*) gdc_target_cpu=hppa ;;
*ppc* | powerpc*) gdc_target_cpu=ppc ;;
*) gdc_target_cpu="$target_cpu"
esac

case "$gdc_target_cpu" in
alpha*)                       d_cpu_versym64=ALPHA ;;
arm*)    d_cpu_versym=ARM  ;;
hppa)    d_cpu_versym=HPPA  ; d_cpu_versym64=HPPA64 ;;
ia64*)                        d_cpu_versym64=IA64 ;;
mips*)   d_cpu_versym=MIPS  ; d_cpu_versym64=MIPS64 ;;
ppc)     d_cpu_versym=PPC   ; d_cpu_versym64=PPC64 ;;
s390*)   d_cpu_versym=S390  ; d_cpu_versym64=S390X ;;
sh*)     d_cpu_versym=SH    ; d_cpu_versym64=SH64 ;;
sparc*)  d_cpu_versym=SPARC ; d_cpu_versym64=SPARC64 ;;
x86)     d_cpu_versym=X86   ; d_cpu_versym64=X86_64 ;;
esac

if test -n "$d_cpu_versym"; then
    echo "#define D_CPU_VERSYM \"$d_cpu_versym\""
fi
if test -n "$d_cpu_versym64"; then
    echo "#define D_CPU_VERSYM64 \"$d_cpu_versym64\""
fi
if test -n "$d_os_versym"; then
    echo "#define D_OS_VERSYM \"$d_os_versym\""
fi
if test -n "$d_os_versym2"; then
    echo "#define D_OS_VERSYM2 \"$d_os_versym2\""
fi
if test -n "$d_vendor_versym"; then
    echo "#define D_VENDOR_VERSYM \"$d_vendor_versym\""
fi

# In DMD, this is usually defined in the target's Makefile.
case "$d_os_versym" in
darwin)  echo "#define TARGET_OSX     1" ;;
freebsd) echo "#define TARGET_FREEBSD 1" ;;
linux)   echo "#define TARGET_LINUX   1" ;;
openbsd) echo "#define TARGET_OPENBSD 1" ;;
solaris) echo "#define TARGET_SOLARIS 1" ;;
Win32)   echo "#define TARGET_WINDOS  1" ;;
*)       echo "#define TARGET_UNIX    1" ;;
esac
