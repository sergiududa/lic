// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_yd2_H__
#define __conv_layer2_conv_yd2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_yd2_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_layer2_conv_yd2_ram) {
        ram[0] = "0b0111110011101100001";
        ram[1] = "0b1000100111101111110";
        ram[2] = "0b1011101010001011011";
        ram[3] = "0b1000000011101100010";
        ram[4] = "0b0001100111000011101";
        ram[5] = "0b1100000001101110110";
        ram[6] = "0b1111010011011100110";
        ram[7] = "0b1011010111010111010";
        ram[8] = "0b1010001001000011010";
        ram[9] = "0b0001110000110010110";
        ram[10] = "0b0011001110101000101";
        ram[11] = "0b0001000111001000011";
        ram[12] = "0b1100001000001110000";
        ram[13] = "0b1001100001010001111";
        ram[14] = "0b0111011010111001101";
        ram[15] = "0b1011011001000011001";


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


SC_MODULE(conv_layer2_conv_yd2) {


static const unsigned DataWidth = 19;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_yd2_ram* meminst;


SC_CTOR(conv_layer2_conv_yd2) {
meminst = new conv_layer2_conv_yd2_ram("conv_layer2_conv_yd2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_yd2() {
    delete meminst;
}


};//endmodule
#endif
