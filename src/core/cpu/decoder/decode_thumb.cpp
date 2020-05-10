// This file is part of the DrGBA project.
// Copyright (c) 2020 MerryMage
// SPDX-License-Identifier: 0BSD

#include "core/cpu/decoder/decode_thumb.h"

#include <array>
#include <optional>

#include "common/common_types.h"
#include "core/cpu/decoder/bit_string.h"
#include "core/cpu/decoder/arm_instruction_class.h"

namespace DrGBA {

namespace {

struct ClassInfo {
    ArmInstructionClass class_;
    u16 expect;
    u16 mask;
};

constexpr std::array table {
    #define INST(name, bitstring) ClassInfo{ArmInstructionClass::name, ExpectFromBitString(bitstring), MaskFromBitString(bitstring)},
    #include "thumb_encodings.inc.h"
    #undef INST
};

} // anonymous namespace

std::optional<ArmInstructionClass> DecodeThumb(u16 instruction) {
    const auto matches_instruction = [instruction](const auto& entry) { return (instruction & entry.mask) == entry.expect; };
    const auto iter = std::find_if(table.cbegin(), table.cend(), matches_instruction);
    return iter != table.end() ? std::optional{iter->class_} : std::nullopt;
}

} // namespace DrGBA
