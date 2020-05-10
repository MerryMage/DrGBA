// This file is part of the DrGBA project.
// Copyright (c) 2020 MerryMage
// SPDX-License-Identifier: 0BSD

#include <catch2/catch.hpp>

#include "core/cpu/decoder/arm_instruction_class.h"
#include "core/cpu/decoder/decode_thumb.h"

using namespace DrGBA;

TEST_CASE("Test CPU thumb decoder", "[cpu]") {
    REQUIRE(DecodeThumb(0x0088) == ArmInstructionClass::ThumbLslImm);
    REQUIRE(DecodeThumb(0x4700) == ArmInstructionClass::ThumbBx);
    REQUIRE(DecodeThumb(0x69DB) == ArmInstructionClass::ThumbLdrImm1);
    REQUIRE(DecodeThumb(0xD000) == ArmInstructionClass::ThumbBCond);
    REQUIRE(DecodeThumb(0xDF00) == ArmInstructionClass::ThumbSvc);
    REQUIRE(DecodeThumb(0xE7FE) == ArmInstructionClass::ThumbB);
    REQUIRE(DecodeThumb(0xF010) == ArmInstructionClass::ThumbBl1);
    REQUIRE(DecodeThumb(0xFC3E) == ArmInstructionClass::ThumbBl2);
}
