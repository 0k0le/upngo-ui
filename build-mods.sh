#!/bin/sh

echo "Run this script from the project root directory"

cd 3rd/finalcut
autoreconf --install --force && ./configure --prefix=/usr && make -j4
cd ../../
