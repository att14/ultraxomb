#!/bin/sh -x

mkdir -p .tempobjs
cd .tempobjs

ar x ../../xomb/runtimes/mindrt/drt0.a
ar x ../../xomb/runtimes/mindrt/mindrt.a
ar x ../../xomb/user/c/lib/cbindings.a
ar -rs ../local/sparc64-sun-xomb/lib/libc.a *.o

cd ..
rm -r .tempobjs
