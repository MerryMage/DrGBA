// This file is part of the DrGBA project.
// Copyright (c) 2020 MerryMage
// SPDX-License-Identifier: 0BSD

#pragma once

#include "common/common_types.h"

namespace DrGBA {

// System BIOS ROM
constexpr Addr   BIOS_ADDR   = 0x00000000;
constexpr size_t BIOS_SIZE   = 0x00004000;
constexpr Addr   BIOS_MASK   = 0x00FFD000;

// On-board Work RAM (256 KiB)
constexpr Addr   EWRAM_ADDR  = 0x02000000;
constexpr size_t EWRAM_SIZE  = 0x00040000;
constexpr Addr   EWRAM_MASK  = 0x00FD0000;

// On-chip Work RAM (32 KiB)
constexpr Addr   IWRAM_ADDR  = 0x03000000;
constexpr size_t IWRAM_SIZE  = 0x00008000;
constexpr Addr   IWRAM_MASK  = 0x00FF8000;

// IO register region
constexpr Addr   IO_ADDR     = 0x04000000;
constexpr size_t IO_SIZE     = 0x00000400;
constexpr Addr   IO_MASK     = 0x00FFFD00;

// BG/OBJ pallete RAM
constexpr Addr   PALRAM_ADDR = 0x05000000;
constexpr size_t PALRAM_SIZE = 0x00000400;
constexpr Addr   PALRAM_MASK = 0x00FFFD00;

} // namespace DrGBA
