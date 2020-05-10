// This file is part of the DrGBA project.
// Copyright (c) 2020 MerryMage
// SPDX-License-Identifier: 0BSD

#pragma once

#include <mp/traits/integer_of_size.h>

#include "common/common_types.h"

namespace DrGBA {

template <size_t N>
constexpr auto MaskFromBitString(const char (&bitstring)[N]) {
    mp::unsigned_integer_of_size<N - 1> result = 0;
    for (size_t i = 0; i < N - 1; i++) {
        result <<= 1;
        const char ch = bitstring[i];
        if (ch == '1' || ch == '0') {
            result |= 1;
        }
    }

    return result;
}

template <size_t N>
constexpr auto ExpectFromBitString(const char (&bitstring)[N]) {
    mp::unsigned_integer_of_size<N - 1> result = 0;
    for (size_t i = 0; i < N - 1; i++) {
        result <<= 1;
        const char ch = bitstring[i];
        if (ch == '1') {
            result |= 1;
        }
    }

    return result;
}

} // namespace DrGBA
