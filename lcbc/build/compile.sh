#!/bin/bash

rm -v ../bin/lcbcServer
gcc --std=c99 ../../build/open62541.c ../lcbcServer.c ../gen/lcbc_feeder1.c -o ../bin/lcbcServer
