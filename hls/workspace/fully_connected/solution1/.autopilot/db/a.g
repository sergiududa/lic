#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/sergiu/git/lic/hls/workspace/fully_connected/solution1/.autopilot/db/a.g.bc ${1+"$@"}