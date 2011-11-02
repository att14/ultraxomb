source scripts/functions.sh
source scripts/config.sh

set -x

PREFIX=`pwd`/local

export PATH=$PREFIX/bin:$PATH

setphase "COMPILE GDC"
cd build/gcc-obj
../gcc-${GCC_VER}/configure --target=$TARGET --prefix=$PREFIX --enable-languages=d --disable-libssp --with-gmp=$PREFIX --with-mpfr=$PREFIX --with-mpc=$PREFIX --without-headers --disable-nls --with-newlib || exit
make -j$NCPU || exit
make install || exit
cd ../..
