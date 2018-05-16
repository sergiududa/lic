set moduleName conv_layer2
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {conv_layer2}
set C_modelType { void 0 }
set C_modelArgList {
	{ output_V int 24 regular {array 2704 { 0 3 } 0 1 }  }
	{ image_V int 24 regular {array 1568 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "output_V", "interface" : "memory", "bitwidth" : 24, "direction" : "WRITEONLY"} , 
 	{ "Name" : "image_V", "interface" : "memory", "bitwidth" : 24, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ output_V_address0 sc_out sc_lv 12 signal 0 } 
	{ output_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ output_V_we0 sc_out sc_logic 1 signal 0 } 
	{ output_V_d0 sc_out sc_lv 24 signal 0 } 
	{ image_V_address0 sc_out sc_lv 11 signal 1 } 
	{ image_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ image_V_q0 sc_in sc_lv 24 signal 1 } 
	{ image_V_address1 sc_out sc_lv 11 signal 1 } 
	{ image_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ image_V_q1 sc_in sc_lv 24 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "output_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "output_V", "role": "address0" }} , 
 	{ "name": "output_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce0" }} , 
 	{ "name": "output_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "we0" }} , 
 	{ "name": "output_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "output_V", "role": "d0" }} , 
 	{ "name": "image_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "image_V", "role": "address0" }} , 
 	{ "name": "image_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_V", "role": "ce0" }} , 
 	{ "name": "image_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "image_V", "role": "q0" }} , 
 	{ "name": "image_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "image_V", "role": "address1" }} , 
 	{ "name": "image_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_V", "role": "ce1" }} , 
 	{ "name": "image_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "image_V", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_63_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_61_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_59_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_57_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_55_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_53_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_51_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_49_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_47_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_45_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_43_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_41_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_39_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_37_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_35_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_33_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_31_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_29_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_27_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_25_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_23_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_21_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_19_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_17_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_15_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_13_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_11_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_9_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_7_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_5_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_3_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_weights_1_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer2_bias_V_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U39", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U40", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U41", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U42", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U43", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U44", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U45", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U46", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U47", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U48", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U49", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U50", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U51", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U52", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U53", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U54", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U55", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U56", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U57", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U58", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U59", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U60", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U61", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U62", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U63", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U64", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U65", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U66", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U67", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U68", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U69", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nnet_mul_mul_19s_0iy_U70", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		conv_layer2_bias_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "43270", "Max" : "43270"}
	, {"Name" : "Interval", "Min" : "43270", "Max" : "43270"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	output_V { ap_memory {  { output_V_address0 mem_address 1 12 }  { output_V_ce0 mem_ce 1 1 }  { output_V_we0 mem_we 1 1 }  { output_V_d0 mem_din 1 24 } } }
	image_V { ap_memory {  { image_V_address0 mem_address 1 11 }  { image_V_ce0 mem_ce 1 1 }  { image_V_q0 mem_dout 0 24 }  { image_V_address1 mem_address 1 11 }  { image_V_ce1 mem_ce 1 1 }  { image_V_q1 mem_dout 0 24 } } }
}
