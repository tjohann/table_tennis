#!/bin/bash

autoreconf --install || exit 1
./configure --sysconfdir=/etc --prefix=/usr --enable-debug-info

cd po
make update-po

cd ..
make
#sudo make install
