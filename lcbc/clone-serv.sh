#!/bin/bash

sudo apt-get install git build-essential gcc pkg-config cmake python python-six -y

sudo rm -rvf opc-ua-c

git clone https://github.com/marktomm/open62541.git opc-ua-c
cd opc-ua-c
git checkout lcbc
git submodule update --init --recursive
mkdir build
cd build

cmake -DBUILD_SHARED_LIBS=ON \
-DUA_ENABLE_AMALGAMATION=ON \
-DUA_ENABLE_FULL_NS0=ON \
-DUA_LOGLEVEL=300 ..

make -j4
sudo make install

cd ../lcbc/build
./xml_parser.sh
sed -i 's/\(#include \).*$/\1 "open62541\/open62541.h"/' ../gen/lcbc_feeder1.h
./compile.sh
echo "location of server binary: opc-ua-c/lcbc/bin"
