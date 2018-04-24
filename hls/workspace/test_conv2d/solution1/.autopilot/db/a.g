#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/sergiu/git/lic/hls/workspace/test_conv2d/solution1/.autopilot/db/a.g.bc ${1+"$@"}
