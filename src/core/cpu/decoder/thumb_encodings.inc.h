// This file is part of the DrGBA project.
// Copyright (c) 2020 MerryMage
// SPDX-License-Identifier: 0BSD

// Shift (immediate), add, subtract, move and compare instructions
INST(ThumbLslImm,               "00000vvvvvmmmddd")
INST(ThumbLsrImm,               "00001vvvvvmmmddd")
INST(ThumbAsrImm,               "00010vvvvvmmmddd")
INST(ThumbAddReg,               "0001100mmmnnnddd")
INST(ThumbSubReg,               "0001101mmmnnnddd")
INST(ThumbAddImm1,              "0001110vvvnnnddd")
INST(ThumbSubImm1,              "0001111vvvnnnddd")
INST(ThumbMovImm,               "00100dddvvvvvvvv")
INST(ThumbCmpImm,               "00101nnnvvvvvvvv")
INST(ThumbAddImm2,              "00110dddvvvvvvvv")
INST(ThumbSubImm2,              "00111dddvvvvvvvv")

 // Data-processing instructions
INST(ThumbAndReg,               "0100000000mmmddd")
INST(ThumbEorReg,               "0100000001mmmddd")
INST(ThumbLslReg,               "0100000010mmmddd")
INST(ThumbLsrReg,               "0100000011mmmddd")
INST(ThumbAsrReg,               "0100000100mmmddd")
INST(ThumbAdcReg,               "0100000101mmmddd")
INST(ThumbSbcReg,               "0100000110mmmddd")
INST(ThumbRorReg,               "0100000111sssddd")
INST(ThumbTstReg,               "0100001000mmmnnn")
INST(ThumbRsbImm,               "0100001001nnnddd")
INST(ThumbCmpReg,               "0100001010mmmnnn")
INST(ThumbCmnReg,               "0100001011mmmnnn")
INST(ThumbOrrReg,               "0100001100mmmddd")
INST(ThumbMulReg,               "0100001101nnnddd")
INST(ThumbBicReg,               "0100001110mmmddd")
INST(ThumbMvnReg,               "0100001111mmmddd")

// Special data instructions
INST(ThumbAddHiReg,             "01000100Dmmmmddd")
INST(ThumbCmpHiReg,             "01000101Nmmmmnnn")
INST(ThumbMovHiReg,             "01000110Dmmmmddd")

// Store/Load single data item instructions
INST(ThumbLdrLiteral,           "01001tttvvvvvvvv")
INST(ThumbStrReg,               "0101000mmmnnnttt")
INST(ThumbStrhReg,              "0101001mmmnnnttt")
INST(ThumbStrbReg,              "0101010mmmnnnttt")
INST(ThumbLdrsbReg,             "0101011mmmnnnttt")
INST(ThumbLdrReg,               "0101100mmmnnnttt")
INST(ThumbLdrhReg,              "0101101mmmnnnttt")
INST(ThumbLdrbReg,              "0101110mmmnnnttt")
INST(ThumbLdrshReg,             "0101111mmmnnnttt")
INST(ThumbStrImm1,              "01100vvvvvnnnttt")
INST(ThumbLdrImm1,              "01101vvvvvnnnttt")
INST(ThumbStrbImm,              "01110vvvvvnnnttt")
INST(ThumbLdrbImm,              "01111vvvvvnnnttt")
INST(ThumbStrhImm,              "10000vvvvvnnnttt")
INST(ThumbLdrhImm,              "10001vvvvvnnnttt")
INST(ThumbStrImm2,              "10010tttvvvvvvvv")
INST(ThumbLdrImm2,              "10011tttvvvvvvvv")

// Generate relative address instructions
INST(ThumbAdrPc,                "10100dddvvvvvvvv")
INST(ThumbAdrSp,                "10101dddvvvvvvvv")

// Stack instructions
INST(ThumbAddSp,                "101100000vvvvvvv")
INST(ThumbSubSp,                "101100001vvvvvvv")
INST(ThumbPush,                 "1011010Mxxxxxxxx")
INST(ThumbPop,                  "1011110Pxxxxxxxx")

// Store/Load multiple registers
INST(ThumbStmia,                "11000nnnxxxxxxxx")
INST(ThumbLdmia,                "11001nnnxxxxxxxx")

// Branch instructions
INST(ThumbBx,                   "010001110mmmm000")
INST(ThumbUdf,                  "11011110--------")
INST(ThumbSvc,                  "11011111xxxxxxxx")
INST(ThumbBCond,                "1101ccccvvvvvvvv")
INST(ThumbB,                    "11100vvvvvvvvvvv")
INST(ThumbBl1,                  "11110vvvvvvvvvvv")
INST(ThumbBl2,                  "11111vvvvvvvvvvv")
