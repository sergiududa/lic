############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_unroll "conv_layer1/conv_layer1_label0"
set_directive_unroll "pool_layer1/pool_layer1_label2"
set_directive_unroll "pool_layer2/pool_layer2_label3"
set_directive_unroll "conv_layer1/conv_layer1_label5"
set_directive_unroll "conv_layer1/conv_layer1_label6"
set_directive_pipeline "conv_layer1/conv_layer1_label7"
set_directive_unroll "conv_layer2/conv_layer2_label1"
set_directive_unroll "conv_layer2/conv_layer2_label9"
set_directive_unroll "conv_layer2/conv_layer2_label10"
set_directive_pipeline -II 16 "conv_layer2/conv_layer2_label11"
set_directive_unroll "pool_layer1/pool_layer1_label13"
set_directive_unroll "pool_layer1/pool_layer1_label14"
set_directive_pipeline -II 50 "pool_layer1/pool_layer1_label15"
set_directive_unroll "pool_layer2/pool_layer2_label16"
set_directive_unroll "pool_layer2/pool_layer2_label17"
set_directive_pipeline -II 21 "pool_layer2/pool_layer2_label18"
set_directive_pipeline "fc_layer3/fc_layer3_label0"
set_directive_pipeline "fc_layer2/fc_layer2_label1"
set_directive_pipeline "fc_layer1/fc_layer1_label2"
