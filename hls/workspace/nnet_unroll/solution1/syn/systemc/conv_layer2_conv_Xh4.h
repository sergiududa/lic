// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_Xh4_H__
#define __conv_layer2_conv_Xh4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_Xh4_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_layer2_conv_Xh4_ram) {
        ram[0] = "0b1000010000010011000";
        ram[1] = "0b1011111101111101010";
        ram[2] = "0b0111011010101011010";
        ram[3] = "0b1001010111100000110";
        ram[4] = "0b1111111011110011001";
        ram[5] = "0b1110111001101001111";
        ram[6] = "0b0110000011110010101";
        ram[7] = "0b1011010000010100100";
        ram[8] = "0b0101101000110000110";
        ram[9] = "0b0111100010000010111";
        ram[10] = "0b1111010111100011111";
        ram[11] = "0b1100010101010100001";
        ram[12] = "0b1001011001001100000";
        ram[13] = "0b1011110100010111110";
        ram[14] = "0b1001111000111110110";
        ram[15] = "0b1111101111011010100";


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


SC_MODULE(conv_layer2_conv_Xh4) {


static const unsigned DataWidth = 19;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_Xh4_ram* meminst;


SC_CTOR(conv_layer2_conv_Xh4) {
meminst = new conv_layer2_conv_Xh4_ram("conv_layer2_conv_Xh4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_Xh4() {
    delete meminst;
}


};//endmodule
#endif
