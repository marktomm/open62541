#!/bin/bash

rm -v ../gen/lcbc*
python ../../tools/nodeset_compiler/nodeset_compiler.py --types-array=UA_TYPES --existing ../../deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml --xml ../xml/lcbc-feeder1.xml ../gen/lcbc_feeder1

# rm -v ../gen/lcbc*
# python /usr/local/share/open62541/tools/nodeset_compiler/nodeset_compiler.py --types-array=UA_TYPES --existing /usr/local/include/open62541/deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml --xml ../xml/lcbc-merge.xml ../gen/lcbc_feeder1