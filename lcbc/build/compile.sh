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

[[ -z ${GEN_OBJECT_FEEDER_MAN} ]] || {
    rm -v ${LCBC_ROOT}/bin/lcbcServerObjectMan
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/lcbcServerObject.c ${LCBC_ROOT}/manual_lcbc_object_feeder1.c -o ${LCBC_ROOT}/bin/lcbcServerObjectMan
}

[[ -z ${GEN_ONLY_RULES} ]] || {
        rm -v ${LCBC_ROOT}/bin/lcbcServerOnlyRules
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/lcbcServerOnlyRules.c ${LCBC_ROOT}/gen/lcbc_only_rules1.c -o ${LCBC_ROOT}/bin/lcbcServerOnlyRules
}

[[ -z ${GEN_OBJECT_EXAMPLE} ]] || {
    rm -v ${LCBC_ROOT}/bin/lcbcServerExample
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/lcbcServerExample.c ${LCBC_ROOT}/gen/example.c -o ${LCBC_ROOT}/bin/lcbcServerExample
}

[[ -z ${GEN_MULTI_NS} ]] || {
    rm -v ${LCBC_ROOT}/bin/lcbcServerMultiNs
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/lcbcServerMultiNs.c ${LCBC_ROOT}/manual_lcbc_ns1.c ${LCBC_ROOT}/manual_lcbc_ns2.c ${LCBC_ROOT}/constants.c ${LCBC_ROOT}/add.c ${LCBC_ROOT}/callbacks.c -o ${LCBC_ROOT}/bin/lcbcServerMultiNs
}

[[ -z ${GEN_MULTI_NS_ORIG} ]] || {
    rm -v ${LCBC_ROOT}/bin/lcbcServerMultiNs
    gcc --std=c99 ${OPEN_OPC_ROOT}/build/open62541.c ${LCBC_ROOT}/gen/lcbc_ns1.c ${LCBC_ROOT}/gen/lcbc_ns2.c ${LCBC_ROOT}/constants.c ${LCBC_ROOT}/add.c ${LCBC_ROOT}/callbacks.c ${LCBC_ROOT}/lcbcServerMultiNs.c -o ${LCBC_ROOT}/bin/lcbcServerMultiNs
}