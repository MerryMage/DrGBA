// This file is part of the DrGBA project.
// Copyright (c) 2020 MerryMage
// SPDX-License-Identifier: 0BSD

#pragma once

#include <array>

#include "core/constants.h"
#include "common/common_types.h"
#include "core/cpu/cpu_state.h"

namespace DrGBA {

enum class

struct State {
    u64 cycle_number = 0;

    struct CpuState cpu;

    struct Bus {

    } bus;

    struct Bios {
        bool is_locked = false;
        std::array<u8, BIOS_SIZE> rom;
    } bios;

    std::array<u8, EWRAM_SIZE> ewram;
};

} // namespace DrGBA
