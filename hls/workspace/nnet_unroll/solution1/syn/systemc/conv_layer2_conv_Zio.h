// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_Zio_H__
#define __conv_layer2_conv_Zio_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_Zio_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 20;
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


   SC_CTOR(conv_layer2_conv_Zio_ram) {
        ram[0] = "0b01000101010100110101";
        ram[1] = "0b10100010100100011010";
        ram[2] = "0b01010110110101100111";
        ram[3] = "0b10110110101011000101";
        ram[4] = "0b10011111001001000010";
        ram[5] = "0b00001010000010111010";
        ram[6] = "0b00000000110100111100";
        ram[7] = "0b01011110001011110010";
        ram[8] = "0b00100101100101110010";
        ram[9] = "0b01011110111010100100";
        ram[10] = "0b10101100010010001000";
        ram[11] = "0b01001110010011111000";
        ram[12] = "0b01011001101111010100";
        ram[13] = "0b00101110101001110010";
        ram[14] = "0b11101011010101110110";
        ram[15] = "0b00010000101111111111";


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


SC_MODULE(conv_layer2_conv_Zio) {


static const unsigned DataWidth = 20;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_Zio_ram* meminst;


SC_CTOR(conv_layer2_conv_Zio) {
meminst = new conv_layer2_conv_Zio_ram("conv_layer2_conv_Zio_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_Zio() {
    delete meminst;
}


};//endmodule
#endif