############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project test_conv2d
set_top nnet
add_files test_conv2d/solution1/conv.c
add_files -tb test_conv2d/solution1/.tcls/conv_test.c
open_solution "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./test_conv2d/solution1/directives.tcl"
csim_design -argv {-std=c99} -compiler gcc
csynth_design
cosim_design -compiler gcc
export_design -format ip_catalog
