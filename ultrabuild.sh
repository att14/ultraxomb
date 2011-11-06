source scripts/functions.sh
source scripts/config.sh

set -x

PREFIX=`pwd`/local

export PATH=$PREFIX/bin:$PATH

# -- Directory creation --

mkdir -p build
mkdir -p local
cd build

setphase "MAKE OBJECT DIRECTORIES"
mkdir -p binutils-obj
mkdir -p gcc-obj
mkdir -p newlib-obj
mkdir -p gmp-obj
mkdir -p mpfr-obj
mkdir -p mpc-obj

find . -name "config.cache" -exec rm -rf {} \;

cp ../newlib-files/vanilla-syscalls.c newlib-${NEWLIB_VER}/newlib/libc/sys/${OSNAME}/syscalls.c || exit
cp ../newlib-files/vanilla-crt0.c newlib-${NEWLIB_VER}/newlib/libc/sys/${OSNAME}/crt0.c || exit

# -- Build BINUTILS --

setphase "COMPILE BINUTILS"
cd binutils-obj
../binutils-${BINUTILS_VER}/configure --target=$TARGET --prefix=$PREFIX --disable-werror --enable-gold --enable-plugins || exit
make -j$NCPU all-gold || exit
make -j$NCPU || exit
make install || exit
cd ..

# -- Build GMP --

setphase "COMPILE GMP"
cd gmp-obj
../gmp-${GMP_VER}/configure --prefix=$PREFIX --enable-cxx --disable-shared || exit
make -j$NCPU || exit
if [ $NOTEST -ne 1 ]; then 
	make check || exit
fi
make install || exit
cd ..

# -- Build MPFR --

setphase "COMPILE MPFR"
cd mpfr-obj
../mpfr-${MPFR_VER}/configure --prefix=$PREFIX --with-gmp=$PREFIX --disable-shared
make -j$NCPU || exit
if [ $NOTEST -ne 1 ]; then
	make check || exit
fi
make install || exit
cd ..

# -- Build MPC --

setphase "COMPILE MPC"
cd mpc-obj
../mpc-${MPC_VER}/configure --target=$TARGET --prefix=$PREFIX --with-gmp=$PREFIX --with-mpfr=$PREFIX --disable-shared || exit
make -j$NCPU || exit
if [ $NOTEST -ne 1]; then
	make check || exit
fi
make install || exit
cd ..

# -- Build GCC --

setphase "COMPILE GCC"
cd gcc-obj
../gcc-${GCC_VER}/configure --target=$TARGET --prefix=$PREFIX --enable-languages=c,c++ --disable-libssp --with-gmp=$PREFIX --with-mpfr=$PREFIX --with-mpc=$PREFIX --without-headers --disable-nls --with-newlib || exit
make -j$NCPU all-gcc || exit
make install-gcc || exit
cd ..

setphase "AUTOCONF NEWLIB-XOMB"
cd newlib-${NEWLIB_VER}/newlib/libc/sys
autoconf || exit
cd ${OSNAME}
autoreconf || exit
cd ../../../../..

setphase "CONFIGURE NEWLIB"
cd newlib-obj
../newlib-${NEWLIB_VER}/configure --target=$TARGET --prefix=$PREFIX --with-gmp=$PREFIX --with-mpfr=$PREFIX -enable-newlib-hw-fp || exit

setphase "COMPILE NEWLIB"
make -j$NCPU || exit
make install || exit
cd ..

setphase "PASS-2 COMPILE GCC"
cd gcc-obj
make -j$NCPU all-target-libstdc++-v3 || exit
make install-target-libstdc++-v3 || exit
make -j$NCPU all || exit
make install || exit
cd ..

#find . -name "config.cache" -exec rm -rf {} \;

setphase "COMPILE GDC"
cd gcc-obj
../gcc-${GCC_VER}/configure --target=$TARGET --prefix=$PREFIX --enable-languages=d --disable-libssp --with-gmp=$PREFIX --with-mpfr=$PREFIX --with-mpc=$PREFIX --without-headers --disable-nls --with-newlib || exit
make -j$NCPU all-gcc || exit
make install-gcc || exit
cd ..

setphase "PASS-2 COMPILE NEWLIB"
cp ../newlib-files/syscalls.c newlib-${NEWLIB_VER}/newlib/libc/sys/${OSNAME}/syscalls.c || exit
cp ../newlib-files/crt0.c newlib-${NEWLIB_VER}/newlib/libc/sys/${OSNAME}/crt0.c || exit
cd newlib-obj
../newlib-${NEWLIB_VER}/configure --target=$TARGET --prefix=$PREFIX --with-gmp=$PREFIX --with-mpfr=$PREFIX -enable-newlib-hw-fp || exit
make -j$NCPU || exit
make install || exit
cd ..
