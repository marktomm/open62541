#!/bin/bash

. config

## initial minimal xml
# rm -v ${LCBC_ROOT}/gen/lcbc*
# python ${LCBC_ROOT}/${LCBC_ROOT}/tools/nodeset_compiler/nodeset_compiler.py \
# --types-array=UA_TYPES \
# --existing ${LCBC_ROOT}/${LCBC_ROOT}/deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml \
# --xml ${LCBC_ROOT}/xml/lcbc-feeder1.xml ${LCBC_ROOT}/gen/lcbc_feeder1

[[ -z ${GEN_FLAT_FEEDER} ]] || {
    rm -v ${LCBC_ROOT}/gen/lcbc_feeder1*
    python /usr/local/share/open62541/tools/nodeset_compiler/nodeset_compiler.py \
    --types-array=UA_TYPES \
    --existing /usr/local/include/open62541/deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml \
    --xml ${LCBC_ROOT}/xml/lcbc-merge.xml ${LCBC_ROOT}/gen/lcbc_feeder1

    # aling xml parser output include with default insatll location
    sed -i 's/\(#include \).*$/\1 "open62541\/open62541.h"/' ${LCBC_ROOT}/gen/lcbc_feeder1.h
}

[[ -z ${GEN_OBJECT_FEEDER} ]] || {
    rm -v ${LCBC_ROOT}/gen/lcbc_object_feeder1*
    python /usr/local/share/open62541/tools/nodeset_compiler/nodeset_compiler.py \
    --types-array=UA_TYPES \
    --existing /usr/local/include/open62541/deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml \
    --xml ${LCBC_ROOT}/xml/lcbc-feeder-object.xml ${LCBC_ROOT}/gen/lcbc_object_feeder1

    # aling xml parser output include with default insatll location
    sed -i 's/\(#include \).*$/\1 "open62541\/open62541.h"/' ${LCBC_ROOT}/gen/lcbc_object_feeder1.h
}

[[ -z ${GEN_OBJECT_FEEDER_MAN} ]] || {
    # latest xml to code. xml is manualy composed. expect bugs
    rm -v ${LCBC_ROOT}/gen/lcbc_object_feeder1*
    python /usr/local/share/open62541/tools/nodeset_compiler/nodeset_compiler.py \
    --types-array=UA_TYPES \
    --existing /usr/local/include/open62541/deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml \
    --xml ${LCBC_ROOT}/xml/lcbc-feeder-object.xml ${LCBC_ROOT}/gen/lcbc_object_feeder1

    # aling xml parser output include with default insatll location
    sed -i 's/\(#include \).*$/\1 "open62541\/open62541.h"/' ${LCBC_ROOT}/gen/lcbc_object_feeder1.h
}

[[ -z ${GEN_ONLY_RULES} ]] || {
    rm -v ${LCBC_ROOT}/gen/lcbc-only-rules*
    python /usr/local/share/open62541/tools/nodeset_compiler/nodeset_compiler.py \
    --types-array=UA_TYPES \
    --existing /usr/local/include/open62541/deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml \
    --xml ${LCBC_ROOT}/xml/lcbc-only-rules.xml ${LCBC_ROOT}/gen/lcbc_only_rules1

    # aling xml parser output include with default insatll location
    sed -i 's/\(#include \).*$/\1 "open62541\/open62541.h"/' ${LCBC_ROOT}/gen/lcbc_only_rules1.h
}

[[ -z ${GEN_OBJECT_EXAMPLE} ]] || {
    rm -v ${LCBC_ROOT}/gen/example*
    python /usr/local/share/open62541/tools/nodeset_compiler/nodeset_compiler.py \
    --types-array=UA_TYPES \
    --existing /usr/local/include/open62541/deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml \
    --xml ${LCBC_ROOT}/xml/example.xml ${LCBC_ROOT}/gen/example

    # aling xml parser output include with default insatll location
    sed -i 's/\(#include \).*$/\1 "open62541\/open62541.h"/' ${LCBC_ROOT}/gen/example.h
}


[[ -z ${GEN_MULTI_NS} ]] || {
    rm -v ${LCBC_ROOT}/gen/lcbc_ns*
    python /usr/local/share/open62541/tools/nodeset_compiler/nodeset_compiler.py \
    --types-array=UA_TYPES \
    --existing /usr/local/include/open62541/deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml \
    --xml ${LCBC_ROOT}/xml/lcbc-ns1.xml ${LCBC_ROOT}/gen/lcbc_ns1

    python /usr/local/share/open62541/tools/nodeset_compiler/nodeset_compiler.py \
    --types-array=UA_TYPES \
    --existing /usr/local/include/open62541/deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml \
    --existing ${LCBC_ROOT}/xml/lcbc-ns1.xml \
    --xml ${LCBC_ROOT}/xml/lcbc-ns2.xml ${LCBC_ROOT}/gen/lcbc_ns2

    # aling xml parser output include with default insatll location
    sed -i 's/\(#include \).*$/\1 "open62541\/open62541.h"/' ${LCBC_ROOT}/gen/lcbc_ns1.h
    sed -i 's/\(#include \).*$/\1 "open62541\/open62541.h"/' ${LCBC_ROOT}/gen/lcbc_ns2.h
}