set moduleName conv_layer1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {conv_layer1}
set C_modelType { void 0 }
set C_modelArgList {
	{ output_V int 24 regular {array 6728 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "output_V", "interface" : "memory", "bitwidth" : 24, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 10
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ output_V_address0 sc_out sc_lv 13 signal 0 } 
	{ output_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ output_V_we0 sc_out sc_logic 1 signal 0 } 
	{ output_V_d0 sc_out sc_lv 24 signal 0 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "output_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "output_V", "role": "address0" }} , 
 	{ "name": "output_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce0" }} , 
 	{ "name": "output_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "we0" }} , 
 	{ "name": "output_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "output_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34"],
		"CDFG" : "conv_layer1",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_V", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "conv_layer1_bias_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_31_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_29_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_27_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_25_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_23_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_21_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_19_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_17_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_15_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_13_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_11_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_9_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_7_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_5_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_3_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_weights_1_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_bias_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U1", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U2", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U3", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U4", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U5", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U6", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U7", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U8", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U9", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U10", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U11", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U12", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U13", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U14", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U15", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_sc4_U16", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	conv_layer1 {
		output_V {Type O LastRead -1 FirstWrite 13}
		image_V {Type I LastRead -1 FirstWrite -1}
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
		conv_layer1_bias_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6741", "Max" : "6741"}
	, {"Name" : "Interval", "Min" : "6741", "Max" : "6741"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	output_V { ap_memory {  { output_V_address0 mem_address 1 13 }  { output_V_ce0 mem_ce 1 1 }  { output_V_we0 mem_we 1 1 }  { output_V_d0 mem_din 1 24 } } }
}
