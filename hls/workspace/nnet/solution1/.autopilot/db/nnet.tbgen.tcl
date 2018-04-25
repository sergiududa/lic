set C_TypeInfoList {{ 
"nnet" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"conv_layer1_out": [[], {"array": [ {"array": [ {"scalar": "float"}, [29,8]]}, [29]]}] }, {"conv_layer2_out": [[], {"array": [ {"array": [ {"scalar": "float"}, [13,16]]}, [13]]}] }, {"pool_layer1_out": [[], {"array": [ {"array": [ {"scalar": "float"}, [14,8]]}, [14]]}] }, {"pool_layer2_out": [[], {"array": [ {"array": [ {"scalar": "float"}, [6,16]]}, [6]]}] }, {"flatten_out": [[], {"array": [ {"scalar": "float"}, [576]]}] }, {"fc_layer1_out": [[], {"array": [ {"scalar": "float"}, [120]]}] }, {"fc_layer2_out": [[], {"array": [ {"scalar": "float"}, [84]]}] }, {"fc_layer3_out": [[], {"array": [ {"scalar": "float"}, [10]]}] }],[],""]
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
	{ conv_layer1_out float 32 regular {array 6728 { 2 3 } 1 1 }  }
	{ conv_layer2_out float 32 regular {array 2704 { 2 3 } 1 1 }  }
	{ pool_layer1_out float 32 regular {array 1568 { 2 3 } 1 1 }  }
	{ pool_layer2_out float 32 regular {array 576 { 2 3 } 1 1 }  }
	{ flatten_out float 32 regular {array 576 { 2 3 } 1 1 }  }
	{ fc_layer1_out float 32 regular {array 120 { 2 3 } 1 1 }  }
	{ fc_layer2_out float 32 regular {array 84 { 2 3 } 1 1 }  }
	{ fc_layer3_out float 32 regular {array 10 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv_layer1_out", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "conv_layer1_out","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 28,"step" : 1},{"low" : 0,"up" : 28,"step" : 1},{"low" : 0,"up" : 7,"step" : 1}]}]}]} , 
 	{ "Name" : "conv_layer2_out", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "conv_layer2_out","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 12,"step" : 1},{"low" : 0,"up" : 12,"step" : 1},{"low" : 0,"up" : 15,"step" : 1}]}]}]} , 
 	{ "Name" : "pool_layer1_out", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "pool_layer1_out","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 13,"step" : 1},{"low" : 0,"up" : 13,"step" : 1},{"low" : 0,"up" : 7,"step" : 1}]}]}]} , 
 	{ "Name" : "pool_layer2_out", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "pool_layer2_out","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 5,"step" : 1},{"low" : 0,"up" : 5,"step" : 1},{"low" : 0,"up" : 15,"step" : 1}]}]}]} , 
 	{ "Name" : "flatten_out", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "flatten_out","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 575,"step" : 1}]}]}]} , 
 	{ "Name" : "fc_layer1_out", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fc_layer1_out","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 119,"step" : 1}]}]}]} , 
 	{ "Name" : "fc_layer2_out", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fc_layer2_out","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 83,"step" : 1}]}]}]} , 
 	{ "Name" : "fc_layer3_out", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fc_layer3_out","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 45
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ conv_layer1_out_address0 sc_out sc_lv 13 signal 0 } 
	{ conv_layer1_out_ce0 sc_out sc_logic 1 signal 0 } 
	{ conv_layer1_out_we0 sc_out sc_logic 1 signal 0 } 
	{ conv_layer1_out_d0 sc_out sc_lv 32 signal 0 } 
	{ conv_layer1_out_q0 sc_in sc_lv 32 signal 0 } 
	{ conv_layer2_out_address0 sc_out sc_lv 12 signal 1 } 
	{ conv_layer2_out_ce0 sc_out sc_logic 1 signal 1 } 
	{ conv_layer2_out_we0 sc_out sc_logic 1 signal 1 } 
	{ conv_layer2_out_d0 sc_out sc_lv 32 signal 1 } 
	{ conv_layer2_out_q0 sc_in sc_lv 32 signal 1 } 
	{ pool_layer1_out_address0 sc_out sc_lv 11 signal 2 } 
	{ pool_layer1_out_ce0 sc_out sc_logic 1 signal 2 } 
	{ pool_layer1_out_we0 sc_out sc_logic 1 signal 2 } 
	{ pool_layer1_out_d0 sc_out sc_lv 32 signal 2 } 
	{ pool_layer1_out_q0 sc_in sc_lv 32 signal 2 } 
	{ pool_layer2_out_address0 sc_out sc_lv 10 signal 3 } 
	{ pool_layer2_out_ce0 sc_out sc_logic 1 signal 3 } 
	{ pool_layer2_out_we0 sc_out sc_logic 1 signal 3 } 
	{ pool_layer2_out_d0 sc_out sc_lv 32 signal 3 } 
	{ pool_layer2_out_q0 sc_in sc_lv 32 signal 3 } 
	{ flatten_out_address0 sc_out sc_lv 10 signal 4 } 
	{ flatten_out_ce0 sc_out sc_logic 1 signal 4 } 
	{ flatten_out_we0 sc_out sc_logic 1 signal 4 } 
	{ flatten_out_d0 sc_out sc_lv 32 signal 4 } 
	{ flatten_out_q0 sc_in sc_lv 32 signal 4 } 
	{ fc_layer1_out_address0 sc_out sc_lv 7 signal 5 } 
	{ fc_layer1_out_ce0 sc_out sc_logic 1 signal 5 } 
	{ fc_layer1_out_we0 sc_out sc_logic 1 signal 5 } 
	{ fc_layer1_out_d0 sc_out sc_lv 32 signal 5 } 
	{ fc_layer1_out_q0 sc_in sc_lv 32 signal 5 } 
	{ fc_layer2_out_address0 sc_out sc_lv 7 signal 6 } 
	{ fc_layer2_out_ce0 sc_out sc_logic 1 signal 6 } 
	{ fc_layer2_out_we0 sc_out sc_logic 1 signal 6 } 
	{ fc_layer2_out_d0 sc_out sc_lv 32 signal 6 } 
	{ fc_layer2_out_q0 sc_in sc_lv 32 signal 6 } 
	{ fc_layer3_out_address0 sc_out sc_lv 4 signal 7 } 
	{ fc_layer3_out_ce0 sc_out sc_logic 1 signal 7 } 
	{ fc_layer3_out_we0 sc_out sc_logic 1 signal 7 } 
	{ fc_layer3_out_d0 sc_out sc_lv 32 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "conv_layer1_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "conv_layer1_out", "role": "address0" }} , 
 	{ "name": "conv_layer1_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_layer1_out", "role": "ce0" }} , 
 	{ "name": "conv_layer1_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_layer1_out", "role": "we0" }} , 
 	{ "name": "conv_layer1_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_layer1_out", "role": "d0" }} , 
 	{ "name": "conv_layer1_out_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_layer1_out", "role": "q0" }} , 
 	{ "name": "conv_layer2_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv_layer2_out", "role": "address0" }} , 
 	{ "name": "conv_layer2_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_layer2_out", "role": "ce0" }} , 
 	{ "name": "conv_layer2_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_layer2_out", "role": "we0" }} , 
 	{ "name": "conv_layer2_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_layer2_out", "role": "d0" }} , 
 	{ "name": "conv_layer2_out_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_layer2_out", "role": "q0" }} , 
 	{ "name": "pool_layer1_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "pool_layer1_out", "role": "address0" }} , 
 	{ "name": "pool_layer1_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_layer1_out", "role": "ce0" }} , 
 	{ "name": "pool_layer1_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_layer1_out", "role": "we0" }} , 
 	{ "name": "pool_layer1_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pool_layer1_out", "role": "d0" }} , 
 	{ "name": "pool_layer1_out_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pool_layer1_out", "role": "q0" }} , 
 	{ "name": "pool_layer2_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "pool_layer2_out", "role": "address0" }} , 
 	{ "name": "pool_layer2_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_layer2_out", "role": "ce0" }} , 
 	{ "name": "pool_layer2_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pool_layer2_out", "role": "we0" }} , 
 	{ "name": "pool_layer2_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pool_layer2_out", "role": "d0" }} , 
 	{ "name": "pool_layer2_out_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pool_layer2_out", "role": "q0" }} , 
 	{ "name": "flatten_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "flatten_out", "role": "address0" }} , 
 	{ "name": "flatten_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "flatten_out", "role": "ce0" }} , 
 	{ "name": "flatten_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "flatten_out", "role": "we0" }} , 
 	{ "name": "flatten_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "flatten_out", "role": "d0" }} , 
 	{ "name": "flatten_out_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "flatten_out", "role": "q0" }} , 
 	{ "name": "fc_layer1_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "fc_layer1_out", "role": "address0" }} , 
 	{ "name": "fc_layer1_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_layer1_out", "role": "ce0" }} , 
 	{ "name": "fc_layer1_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_layer1_out", "role": "we0" }} , 
 	{ "name": "fc_layer1_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fc_layer1_out", "role": "d0" }} , 
 	{ "name": "fc_layer1_out_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fc_layer1_out", "role": "q0" }} , 
 	{ "name": "fc_layer2_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "fc_layer2_out", "role": "address0" }} , 
 	{ "name": "fc_layer2_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_layer2_out", "role": "ce0" }} , 
 	{ "name": "fc_layer2_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_layer2_out", "role": "we0" }} , 
 	{ "name": "fc_layer2_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fc_layer2_out", "role": "d0" }} , 
 	{ "name": "fc_layer2_out_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fc_layer2_out", "role": "q0" }} , 
 	{ "name": "fc_layer3_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "fc_layer3_out", "role": "address0" }} , 
 	{ "name": "fc_layer3_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_layer3_out", "role": "ce0" }} , 
 	{ "name": "fc_layer3_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_layer3_out", "role": "we0" }} , 
 	{ "name": "fc_layer3_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fc_layer3_out", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "10", "17", "19", "21", "22", "23", "24"],
		"CDFG" : "nnet",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_layer2_fu_318"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_layer1_fu_330"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pool_layer1_fu_342"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pool_layer2_fu_350"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_flatten_fu_358"}],
		"Port" : [
			{"Name" : "conv_layer1_out", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "17", "SubInstance" : "grp_pool_layer1_fu_342", "Port" : "image_r"},
					{"ID" : "10", "SubInstance" : "grp_conv_layer1_fu_330", "Port" : "output_r"}]},
			{"Name" : "conv_layer2_out", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_conv_layer2_fu_318", "Port" : "output_r"},
					{"ID" : "19", "SubInstance" : "grp_pool_layer2_fu_350", "Port" : "image_r"}]},
			{"Name" : "pool_layer1_out", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_conv_layer2_fu_318", "Port" : "image_r"},
					{"ID" : "17", "SubInstance" : "grp_pool_layer1_fu_342", "Port" : "output_r"}]},
			{"Name" : "pool_layer2_out", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_pool_layer2_fu_350", "Port" : "output_r"},
					{"ID" : "21", "SubInstance" : "grp_flatten_fu_358", "Port" : "input_r"}]},
			{"Name" : "flatten_out", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_flatten_fu_358", "Port" : "output_r"}]},
			{"Name" : "fc_layer1_out", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fc_layer2_out", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "fc_layer3_out", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "conv_layer1_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_conv_layer1_fu_330", "Port" : "conv_layer1_bias"}]},
			{"Name" : "image_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_conv_layer1_fu_330", "Port" : "image_0"}]},
			{"Name" : "conv_layer1_weights_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_conv_layer1_fu_330", "Port" : "conv_layer1_weights_s"}]},
			{"Name" : "conv_layer2_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_conv_layer2_fu_318", "Port" : "conv_layer2_bias"}]},
			{"Name" : "conv_layer2_weights", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_conv_layer2_fu_318", "Port" : "conv_layer2_weights"}]},
			{"Name" : "fc_layer1_weights", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fc_layer2_weights", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fc_layer3_weights", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_layer1_weights_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_layer2_weights_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_layer3_weights_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_318", "Parent" : "0", "Child" : ["5", "6", "7", "8", "9"],
		"CDFG" : "conv_layer2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer2_weights", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_318.conv_layer2_bias_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_318.conv_layer2_weights_U", "Parent" : "4"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_318.nnet_fadd_32ns_32dEe_U14", "Parent" : "4"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_318.nnet_fmul_32ns_32eOg_U15", "Parent" : "4"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer2_fu_318.nnet_fcmp_32ns_32fYi_U16", "Parent" : "4"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_330", "Parent" : "0", "Child" : ["11", "12", "13", "14", "15", "16"],
		"CDFG" : "conv_layer1",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "conv_layer1_bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_layer1_weights_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_330.conv_layer1_bias_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_330.image_0_U", "Parent" : "10"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_330.conv_layer1_weights_s_U", "Parent" : "10"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_330.nnet_fadd_32ns_32dEe_U1", "Parent" : "10"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_330.nnet_fmul_32ns_32eOg_U2", "Parent" : "10"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer1_fu_330.nnet_fcmp_32ns_32fYi_U3", "Parent" : "10"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pool_layer1_fu_342", "Parent" : "0", "Child" : ["18"],
		"CDFG" : "pool_layer1",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_r", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pool_layer1_fu_342.nnet_fcmp_32ns_32fYi_U11", "Parent" : "17"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pool_layer2_fu_350", "Parent" : "0", "Child" : ["20"],
		"CDFG" : "pool_layer2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_r", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pool_layer2_fu_350.nnet_fcmp_32ns_32fYi_U21", "Parent" : "19"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_flatten_fu_358", "Parent" : "0",
		"CDFG" : "flatten",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_fadd_32ns_32dEe_U26", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_fmul_32ns_32eOg_U27", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_fcmp_32ns_32fYi_U28", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	nnet {
		conv_layer1_out {Type IO LastRead 7 FirstWrite -1}
		conv_layer2_out {Type IO LastRead 7 FirstWrite -1}
		pool_layer1_out {Type IO LastRead 7 FirstWrite -1}
		pool_layer2_out {Type IO LastRead 3 FirstWrite -1}
		flatten_out {Type IO LastRead 11 FirstWrite 4}
		fc_layer1_out {Type IO LastRead 12 FirstWrite 17}
		fc_layer2_out {Type IO LastRead 13 FirstWrite 18}
		fc_layer3_out {Type O LastRead -1 FirstWrite 19}
		conv_layer1_bias {Type I LastRead -1 FirstWrite -1}
		image_0 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_s {Type I LastRead -1 FirstWrite -1}
		conv_layer2_bias {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights {Type I LastRead -1 FirstWrite -1}
		fc_layer1_weights {Type I LastRead -1 FirstWrite -1}
		fc_layer2_weights {Type I LastRead -1 FirstWrite -1}
		fc_layer3_weights {Type I LastRead -1 FirstWrite -1}}
	conv_layer2 {
		output_r {Type O LastRead -1 FirstWrite 11}
		image_r {Type I LastRead 7 FirstWrite -1}
		conv_layer2_bias {Type I LastRead -1 FirstWrite -1}
		conv_layer2_weights {Type I LastRead -1 FirstWrite -1}}
	conv_layer1 {
		output_r {Type O LastRead -1 FirstWrite 11}
		conv_layer1_bias {Type I LastRead -1 FirstWrite -1}
		image_0 {Type I LastRead -1 FirstWrite -1}
		conv_layer1_weights_s {Type I LastRead -1 FirstWrite -1}}
	pool_layer1 {
		output_r {Type O LastRead -1 FirstWrite 5}
		image_r {Type I LastRead 7 FirstWrite -1}}
	pool_layer2 {
		output_r {Type O LastRead -1 FirstWrite 5}
		image_r {Type I LastRead 7 FirstWrite -1}}
	flatten {
		output_r {Type O LastRead -1 FirstWrite 4}
		input_r {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "3240373", "Max" : "3240373"}
	, {"Name" : "Interval", "Min" : "3240374", "Max" : "3240374"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	conv_layer1_out { ap_memory {  { conv_layer1_out_address0 mem_address 1 13 }  { conv_layer1_out_ce0 mem_ce 1 1 }  { conv_layer1_out_we0 mem_we 1 1 }  { conv_layer1_out_d0 mem_din 1 32 }  { conv_layer1_out_q0 mem_dout 0 32 } } }
	conv_layer2_out { ap_memory {  { conv_layer2_out_address0 mem_address 1 12 }  { conv_layer2_out_ce0 mem_ce 1 1 }  { conv_layer2_out_we0 mem_we 1 1 }  { conv_layer2_out_d0 mem_din 1 32 }  { conv_layer2_out_q0 mem_dout 0 32 } } }
	pool_layer1_out { ap_memory {  { pool_layer1_out_address0 mem_address 1 11 }  { pool_layer1_out_ce0 mem_ce 1 1 }  { pool_layer1_out_we0 mem_we 1 1 }  { pool_layer1_out_d0 mem_din 1 32 }  { pool_layer1_out_q0 mem_dout 0 32 } } }
	pool_layer2_out { ap_memory {  { pool_layer2_out_address0 mem_address 1 10 }  { pool_layer2_out_ce0 mem_ce 1 1 }  { pool_layer2_out_we0 mem_we 1 1 }  { pool_layer2_out_d0 mem_din 1 32 }  { pool_layer2_out_q0 mem_dout 0 32 } } }
	flatten_out { ap_memory {  { flatten_out_address0 mem_address 1 10 }  { flatten_out_ce0 mem_ce 1 1 }  { flatten_out_we0 mem_we 1 1 }  { flatten_out_d0 mem_din 1 32 }  { flatten_out_q0 mem_dout 0 32 } } }
	fc_layer1_out { ap_memory {  { fc_layer1_out_address0 mem_address 1 7 }  { fc_layer1_out_ce0 mem_ce 1 1 }  { fc_layer1_out_we0 mem_we 1 1 }  { fc_layer1_out_d0 mem_din 1 32 }  { fc_layer1_out_q0 mem_dout 0 32 } } }
	fc_layer2_out { ap_memory {  { fc_layer2_out_address0 mem_address 1 7 }  { fc_layer2_out_ce0 mem_ce 1 1 }  { fc_layer2_out_we0 mem_we 1 1 }  { fc_layer2_out_d0 mem_din 1 32 }  { fc_layer2_out_q0 mem_dout 0 32 } } }
	fc_layer3_out { ap_memory {  { fc_layer3_out_address0 mem_address 1 4 }  { fc_layer3_out_ce0 mem_ce 1 1 }  { fc_layer3_out_we0 mem_we 1 1 }  { fc_layer3_out_d0 mem_din 1 32 } } }
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
