#!/bin/sh

mkdir build && cd build

cmake ${CMAKE_ARGS} .. \
	 -DCMAKE_INSTALL_PREFIX=$PREFIX \
     -DCMAKE_INSTALL_LIBDIR=lib \
     -DENABLE_DOUBLE_PRECISION:BOOL=ON \
	  $SRC_DIR

make -j${CPU_COUNT}
make install
