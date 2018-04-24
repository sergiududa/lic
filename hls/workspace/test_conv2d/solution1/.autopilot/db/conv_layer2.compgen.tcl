# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 17
set MemName conv_layer2_conv_g8j
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 16
set AddrWd 4
set TrueReset 0
set IsROM 1
set ROMData { "00111110100010101010011010110001" "10111110101110101101110010110001" "00111110101011011010110011101111" "10111110100100101010011101011001" "10111110110000011011011110111111" "00111101001000001011101000011111" "00111011010100111100111111110110" "00111110101111000101111001001110" "00111110000101100101110010110011" "00111110101111011101010010000100" "10111110101001110110111011100111" "00111110100111001001111100001110" "00111110101100110111101010000001" "00111110001110101001110010011001" "10111101101001010100010011111110" "00111101100001011111111110100100" }
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
set ID 18
set MemName conv_layer2_conv_hbi
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 512
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "00111110001000000001100110110001" "10111110010101111100010100100110" "00111110010010001000101100010001" "10111110001010010101011101000111" "10111110010111111010111110000110" "00111100101110011001011011111011" "00111010111101001001010010010010" "00111110010110011000001001000101" "00111101101011011001111110010000" "00111110010110110011001010001011" "10111110010000010101010111010110" "00111110001101001101100111000111" "00111110010011110011111010001010" "00111101110101110111101011110110" "10111101001111101101011000110100" "00111101000110101011101100000010" "00111110001101011010010000100111" "00111101010001001100000001011001" "00111110000011010110101000010110" "00111110011100100010111001011110" "10111110011000000000011011010001" "10111101101010000101000110101000" "10111110000011101000000110001000" "10111101101101111111010000010011" "10111110011010111110100000110110" "10111110010111011001010000001000" "10111101101100010000011011101110" "10111011100110101101110010010000" "10111110010001010101110000010000" "10111101100111111100011101100000" "00111100001101100100111000000101" "10111101110001101110100111111111" "00111110010000110111011001001111" "00111110000110100111101100001011" "00111110011111111010001001101010" "00111101101000110011110101101100" "10111110001111101101100110011101" "10111110000111100001111010110100" "00111101101000110001111100000100" "00111110000001011101111100100010" "00111110000000011101011010001100" "10111101001010111111011101101010" "00111110011001011001110110011001" "00111110010001111110011011110111" "00111110010101011010011111010010" "10111101111011101000110010001011" "10111110001001101100010111010010" "10111110011010001000101111011011" "00111110011110011101100001000001" "10111110011011000010000001001111" "10111110000010101110100100100101" "10111110011111100010011101011011" "00111101010011100001110101100101" "10111101111111100100010011111010" "10111100101100100011001101011001" "10111110000101000101000101110110" "10111110001110110111100101010011" "00111101011000011001011001010011" "00111101110011101010001010010000" "00111101000011100100001100100100" "10111101111101111100011110000010" "10111110010011110101110000101001" "00111110011011010111001101000011" "10111110000100110111100110110111" "00111110011000111000101100000101" "10111110011001101100100011110111" "00111110010001101011001101111000" "10111110000010001000000001010010" "10111100111001011011100001010110" "10111110001111001011000000111010" "00111110010110011111111110010011" "10111101100111110001010100011110" "00111110011110100011110010100111" "00111110001100001101101101101010" "00111110000010011010010110101001" "10111101110110101111100111101100" "10111100011101011000011111010111" "00111110001011010111010100011001" "00111110000011100010110010011001" "10111101100100110010010110010010" "00111110000000000101111001011111" "10111101011000111110000001111010" "10111101100011101111111101011100" "10111110011111011000111111010110" "10111110001001101000111100001000" "00111110011111000011101000000000" "10111101111110101101101110000011" "10111101101011010011010110101000" "00111101101101001110100011111011" "10111110010110101111011001000000" "10111110011000101101010011010100" "00111110011011000101011010010011" "10111100100000101001100011001100" "00111101100101100010010110100111" "00111110011010110110000010101111" "00111110001101100000111010010101" "10111110001100010000001101000011" "10111100101001111001100110100010" "00111110000001000011101111110111" "10111101111110101100110101011011" "00111110001000110001110110110100" "10111101110111111111011100010110" "00111110010100010100010001000110" "00111101101110000010011001100111" "00111101001011001111110010000011" "00111110001000110011000011010111" "00111110000101010100010010111011" "10111100110000101100000110110001" "10111110001011110110110100110011" "10111101111100101010101011100011" "00111101110101001110110010100111" "10111101111001111110110011111111" "10111101110110101000101001000000" "00111110001001110101011011001001" "00111101101001000000101001101100" "10111110000011000000111100000010" "10111100100110001000101100010001" "00111110000000011101000010000101" "10111101000110111001010100011100" "10111101111110101011001110101011" "00111110011000111111110110010011" "10111110000000001101100010001000" "00111101100111101000001011011000" "00111101111001010111111100110000" "00111110000110110101010011100011" "00111101101100100001010001101010" "10111100001000011111000010000000" "00111110001111100101011011001101" "00111010111010011101010100011011" "00111110010001001000110101111110" "10111101011101011111011011111101" "00111101111111110000101010100010" "00111110010011111100000100010110" "10111101010000101110100001111101" "10111101101111011110000101011101" "00111101100100010111001011101111" "00111110011011111111101101001000" "10111101110011101111100000000101" "10111110011000011001100010101111" "00111110010101100101111000000011" "10111101111000101100111011001101" "10111110001110010111110101001010" "00111011111110100101100011110111" "00111110010111101011010100101101" "00111110001101010001001011101100" "10111011001010101000011001010001" "10111110000111001100100000010101" "10111110011110110110101101101110" "10111101100110011111111001000011" "00111100111011011011101101011010" "10111110000111101101100110011101" "00111101100100101000100111011011" "10111101111111101100100110011111" "10111011110010001001001010101011" "10111100011001010100011100010111" "10111101111100100110011111000111" "10111100110000001000011101000100" "00111101001001010010000101010111" "00111010001110111111010100001110" "00111100010110100011011111101111" "10111110010101110111111101101011" "10111100110011110101010011010010" "00111101001011100100111000100111" "10111101100100110101001010101000" "00111110011001011001111000011111" "10111101111111000100011001010010" "00111101111000011000001011101101" "10111110010010000101001001110010" "00111101111101111001110010000100" "10111110011011111110000011001110" "10111011000000100101100111100010" "10111110011100010110101111011011" "10111100100010010001100111110000" "00111101011001111001010001100100" "00111101011010101101011100001110" "00111101000110101001100001100111" "00111110010010111111110001100101" "10111110011001010011101111010001" "10111110001001111000011000111100" "00111101100101100100001001111100" "10111100100000101000010111101100" "00111100110110100001110010101100" "10111110000110011001001001000011" "00111101100011011001101011011000" "00111101111000110001010000000001" "10111110000100001011011010110111" "10111101001001110001011110011100" "00111110001000111101011001000001" "10111110010111101001011111010000" "00111110011100110101001001100101" "00111110010000110001010111010111" "10111110001010000001010101011101" "10111110000110000101000100100010" "00111011101111111011000101011011" "00111100010001101110001010101000" "10111101111101000101001110001111" "10111101111101010101110011011001" "00111100001111111001001111111111" "00111110010101110110100011100000" "00111101100011101110111110100010" "10111101100010111010111110010110" "00111110000010011011000111111011" "10111110011101110011010010110101" "00111100110001000000111100100100" "10111101111001110100101011111101" "10111101101011011010110010101100" "00111100101100101101010011010100" "00111110011010011111111100001101" "10111110001001011010011010000011" "00111110000110010100010001100111" "10111110000111010001111001010100" "00111110000000010001010111011111" "10111110000100111101111010100100" "00111110001101111100101101110001" "10111101110000001010000011110101" "10111110000111111011110011100100" "00111110011000001000100000001110" "10111110010010111010000110110010" "10111110001010110100100101011010" "10111110010111000011101001000011" "00111101101101010001111110000010" "00111100100000111001110011011000" "10111101111101001101110001100110" "10111110010010011000001100001110" "10111110001000011111110000001001" "00111110001011100111111011101001" "10111110011001001010011110110101" "00111110001000110101010011000001" "10111101101010101100101110000110" "10111110000010010101010010101000" "10111110011010011010011111000001" "00111101110100011010000100010010" "10111110011101011000000011000011" "00111101010101010000010101001011" "00111101101010111100010010001111" "00111110001101001111010110010000" "10111101100000010100101011010011" "00111110000011110010010000010000" "00111101100001101111000101010110" "00111110000000010101010001000011" "10111101111100001010001001000100" "00111110001110010000101001111000" "00111110010001111101000001101100" "00111101110011010100011001101111" "00111110011101111000101010110001" "10111110011011010101100100001100" "00111110001110000110010110010101" "00111101011110001011010001111100" "10111101100001001000101011011111" "00111101010000111101100110101001" "00111011111011110001101110101100" "00111101100110010011000111001010" "00111110001111110011100110001111" "00111101100111100011000100001110" "00111110000100111110000000110111" "00111100100001110010011011010000" "10111101000001111010001110011000" "00111110000000001110010111100110" "10111101001000110000110110110111" "10111101110010011111010010010000" "10111110000000101100010111100011" "00111101110011001101000110000101" "00111101111100100001100000010110" "10111110001110000110101011010011" "10111110000111100011100100101110" "10111110001100010001100100000101" "00111110001011100100100101101111" "10111101001001000101111001001110" "10111110010010111101010111011100" "00111110001100110110000011010000" "00111101110110111111110011101011" "00111100100100010000000110110000" "00111101100101110011011101010100" "00111101010000000100010000101000" "00111110010110110111101001011111" "00111110010011010100101010100001" "00111110001101001111100011111001" "00111110011110101111100100100011" "00111110000101100010001010000001" "00111110010001011011010100110001" "10111110000000111000000000000010" "10111110000010001100101101001011" "00111110000011010000100011010101" "10111110000010010111001110010111" "00111101100010000001110000101110" "10111110001001011000011001000100" "00111110010000000001000011000111" "00111101101001101100000100011010" "00111101100000101111101011010111" "00111110001011000100111010110101" "00111110001101100011110100111110" "00111100011000011011000010001010" "10111101101110110100110011000010" "00111101110011010010011011111010" "00111101111111101100101010101100" "10111101100001011010000010111110" "00111110001100000111110110010001" "10111101100001111101000110111011" "10111101111110001011000001001011" "00111110000101011010000101000101" "10111101010010011000101100101111" "00111100100111000000111010111111" "00111101101101010011101011000101" "00111101101111101011011111001100" "10111110010110110111000111111100" "00111110000110010100100111101001" "00111110000001010001001011101100" "10111101101100000011010110111101" "10111110000111111010111110000110" "10111110010010011011001111010000" "10111101010100001101010010011001" "00111110000110100110001000100100" "10111110010100110010111110001000" "00111110010000111001110100011011" "10111101011100111010100010100100" "00111110001001100001101000011110" "00111101011000010001110110111101" "10111110001100010110011111101100" "00111101100101111001111010011101" "00111110011100000110010111111001" "00111110001111011100110010100111" "10111100101000011011110000010010" "00111110000011100011101100000100" "10111100001001011100000111000110" "10111110011110010111110110001101" "10111110010110110000001001001111" "10111110010101100100000010100111" "10111101101001010100011000001011" "10111100110011111101011011011000" "10111110000010001101000000000011" "10111101001111000011001011101100" "10111110001111001110011111001101" "00111101110100010010000100100101" "10111100001111011001100001111100" "10111101111101101100010010000010" "10111101000000011000110101101001" "00111110001001010010010110001001" "10111110011111001101011111001111" "00111101001010011000000100111000" "10111110011010110100101011101101" "10111110000000001011011000110001" "00111100101110010010010110111011" "00111110001011110110010011010000" "10111110001010010010001011011001" "00111101100001001101010001000101" "10111110001010110000111001011110" "00111110011110010110011101000101" "10111110001111010100100111011000" "00111110010110010001011111010111" "10111110010011101110111000001111" "10111011011110101101111100101111" "00111101111001011001111000011111" "10111101100010000100110001101010" "00111110001111001001110100010111" "00111101110101010111101101000010" "10111110001110110111100101010011" "10111110010000110110000110011001" "10111110011111010100001110001101" "10111110010111100111110011010000" "10111110001001000011011000110011" "10111011110111100000000011010010" "10111110000111101010010110110101" "00111100100000110011100000101110" "10111101110000000101011010000010" "00111110011100001010000010110010" "10111101110011000111011111011110" "00111110011100111100111011101010" "10111101101111111101100000100111" "00111110011001000010001011001101" "10111110011010110111101110101111" "10111110000010010000110001001110" "00111100110110101000110111101011" "00111110010111010110001010111111" "10111101110010011001101011101001" "00111101001010001010010100000101" "00111101000100000100000111001100" "10111011010000011000011100011110" "10111101100010001111011001001001" "10111110001001010000011011011101" "10111110011111111011001001101000" "10111110011001110100001100100000" "00111101010001011000000000111101" "10111100110010011001000001101101" "10111110011011001111010011101000" "10111110001111000100000010001110" "10111101100100100000110100010011" "10111100101001000010011010111011" "10111101111111001101011100000110" "10111110011111011010110001101001" "10111101011100100101101000100101" "10111110011000100100110110010000" "10111101110111101000111101101101" "00111101011000010010010000000111" "10111110011101011100001010001111" "00111101111110000110110010101001" "00111101010110110001001000001010" "00111110001101110111011000111110" "00111101110101000011000011110101" "00111110000111101100111010011010" "10111110011111010100101010100001" "10111101101011110111000010011011" "00111110001101011100010011101011" "00111101111101010011101101001011" "00111110001010111100001101000000" "10111101101010100010110100110000" "10111101101001010000011100100001" "10111011101111010001001001000101" "10111110000101011111001111011000" "00111110011101110110101101111111" "10111101011011111110101101001010" "10111110010000110001111110001010" "00111110000010011100000001100110" "10111110011010010100001101011011" "10111110001001000000011011000000" "10111110001001010000101100001111" "10111101110100101010101011100011" "00111101011110110011101101110101" "00111110011111100010110011011100" "10111110011010010110101011110000" "00111100101001111110100101010011" "10111100111110001001110001011110" "00111110011101110000010010111100" "00111101110110110101111110100010" "10111100101000110011011110101000" "10111101101101000011101101110001" "10111101010111101111010100100011" "00111101110110001000011111101100" "00111100010001011100110111010101" "10111110000001100011001101001000" "10111110011010100001101000001101" "00111101110010011110110111000000" "00111110010101000111011101111001" "00111110010011110101111001000010" "10111110011101100111010110011011" "00111101111000110000101000001011" "00111101111100001010110111001101" "10111110010011101111001011000111" "00111110001101000101010101100101" "00111101110111010010001100001100" "10111110010101010101111000101001" "10111101101001011110111111101001" "10111101100101010101000111010111" "00111101001000101000000100110100" "00111110011100011011111101111011" "00111101110011110010100001000001" "10111101111100111101111110110001" "10111110011001000011001111010111" "00111110011001000000100011011001" "10111100100111100110100010100001" "10111110001111000011011001010100" "00111110001001110001010001110111" "10111100110000100011010100101111" "00111110000110011100000011101100" "00111101100010001011110010011101" "10111110011011001110010111110111" "00111101110000110101111110000001" "00111110011010110011101111111011" "00111110010100101110010101011000" "00111101000100110110100000100111" "00111110001111101010110001000011" "10111101110011001111010100101100" "00111110001110100110011101100010" "10111100110000000001001111101100" "00111110001011111010000011010111" "10111101111110110100101000100011" "10111110001010001011111101111111" "10111011111001001100100101000011" "10111110011100010101100100111110" "00111101111111110011010100011010" "10111101100000100100001101010111" "00111110010100110000011110101111" "00111101101110110011001000000101" "10111110011101111001011001111101" "00111101110010001100000011001111" "10111010111110011111010001001101" "00111101100010100100010101001110" "10111110011000101111111100001001" "10111110001100000000010000110010" "10111110011010101000101101001100" "00111110011001010010001111110110" "10111110011101111101100111011100" "10111110000000010000010101011100" "00111110011011010101011010110000" "10111110010101000011111001010011" "10111011000001100110101000010010" "10111101000011001011000001111101" "00111110010000011110010101111110" "10111110000101111101011011111001" "00111110001101000110000110110111" "00111110011100010000010111100010" "10111100101000011100000001000100" "10111101111010101010111100110110" "10111110010100110110011111100100" "10111110000001011101000001110100" "10111110010000111000001001011110" "10111100000001001010110101111001" "00111110000001001111111111001001" "10111100101011111100100010110000" "10111110011110001011010111001100" "10111110000010100000110101111000" "10111101100000110001000001010110" "00111101110101101001010011001101" "00111110011001100001111101011100" "10111110001000001110010100011101" "10111101111000100011111110101011" "10111110000011110000111110011101" "00111110001101101111000100010011" "10111110000100010110100010110110" "10111101110000001000111110101000" "10111110000010000100101010010100" "00111110001110110101101100101101" "00111101111010111011100100000110" }
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
    id 19 \
    name output_r \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_r \
    op interface \
    ports { output_r_address0 { O 12 vector } output_r_ce0 { O 1 bit } output_r_we0 { O 1 bit } output_r_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_r'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 20 \
    name image_r \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename image_r \
    op interface \
    ports { image_r_address0 { O 11 vector } image_r_ce0 { O 1 bit } image_r_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'image_r'"
}
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
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
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

