# This script segment is generated automatically by AutoPilot

set id 228
set name nnet_mac_muladd_1h9b
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 16
set in0_signed 1
set in1_width 12
set in1_signed 1
set in2_width 28
set in2_signed 0
set out_width 28
set exp i0*i1+i2
set arg_lists {i0 {16 1 +} i1 {12 1 +} m {28 1 +} i2 {28 0 +} p {28 1 +} c_reg {1} rnd {0} acc {0} }
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


set id 230
set name nnet_mac_muladd_1iab
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 12
set in0_signed 1
set in1_width 16
set in1_signed 1
set in2_width 28
set in2_signed 0
set out_width 28
set exp i0*i1+i2
set arg_lists {i0 {12 1 +} i1 {16 1 +} m {28 1 +} i2 {28 0 +} p {28 1 +} c_reg {1} rnd {0} acc {0} }
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
set ID 234
set MemName fc_layer3_fc_layeh8b
set CoreName ap_simcore_mem
set PortList { 1 1 }
set DataWd 12
set AddrRange 840
set AddrWd 10
set TrueReset 0
set IsROM 1
set ROMData { "001100110110" "111001000010" "001000101010" "000101011111" "110101000110" "000011011100" "001101010100" "001101101101" "000011010110" "110110101110" "001000100110" "000110010000" "001100100011" "111100011001" "001110101000" "000110011111" "111000001111" "001010110111" "001111011010" "001001111111" "111010110100" "000010000100" "110110001000" "111010000100" "110100010100" "001000010001" "110000001111" "111110000101" "110010110111" "111111110101" "111101010110" "111011110010" "110000110100" "001101101100" "110001100111" "001011000110" "001110001101" "001110101000" "110101101011" "001100011011" "000011100001" "110001011001" "010000000011" "000100011011" "110101000110" "110101001101" "110001110100" "111101000000" "110011000101" "110001100000" "000111101111" "001111001101" "000011001101" "110000101111" "110001011100" "001001010010" "010000001010" "001101110101" "001000101110" "111011100011" "101111110101" "111000100010" "110011111001" "001111100101" "000001000011" "001101001100" "111001100110" "000010001000" "001110110111" "110111000011" "001111110110" "111100010101" "110001101000" "111011100101" "111000010011" "001100101011" "110010101111" "000001111100" "001010000011" "111100010111" "001111010110" "111100001001" "111110011001" "111001110110" "001111110101" "001111111100" "000100011100" "000101100101" "001001110000" "001011011011" "000110000010" "111101111111" "110111101010" "111101110111" "111011011011" "111111000011" "001001010111" "001010010101" "000001101011" "110000111001" "000010101001" "001100011000" "001001000010" "000101101000" "001010001101" "111011100111" "000101010101" "001101001010" "110011110101" "111001110011" "111111010010" "010000000011" "111101001001" "001100101100" "001110111010" "001001010001" "110111011000" "111011001110" "111100110001" "110101001001" "111010010101" "111100110010" "111110111100" "000010111111" "110111001010" "001101101101" "000101011110" "001111011001" "000010011011" "001101010110" "110110101010" "000011111001" "111000101010" "001011010010" "111000010110" "001011110001" "000100000000" "110110001000" "000110000001" "110110100001" "000100001101" "001101101100" "000001101100" "110010000000" "110101010110" "000011111110" "000111000010" "001100100000" "111011100011" "111001111100" "111110111011" "111000001100" "000011000101" "110010011110" "000110100001" "000001100000" "110001011110" "000101001101" "001111100001" "001111010011" "110000110100" "001010110011" "111001111011" "001101101110" "000011001100" "001101110100" "000011101001" "111110011110" "111110011001" "111101001111" "001101001100" "000111101110" "000001011001" "110111011001" "110100010000" "001011011000" "110111100001" "000110110100" "000110111010" "111000010001" "000001001101" "001100100110" "001101010100" "000010110111" "001111011010" "110010010010" "001010100011" "111001011100" "111110101001" "110101111001" "110100010100" "000101010111" "110111100001" "001101101100" "111100110011" "000011000001" "110100000110" "001100010101" "001011101111" "111110100011" "000111001011" "111111001111" "111111001010" "111000101111" "000111001110" "110111010101" "000000001000" "000101110010" "000111000011" "000011111101" "110011001010" "111010011000" "000010101010" "000110010101" "110001101110" "000111100000" "110001011100" "110010111111" "110101010101" "110011100101" "000111100100" "111011110111" "110000101100" "111000101000" "000011101111" "000011110100" "111100111101" "111111111010" "001000111010" "001011111001" "110101011001" "110000100111" "110111011010" "001100101000" "000001010101" "110101000001" "001111001001" "111101101100" "000010001101" "110011010011" "111010111011" "111010010011" "000110111000" "111111001001" "111110000111" "001000101011" "000101111100" "111011010010" "110001010000" "110100010110" "001101111000" "001010011001" "000101101001" "000111010000" "000111110000" "001011100011" "111000001011" "110011010010" "110011101011" "111010111010" "000110111011" "111011001000" "001011111110" "001010110000" "001011000001" "110110000000" "000101101101" "000010111001" "111101100110" "001100001101" "001010110100" "110010110001" "111110111000" "000010010000" "111010010000" "111111111010" "001001101100" "000110110111" "111010000010" "000000001110" "110000110011" "000101111110" "000011111011" "110100000000" "001101100001" "110010100110" "110101100110" "110001111101" "111010101000" "110001010011" "001100011000" "110000100101" "110110101010" "000010100000" "001011010001" "110010011111" "110100101000" "111010101100" "110001001111" "110000110010" "111101111100" "111110110000" "110010110111" "000010101010" "111001010011" "001001000110" "000000001000" "111100001101" "001100011110" "110100100011" "000100110110" "000000100001" "111000010011" "110010011001" "110101001001" "110000111011" "110101001101" "001111110100" "000101000010" "001101101010" "111100000111" "110100100101" "001000000011" "001011100110" "001000000111" "110101000101" "110111001000" "110110010110" "111100001110" "111011111111" "110111111011" "001000100110" "110100001000" "001110010111" "000101100010" "111111001010" "000001101000" "110011101010" "000100111110" "110010110110" "000101100101" "000111100101" "111111101110" "110101001100" "000110001100" "111111011011" "110000111110" "110001000010" "111100110101" "000101110000" "110101001110" "000101110010" "110000010111" "110010110000" "111010011010" "110001011111" "001010010101" "000111000000" "110111000110" "001001100101" "111111101101" "110011000101" "111111111011" "000000101101" "110010101110" "110010100110" "110111010100" "111000110010" "110101010100" "110101011110" "001100111101" "001111011000" "000000110100" "111111011001" "001100101001" "000101001101" "111010110100" "000110010001" "110001111001" "000011100001" "001000000111" "111110010001" "000010011010" "000110110100" "001011101001" "001011000000" "000001110101" "110100101101" "000011001101" "111101001111" "000000111111" "000010001000" "000001001101" "001001111001" "111010100010" "001110011111" "001001000011" "000000101101" "110100000100" "000010101100" "111111110100" "111010110111" "001101000110" "111110001001" "001011000111" "001011101111" "111101011010" "110011111101" "000001110001" "111101111011" "000110101100" "111101110100" "000101110100" "000000110111" "110000001101" "000001100111" "000110000110" "110000111110" "110111110100" "000110100010" "001011001110" "110111011011" "000101001001" "001111110001" "001101011000" "010000000011" "110111111111" "110110110101" "110010101101" "111011011011" "111001101001" "001010000101" "000111101110" "000111111100" "111010100000" "000010010101" "111111000000" "001100110101" "111101000101" "111001011101" "110010110001" "111001011101" "111001100101" "111010111110" "001111011001" "001010000111" "000011010110" "111100110100" "111100010100" "000010100101" "110101010010" "111111101101" "111101001001" "001001001001" "001000100001" "001101000000" "001001111101" "000011100110" "000001000111" "001010010011" "000110100010" "000110010011" "111000100011" "110100000001" "111110100101" "110111110111" "111100000001" "001111101011" "001101100101" "001100010010" "000100001001" "001001001000" "101111111000" "001001000111" "110011011011" "110111010101" "111000011101" "001110100011" "001010111110" "110011111101" "111101011001" "111110110011" "111011001111" "110001111000" "000011001100" "110010101001" "110010000000" "110111000001" "000110100001" "110110010010" "111110110011" "110110011100" "001010110100" "000110100000" "000100010001" "111010010110" "000000101101" "111100011110" "111000001111" "001111001000" "110001011100" "111010110100" "000100001101" "001110111011" "001010011110" "110010010110" "111011111000" "110111110101" "000111001000" "000100101111" "111110010000" "110001100011" "110111010111" "000000101100" "001010010010" "110110111100" "111110101111" "111111101111" "000001100000" "001101100000" "111111101101" "001110101011" "111010100000" "111101100110" "111011001001" "111000110001" "111011100011" "000101100000" "111110110001" "111000110111" "110010001000" "111000011111" "001011111100" "001011001001" "001011111001" "001001010110" "111010001110" "000101011101" "001100110100" "110000001111" "111110011111" "000001001001" "111110100101" "000001101100" "000101100101" "110100100111" "111010111000" "001011001001" "000100001101" "000110101100" "111111101101" "110000110110" "111111101101" "000100111111" "001111001000" "110100011000" "111100101100" "000110111101" "001101001010" "111111100100" "111011110100" "110011010101" "000110111101" "111011001110" "000011110110" "110001100100" "000001101001" "111101101000" "110101110000" "001101111000" "000111001000" "001001010111" "110101000011" "111100010111" "000010110110" "110100110100" "000001110000" "110001010100" "111011010101" "000110110001" "001111100011" "000010101110" "111111010100" "110111011111" "001010011101" "000010011001" "111011101011" "110000100100" "000000111000" "001111110011" "110001110101" "111011101000" "111100010011" "000011101100" "110010100011" "000010000110" "110100110000" "001110011010" "001100011101" "001011000010" "110111010100" "110111011000" "110111111101" "111000110011" "001110011011" "110010011000" "001010101101" "000001100101" "110011011010" "111000010110" "001100001001" "110100110000" "110111010001" "111000111010" "001011000010" "000001011111" "001000100100" "110110010110" "110100010101" "111001110110" "001100011100" "111001010100" "111110001101" "001110100010" "000100001111" "001101111100" "110001111110" "111011111011" "111101100110" "000100100101" "110011100100" "000100011100" "110010001001" "110010011110" "110101100101" "010000001001" "111100111010" "110000000110" "001100110110" "001001101000" "111001101011" "000111111010" "001110011110" "110111101001" "000101011100" "110010101011" "001001001111" "110110000000" "110010100000" "110010110110" "101111111100" "001011111000" "010000001000" "001100100011" "111100111111" "000110010100" "000110000011" "111010001111" "111110101111" "110101101001" "001111001010" "110111111101" "111101010010" "110110111010" "111111111010" "001001100111" "110110110101" "111101001000" "110111111100" "001100010000" "001100001000" "111011110111" "001101010000" "111101100101" "001111100100" "000111010101" "111010110100" "111010101001" "110110110111" "001111100010" "001110101100" "110111010001" "111011000010" "000111010001" "001010101111" "001100000101" "000011001101" "001011001010" "001111001110" "001110001010" "111000000101" "111110110111" "101111111001" "111111101010" "010000000001" "110101100111" "000111001001" "101111110110" "001010111000" "000001000100" "111010010000" "110010000110" "101111111100" "110100010011" "001101011001" "001101110011" "000001110001" "111001111110" "111011010110" "000101001010" "110011011011" "110000111100" "001000101001" "000101110011" "000010010100" "000011011100" "110000110110" "110101101100" "000101100011" "110011111000" "000000100111" "110011100100" "000011110110" "111000101000" "001000001100" "000010111100" "001001011010" "111001011111" "111011100000" "111110001100" "110001100001" "001100101001" "001110110000" "000101111000" "110000010001" "001110100001" "000000101111" "000101010101" "001010010000" "000110011111" "111001010001" "111000100101" "111001000100" "000100111110" "110111010001" "001011011111" "000110100111" "110100100000" "001111111011" "111101100000" "001111000111" "001111110100" "111111101100" "001100001000" "001011101101" "111001110001" "110010010000" "111101110111" "000110111011" "001110001001" "000000101110" "000111010101" "000011101011" "001110010001" "111010101111" "111101100010" "001001010000" "110010101000" "000001111000" "000100111011" "001111101110" "001010011110" "111010100000" "001101010100" "001100111011" "001110000111" "001011000111" "000000100101" "110000010111" "111011000010" "001101011101" "000011011101" "000000001110" "000000111100" "111100101001" "111011010000" "110100100111" "000001110011" "110110001001" "001101011001" "110111000000" "110000100111" "001111100010" "001110011000" "110010110111" "111101001000" "001110011010" "110111110101" "101111111011" "110110011110" "110000111111" "001101001001" "000101110001" "110000101000" "110101010001" "110100010010" "000111110111" "110001110011" "000100111000" "111011011000" "001100101000" "110011111010" "111110100000" "000001111111" "111000111000" "111011000001" "000000101011" "000101010100" "000100110010" "110000100111" "001000100011" "110000001110" "110000111110" "001111101111" "110101110100" "110100011011" "000010011100" "111100111101" "001110100111" "111010011011" "000001001000" "111000010110" "111100111101" "110111100001" "001000100100" "000100100000" "000000100111" "110100000001" "111000100011" "000111001111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 13
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
    port_num 2 \
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
    port_num 2 \
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
set ID 235
set MemName fc_layer3_output_V
set CoreName ap_simcore_mem
set PortList { 2 2 }
set DataWd 16
set AddrRange 10
set AddrWd 4
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.322
set ClkPeriod 13
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
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
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


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 236 \
    name out_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_V \
    op interface \
    ports { out_V_V_din { O 16 vector } out_V_V_full_n { I 1 bit } out_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 237 \
    name in_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_V \
    op interface \
    ports { in_V_V_dout { I 16 vector } in_V_V_empty_n { I 1 bit } in_V_V_read { O 1 bit } } \
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


