#!/bin/bash

. config

[[ -z ${GEN_FLAT_FEEDER} ]] || {
    rm -v ${LCBC_ROOT}/bin/lcbcServerFlat
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/lcbcServer.c ${LCBC_ROOT}/gen/lcbc_feeder1.c -o ${LCBC_ROOT}/bin/lcbcServerFlat
}

[[ -z ${GEN_OBJECT_FEEDER} ]] || {
    rm -v ${LCBC_ROOT}/bin/lcbcServerObject
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/lcbcServerObject.c ${LCBC_ROOT}/gen/lcbc_object_feeder1.c -o ${LCBC_ROOT}/bin/lcbcServerObject
}