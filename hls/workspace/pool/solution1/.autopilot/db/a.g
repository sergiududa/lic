#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/a.g.bc ${1+"$@"}
