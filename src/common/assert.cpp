// This file is part of the DrGBA project.
// Copyright (c) 2020 MerryMage
// SPDX-License-Identifier: 0BSD

#include <cstdio>
#include <exception>

#include <fmt/format.h>

namespace DrGBA::detail {

[[noreturn]] void Terminate(fmt::string_view msg, fmt::format_args args) {
    fmt::print(stderr, "DrGBA assertion failed: ");
    fmt::vprint(stderr, msg, args);
    std::terminate();
}

} // namespace DrGBA::detail
