// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_vdy_H__
#define __conv_layer2_conv_vdy_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_vdy_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 19;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_layer2_conv_vdy_ram) {
        ram[0] = "0b0101000000001100110";
        ram[1] = "0b1001010000011101011";
        ram[2] = "0b0110010001000101100";
        ram[3] = "0b1010101101010100010";
        ram[4] = "0b1001000000101000001";
        ram[5] = "0b0000101110011001011";
        ram[6] = "0b0000000011110100100";
        ram[7] = "0b0110110011000001001";
        ram[8] = "0b0010101101100111111";
        ram[9] = "0b0110110110011001010";
        ram[10] = "0b1001111101010101000";
        ram[11] = "0b0101101001101100111";
        ram[12] = "0b0110011110011111010";
        ram[13] = "0b0011010111011110101";
        ram[14] = "0b1110100000100101001";
        ram[15] = "0b0001001101010111011";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(conv_layer2_conv_vdy) {


static const unsigned DataWidth = 19;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_vdy_ram* meminst;


SC_CTOR(conv_layer2_conv_vdy) {
meminst = new conv_layer2_conv_vdy_ram("conv_layer2_conv_vdy_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_vdy() {
    delete meminst;
}


};//endmodule
#endif
