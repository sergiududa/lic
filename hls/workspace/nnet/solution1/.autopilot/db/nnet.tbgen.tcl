set C_TypeInfoList {{ 
"nnet" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"conv_layer1_out": [[], {"array": [ {"array": ["0", [29,8]]}, [29]]}] }, {"conv_layer2_out": [[], {"array": [ {"array": ["0", [13,16]]}, [13]]}] }, {"pool_layer1_out": [[], {"array": [ {"array": ["0", [14,8]]}, [14]]}] }, {"pool_layer2_out": [[], {"array": [ {"array": ["0", [6,16]]}, [6]]}] }, {"flatten_out": [[], {"array": ["0", [576]]}] }, {"fc_layer1_out": [[], {"array": ["0", [120]]}] }, {"fc_layer2_out": [[], {"array": ["0", [84]]}] }, {"fc_layer3_out": [[], {"array": ["0", [10]]}] }],[],""], 
"0": [ "float24_t", {"typedef": [[[],"1"],""]}], 
"1": [ "ap_fixed<24, 4, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 24}}],[[], {"scalar": { "int": 4}}],[[], {"scalar": { "2": 5}}],[[], {"scalar": { "3": 3}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"3": [ "sc_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}], 
"2": [ "sc_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}]
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
	{ conv_layer1_out_V int 24 regular {array 6728 { 2 1 } 1 1 }  }
	{ conv_layer2_out_V int 24 regular {array 2704 { 2 1 } 1 1 }  }
	{ pool_layer1_out_V int 24 regular {array 1568 { 2 1 } 1 1 }  }
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
set portNum 54
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
	{ conv_layer1_out_V_address1 sc_out sc_lv 13 signal 0 } 
	{ conv_layer1_out_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ conv_layer1_out_V_q1 sc_in sc_lv 24 signal 0 } 
	{ conv_layer2_out_V_address0 sc_out sc_lv 12 signal 1 } 
	{ conv_layer2_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ conv_layer2_out_V_we0 sc_out sc_logic 1 signal 1 } 
	{ conv_layer2_out_V_d0 sc_out sc_lv 24 signal 1 } 
	{ conv_layer2_out_V_q0 sc_in sc_lv 24 signal 1 } 
	{ conv_layer2_out_V_address1 sc_out sc_lv 12 signal 1 } 
	{ conv_layer2_out_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ conv_layer2_out_V_q1 sc_in sc_lv 24 signal 1 } 
	{ pool_layer1_out_V_address0 sc_out sc_lv 11 signal 2 } 
	{ pool_layer1_out_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ pool_layer1_out_V_we0 sc_out sc_logic 1 signal 2 } 
	{ pool_layer1_out_V_d0 sc_out sc_lv 24 signal 2 } 
	{ pool_layer1_out_V_q0 sc_in sc_lv 24 signal 2 } 
	{ pool_layer1_out_V_address1 sc_out sc_lv 11 signal 2 } 
	{ pool_layer1_out_V_ce1 sc_out sc_logic 1 signal 2 } 
	{ pool_layer1_out_V_q1 sc_in sc_lv 24 signal 2 } 
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
 	{ "name": "conv_layer1_out_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "conv_layer1_out_V", "role": "address1" }} , 
 	{ "name": "conv_layer1_out_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_layer1_out_V", "role": "ce1" }} , 
 	{ "name": "conv_layer1_out_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "conv_layer1_out_V", "role": "q1" }} , 
 	{ "name": "conv_layer2_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "address0" }} , 
 	{ "name": "conv_layer2_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "ce0" }} , 
 	{ "name": "conv_layer2_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "we0" }} , 
 	{ "name": "conv_layer2_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "d0" }} , 
 	{ "name": "conv_layer2_out_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "q0" }} , 
 	{ "name": "conv_layer2_out_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "address1" }} , 
 	{ "name": "conv_layer2_out_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "ce1" }} , 
 	{ "name": "conv_layer2_out_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "conv_layer2_out_V", "role": "q1" }} , 
 	{ "name": "pool_layer1_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "address0" }} , 
 	{ "name": "pool_layer1_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "ce0" }} , 
 	{ "name": "pool_layer1_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "we0" }} , 
 	{ "name": "pool_layer1_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "d0" }} , 
 	{ "name": "pool_layer1_out_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "q0" }} , 
 	{ "name": "pool_layer1_out_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "address1" }} , 
 	{ "name": "pool_layer1_out_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "ce1" }} , 
 	{ "name": "pool_layer1_out_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "pool_layer1_out_V", "role": "q1" }} , 
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "72", "110", "111", "112", "113"],
		"CDFG" : "nnet",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pool_layer1_fu_423"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_layer2_fu_431"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_layer1_fu_505"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pool_layer2_fu_547"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_flatten_fu_555"}],
		"Port" : [
			{"Name" : "conv_layer1_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "output_V"},
					{"ID" : "4", "SubInstance" : "grp_pool_layer1_fu_423", "Port" : "image_V"}]},
			{"Name" : "conv_layer2_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "output_V"},
					{"ID" : "110", "SubInstance" : "grp_pool_layer2_fu_547", "Port" : "image_V"}]},
			{"Name" : "pool_layer1_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "image_V"},
					{"ID" : "4", "SubInstance" : "grp_pool_layer1_fu_423", "Port" : "output_V"}]},
			{"Name" : "pool_layer2_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "grp_flatten_fu_555", "Port" : "input_V"},
					{"ID" : "110", "SubInstance" : "grp_pool_layer2_fu_547", "Port" : "output_V"}]},
			{"Name" : "flatten_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "grp_flatten_fu_555", "Port" : "output_V"}]},
			{"Name" : "fc_layer1_out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fc_layer2_out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fc_layer3_out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "conv_layer1_weights_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_31"}]},
			{"Name" : "conv_layer1_weights_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_29"}]},
			{"Name" : "conv_layer1_weights_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_27"}]},
			{"Name" : "conv_layer1_weights_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_25"}]},
			{"Name" : "conv_layer1_weights_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_23"}]},
			{"Name" : "conv_layer1_weights_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_21"}]},
			{"Name" : "conv_layer1_weights_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_19"}]},
			{"Name" : "conv_layer1_weights_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_17"}]},
			{"Name" : "conv_layer1_weights_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_15"}]},
			{"Name" : "conv_layer1_weights_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_13"}]},
			{"Name" : "conv_layer1_weights_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_11"}]},
			{"Name" : "conv_layer1_weights_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_9"}]},
			{"Name" : "conv_layer1_weights_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_7"}]},
			{"Name" : "conv_layer1_weights_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_5"}]},
			{"Name" : "conv_layer1_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_3"}]},
			{"Name" : "conv_layer1_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_weights_1"}]},
			{"Name" : "conv_layer1_bias_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "conv_layer1_bias_V"}]},
			{"Name" : "image_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_conv_layer1_fu_505", "Port" : "image_V_0"}]},
			{"Name" : "conv_layer2_weights_63", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_63"}]},
			{"Name" : "conv_layer2_weights_61", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_61"}]},
			{"Name" : "conv_layer2_weights_59", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_59"}]},
			{"Name" : "conv_layer2_weights_57", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_57"}]},
			{"Name" : "conv_layer2_weights_55", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_55"}]},
			{"Name" : "conv_layer2_weights_53", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_53"}]},
			{"Name" : "conv_layer2_weights_51", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_51"}]},
			{"Name" : "conv_layer2_weights_49", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_49"}]},
			{"Name" : "conv_layer2_weights_47", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_47"}]},
			{"Name" : "conv_layer2_weights_45", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_45"}]},
			{"Name" : "conv_layer2_weights_43", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_43"}]},
			{"Name" : "conv_layer2_weights_41", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_41"}]},
			{"Name" : "conv_layer2_weights_39", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_39"}]},
			{"Name" : "conv_layer2_weights_37", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_37"}]},
			{"Name" : "conv_layer2_weights_35", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_35"}]},
			{"Name" : "conv_layer2_weights_33", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_33"}]},
			{"Name" : "conv_layer2_weights_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_31"}]},
			{"Name" : "conv_layer2_weights_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_29"}]},
			{"Name" : "conv_layer2_weights_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_27"}]},
			{"Name" : "conv_layer2_weights_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_25"}]},
			{"Name" : "conv_layer2_weights_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_23"}]},
			{"Name" : "conv_layer2_weights_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_21"}]},
			{"Name" : "conv_layer2_weights_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_19"}]},
			{"Name" : "conv_layer2_weights_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_17"}]},
			{"Name" : "conv_layer2_weights_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_15"}]},
			{"Name" : "conv_layer2_weights_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_13"}]},
			{"Name" : "conv_layer2_weights_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_11"}]},
			{"Name" : "conv_layer2_weights_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_9"}]},
			{"Name" : "conv_layer2_weights_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_7"}]},
			{"Name" : "conv_layer2_weights_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_5"}]},
			{"Name" : "conv_layer2_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_3"}]},
			{"Name" : "conv_layer2_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_weights_1"}]},
			{"Name" : "conv_layer2_bias_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_conv_layer2_fu_431", "Port" : "conv_layer2_bias_V"}]},
			{"Name" : "fc_layer1_weights_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fc_layer2_weights_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fc_layer3_weights_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_layer1_weights_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_layer2_weights_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_layer3_weights_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pool_layer1_fu_423", "Parent" : "0",
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
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431", "Parent" : "0", "Child" : ["6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71"],
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
			{"Name" : "conv_layer2_weights_63", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_61", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_bias_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_63_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_61_U", "Parent" : "5"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_59_U", "Parent" : "5"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_57_U", "Parent" : "5"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_55_U", "Parent" : "5"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_53_U", "Parent" : "5"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_51_U", "Parent" : "5"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_49_U", "Parent" : "5"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_47_U", "Parent" : "5"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_45_U", "Parent" : "5"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_43_U", "Parent" : "5"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_41_U", "Parent" : "5"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_39_U", "Parent" : "5"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_37_U", "Parent" : "5"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_35_U", "Parent" : "5"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_33_U", "Parent" : "5"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_31_U", "Parent" : "5"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_29_U", "Parent" : "5"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_27_U", "Parent" : "5"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_25_U", "Parent" : "5"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_23_U", "Parent" : "5"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_21_U", "Parent" : "5"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_19_U", "Parent" : "5"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_17_U", "Parent" : "5"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_15_U", "Parent" : "5"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_13_U", "Parent" : "5"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_11_U", "Parent" : "5"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_9_U", "Parent" : "5"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_7_U", "Parent" : "5"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_5_U", "Parent" : "5"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_3_U", "Parent" : "5"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_weights_1_U", "Parent" : "5"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.conv_layer2_bias_V_U", "Parent" : "5"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mac_muladd_52iS_U45", "Parent" : "5"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U46", "Parent" : "5"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U47", "Parent" : "5"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U48", "Parent" : "5"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U49", "Parent" : "5"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U50", "Parent" : "5"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U51", "Parent" : "5"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U52", "Parent" : "5"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U53", "Parent" : "5"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U54", "Parent" : "5"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U55", "Parent" : "5"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U56", "Parent" : "5"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U57", "Parent" : "5"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U58", "Parent" : "5"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U59", "Parent" : "5"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U60", "Parent" : "5"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U61", "Parent" : "5"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U62", "Parent" : "5"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U63", "Parent" : "5"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U64", "Parent" : "5"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U65", "Parent" : "5"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U66", "Parent" : "5"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U67", "Parent" : "5"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U68", "Parent" : "5"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U69", "Parent" : "5"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U70", "Parent" : "5"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U71", "Parent" : "5"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U72", "Parent" : "5"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U73", "Parent" : "5"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U74", "Parent" : "5"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U75", "Parent" : "5"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U76", "Parent" : "5"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_431.nnet_mul_mul_19s_3i2_U77", "Parent" : "5"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505", "Parent" : "0", "Child" : ["73"],
		"CDFG" : "conv_layer1",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"FunctionPipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"InputProcess" : [],
		"OutputProcess" : [
			{"ID" : "73", "Name" : "dataflow_in_loop_con_U0"}],
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "output_V"}]},
			{"Name" : "conv_layer1_weights_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_31"}]},
			{"Name" : "conv_layer1_weights_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_29"}]},
			{"Name" : "conv_layer1_weights_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_27"}]},
			{"Name" : "conv_layer1_weights_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_25"}]},
			{"Name" : "conv_layer1_weights_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_23"}]},
			{"Name" : "conv_layer1_weights_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_21"}]},
			{"Name" : "conv_layer1_weights_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_19"}]},
			{"Name" : "conv_layer1_weights_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_17"}]},
			{"Name" : "conv_layer1_weights_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_15"}]},
			{"Name" : "conv_layer1_weights_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_13"}]},
			{"Name" : "conv_layer1_weights_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_11"}]},
			{"Name" : "conv_layer1_weights_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_9"}]},
			{"Name" : "conv_layer1_weights_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_7"}]},
			{"Name" : "conv_layer1_weights_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_5"}]},
			{"Name" : "conv_layer1_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_3"}]},
			{"Name" : "conv_layer1_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_weights_1"}]},
			{"Name" : "conv_layer1_bias_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "conv_layer1_bias_V"}]},
			{"Name" : "image_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "dataflow_in_loop_con_U0", "Port" : "image_V_0"}]}]},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0", "Parent" : "72", "Child" : ["74"],
		"CDFG" : "dataflow_in_loop_con",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"FunctionPipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"InputProcess" : [
			{"ID" : "74", "Name" : "conv_layer1_label8_p_U0"}],
		"OutputProcess" : [
			{"ID" : "74", "Name" : "conv_layer1_label8_p_U0"}],
		"Port" : [
			{"Name" : "filter_0_i_i", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "output_V"}]},
			{"Name" : "conv_layer1_weights_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_31"}]},
			{"Name" : "conv_layer1_weights_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_29"}]},
			{"Name" : "conv_layer1_weights_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_27"}]},
			{"Name" : "conv_layer1_weights_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_25"}]},
			{"Name" : "conv_layer1_weights_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_23"}]},
			{"Name" : "conv_layer1_weights_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_21"}]},
			{"Name" : "conv_layer1_weights_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_19"}]},
			{"Name" : "conv_layer1_weights_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_17"}]},
			{"Name" : "conv_layer1_weights_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_15"}]},
			{"Name" : "conv_layer1_weights_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_13"}]},
			{"Name" : "conv_layer1_weights_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_11"}]},
			{"Name" : "conv_layer1_weights_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_9"}]},
			{"Name" : "conv_layer1_weights_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_7"}]},
			{"Name" : "conv_layer1_weights_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_5"}]},
			{"Name" : "conv_layer1_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_3"}]},
			{"Name" : "conv_layer1_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_1"}]},
			{"Name" : "conv_layer1_bias_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_bias_V"}]},
			{"Name" : "image_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "image_V_0"}]}]},
	{"ID" : "74", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0", "Parent" : "73", "Child" : ["75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109"],
		"CDFG" : "conv_layer1_label8_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "filter_0_i_i", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "conv_layer1_weights_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_V_0", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "75", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_31_U", "Parent" : "74"},
	{"ID" : "76", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_29_U", "Parent" : "74"},
	{"ID" : "77", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_27_U", "Parent" : "74"},
	{"ID" : "78", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_25_U", "Parent" : "74"},
	{"ID" : "79", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_23_U", "Parent" : "74"},
	{"ID" : "80", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_21_U", "Parent" : "74"},
	{"ID" : "81", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_19_U", "Parent" : "74"},
	{"ID" : "82", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_17_U", "Parent" : "74"},
	{"ID" : "83", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_15_U", "Parent" : "74"},
	{"ID" : "84", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_13_U", "Parent" : "74"},
	{"ID" : "85", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_11_U", "Parent" : "74"},
	{"ID" : "86", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_9_U", "Parent" : "74"},
	{"ID" : "87", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_7_U", "Parent" : "74"},
	{"ID" : "88", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_5_U", "Parent" : "74"},
	{"ID" : "89", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_3_U", "Parent" : "74"},
	{"ID" : "90", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_weights_1_U", "Parent" : "74"},
	{"ID" : "91", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.conv_layer1_bias_V_U", "Parent" : "74"},
	{"ID" : "92", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.image_V_0_U", "Parent" : "74"},
	{"ID" : "93", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U1", "Parent" : "74"},
	{"ID" : "94", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U2", "Parent" : "74"},
	{"ID" : "95", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U3", "Parent" : "74"},
	{"ID" : "96", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U4", "Parent" : "74"},
	{"ID" : "97", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U5", "Parent" : "74"},
	{"ID" : "98", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U6", "Parent" : "74"},
	{"ID" : "99", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U7", "Parent" : "74"},
	{"ID" : "100", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U8", "Parent" : "74"},
	{"ID" : "101", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U9", "Parent" : "74"},
	{"ID" : "102", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U10", "Parent" : "74"},
	{"ID" : "103", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U11", "Parent" : "74"},
	{"ID" : "104", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U12", "Parent" : "74"},
	{"ID" : "105", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U13", "Parent" : "74"},
	{"ID" : "106", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U14", "Parent" : "74"},
	{"ID" : "107", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U15", "Parent" : "74"},
	{"ID" : "108", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U16", "Parent" : "74"},
	{"ID" : "109", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_505.dataflow_in_loop_con_U0.conv_layer1_label8_p_U0.nnet_mac_muladd_5udo_U17", "Parent" : "74"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pool_layer2_fu_547", "Parent" : "0",
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
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_flatten_fu_555", "Parent" : "0",
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
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_24s_7jG_U119", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_24s_8jQ_U120", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	nnet {
		conv_layer1_out_V {Type IO LastRead 52 FirstWrite -1}
		conv_layer2_out_V {Type IO LastRead 43 FirstWrite -1}
		pool_layer1_out_V {Type IO LastRead 18 FirstWrite -1}
		pool_layer2_out_V {Type IO LastRead 3 FirstWrite -1}
		flatten_out_V {Type IO LastRead 11 FirstWrite 4}
		fc_layer1_out_V {Type IO LastRead 12 FirstWrite 11}
		fc_layer2_out_V {Type IO LastRead 13 FirstWrite 12}
		fc_layer3_out_V {Type O LastRead -1 FirstWrite 13}
		conv_layer1_weights_31 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_29 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_27 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_25 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_23 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_21 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_19 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_17 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_15 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_13 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_11 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_9 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_7 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_5 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_3 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_1 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_bias_V {Type I LastRead -1 FirstWrite -1}
		image_V_0 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_63 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_61 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_59 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_57 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_55 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_53 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_51 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_49 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_47 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_45 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_43 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_41 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_39 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_37 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_35 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_33 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_31 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_29 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_27 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_25 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_23 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_21 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_19 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_17 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_15 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_13 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_11 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_9 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_7 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_5 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_3 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_1 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_bias_V {Type I LastRead -1 FirstWrite -1}
		fc_layer1_weights_V {Type I LastRead -1 FirstWrite -1}
		fc_layer2_weights_V {Type I LastRead -1 FirstWrite -1}
		fc_layer3_weights_V {Type I LastRead -1 FirstWrite -1}}
	pool_layer1 {
		output_V {Type O LastRead -1 FirstWrite 18}
		image_V {Type I LastRead 52 FirstWrite -1}}
	conv_layer2 {
		output_V {Type O LastRead -1 FirstWrite 21}
		image_V {Type I LastRead 18 FirstWrite -1}
		conv_layer2_weights_63 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_61 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_59 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_57 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_55 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_53 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_51 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_49 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_47 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_45 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_43 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_41 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_39 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_37 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_35 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_33 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_31 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_29 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_27 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_25 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_23 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_21 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_19 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_17 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_15 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_13 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_11 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_9 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_7 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_5 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_3 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights_1 {Type I LastRead -1 FirstWrite -1}
		conv_layer2_bias_V {Type I LastRead -1 FirstWrite -1}}
	conv_layer1 {
		output_V {Type O LastRead -1 FirstWrite 13}
		conv_layer1_weights_31 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_29 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_27 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_25 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_23 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_21 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_19 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_17 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_15 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_13 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_11 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_9 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_7 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_5 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_3 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_1 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_bias_V {Type I LastRead -1 FirstWrite -1}
		image_V_0 {Type I LastRead -1 FirstWrite -1}}
	dataflow_in_loop_con {
		filter_0_i_i {Type I LastRead 0 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 13}
		conv_layer1_weights_31 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_29 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_27 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_25 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_23 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_21 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_19 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_17 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_15 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_13 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_11 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_9 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_7 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_5 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_3 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_1 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_bias_V {Type I LastRead -1 FirstWrite -1}
		image_V_0 {Type I LastRead -1 FirstWrite -1}}
	conv_layer1_label8_p {
		filter_0_i_i {Type I LastRead 0 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 13}
		conv_layer1_weights_31 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_29 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_27 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_25 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_23 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_21 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_19 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_17 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_15 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_13 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_11 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_9 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_7 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_5 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_3 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_1 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_bias_V {Type I LastRead -1 FirstWrite -1}
		image_V_0 {Type I LastRead -1 FirstWrite -1}}
	pool_layer2 {
		output_V {Type O LastRead -1 FirstWrite 28}
		image_V {Type I LastRead 43 FirstWrite -1}}
	flatten {
		output_V {Type O LastRead -1 FirstWrite 4}
		input_V {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "379809", "Max" : "379809"}
	, {"Name" : "Interval", "Min" : "379810", "Max" : "379810"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	conv_layer1_out_V { ap_memory {  { conv_layer1_out_V_address0 mem_address 1 13 }  { conv_layer1_out_V_ce0 mem_ce 1 1 }  { conv_layer1_out_V_we0 mem_we 1 1 }  { conv_layer1_out_V_d0 mem_din 1 24 }  { conv_layer1_out_V_q0 mem_dout 0 24 }  { conv_layer1_out_V_address1 mem_address 1 13 }  { conv_layer1_out_V_ce1 mem_ce 1 1 }  { conv_layer1_out_V_q1 mem_dout 0 24 } } }
	conv_layer2_out_V { ap_memory {  { conv_layer2_out_V_address0 mem_address 1 12 }  { conv_layer2_out_V_ce0 mem_ce 1 1 }  { conv_layer2_out_V_we0 mem_we 1 1 }  { conv_layer2_out_V_d0 mem_din 1 24 }  { conv_layer2_out_V_q0 mem_dout 0 24 }  { conv_layer2_out_V_address1 mem_address 1 12 }  { conv_layer2_out_V_ce1 mem_ce 1 1 }  { conv_layer2_out_V_q1 mem_dout 0 24 } } }
	pool_layer1_out_V { ap_memory {  { pool_layer1_out_V_address0 mem_address 1 11 }  { pool_layer1_out_V_ce0 mem_ce 1 1 }  { pool_layer1_out_V_we0 mem_we 1 1 }  { pool_layer1_out_V_d0 mem_din 1 24 }  { pool_layer1_out_V_q0 mem_dout 0 24 }  { pool_layer1_out_V_address1 mem_address 1 11 }  { pool_layer1_out_V_ce1 mem_ce 1 1 }  { pool_layer1_out_V_q1 mem_dout 0 24 } } }
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
