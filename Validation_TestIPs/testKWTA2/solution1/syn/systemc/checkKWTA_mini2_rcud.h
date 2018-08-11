// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __checkKWTA_mini2_rcud_H__
#define __checkKWTA_mini2_rcud_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct checkKWTA_mini2_rcud_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 9;
  static const unsigned AddressRange = 8192;
  static const unsigned AddressWidth = 13;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(checkKWTA_mini2_rcud_ram) {
        ram[0] = "0b000000001";
        ram[1] = "0b000000001";
        ram[2] = "0b000000001";
        ram[3] = "0b000000001";
        ram[4] = "0b000000010";
        ram[5] = "0b000000000";
        for (unsigned i = 6; i < 13 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[13] = "0b000000011";
        ram[14] = "0b000000001";
        ram[15] = "0b000000001";
        ram[16] = "0b000000000";
        for (unsigned i = 17; i < 26 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[26] = "0b000000100";
        ram[27] = "0b000000001";
        ram[28] = "0b000000001";
        ram[29] = "0b000001101";
        ram[30] = "0b000000001";
        ram[31] = "0b000000110";
        ram[32] = "0b000000111";
        ram[33] = "0b000000001";
        ram[34] = "0b000000001";
        ram[35] = "0b000000110";
        ram[36] = "0b000000001";
        ram[37] = "0b000000001";
        ram[38] = "0b000000001";
        ram[39] = "0b000001100";
        ram[40] = "0b000001001";
        for (unsigned i = 41; i < 47 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[47] = "0b000010000";
        for (unsigned i = 48; i < 53 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[53] = "0b000011001";
        ram[54] = "0b000000001";
        ram[55] = "0b000000001";
        ram[56] = "0b000010010";
        for (unsigned i = 57; i < 73 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[73] = "0b000100110";
        for (unsigned i = 74; i < 80 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[80] = "0b000011110";
        ram[81] = "0b000000001";
        ram[82] = "0b000000001";
        ram[83] = "0b000101111";
        ram[84] = "0b000101000";
        ram[85] = "0b000010110";
        ram[86] = "0b000000001";
        ram[87] = "0b000000011";
        ram[88] = "0b000000001";
        ram[89] = "0b000000001";
        ram[90] = "0b000101011";
        for (unsigned i = 91; i < 96 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[96] = "0b000111001";
        ram[97] = "0b000110101";
        ram[98] = "0b000000001";
        ram[99] = "0b000000001";
        ram[100] = "0b000000001";
        ram[101] = "0b000000001";
        ram[102] = "0b000110010";
        ram[103] = "0b000010101";
        ram[104] = "0b000000001";
        ram[105] = "0b000000001";
        ram[106] = "0b000001101";
        ram[107] = "0b000000001";
        ram[108] = "0b000000001";
        ram[109] = "0b000011111";
        ram[110] = "0b000110100";
        ram[111] = "0b000000001";
        ram[112] = "0b000101110";
        ram[113] = "0b000000001";
        ram[114] = "0b001000000";
        ram[115] = "0b000100001";
        ram[116] = "0b000000001";
        ram[117] = "0b000110011";
        ram[118] = "0b000011111";
        ram[119] = "0b000000001";
        ram[120] = "0b000011100";
        ram[121] = "0b000000001";
        ram[122] = "0b000000001";
        ram[123] = "0b000000001";
        ram[124] = "0b000000001";
        ram[125] = "0b000011110";
        ram[126] = "0b000000101";
        ram[127] = "0b000000001";
        ram[128] = "0b000000001";
        ram[129] = "0b000000001";
        ram[130] = "0b000000001";
        ram[131] = "0b001000110";
        ram[132] = "0b000001110";
        ram[133] = "0b000100101";
        ram[134] = "0b000000001";
        ram[135] = "0b000000001";
        ram[136] = "0b000000001";
        ram[137] = "0b000111110";
        ram[138] = "0b000000001";
        ram[139] = "0b000010001";
        ram[140] = "0b001001010";
        ram[141] = "0b000111011";
        ram[142] = "0b000010100";
        ram[143] = "0b000000001";
        ram[144] = "0b000000001";
        ram[145] = "0b000000001";
        ram[146] = "0b000000000";
        for (unsigned i = 147; i < 156 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[156] = "0b000001111";
        ram[157] = "0b000000001";
        ram[158] = "0b000101001";
        ram[159] = "0b000000001";
        ram[160] = "0b000111010";
        ram[161] = "0b000000001";
        ram[162] = "0b000000001";
        ram[163] = "0b000000001";
        ram[164] = "0b000000001";
        ram[165] = "0b000111111";
        ram[166] = "0b000000001";
        ram[167] = "0b000000001";
        ram[168] = "0b000000001";
        ram[169] = "0b000110010";
        ram[170] = "0b001001011";
        ram[171] = "0b001010011";
        ram[172] = "0b000000001";
        ram[173] = "0b000001010";
        ram[174] = "0b000000001";
        ram[175] = "0b000011110";
        for (unsigned i = 176; i < 182 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[182] = "0b000010011";
        ram[183] = "0b000011111";
        ram[184] = "0b000000001";
        ram[185] = "0b001010101";
        ram[186] = "0b000101001";
        ram[187] = "0b001000011";
        ram[188] = "0b000001110";
        ram[189] = "0b000000001";
        ram[190] = "0b000000001";
        ram[191] = "0b000000001";
        ram[192] = "0b000000001";
        ram[193] = "0b000110000";
        ram[194] = "0b000000001";
        ram[195] = "0b000000001";
        ram[196] = "0b000100111";
        ram[197] = "0b000000001";
        ram[198] = "0b000011011";
        ram[199] = "0b000110110";
        for (unsigned i = 200; i < 208 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[208] = "0b000100000";
        ram[209] = "0b000101101";
        ram[210] = "0b001011110";
        ram[211] = "0b000011010";
        ram[212] = "0b001010100";
        ram[213] = "0b000000001";
        ram[214] = "0b000101110";
        ram[215] = "0b000000001";
        ram[216] = "0b001000010";
        ram[217] = "0b001010110";
        for (unsigned i = 218; i < 227 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[227] = "0b000011010";
        for (unsigned i = 228; i < 236 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[236] = "0b000010100";
        ram[237] = "0b000100010";
        for (unsigned i = 238; i < 243 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[243] = "0b000101111";
        for (unsigned i = 244; i < 249 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[249] = "0b000100110";
        for (unsigned i = 250; i < 257 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[257] = "0b000101000";
        ram[258] = "0b000000001";
        ram[259] = "0b001011011";
        ram[260] = "0b001011001";
        ram[261] = "0b000101000";
        ram[262] = "0b000000001";
        ram[263] = "0b000000001";
        ram[264] = "0b000000001";
        ram[265] = "0b000100111";
        for (unsigned i = 266; i < 272 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[272] = "0b000111110";
        ram[273] = "0b000000001";
        ram[274] = "0b001111111";
        ram[275] = "0b000000001";
        ram[276] = "0b000000001";
        ram[277] = "0b000000001";
        ram[278] = "0b001010101";
        ram[279] = "0b000000001";
        ram[280] = "0b001100101";
        ram[281] = "0b000000001";
        ram[282] = "0b000000001";
        ram[283] = "0b001111011";
        ram[284] = "0b000100100";
        ram[285] = "0b000000001";
        ram[286] = "0b000000001";
        ram[287] = "0b000000001";
        ram[288] = "0b010000000";
        ram[289] = "0b000010001";
        ram[290] = "0b000000001";
        ram[291] = "0b000000001";
        ram[292] = "0b000011111";
        for (unsigned i = 293; i < 299 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[299] = "0b001000001";
        ram[300] = "0b000101110";
        for (unsigned i = 301; i < 307 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[307] = "0b000110011";
        for (unsigned i = 308; i < 327 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[327] = "0b001110001";
        ram[328] = "0b010000110";
        ram[329] = "0b000000001";
        ram[330] = "0b000000001";
        ram[331] = "0b010100001";
        ram[332] = "0b010010000";
        ram[333] = "0b000000001";
        ram[334] = "0b000000001";
        ram[335] = "0b001101000";
        ram[336] = "0b000000001";
        ram[337] = "0b000000001";
        ram[338] = "0b000000001";
        ram[339] = "0b001000010";
        for (unsigned i = 340; i < 348 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[348] = "0b000001011";
        ram[349] = "0b000000001";
        ram[350] = "0b000000001";
        ram[351] = "0b000000001";
        ram[352] = "0b000000001";
        ram[353] = "0b010100010";
        ram[354] = "0b000000001";
        ram[355] = "0b000000001";
        ram[356] = "0b000000001";
        ram[357] = "0b001000111";
        ram[358] = "0b000000001";
        ram[359] = "0b000000001";
        ram[360] = "0b001101110";
        for (unsigned i = 361; i < 367 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[367] = "0b001001111";
        ram[368] = "0b000000001";
        ram[369] = "0b010110110";
        ram[370] = "0b010000100";
        ram[371] = "0b000000001";
        ram[372] = "0b000100101";
        ram[373] = "0b000000101";
        ram[374] = "0b000000001";
        ram[375] = "0b001100111";
        ram[376] = "0b000000001";
        ram[377] = "0b010010111";
        ram[378] = "0b000000001";
        ram[379] = "0b000000001";
        ram[380] = "0b010110100";
        for (unsigned i = 381; i < 386 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[386] = "0b001111010";
        ram[387] = "0b000000001";
        ram[388] = "0b000000001";
        ram[389] = "0b000000001";
        ram[390] = "0b001111010";
        for (unsigned i = 391; i < 396 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[396] = "0b000100110";
        ram[397] = "0b000000001";
        ram[398] = "0b001011101";
        ram[399] = "0b010001000";
        ram[400] = "0b000000001";
        ram[401] = "0b000000001";
        ram[402] = "0b000000001";
        ram[403] = "0b000000001";
        ram[404] = "0b000010111";
        ram[405] = "0b000000001";
        ram[406] = "0b000000001";
        ram[407] = "0b000000001";
        ram[408] = "0b001110111";
        ram[409] = "0b000000001";
        ram[410] = "0b000000001";
        ram[411] = "0b000000001";
        ram[412] = "0b010111011";
        ram[413] = "0b010001001";
        ram[414] = "0b000000001";
        ram[415] = "0b001010010";
        ram[416] = "0b000000001";
        ram[417] = "0b000000001";
        ram[418] = "0b000000001";
        ram[419] = "0b010111110";
        for (unsigned i = 420; i < 429 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[429] = "0b001011100";
        ram[430] = "0b000000001";
        ram[431] = "0b000000001";
        ram[432] = "0b000000001";
        ram[433] = "0b011000000";
        ram[434] = "0b000001011";
        ram[435] = "0b011010110";
        ram[436] = "0b000000001";
        ram[437] = "0b000000001";
        ram[438] = "0b000001010";
        ram[439] = "0b010100100";
        ram[440] = "0b000000001";
        ram[441] = "0b000000100";
        ram[442] = "0b001000110";
        ram[443] = "0b000000001";
        ram[444] = "0b000000001";
        ram[445] = "0b000111100";
        for (unsigned i = 446; i < 451 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[451] = "0b010011110";
        ram[452] = "0b000000001";
        ram[453] = "0b000000001";
        ram[454] = "0b000000001";
        ram[455] = "0b000000001";
        ram[456] = "0b011001011";
        ram[457] = "0b000000001";
        ram[458] = "0b000000001";
        ram[459] = "0b011100101";
        ram[460] = "0b000000001";
        ram[461] = "0b000000001";
        ram[462] = "0b000000001";
        ram[463] = "0b000111011";
        ram[464] = "0b000000001";
        ram[465] = "0b000000001";
        ram[466] = "0b001010010";
        ram[467] = "0b011101001";
        ram[468] = "0b000000001";
        ram[469] = "0b000000001";
        ram[470] = "0b000000001";
        ram[471] = "0b010010001";
        ram[472] = "0b000000001";
        ram[473] = "0b000000001";
        ram[474] = "0b000000001";
        ram[475] = "0b000010010";
        ram[476] = "0b001110110";
        ram[477] = "0b011010010";
        ram[478] = "0b000000001";
        ram[479] = "0b000000001";
        ram[480] = "0b000000001";
        ram[481] = "0b000000001";
        ram[482] = "0b011100010";
        ram[483] = "0b000000001";
        ram[484] = "0b000000001";
        ram[485] = "0b000000001";
        ram[486] = "0b010111111";
        ram[487] = "0b011110011";
        ram[488] = "0b001000001";
        ram[489] = "0b000000001";
        ram[490] = "0b000000001";
        ram[491] = "0b010001010";
        ram[492] = "0b011011011";
        ram[493] = "0b000000001";
        ram[494] = "0b000000001";
        ram[495] = "0b000000001";
        ram[496] = "0b001101011";
        for (unsigned i = 497; i < 503 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[503] = "0b000000000";
        ram[504] = "0b000000001";
        ram[505] = "0b011011000";
        ram[506] = "0b000000001";
        ram[507] = "0b011001111";
        ram[508] = "0b000000001";
        ram[509] = "0b000001111";
        ram[510] = "0b100000100";
        ram[511] = "0b000000001";
        ram[512] = "0b000000001";
        ram[513] = "0b000000001";
        ram[514] = "0b000011011";
        ram[515] = "0b000000001";
        ram[516] = "0b000000001";
        ram[517] = "0b000001000";
        ram[518] = "0b000000001";
        ram[519] = "0b010011100";
        ram[520] = "0b000000001";
        ram[521] = "0b000000001";
        ram[522] = "0b001001110";
        ram[523] = "0b010111110";
        ram[524] = "0b000000001";
        ram[525] = "0b000000001";
        ram[526] = "0b000000001";
        ram[527] = "0b001000101";
        ram[528] = "0b000000001";
        ram[529] = "0b000000001";
        ram[530] = "0b000001010";
        ram[531] = "0b000000001";
        ram[532] = "0b000000001";
        ram[533] = "0b011001101";
        ram[534] = "0b000000001";
        ram[535] = "0b000110101";
        ram[536] = "0b000000001";
        ram[537] = "0b000000001";
        ram[538] = "0b000000001";
        ram[539] = "0b000000001";
        ram[540] = "0b011010001";
        ram[541] = "0b000101100";
        ram[542] = "0b000000001";
        ram[543] = "0b000000001";
        ram[544] = "0b011100110";
        for (unsigned i = 545; i < 552 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[552] = "0b011100111";
        ram[553] = "0b100010000";
        ram[554] = "0b000000001";
        ram[555] = "0b000000001";
        ram[556] = "0b001111001";
        for (unsigned i = 557; i < 563 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[563] = "0b010110111";
        ram[564] = "0b000000001";
        ram[565] = "0b001000111";
        ram[566] = "0b000000001";
        ram[567] = "0b000000001";
        ram[568] = "0b001110101";
        for (unsigned i = 569; i < 579 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[579] = "0b011111000";
        ram[580] = "0b000000001";
        ram[581] = "0b000000001";
        ram[582] = "0b000000001";
        ram[583] = "0b000000001";
        ram[584] = "0b100100010";
        ram[585] = "0b000000001";
        ram[586] = "0b000000001";
        ram[587] = "0b000000001";
        ram[588] = "0b001101100";
        ram[589] = "0b000000001";
        ram[590] = "0b011001100";
        ram[591] = "0b000000001";
        ram[592] = "0b000101111";
        ram[593] = "0b000001111";
        for (unsigned i = 594; i < 605 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[605] = "0b011001000";
        ram[606] = "0b000000001";
        ram[607] = "0b000000001";
        ram[608] = "0b000000001";
        ram[609] = "0b000000001";
        ram[610] = "0b100111100";
        ram[611] = "0b000000001";
        ram[612] = "0b000000001";
        ram[613] = "0b000000001";
        ram[614] = "0b100010010";
        ram[615] = "0b000000001";
        ram[616] = "0b000000001";
        ram[617] = "0b001100011";
        ram[618] = "0b000000001";
        ram[619] = "0b000000001";
        ram[620] = "0b000000001";
        ram[621] = "0b100001110";
        ram[622] = "0b000000001";
        ram[623] = "0b000000001";
        ram[624] = "0b000000001";
        ram[625] = "0b000000001";
        ram[626] = "0b100001101";
        ram[627] = "0b000000001";
        ram[628] = "0b000000001";
        ram[629] = "0b011001110";
        for (unsigned i = 630; i < 638 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[638] = "0b001100000";
        ram[639] = "0b000000001";
        ram[640] = "0b000000001";
        ram[641] = "0b001111101";
        ram[642] = "0b101001010";
        ram[643] = "0b000011101";
        ram[644] = "0b000000001";
        ram[645] = "0b001100010";
        ram[646] = "0b000000001";
        ram[647] = "0b000000001";
        ram[648] = "0b000000001";
        ram[649] = "0b001110110";
        ram[650] = "0b000000001";
        ram[651] = "0b100101010";
        ram[652] = "0b000000001";
        ram[653] = "0b100110101";
        ram[654] = "0b000000001";
        ram[655] = "0b011011001";
        ram[656] = "0b000000001";
        ram[657] = "0b100011101";
        for (unsigned i = 658; i < 664 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[664] = "0b011110100";
        ram[665] = "0b000000001";
        ram[666] = "0b000000001";
        ram[667] = "0b000000001";
        ram[668] = "0b000000001";
        ram[669] = "0b100110010";
        ram[670] = "0b000000001";
        ram[671] = "0b000000001";
        ram[672] = "0b011001111";
        ram[673] = "0b010010001";
        ram[674] = "0b011100100";
        ram[675] = "0b000000001";
        ram[676] = "0b010010100";
        ram[677] = "0b010010101";
        ram[678] = "0b000000001";
        ram[679] = "0b000001001";
        ram[680] = "0b000000001";
        ram[681] = "0b100110111";
        for (unsigned i = 682; i < 689 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[689] = "0b010011000";
        ram[690] = "0b001000000";
        for (unsigned i = 691; i < 697 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[697] = "0b100110000";
        ram[698] = "0b000000001";
        ram[699] = "0b000000001";
        ram[700] = "0b000101010";
        ram[701] = "0b001000001";
        ram[702] = "0b000000001";
        ram[703] = "0b000000001";
        ram[704] = "0b101011000";
        ram[705] = "0b011001010";
        ram[706] = "0b000000001";
        ram[707] = "0b000000001";
        ram[708] = "0b000000001";
        ram[709] = "0b001011010";
        ram[710] = "0b000000001";
        ram[711] = "0b000000001";
        ram[712] = "0b000000001";
        ram[713] = "0b001010100";
        ram[714] = "0b100011110";
        ram[715] = "0b000000001";
        ram[716] = "0b000000001";
        ram[717] = "0b000000001";
        ram[718] = "0b100100101";
        ram[719] = "0b000001110";
        ram[720] = "0b000000001";
        ram[721] = "0b100000001";
        ram[722] = "0b000000001";
        ram[723] = "0b000000001";
        ram[724] = "0b000010111";
        ram[725] = "0b000000001";
        ram[726] = "0b000000001";
        ram[727] = "0b000000001";
        ram[728] = "0b010111001";
        for (unsigned i = 729; i < 736 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[736] = "0b000011000";
        ram[737] = "0b000000001";
        ram[738] = "0b000000001";
        ram[739] = "0b000000001";
        ram[740] = "0b000000001";
        ram[741] = "0b100001111";
        ram[742] = "0b010100101";
        ram[743] = "0b011100111";
        ram[744] = "0b101010101";
        ram[745] = "0b000000001";
        ram[746] = "0b101010010";
        for (unsigned i = 747; i < 752 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[752] = "0b101110111";
        ram[753] = "0b100101110";
        ram[754] = "0b100100111";
        ram[755] = "0b001001000";
        ram[756] = "0b000000001";
        ram[757] = "0b000000001";
        ram[758] = "0b000101110";
        ram[759] = "0b000000001";
        ram[760] = "0b000000001";
        ram[761] = "0b011101010";
        ram[762] = "0b000000001";
        ram[763] = "0b100001010";
        ram[764] = "0b000000001";
        ram[765] = "0b101000000";
        ram[766] = "0b011111111";
        ram[767] = "0b000000010";
        ram[768] = "0b011001011";
        ram[769] = "0b000000001";
        ram[770] = "0b000000001";
        ram[771] = "0b101110011";
        ram[772] = "0b001011100";
        ram[773] = "0b011010000";
        ram[774] = "0b001010000";
        ram[775] = "0b000000001";
        ram[776] = "0b000101010";
        ram[777] = "0b000000001";
        ram[778] = "0b000101001";
        for (unsigned i = 779; i < 786 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[786] = "0b001001010";
        ram[787] = "0b001000110";
        ram[788] = "0b000000001";
        ram[789] = "0b000000001";
        ram[790] = "0b000000001";
        ram[791] = "0b000000001";
        ram[792] = "0b101100110";
        ram[793] = "0b000000001";
        ram[794] = "0b000000001";
        ram[795] = "0b000000001";
        ram[796] = "0b000000001";
        ram[797] = "0b010101110";
        ram[798] = "0b000000101";
        for (unsigned i = 799; i < 807 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[807] = "0b000110111";
        for (unsigned i = 808; i < 814 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[814] = "0b100100001";
        ram[815] = "0b000000001";
        ram[816] = "0b000000001";
        ram[817] = "0b001001011";
        ram[818] = "0b110000100";
        ram[819] = "0b011000010";
        ram[820] = "0b000000001";
        ram[821] = "0b000000001";
        ram[822] = "0b010010000";
        for (unsigned i = 823; i < 829 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[829] = "0b100111000";
        ram[830] = "0b000000001";
        ram[831] = "0b000000001";
        ram[832] = "0b000000001";
        ram[833] = "0b000000001";
        ram[834] = "0b000111111";
        ram[835] = "0b100110100";
        ram[836] = "0b100111111";
        ram[837] = "0b000000001";
        ram[838] = "0b001001100";
        ram[839] = "0b000000001";
        ram[840] = "0b101011101";
        ram[841] = "0b000110001";
        ram[842] = "0b000000001";
        ram[843] = "0b010101101";
        ram[844] = "0b011101100";
        ram[845] = "0b011000011";
        ram[846] = "0b000000001";
        ram[847] = "0b001001110";
        ram[848] = "0b000000001";
        ram[849] = "0b110010010";
        ram[850] = "0b000000001";
        ram[851] = "0b000000001";
        ram[852] = "0b100011001";
        ram[853] = "0b000000001";
        ram[854] = "0b000000001";
        ram[855] = "0b000000001";
        ram[856] = "0b101100100";
        for (unsigned i = 857; i < 862 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[862] = "0b011011101";
        ram[863] = "0b101010000";
        ram[864] = "0b010100100";
        ram[865] = "0b000000001";
        ram[866] = "0b000000001";
        ram[867] = "0b001111011";
        ram[868] = "0b010011111";
        ram[869] = "0b000000111";
        ram[870] = "0b000000001";
        ram[871] = "0b000000001";
        ram[872] = "0b000000001";
        ram[873] = "0b000000001";
        ram[874] = "0b100000010";
        ram[875] = "0b000000001";
        ram[876] = "0b101101100";
        ram[877] = "0b000000001";
        ram[878] = "0b000010011";
        ram[879] = "0b011011100";
        ram[880] = "0b000000001";
        ram[881] = "0b101011001";
        ram[882] = "0b000000001";
        ram[883] = "0b000000001";
        ram[884] = "0b000000001";
        ram[885] = "0b100010011";
        for (unsigned i = 886; i < 894 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[894] = "0b001100010";
        ram[895] = "0b011000111";
        ram[896] = "0b001111010";
        ram[897] = "0b000000001";
        ram[898] = "0b100011100";
        ram[899] = "0b110001010";
        ram[900] = "0b000000001";
        ram[901] = "0b100111110";
        ram[902] = "0b101110101";
        ram[903] = "0b000000001";
        ram[904] = "0b000000001";
        ram[905] = "0b000000001";
        ram[906] = "0b011111101";
        ram[907] = "0b000000001";
        ram[908] = "0b000000001";
        ram[909] = "0b101001111";
        ram[910] = "0b010110001";
        ram[911] = "0b000000001";
        ram[912] = "0b000101101";
        ram[913] = "0b000000001";
        ram[914] = "0b000000001";
        ram[915] = "0b011000110";
        ram[916] = "0b000000001";
        ram[917] = "0b000000001";
        ram[918] = "0b000000001";
        ram[919] = "0b100000111";
        ram[920] = "0b000000001";
        ram[921] = "0b000000001";
        ram[922] = "0b010001101";
        ram[923] = "0b000100001";
        ram[924] = "0b011010111";
        ram[925] = "0b110001111";
        ram[926] = "0b000000001";
        ram[927] = "0b000000001";
        ram[928] = "0b000000001";
        ram[929] = "0b101011011";
        ram[930] = "0b011011111";
        ram[931] = "0b000000001";
        ram[932] = "0b000000001";
        ram[933] = "0b011111010";
        ram[934] = "0b000000001";
        ram[935] = "0b110111011";
        for (unsigned i = 936; i < 941 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[941] = "0b011110110";
        ram[942] = "0b000000001";
        ram[943] = "0b100000101";
        ram[944] = "0b000000001";
        ram[945] = "0b010111010";
        for (unsigned i = 946; i < 951 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[951] = "0b110010111";
        ram[952] = "0b000000001";
        ram[953] = "0b000000001";
        ram[954] = "0b101101000";
        ram[955] = "0b000000001";
        ram[956] = "0b000000001";
        ram[957] = "0b000000001";
        ram[958] = "0b000000001";
        ram[959] = "0b011000111";
        ram[960] = "0b000000001";
        ram[961] = "0b000000001";
        ram[962] = "0b000000001";
        ram[963] = "0b000000001";
        ram[964] = "0b010101010";
        ram[965] = "0b000000001";
        ram[966] = "0b000000001";
        ram[967] = "0b000000001";
        ram[968] = "0b000000001";
        ram[969] = "0b010001111";
        ram[970] = "0b000000001";
        ram[971] = "0b000000001";
        ram[972] = "0b000000001";
        ram[973] = "0b111000111";
        ram[974] = "0b000001100";
        ram[975] = "0b110000010";
        ram[976] = "0b000000001";
        ram[977] = "0b100000000";
        for (unsigned i = 978; i < 983 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        ram[983] = "0b011001010";
        for (unsigned i = 984; i < 1000 ; i = i + 1) {
            ram[i] = "0b000000001";
        }
        for (unsigned i = 1000; i < 8192 ; i = i + 1) {
            ram[i] = "0b000000000";
        }


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


SC_MODULE(checkKWTA_mini2_rcud) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 8192;
static const unsigned AddressWidth = 13;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


checkKWTA_mini2_rcud_ram* meminst;


SC_CTOR(checkKWTA_mini2_rcud) {
meminst = new checkKWTA_mini2_rcud_ram("checkKWTA_mini2_rcud_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~checkKWTA_mini2_rcud() {
    delete meminst;
}


};//endmodule
#endif
