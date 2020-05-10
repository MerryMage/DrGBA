// This file is part of the DrGBA project.
// Copyright (c) 2020 MerryMage
// SPDX-License-Identifier: 0BSD

#pragma once

#include <optional>

#include "common/common_types.h"

namespace DrGBA {

enum class ArmInstructionClass;

std::optional<ArmInstructionClass> DecodeThumb(u16 instruction);

} // namespace DrGBA
