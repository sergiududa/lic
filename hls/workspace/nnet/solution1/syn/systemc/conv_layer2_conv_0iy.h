// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_0iy_H__
#define __conv_layer2_conv_0iy_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_0iy_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_layer2_conv_0iy_ram) {
        ram[0] = "0b0100001001111111111";
        ram[1] = "0b1111010100000011011";
        ram[2] = "0b1000001110100101000";
        ram[3] = "0b1011101011111001010";
        ram[4] = "0b1101111100111011111";
        ram[5] = "0b0011010110100101001";
        ram[6] = "0b0111001100001111101";
        ram[7] = "0b1010111110001101011";
        ram[8] = "0b1100011101110000000";
        ram[9] = "0b1011100001111000001";
        ram[10] = "0b0101101101111000100";
        ram[11] = "0b1011011101001011101";
        ram[12] = "0b1100111111011100000";
        ram[13] = "0b1011101111011010101";
        ram[14] = "0b0101110110101101100";
        ram[15] = "0b0011101011101110010";


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


SC_MODULE(conv_layer2_conv_0iy) {


static const unsigned DataWidth = 19;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_0iy_ram* meminst;


SC_CTOR(conv_layer2_conv_0iy) {
meminst = new conv_layer2_conv_0iy_ram("conv_layer2_conv_0iy_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_0iy() {
    delete meminst;
}


};//endmodule
#endif
