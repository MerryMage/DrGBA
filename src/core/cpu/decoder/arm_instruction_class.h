// This file is part of the DrGBA project.
// Copyright (c) 2020 MerryMage
// SPDX-License-Identifier: 0BSD

#pragma once

namespace DrGBA {

enum class ArmInstructionClass {
    #define INST(name, bitstring) name,
    #include "thumb_encodings.inc.h"
    #undef INST
};

} // namespace DrGBA
