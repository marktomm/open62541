#!/bin/bash

. config

[[ -z ${GEN_FLAT_FEEDER} ]] || {
    rm -v ${LCBC_ROOT}/bin/lcbcServerFlat
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/lcbcServer.c ${LCBC_ROOT}/gen/lcbc_feeder1.c -o ${LCBC_ROOT}/bin/lcbcServerFlat
}

[[ -z ${GEN_OBJECT_FEEDER} ]] || {
    rm -v ${LCBC_ROOT}/bin/lcbcServer
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/lcbcServer.c ${LCBC_ROOT}/gen/lcbc_object_feeder1.c -o ${LCBC_ROOT}/bin/lcbcServer
}

[[ -z ${GEN_OBJECT_FEEDER_MAN} ]] || {
    rm -v ${LCBC_ROOT}/bin/lcbcServer
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/lcbcServer.c  ${LCBC_ROOT}/constants.c  ${LCBC_ROOT}/callbacks.c  ${LCBC_ROOT}/add.c ${LCBC_ROOT}/manual_lcbc_single.c ${LCBC_ROOT}/xtors.c -o ${LCBC_ROOT}/bin/lcbcServer
    rm -v ${LCBC_ROOT}/bin/client
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/client.c  ${LCBC_ROOT}/constants.c -o ${LCBC_ROOT}/bin/client
}

[[ -z ${GEN_ONLY_RULES} ]] || {
        rm -v ${LCBC_ROOT}/bin/lcbcServerOnlyRules
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/lcbcServerOnlyRules.c ${LCBC_ROOT}/gen/lcbc_only_rules1.c -o ${LCBC_ROOT}/bin/lcbcServerOnlyRules
}

[[ -z ${GEN_OBJECT_EXAMPLE} ]] || {
    rm -v ${LCBC_ROOT}/bin/lcbcServerExample
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/lcbcServerExample.c ${LCBC_ROOT}/gen/example.c -o ${LCBC_ROOT}/bin/lcbcServerExample
}