// This file is part of the DrGBA project.
// Copyright (c) 2020 MerryMage
// SPDX-License-Identifier: 0BSD

#pragma once

#include <array>

#include "common/common_types.h"

namespace DrGBA {

struct CpuState {
    u32 r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15;
    u32 r8_fiq, r9_fiq, r10_fiq, r11_fiq, r12_fiq, r13_fiq, r14_fiq, spsr_fiq;
    u32 r13_svc, r14_svc, spsr_svc;
    u32 r13_abt, r14_abt, spsr_abt;
    u32 r13_irq, r14_irq, spsr_irq;
    u32 r13_und, r14_und, spsr_und;

    u32 cpsr_flags;
    u32 cpsr_control;

    struct DecodedInstruction {
        u32 instruction;
        bool thumb;
    };

    DecodedInstruction decoding_instruction;
    DecodedInstruction executing_instruction;
    int instruction_cycle;
};

} // namespace DrGBA
