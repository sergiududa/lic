#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("conv_layer1_out_V_address0", 13, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("conv_layer1_out_V_ce0", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("conv_layer1_out_V_we0", 1, hls_out, 0, "ap_memory", "mem_we", 1),
	Port_Property("conv_layer1_out_V_d0", 24, hls_out, 0, "ap_memory", "mem_din", 1),
	Port_Property("conv_layer1_out_V_q0", 24, hls_in, 0, "ap_memory", "mem_dout", 1),
	Port_Property("conv_layer2_out_V_address0", 12, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("conv_layer2_out_V_ce0", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("conv_layer2_out_V_we0", 1, hls_out, 1, "ap_memory", "mem_we", 1),
	Port_Property("conv_layer2_out_V_d0", 24, hls_out, 1, "ap_memory", "mem_din", 1),
	Port_Property("conv_layer2_out_V_q0", 24, hls_in, 1, "ap_memory", "mem_dout", 1),
	Port_Property("pool_layer1_out_V_address0", 11, hls_out, 2, "ap_memory", "mem_address", 1),
	Port_Property("pool_layer1_out_V_ce0", 1, hls_out, 2, "ap_memory", "mem_ce", 1),
	Port_Property("pool_layer1_out_V_we0", 1, hls_out, 2, "ap_memory", "mem_we", 1),
	Port_Property("pool_layer1_out_V_d0", 24, hls_out, 2, "ap_memory", "mem_din", 1),
	Port_Property("pool_layer1_out_V_q0", 24, hls_in, 2, "ap_memory", "mem_dout", 1),
	Port_Property("pool_layer2_out_V_address0", 10, hls_out, 3, "ap_memory", "mem_address", 1),
	Port_Property("pool_layer2_out_V_ce0", 1, hls_out, 3, "ap_memory", "mem_ce", 1),
	Port_Property("pool_layer2_out_V_we0", 1, hls_out, 3, "ap_memory", "mem_we", 1),
	Port_Property("pool_layer2_out_V_d0", 24, hls_out, 3, "ap_memory", "mem_din", 1),
	Port_Property("pool_layer2_out_V_q0", 24, hls_in, 3, "ap_memory", "mem_dout", 1),
	Port_Property("flatten_out_V_address0", 10, hls_out, 4, "ap_memory", "mem_address", 1),
	Port_Property("flatten_out_V_ce0", 1, hls_out, 4, "ap_memory", "mem_ce", 1),
	Port_Property("flatten_out_V_we0", 1, hls_out, 4, "ap_memory", "mem_we", 1),
	Port_Property("flatten_out_V_d0", 24, hls_out, 4, "ap_memory", "mem_din", 1),
	Port_Property("flatten_out_V_q0", 24, hls_in, 4, "ap_memory", "mem_dout", 1),
	Port_Property("fc_layer1_out_V_address0", 7, hls_out, 5, "ap_memory", "mem_address", 1),
	Port_Property("fc_layer1_out_V_ce0", 1, hls_out, 5, "ap_memory", "mem_ce", 1),
	Port_Property("fc_layer1_out_V_we0", 1, hls_out, 5, "ap_memory", "mem_we", 1),
	Port_Property("fc_layer1_out_V_d0", 24, hls_out, 5, "ap_memory", "mem_din", 1),
	Port_Property("fc_layer1_out_V_q0", 24, hls_in, 5, "ap_memory", "mem_dout", 1),
	Port_Property("fc_layer2_out_V_address0", 7, hls_out, 6, "ap_memory", "mem_address", 1),
	Port_Property("fc_layer2_out_V_ce0", 1, hls_out, 6, "ap_memory", "mem_ce", 1),
	Port_Property("fc_layer2_out_V_we0", 1, hls_out, 6, "ap_memory", "mem_we", 1),
	Port_Property("fc_layer2_out_V_d0", 24, hls_out, 6, "ap_memory", "mem_din", 1),
	Port_Property("fc_layer2_out_V_q0", 24, hls_in, 6, "ap_memory", "mem_dout", 1),
	Port_Property("fc_layer3_out_V_address0", 4, hls_out, 7, "ap_memory", "mem_address", 1),
	Port_Property("fc_layer3_out_V_ce0", 1, hls_out, 7, "ap_memory", "mem_ce", 1),
	Port_Property("fc_layer3_out_V_we0", 1, hls_out, 7, "ap_memory", "mem_we", 1),
	Port_Property("fc_layer3_out_V_d0", 24, hls_out, 7, "ap_memory", "mem_din", 1),
};
const char* HLS_Design_Meta::dut_name = "nnet";
