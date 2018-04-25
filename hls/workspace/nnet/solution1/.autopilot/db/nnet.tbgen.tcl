set C_TypeInfoList {{ 
"nnet" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"conv_layer1_out": [[], {"array": [ {"array": ["0", [29,8]]}, [29]]}] }, {"conv_layer2_out": [[], {"array": [ {"array": ["0", [13,16]]}, [13]]}] }, {"pool_layer1_out": [[], {"array": [ {"array": ["0", [14,8]]}, [14]]}] }, {"pool_layer2_out": [[], {"array": [ {"array": ["0", [6,16]]}, [6]]}] }, {"flatten_out": [[], {"array": ["0", [576]]}] }, {"fc_layer1_out": [[], {"array": ["0", [120]]}] }, {"fc_layer2_out": [[], {"array": ["0", [84]]}] }, {"fc_layer3_out": [[], {"array": ["0", [10]]}] }],[],""], 
"0": [ "float24_t", {"typedef": [[[],"1"],""]}], 
"1": [ "ap_fixed<24, 4, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 24}}],[[], {"scalar": { "int": 4}}],[[], {"scalar": { "2": 5}}],[[], {"scalar": { "3": 3}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"2": [ "sc_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}], 
"3": [ "sc_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}]
}}
set moduleName nnet
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {nnet}
set C_modelType { void 0 }
set C_modelArgList {
	{ conv_layer1_out_V int 24 regular {array 6728 { 2 3 } 1 1 }  }
	{ conv_layer2_out_V int 24 regular {array 2704 { 2 3 } 1 1 }  }
	{ pool_layer1_out_V int 24 regular {array 1568 { 2 3 } 1 1 }  }
	{ pool_layer2_out_V int 24 regular {array 576 { 2 3 } 1 1 }  }
	{ flatten_out_V int 24 regular {array 576 { 2 3 } 1 1 }  }
	{ fc_layer1_out_V int 24 regular {array 120 { 2 3 } 1 1 }  }
	{ fc_layer2_out_V int 24 regular {array 84 { 2 3 } 1 1 }  }
	{ fc_layer3_out_V int 24 regular {array 10 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv_layer1_out_V", "interface" : "memory", "bitwidth" : 24, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":23,"cElement": [{"cName": "conv_layer1_out.V","cData": "int24","bit_use": { "low": 0,"up": 23},"cArray": [{"low" : 0,"up" : 28,"step" : 1},{"low" : 0,"up" : 28,"step" : 1},{"low" : 0,"up" : 7,"step" : 1}]}]}]} , 
 	{ "Name" : "conv_layer2_out_V", "interface" : "memory", "bitwidth" : 24, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":23,"cElement": [{"cName": "conv_layer2_out.V","cData": "int24","bit_use": { "low": 0,"up": 23},"cArray": [{"low" : 0,"up" : 12,"step" : 1},{"low" : 0,"up" : 12,"step" : 1},{"low" : 0,"up" : 15,"step" : 1}]}]}]} , 
 	{ "Name" : "pool_layer1_out_V", "interface" : "memory", "bitwidth" : 24, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":23,"cElement": [{"cName": "pool_layer1_out.V","cData": "int24","bit_use": { "low": 0,"up": 23},"cArray": [{"low" : 0,"up" : 13,"step" : 1},{"low" : 0,"up" : 13,"step" : 1},{"low" : 0,"up" : 7,"step" : 1}]}]}]} , 
 	{ "Name" : "pool_layer2_out_V", "interface" : "memory", "bitwidth" : 24, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":23,"cElement": [{"cName": "pool_layer2_out.V","cData": "int24","bit_use": { "low": 0,"up": 23},"cArray": [{"low" : 0,"up" : 5,"step" : 1},{"low" : 0,"up" : 5,"step" : 1},{"low" : 0,"up" : 15,"step" : 1}]}]}]} , 
 	{ "Name" : "flatten_out_V", "interface" : "memory", "bitwidth" : 24, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":23,"cElement": [{"cName": "flatten_out.V","cData": "int24","bit_use": { "low": 0,"up": 23},"cArray": [{"low" : 0,"up" : 575,"step" : 1}]}]}]} , 
 	{ "Name" : "fc_layer1_out_V", "interface" : "memory", "bitwidth" : 24, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":23,"cElement": [{"cName": "fc_layer1_out.V","cData": "int24","bit_use": { "low": 0,"up": 23},"cArray": [{"low" : 0,"up" : 119,"step" : 1}]}]}]} , 
 	{ "Name" : "fc_layer2_out_V", "interface" : "memory", "bitwidth" : 24, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":23,"cElement": [{"cName": "fc_layer2_out.V","cData": "int24","bit_use": { "low": 0,"up": 23},"cArray": [{"low" : 0,"up" : 83,"step" : 1}]}]}]} , 
 	{ "Name" : "fc_layer3_out_V", "interface" : "memory", "bitwidth" : 24, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":23,"cElement": [{"cName": "fc_layer3_out.V","cData": "int24","bit_use": { "low": 0,"up": 23},"cArray": [{"low" : 0,"up" : 9,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 45
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ conv_layer1_out_V_address0 sc_out sc_lv 13 signal 0 } 
	{ conv_layer1_out_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ conv_layer1_out_V_we0 sc_out sc_logic 1 signal 0 } 
	{ conv_layer1_out_V_d0 sc_out sc_lv 24 signal 0 } 
	{ conv_layer1_out_V_q0 sc_in sc_lv 24 signal 0 } 
	{ conv_layer2_out_V_address0 sc_out sc_lv 12 signal 1 } 
	{ conv_layer2_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ conv_layer2_out_V_we0 sc_out sc_logic 1 signal 1 } 
	{ conv_layer2_out_V_d0 sc_out sc_lv 24 signal 1 } 
	{ conv_layer2_out_V_q0 sc_in sc_lv 24 signal 1 } 
	{ pool_layer1_out_V_address0 sc_out sc_lv 11 signal 2 } 
	{ pool_layer1_out_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ pool_layer1_out_V_we0 sc_out sc_logic 1 signal 2 } 
	{ pool_layer1_out_V_d0 sc_out sc_lv 24 signal 2 } 
	{ pool_layer1_out_V_q0 sc_in sc_lv 24 signal 2 } 
	{ pool_layer2_out_V_address0 sc_out sc_lv 10 signal 3 } 
	{ pool_layer2_out_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ pool_layer2_out_V_we0 sc_out sc_logic 1 signal 3 } 
	{ pool_layer2_out_V_d0 sc_out sc_lv 24 signal 3 } 
	{ pool_layer2_out_V_q0 sc_in sc_lv 24 signal 3 } 
	{ flatten_out_V_address0 sc_out sc_lv 10 signal 4 } 
	{ flatten_out_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ flatten_out_V_we0 sc_out sc_logic 1 signal 4 } 
	{ flatten_out_V_d0 sc_out sc_lv 24 signal 4 } 
	{ flatten_out_V_q0 sc_in sc_lv 24 signal 4 } 
	{ fc_layer1_out_V_address0 sc_out sc_lv 7 signal 5 } 
	{ fc_layer1_out_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ fc_layer1_out_V_we0 sc_out sc_logic 1 signal 5 } 
	{ fc_layer1_out_V_d0 sc_out sc_lv 24 signal 5 } 
	{ fc_layer1_out_V_q0 sc_in sc_lv 24 signal 5 } 
	{ fc_layer2_out_V_address0 sc_out sc_lv 7 signal 6 } 
	{ fc_layer2_out_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ fc_layer2_out_V_we0 sc_out sc_logic 1 signal 6 } 
	{ fc_layer2_out_V_d0 sc_out sc_lv 24 signal 6 } 
	{ fc_layer2_out_V_q0 sc_in sc_lv 24 signal 6 } 
	{ fc_layer3_out_V_address0 sc_out sc_lv 4 signal 7 } 
	{ fc_layer3_out_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ fc_layer3_out_V_we0 sc_out sc_logic 1 signal 7 } 
	{ fc_layer3_out_V_d0 sc_out sc_lv 24 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "conv_layer1_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "conv_layer1_out_V", "role": "address0" }} , 
 	{ "name": "conv_layer1_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_layer1_out_V", "role": "ce0" }} , 
 	{ "name": "conv_layer1_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_layer1_out_V", "role": "we0" }} , 
 	{ "name": "conv_layer1_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "conv_layer1_out_V", "role": "d0" }} , 
 	{ "name": "conv_layer1_out_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "conv_layer1_out_V", "role": "q0" }} , 
 	{ "name": "conv_layer2_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "address0" }} , 
 	{ "name": "conv_layer2_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "ce0" }} , 
 	{ "name": "conv_layer2_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "we0" }} , 
 	{ "name": "conv_layer2_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "d0" }} , 
 	{ "name": "conv_layer2_out_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "q0" }} , 
 	{ "name": "pool_layer1_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "address0" }} , 
 	{ "name": "pool_layer1_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "ce0" }} , 
 	{ "name": "pool_layer1_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "we0" }} , 
 	{ "name": "pool_layer1_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "d0" }} , 
 	{ "name": "pool_layer1_out_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "q0" }} , 
 	{ "name": "pool_layer2_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "pool_layer2_out_V", "role": "address0" }} , 
 	{ "name": "pool_layer2_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_layer2_out_V", "role": "ce0" }} , 
 	{ "name": "pool_layer2_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_layer2_out_V", "role": "we0" }} , 
 	{ "name": "pool_layer2_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "pool_layer2_out_V", "role": "d0" }} , 
 	{ "name": "pool_layer2_out_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "pool_layer2_out_V", "role": "q0" }} , 
 	{ "name": "flatten_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "flatten_out_V", "role": "address0" }} , 
 	{ "name": "flatten_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "flatten_out_V", "role": "ce0" }} , 
 	{ "name": "flatten_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "flatten_out_V", "role": "we0" }} , 
 	{ "name": "flatten_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "flatten_out_V", "role": "d0" }} , 
 	{ "name": "flatten_out_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "flatten_out_V", "role": "q0" }} , 
 	{ "name": "fc_layer1_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "fc_layer1_out_V", "role": "address0" }} , 
 	{ "name": "fc_layer1_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_layer1_out_V", "role": "ce0" }} , 
 	{ "name": "fc_layer1_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_layer1_out_V", "role": "we0" }} , 
 	{ "name": "fc_layer1_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "fc_layer1_out_V", "role": "d0" }} , 
 	{ "name": "fc_layer1_out_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "fc_layer1_out_V", "role": "q0" }} , 
 	{ "name": "fc_layer2_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "fc_layer2_out_V", "role": "address0" }} , 
 	{ "name": "fc_layer2_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_layer2_out_V", "role": "ce0" }} , 
 	{ "name": "fc_layer2_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_layer2_out_V", "role": "we0" }} , 
 	{ "name": "fc_layer2_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "fc_layer2_out_V", "role": "d0" }} , 
 	{ "name": "fc_layer2_out_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "fc_layer2_out_V", "role": "q0" }} , 
 	{ "name": "fc_layer3_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "fc_layer3_out_V", "role": "address0" }} , 
 	{ "name": "fc_layer3_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_layer3_out_V", "role": "ce0" }} , 
 	{ "name": "fc_layer3_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_layer3_out_V", "role": "we0" }} , 
 	{ "name": "fc_layer3_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "fc_layer3_out_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "8", "13", "14", "15", "16", "17"],
		"CDFG" : "nnet",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_layer2_fu_323"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_layer1_fu_335"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pool_layer1_fu_347"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pool_layer2_fu_355"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_flatten_fu_363"}],
		"Port" : [
			{"Name" : "conv_layer1_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_conv_layer1_fu_335", "Port" : "output_V"},
					{"ID" : "13", "SubInstance" : "grp_pool_layer1_fu_347", "Port" : "image_V"}]},
			{"Name" : "conv_layer2_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_pool_layer2_fu_355", "Port" : "image_V"},
					{"ID" : "4", "SubInstance" : "grp_conv_layer2_fu_323", "Port" : "output_V"}]},
			{"Name" : "pool_layer1_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_conv_layer2_fu_323", "Port" : "image_V"},
					{"ID" : "13", "SubInstance" : "grp_pool_layer1_fu_347", "Port" : "output_V"}]},
			{"Name" : "pool_layer2_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_flatten_fu_363", "Port" : "input_V"},
					{"ID" : "14", "SubInstance" : "grp_pool_layer2_fu_355", "Port" : "output_V"}]},
			{"Name" : "flatten_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_flatten_fu_363", "Port" : "output_V"}]},
			{"Name" : "fc_layer1_out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fc_layer2_out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fc_layer3_out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "conv_layer1_bias_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_conv_layer1_fu_335", "Port" : "conv_layer1_bias_V"}]},
			{"Name" : "image_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_conv_layer1_fu_335", "Port" : "image_V_0"}]},
			{"Name" : "conv_layer1_weights_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_conv_layer1_fu_335", "Port" : "conv_layer1_weights_s"}]},
			{"Name" : "conv_layer2_bias_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_conv_layer2_fu_323", "Port" : "conv_layer2_bias_V"}]},
			{"Name" : "conv_layer2_weights_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_conv_layer2_fu_323", "Port" : "conv_layer2_weights_s"}]},
			{"Name" : "fc_layer1_weights_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fc_layer2_weights_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fc_layer3_weights_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_layer1_weights_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_layer2_weights_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_layer3_weights_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_323", "Parent" : "0", "Child" : ["5", "6", "7"],
		"CDFG" : "conv_layer2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_323.conv_layer2_bias_V_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_323.conv_layer2_weights_s_U", "Parent" : "4"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_323.nnet_mul_mul_24s_hbi_U9", "Parent" : "4"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_335", "Parent" : "0", "Child" : ["9", "10", "11", "12"],
		"CDFG" : "conv_layer1",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "conv_layer1_bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_335.conv_layer1_bias_V_U", "Parent" : "8"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_335.image_V_0_U", "Parent" : "8"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_335.conv_layer1_weights_s_U", "Parent" : "8"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_335.nnet_mul_mul_19s_eOg_U1", "Parent" : "8"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pool_layer1_fu_347", "Parent" : "0",
		"CDFG" : "pool_layer1",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pool_layer2_fu_355", "Parent" : "0",
		"CDFG" : "pool_layer2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_flatten_fu_363", "Parent" : "0",
		"CDFG" : "flatten",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_24s_lbW_U19", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_24s_hbi_U20", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	nnet {
		conv_layer1_out_V {Type IO LastRead 7 FirstWrite -1}
		conv_layer2_out_V {Type IO LastRead 7 FirstWrite -1}
		pool_layer1_out_V {Type IO LastRead 7 FirstWrite -1}
		pool_layer2_out_V {Type IO LastRead 3 FirstWrite -1}
		flatten_out_V {Type IO LastRead 11 FirstWrite 4}
		fc_layer1_out_V {Type IO LastRead 12 FirstWrite 11}
		fc_layer2_out_V {Type IO LastRead 13 FirstWrite 12}
		fc_layer3_out_V {Type O LastRead -1 FirstWrite 13}
		conv_layer1_bias_V {Type I LastRead -1 FirstWrite -1}
		image_V_0 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_s {Type I LastRead -1 FirstWrite -1}
		conv_layer2_bias_V {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_s {Type I LastRead -1 FirstWrite -1}
		fc_layer1_weights_V {Type I LastRead -1 FirstWrite -1}
		fc_layer2_weights_V {Type I LastRead -1 FirstWrite -1}
		fc_layer3_weights_V {Type I LastRead -1 FirstWrite -1}}
	conv_layer2 {
		output_V {Type O LastRead -1 FirstWrite 6}
		image_V {Type I LastRead 7 FirstWrite -1}
		conv_layer2_bias_V {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_s {Type I LastRead -1 FirstWrite -1}}
	conv_layer1 {
		output_V {Type O LastRead -1 FirstWrite 6}
		conv_layer1_bias_V {Type I LastRead -1 FirstWrite -1}
		image_V_0 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_s {Type I LastRead -1 FirstWrite -1}}
	pool_layer1 {
		output_V {Type O LastRead -1 FirstWrite 5}
		image_V {Type I LastRead 7 FirstWrite -1}}
	pool_layer2 {
		output_V {Type O LastRead -1 FirstWrite 5}
		image_V {Type I LastRead 7 FirstWrite -1}}
	flatten {
		output_V {Type O LastRead -1 FirstWrite 4}
		input_V {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1255479", "Max" : "1255479"}
	, {"Name" : "Interval", "Min" : "1255480", "Max" : "1255480"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	conv_layer1_out_V { ap_memory {  { conv_layer1_out_V_address0 mem_address 1 13 }  { conv_layer1_out_V_ce0 mem_ce 1 1 }  { conv_layer1_out_V_we0 mem_we 1 1 }  { conv_layer1_out_V_d0 mem_din 1 24 }  { conv_layer1_out_V_q0 mem_dout 0 24 } } }
	conv_layer2_out_V { ap_memory {  { conv_layer2_out_V_address0 mem_address 1 12 }  { conv_layer2_out_V_ce0 mem_ce 1 1 }  { conv_layer2_out_V_we0 mem_we 1 1 }  { conv_layer2_out_V_d0 mem_din 1 24 }  { conv_layer2_out_V_q0 mem_dout 0 24 } } }
	pool_layer1_out_V { ap_memory {  { pool_layer1_out_V_address0 mem_address 1 11 }  { pool_layer1_out_V_ce0 mem_ce 1 1 }  { pool_layer1_out_V_we0 mem_we 1 1 }  { pool_layer1_out_V_d0 mem_din 1 24 }  { pool_layer1_out_V_q0 mem_dout 0 24 } } }
	pool_layer2_out_V { ap_memory {  { pool_layer2_out_V_address0 mem_address 1 10 }  { pool_layer2_out_V_ce0 mem_ce 1 1 }  { pool_layer2_out_V_we0 mem_we 1 1 }  { pool_layer2_out_V_d0 mem_din 1 24 }  { pool_layer2_out_V_q0 mem_dout 0 24 } } }
	flatten_out_V { ap_memory {  { flatten_out_V_address0 mem_address 1 10 }  { flatten_out_V_ce0 mem_ce 1 1 }  { flatten_out_V_we0 mem_we 1 1 }  { flatten_out_V_d0 mem_din 1 24 }  { flatten_out_V_q0 mem_dout 0 24 } } }
	fc_layer1_out_V { ap_memory {  { fc_layer1_out_V_address0 mem_address 1 7 }  { fc_layer1_out_V_ce0 mem_ce 1 1 }  { fc_layer1_out_V_we0 mem_we 1 1 }  { fc_layer1_out_V_d0 mem_din 1 24 }  { fc_layer1_out_V_q0 mem_dout 0 24 } } }
	fc_layer2_out_V { ap_memory {  { fc_layer2_out_V_address0 mem_address 1 7 }  { fc_layer2_out_V_ce0 mem_ce 1 1 }  { fc_layer2_out_V_we0 mem_we 1 1 }  { fc_layer2_out_V_d0 mem_din 1 24 }  { fc_layer2_out_V_q0 mem_dout 0 24 } } }
	fc_layer3_out_V { ap_memory {  { fc_layer3_out_V_address0 mem_address 1 4 }  { fc_layer3_out_V_ce0 mem_ce 1 1 }  { fc_layer3_out_V_we0 mem_we 1 1 }  { fc_layer3_out_V_d0 mem_din 1 24 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
