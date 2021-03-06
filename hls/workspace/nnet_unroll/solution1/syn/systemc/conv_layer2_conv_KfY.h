// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_KfY_H__
#define __conv_layer2_conv_KfY_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_KfY_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_layer2_conv_KfY_ram) {
        ram[0] = "0b0010010111001101110";
        ram[1] = "0b0001100000001000100";
        ram[2] = "0b0110110110111101001";
        ram[3] = "0b0110011010100101010";
        ram[4] = "0b0101101001111100011";
        ram[5] = "0b0111110101111100100";
        ram[6] = "0b0100101100010001010";
        ram[7] = "0b0110001011011010100";
        ram[8] = "0b1011111000111111111";
        ram[9] = "0b1011101110011010010";
        ram[10] = "0b0100011010000100011";
        ram[11] = "0b1011101101000110001";
        ram[12] = "0b0010001000000111000";
        ram[13] = "0b1010110100111100110";
        ram[14] = "0b0110000000001000011";
        ram[15] = "0b0010100110110000010";


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


SC_MODULE(conv_layer2_conv_KfY) {


static const unsigned DataWidth = 19;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_KfY_ram* meminst;


SC_CTOR(conv_layer2_conv_KfY) {
meminst = new conv_layer2_conv_KfY_ram("conv_layer2_conv_KfY_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_KfY() {
    delete meminst;
}


};//endmodule
#endif
