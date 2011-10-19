source scripts/functions.sh
source scripts/config.sh

PREFIX=`pwd`/local

export PATH=$PREFIX/bin:$PATH

if [ $CLEAN -eq 1 ]; then
	rm -rf $PREFIX build/*/
fi

# -- Directory creation --

mkdir -p build
mkdir -p local
cd build

setphase "MAKE OBJECT DIRECTORIES"
mkdir -p binutils-obj
mkdir -p gcc-obj
mkdir -p gmp-obj
mkdir -p mpfr-obj
mkdir -p mpc-obj

# -- Fetch and extract each package --
#source ../scripts/fetchandpatch.sh

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

# Do I need AUTOCONF GCC here???????????

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

