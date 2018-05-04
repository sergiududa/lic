# This script segment is generated automatically by AutoPilot

set id 1
set name nnet_mul_mul_19s_tde
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 19
set in0_signed 1
set in1_width 20
set in1_signed 0
set out_width 39
set exp i0*i1
set arg_lists {i0 {19 1 +} i1 {20 0 +} p {39 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 17
set name nnet_mac_muladd_5udo
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 5
set in0_signed 0
set in1_width 6
set in1_signed 0
set in2_width 5
set in2_signed 0
set out_width 10
set exp i0*i1+i2
set arg_lists {i0 {5 0 +} i1 {6 0 +} m {10 0 +} i2 {5 0 +} p {10 0 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 20
set MemName conv_layer1_labelbkb
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0100000101011100011" "1010011111101001100" "0101000111011111000" "1011101011011101110" "1010010010101110010" "0000100101111000100" "0000000011000111100" "0101100011001100001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 21
set MemName conv_layer1_labelcud
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0010001101110000110" "0101100101111100101" "1011000100010010001" "0100100111010100111" "0101010010011011011" "0010101111111100001" "1110110010000101110" "0000111111001010110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 22
set MemName conv_layer1_labeldEe
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0100101000100111100" "0001010000010100101" "0011100110111011011" "0110001011011110110" "1010010010001010100" "1101110110100100011" "1100010111010010100" "1101101001110011011" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 23
set MemName conv_layer1_labeleOg
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "1001111110110000111" "1010010110001010011" "1101101111011101010" "1111111000000110010" "1010111101101101100" "1101111101100010100" "0000010010100110110" "1101011101100101100" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 24
set MemName conv_layer1_labelfYi
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0100111111001100000" "0011111100010000111" "0110100001011100101" "0010000101010010010" "1011001000010101111" "1011111101110010101" "0010000101001100000" "0011011010100111001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 25
set MemName conv_layer1_labelg8j
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0011010100000001100" "1110111001110010110" "0101110110111101011" "0101000110011100000" "0101011100111001011" "1100111101001110100" "1011101111101010010" "1010000100010000001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 26
set MemName conv_layer1_labelhbi
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0110010111111111101" "1001111110011010000" "1100011101001010001" "1001100000111101111" "0001010100001001010" "1100110000011000111" "1111011011101000000" "1100001101110011000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 27
set MemName conv_layer1_labelibs
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "1011001101110110110" "0001011100000110000" "0010101000101101111" "0000111010000101000" "1100110101101100000" "1010101101011000011" "0110000011110000010" "1100001111001011000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 28
set MemName conv_layer1_labeljbC
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0101110011100100111" "1010000111001000010" "0101000100011110100" "1100100001000110000" "1111010001000110111" "1011001011110111111" "0101100011111111010" "1101111110000111000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 29
set MemName conv_layer1_labelkbM
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0110011000101000101" "0100100000110011100" "0011100000110001110" "1101001101001101010" "1111100110111100001" "0100011011010000010" "0011101000001010110" "1110000111110110110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 30
set MemName conv_layer1_labellbW
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0011010001101000000" "1110100010111110000" "1110001011001111100" "1001100001111011110" "1011110000000000101" "0110011011111000100" "1100110011001011001" "1101110010100100110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 31
set MemName conv_layer1_labelmb6
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0010010011101101100" "1010011010011011111" "1010001101100101100" "0110000001111011111" "1111100101010101110" "0001111010100110000" "0110000000010111101" "0100101001010011000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 32
set MemName conv_layer1_labelncg
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "1011011110111100000" "1111011101110010100" "0011010111111011111" "1100110011001110000" "0100001010010111011" "1101001001001000100" "0101010101101110110" "0010010110010110111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 33
set MemName conv_layer1_labelocq
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0001000110100111110" "0100001010011111010" "0011110011110000010" "1111011000001111110" "1011100001100001111" "1100111001110111001" "0010101101110110100" "1101000010101000100" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 34
set MemName conv_layer1_labelpcA
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "1101001101100011111" "0100010001010000110" "0010000101111100000" "1100011011010010010" "1111100000110111001" "0011010011111111001" "1111000000011110111" "1100110011010011010" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 35
set MemName conv_layer1_labelqcK
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 19
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0101110100010011100" "1100101101100110000" "0010000001011011000" "0010111011011000100" "0011111101101001111" "0010010001011001101" "1111101111011110001" "0100110110110100101" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 36
set MemName conv_layer1_labelrcU
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 21
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "001100010000010101000" "101111011110111100101" "001111010110011101001" "110011000010011001100" "101110111000001010110" "000001110001101001101" "000000001001010110111" "010000101001100100101" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 37
set MemName conv_layer1_labelsc4
set CoreName ap_simcore_mem
set PortList { 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 }
set DataWd 20
set AddrRange 1024
set AddrWd 10
set TrueReset 0
set IsROM 1
set ROMData { "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "01100001011000010101" "01100000011000000110" "01001101010011010101" "01110110011101100111" "00111101001111010100" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "01011010010110100101" "10001010100010101000" "11101011111010111111" "11101011111010111111" "11101011111010111111" "11101011111010111111" "11101011111010111111" "11101011111010111111" "11111011111111000000" "11111011111111000000" "11111000111110001111" "11111110111111101111" "11110101111101011111" "11101011111010111111" "10111110101111101011" "00010101000101010001" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "10001100100011001001" "11111011111111000000" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "10111101101111011011" "00010111000101110001" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "11100010111000101110" "11111110111111101111" "11010000110100001100" "11000111110001111100" "11000111110001111100" "11000111110001111100" "11000111110001111100" "10001011100010111000" "00111101001111010100" "00111101001111010100" "00111101001111010100" "00111101001111010100" "00111101001111010100" "10000000100000001000" "11011110110111101101" "11111110111111101111" "11111110111111101111" "10111101101111011011" "00010101000101010001" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00100110001001100010" "01010010010100100101" "00001101000011010000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00100010001000100001" "11010101110101011101" "11111110111111101111" "11111110111111101111" "01110011011100110110" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "01010100010101000101" "11111110111111101111" "11111110111111101111" "11101010111010101110" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "01010100010101000101" "11111110111111101111" "11111110111111101111" "11101010111010101110" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "01101010011010100110" "10011101100111011001" "11111110111111101111" "11111110111111101111" "11110011111100111111" "00110011001100110011" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00011001000110010001" "01110101011101010111" "11100100111001001110" "11100100111001001110" "11100100111001001110" "11111101111111100000" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11110000111100001111" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "01000100010001000100" "01110111011101110111" "11011100110111001101" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11111110111111101111" "10001110100011101001" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00100101001001010010" "10111011101110111011" "11111101111111100000" "11111110111111101111" "11111110111111101111" "11111110111111101111" "11011111110111111110" "11001110110011101100" "11001110110011101100" "01001011010010110101" "01000100010001000100" "11010111110101111101" "11111110111111101111" "11111110111111101111" "01110101011101010111" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "01110001011100010110" "11011011110110111110" "11111110111111101111" "11110010111100101111" "11100011111000111110" "01110011011100110110" "01011001010110010101" "00011111000111110010" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "11001000110010001100" "11111110111111101111" "11110001111100011111" "00101001001010010010" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "10101001101010011010" "11111110111111101111" "10110000101100001010" "00111110001111100011" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00110000001100000010" "11100111111001111110" "11111110111111101111" "11101010111010101110" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00010010000100100000" "01111100011111001000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "01010100010101000101" "11111110111111101111" "11111110111111101111" "10100110101001101010" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "10001011100010111000" "11111110111111101111" "11101110111011101110" "00111001001110010011" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "11010010110100101100" "11111010111110101111" "11111110111111101111" "10101000101010001011" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "11110010111100101111" "11111110111111101111" "11101111111011111111" "00111001001110010011" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "01011001010110010101" "11111011111111000000" "11110001111100011111" "01010110010101100101" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000101000001010000" "11001110110011101100" "11110110111101101111" "10011101100111011001" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000100000000111111" "01110101011101010111" "01000101010001010100" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" "00000000000000000000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 16 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 16 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name output_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_V \
    op interface \
    ports { output_V_address0 { O 13 vector } output_V_ce0 { O 1 bit } output_V_we0 { O 1 bit } output_V_d0 { O 24 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 38 \
    name filter_0_i_i \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_filter_0_i_i \
    op interface \
    ports { filter_0_i_i { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


