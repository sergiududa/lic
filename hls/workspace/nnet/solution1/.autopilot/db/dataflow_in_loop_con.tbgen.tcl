set moduleName dataflow_in_loop_con
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {dataflow_in_loop_con}
set C_modelType { void 0 }
set C_modelArgList {
	{ filter_0_i_i int 4 regular  }
	{ output_V int 24 regular {array 6728 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "filter_0_i_i", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "output_V", "interface" : "memory", "bitwidth" : 24, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ filter_0_i_i sc_in sc_lv 4 signal 0 } 
	{ output_V_address0 sc_out sc_lv 13 signal 1 } 
	{ output_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ output_V_d0 sc_out sc_lv 24 signal 1 } 
	{ output_V_q0 sc_in sc_lv 24 signal 1 } 
	{ output_V_we0 sc_out sc_logic 1 signal 1 } 
	{ output_V_address1 sc_out sc_lv 13 signal 1 } 
	{ output_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ output_V_d1 sc_out sc_lv 24 signal 1 } 
	{ output_V_q1 sc_in sc_lv 24 signal 1 } 
	{ output_V_we1 sc_out sc_logic 1 signal 1 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ filter_0_i_i_ap_vld sc_in sc_logic 1 invld 0 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
}
set NewPortList {[ 
	{ "name": "filter_0_i_i", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "filter_0_i_i", "role": "default" }} , 
 	{ "name": "output_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "output_V", "role": "address0" }} , 
 	{ "name": "output_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce0" }} , 
 	{ "name": "output_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "output_V", "role": "d0" }} , 
 	{ "name": "output_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "output_V", "role": "q0" }} , 
 	{ "name": "output_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "we0" }} , 
 	{ "name": "output_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "output_V", "role": "address1" }} , 
 	{ "name": "output_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce1" }} , 
 	{ "name": "output_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "output_V", "role": "d1" }} , 
 	{ "name": "output_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "output_V", "role": "q1" }} , 
 	{ "name": "output_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "we1" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "filter_0_i_i_ap_vld", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "filter_0_i_i", "role": "ap_vld" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "dataflow_in_loop_con",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"FunctionPipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"InputProcess" : [
			{"ID" : "1", "Name" : "conv_layer1_label8_p_U0"}],
		"OutputProcess" : [
			{"ID" : "1", "Name" : "conv_layer1_label8_p_U0"}],
		"Port" : [
			{"Name" : "filter_0_i_i", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "output_V"}]},
			{"Name" : "conv_layer1_weights_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_31"}]},
			{"Name" : "conv_layer1_weights_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_29"}]},
			{"Name" : "conv_layer1_weights_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_27"}]},
			{"Name" : "conv_layer1_weights_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_25"}]},
			{"Name" : "conv_layer1_weights_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_23"}]},
			{"Name" : "conv_layer1_weights_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_21"}]},
			{"Name" : "conv_layer1_weights_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_19"}]},
			{"Name" : "conv_layer1_weights_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_17"}]},
			{"Name" : "conv_layer1_weights_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_15"}]},
			{"Name" : "conv_layer1_weights_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_13"}]},
			{"Name" : "conv_layer1_weights_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_11"}]},
			{"Name" : "conv_layer1_weights_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_9"}]},
			{"Name" : "conv_layer1_weights_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_7"}]},
			{"Name" : "conv_layer1_weights_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_5"}]},
			{"Name" : "conv_layer1_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_3"}]},
			{"Name" : "conv_layer1_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_weights_1"}]},
			{"Name" : "conv_layer1_bias_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "conv_layer1_bias_V"}]},
			{"Name" : "image_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_layer1_label8_p_U0", "Port" : "image_V_0"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36"],
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
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_31_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_29_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_27_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_25_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_23_U", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_21_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_19_U", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_17_U", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_15_U", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_13_U", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_11_U", "Parent" : "1"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_9_U", "Parent" : "1"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_7_U", "Parent" : "1"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_5_U", "Parent" : "1"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_3_U", "Parent" : "1"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_weights_1_U", "Parent" : "1"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.conv_layer1_bias_V_U", "Parent" : "1"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.image_V_0_U", "Parent" : "1"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U1", "Parent" : "1"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U2", "Parent" : "1"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U3", "Parent" : "1"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U4", "Parent" : "1"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U5", "Parent" : "1"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U6", "Parent" : "1"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U7", "Parent" : "1"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U8", "Parent" : "1"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U9", "Parent" : "1"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U10", "Parent" : "1"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U11", "Parent" : "1"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U12", "Parent" : "1"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U13", "Parent" : "1"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U14", "Parent" : "1"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U15", "Parent" : "1"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mul_mul_19s_tde_U16", "Parent" : "1"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_layer1_label8_p_U0.nnet_mac_muladd_5udo_U17", "Parent" : "1"}]}


set ArgLastReadFirstWriteLatency {
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
		image_V_0 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "854", "Max" : "854"}
	, {"Name" : "Interval", "Min" : "855", "Max" : "855"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	filter_0_i_i { ap_none {  { filter_0_i_i in_data 0 4 }  { filter_0_i_i_ap_vld in_vld 0 1 } } }
	output_V { ap_memory {  { output_V_address0 mem_address 1 13 }  { output_V_ce0 mem_ce 1 1 }  { output_V_d0 mem_din 1 24 }  { output_V_q0 mem_dout 0 24 }  { output_V_we0 mem_we 1 1 }  { output_V_address1 mem_address 1 13 }  { output_V_ce1 mem_ce 1 1 }  { output_V_d1 mem_din 1 24 }  { output_V_q1 mem_dout 0 24 }  { output_V_we1 mem_we 1 1 } } }
}
