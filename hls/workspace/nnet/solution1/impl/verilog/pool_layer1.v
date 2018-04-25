// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module pool_layer1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        output_V_address0,
        output_V_ce0,
        output_V_we0,
        output_V_d0,
        image_V_address0,
        image_V_ce0,
        image_V_q0
);

parameter    ap_ST_fsm_state1 = 9'd1;
parameter    ap_ST_fsm_state2 = 9'd2;
parameter    ap_ST_fsm_state3 = 9'd4;
parameter    ap_ST_fsm_state4 = 9'd8;
parameter    ap_ST_fsm_state5 = 9'd16;
parameter    ap_ST_fsm_state6 = 9'd32;
parameter    ap_ST_fsm_state7 = 9'd64;
parameter    ap_ST_fsm_state8 = 9'd128;
parameter    ap_ST_fsm_state9 = 9'd256;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [10:0] output_V_address0;
output   output_V_ce0;
output   output_V_we0;
output  [23:0] output_V_d0;
output  [12:0] image_V_address0;
output   image_V_ce0;
input  [23:0] image_V_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg output_V_ce0;
reg output_V_we0;
reg[12:0] image_V_address0;
reg image_V_ce0;

(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [3:0] channel_2_fu_177_p2;
reg   [3:0] channel_2_reg_435;
wire    ap_CS_fsm_state2;
wire   [13:0] tmp_cast2_fu_183_p1;
reg   [13:0] tmp_cast2_reg_440;
wire   [0:0] exitcond3_fu_171_p2;
wire   [11:0] tmp_cast_fu_187_p1;
reg   [11:0] tmp_cast_reg_445;
wire   [9:0] tmp_fu_201_p2;
reg   [9:0] tmp_reg_453;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_12_fu_191_p2;
wire   [8:0] tmp_23_fu_241_p2;
reg   [8:0] tmp_23_reg_458;
wire    ap_CS_fsm_state4;
wire   [0:0] tmp_14_fu_247_p2;
wire   [4:0] i_2_fu_285_p2;
wire    ap_CS_fsm_state5;
wire   [1:0] k_2_fu_301_p2;
reg   [1:0] k_2_reg_484;
wire    ap_CS_fsm_state6;
wire   [9:0] tmp_31_fu_317_p2;
reg   [9:0] tmp_31_reg_489;
wire   [0:0] exitcond4_fu_295_p2;
wire   [4:0] j_2_fu_360_p2;
wire   [1:0] l_2_fu_376_p2;
reg   [1:0] l_2_reg_502;
wire    ap_CS_fsm_state7;
wire   [13:0] tmp_34_fu_409_p2;
reg   [13:0] tmp_34_reg_507;
wire   [0:0] exitcond_fu_370_p2;
wire    ap_CS_fsm_state8;
wire   [23:0] max_V_2_fu_424_p3;
wire    ap_CS_fsm_state9;
reg   [3:0] channel_reg_90;
reg   [4:0] i_reg_102;
reg   [4:0] j_reg_114;
reg   [23:0] max_V3_reg_126;
reg   [1:0] k_reg_137;
reg   [23:0] max_V_1_reg_148;
reg   [1:0] l_reg_160;
wire   [63:0] tmp_27_fu_280_p1;
wire   [63:0] tmp_45_cast_fu_355_p1;
wire   [63:0] tmp_50_cast_fu_414_p1;
wire   [4:0] tmp_fu_201_p0;
wire   [3:0] tmp_s_fu_207_p4;
wire   [7:0] tmp_20_fu_217_p3;
wire   [4:0] tmp_22_fu_229_p3;
wire   [8:0] p_shl_cast_fu_225_p1;
wire   [8:0] p_shl1_cast_fu_237_p1;
wire   [9:0] tmp_15_cast_fu_253_p1;
wire   [9:0] tmp_24_fu_257_p2;
wire   [8:0] tmp_25_fu_262_p4;
wire   [12:0] tmp_26_fu_272_p3;
wire   [4:0] k_cast2_fu_291_p1;
wire   [4:0] tmp_17_fu_307_p2;
wire   [4:0] tmp_31_fu_317_p0;
wire   [3:0] tmp_28_fu_323_p4;
wire   [8:0] tmp_16_cast_fu_333_p1;
wire   [8:0] tmp_29_fu_337_p2;
wire   [11:0] tmp_44_cast_fu_342_p3;
wire   [11:0] tmp_30_fu_350_p2;
wire   [4:0] l_cast1_fu_366_p1;
wire   [4:0] tmp_19_fu_382_p2;
wire   [9:0] tmp_20_cast_fu_388_p1;
wire   [9:0] tmp_32_fu_392_p2;
wire   [12:0] tmp_33_fu_397_p3;
wire   [13:0] tmp_49_cast_fu_405_p1;
wire   [0:0] tmp_21_fu_418_p2;
reg   [8:0] ap_NS_fsm;
wire   [9:0] tmp_31_fu_317_p00;
wire   [9:0] tmp_fu_201_p00;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_12_fu_191_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        channel_reg_90 <= channel_2_reg_435;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        channel_reg_90 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_171_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_reg_102 <= 5'd0;
    end else if (((tmp_14_fu_247_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        i_reg_102 <= i_2_fu_285_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_12_fu_191_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        j_reg_114 <= 5'd0;
    end else if (((exitcond4_fu_295_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        j_reg_114 <= j_2_fu_360_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_370_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
        k_reg_137 <= k_2_reg_484;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        k_reg_137 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        l_reg_160 <= l_2_reg_502;
    end else if (((exitcond4_fu_295_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        l_reg_160 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_370_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
        max_V3_reg_126 <= max_V_1_reg_148;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        max_V3_reg_126 <= image_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        max_V_1_reg_148 <= max_V_2_fu_424_p3;
    end else if (((exitcond4_fu_295_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        max_V_1_reg_148 <= max_V3_reg_126;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        channel_2_reg_435 <= channel_2_fu_177_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        k_2_reg_484 <= k_2_fu_301_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        l_2_reg_502 <= l_2_fu_376_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_12_fu_191_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_23_reg_458[8 : 1] <= tmp_23_fu_241_p2[8 : 1];
        tmp_reg_453 <= tmp_fu_201_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond4_fu_295_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        tmp_31_reg_489 <= tmp_31_fu_317_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_370_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        tmp_34_reg_507 <= tmp_34_fu_409_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_171_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_cast2_reg_440[3 : 0] <= tmp_cast2_fu_183_p1[3 : 0];
        tmp_cast_reg_445[3 : 0] <= tmp_cast_fu_187_p1[3 : 0];
    end
end

always @ (*) begin
    if ((((exitcond3_fu_171_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond3_fu_171_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        image_V_address0 = tmp_50_cast_fu_414_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        image_V_address0 = tmp_27_fu_280_p1;
    end else begin
        image_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state8))) begin
        image_V_ce0 = 1'b1;
    end else begin
        image_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        output_V_ce0 = 1'b1;
    end else begin
        output_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond4_fu_295_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        output_V_we0 = 1'b1;
    end else begin
        output_V_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((exitcond3_fu_171_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_12_fu_191_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((tmp_14_fu_247_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            if (((exitcond4_fu_295_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            if (((exitcond_fu_370_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign channel_2_fu_177_p2 = (channel_reg_90 + 4'd1);

assign exitcond3_fu_171_p2 = ((channel_reg_90 == 4'd8) ? 1'b1 : 1'b0);

assign exitcond4_fu_295_p2 = ((k_reg_137 == 2'd2) ? 1'b1 : 1'b0);

assign exitcond_fu_370_p2 = ((l_reg_160 == 2'd2) ? 1'b1 : 1'b0);

assign i_2_fu_285_p2 = (i_reg_102 + 5'd2);

assign j_2_fu_360_p2 = (j_reg_114 + 5'd2);

assign k_2_fu_301_p2 = (k_reg_137 + 2'd1);

assign k_cast2_fu_291_p1 = k_reg_137;

assign l_2_fu_376_p2 = (l_reg_160 + 2'd1);

assign l_cast1_fu_366_p1 = l_reg_160;

assign max_V_2_fu_424_p3 = ((tmp_21_fu_418_p2[0:0] === 1'b1) ? image_V_q0 : max_V_1_reg_148);

assign output_V_address0 = tmp_45_cast_fu_355_p1;

assign output_V_d0 = max_V3_reg_126;

assign p_shl1_cast_fu_237_p1 = tmp_22_fu_229_p3;

assign p_shl_cast_fu_225_p1 = tmp_20_fu_217_p3;

assign tmp_12_fu_191_p2 = ((i_reg_102 < 5'd28) ? 1'b1 : 1'b0);

assign tmp_14_fu_247_p2 = ((j_reg_114 < 5'd28) ? 1'b1 : 1'b0);

assign tmp_15_cast_fu_253_p1 = j_reg_114;

assign tmp_16_cast_fu_333_p1 = tmp_28_fu_323_p4;

assign tmp_17_fu_307_p2 = (k_cast2_fu_291_p1 + i_reg_102);

assign tmp_19_fu_382_p2 = (l_cast1_fu_366_p1 + j_reg_114);

assign tmp_20_cast_fu_388_p1 = tmp_19_fu_382_p2;

assign tmp_20_fu_217_p3 = {{tmp_s_fu_207_p4}, {4'd0}};

assign tmp_21_fu_418_p2 = (($signed(image_V_q0) > $signed(max_V_1_reg_148)) ? 1'b1 : 1'b0);

assign tmp_22_fu_229_p3 = {{tmp_s_fu_207_p4}, {1'd0}};

assign tmp_23_fu_241_p2 = (p_shl_cast_fu_225_p1 - p_shl1_cast_fu_237_p1);

assign tmp_24_fu_257_p2 = (tmp_reg_453 + tmp_15_cast_fu_253_p1);

assign tmp_25_fu_262_p4 = {{tmp_24_fu_257_p2[9:1]}};

assign tmp_26_fu_272_p3 = {{tmp_25_fu_262_p4}, {channel_reg_90}};

assign tmp_27_fu_280_p1 = tmp_26_fu_272_p3;

assign tmp_28_fu_323_p4 = {{j_reg_114[4:1]}};

assign tmp_29_fu_337_p2 = (tmp_23_reg_458 + tmp_16_cast_fu_333_p1);

assign tmp_30_fu_350_p2 = (tmp_44_cast_fu_342_p3 + tmp_cast_reg_445);

assign tmp_31_fu_317_p0 = tmp_31_fu_317_p00;

assign tmp_31_fu_317_p00 = tmp_17_fu_307_p2;

assign tmp_31_fu_317_p2 = (tmp_31_fu_317_p0 * $signed('h1D));

assign tmp_32_fu_392_p2 = (tmp_31_reg_489 + tmp_20_cast_fu_388_p1);

assign tmp_33_fu_397_p3 = {{tmp_32_fu_392_p2}, {3'd0}};

assign tmp_34_fu_409_p2 = (tmp_49_cast_fu_405_p1 + tmp_cast2_reg_440);

assign tmp_44_cast_fu_342_p3 = {{tmp_29_fu_337_p2}, {3'd0}};

assign tmp_45_cast_fu_355_p1 = tmp_30_fu_350_p2;

assign tmp_49_cast_fu_405_p1 = tmp_33_fu_397_p3;

assign tmp_50_cast_fu_414_p1 = tmp_34_reg_507;

assign tmp_cast2_fu_183_p1 = channel_reg_90;

assign tmp_cast_fu_187_p1 = channel_reg_90;

assign tmp_fu_201_p0 = tmp_fu_201_p00;

assign tmp_fu_201_p00 = i_reg_102;

assign tmp_fu_201_p2 = (tmp_fu_201_p0 * $signed('h1D));

assign tmp_s_fu_207_p4 = {{i_reg_102[4:1]}};

always @ (posedge ap_clk) begin
    tmp_cast2_reg_440[13:4] <= 10'b0000000000;
    tmp_cast_reg_445[11:4] <= 8'b00000000;
    tmp_23_reg_458[0] <= 1'b0;
end

endmodule //pool_layer1
