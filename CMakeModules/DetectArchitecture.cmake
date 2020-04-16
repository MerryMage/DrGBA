include(CheckSymbolExists)

function(detect_architecture symbol arch)
    if (NOT DEFINED ARCHITECTURE)
        set(CMAKE_REQUIRED_QUIET 1)
        check_symbol_exists("${symbol}" "" ARCHITECTURE_${arch})
        unset(CMAKE_REQUIRED_QUIET)

        if (ARCHITECTURE_${arch})
            set(ARCHITECTURE "${arch}" PARENT_SCOPE)
            set(ARCHITECTURE_${arch} 1 PARENT_SCOPE)
        endif()
    endif()
endfunction()

detect_architecture("__ARM64__" AArch64)
detect_architecture("__aarch64__" AArch64)
detect_architecture("_M_ARM64" AArch64)

detect_architecture("__arm__" arm)
detect_architecture("__TARGET_ARCH_ARM" arm)
detect_architecture("_M_ARM" arm)

detect_architecture("__x86_64" x86_64)
detect_architecture("__x86_64__" x86_64)
detect_architecture("__amd64" x86_64)
detect_architecture("_M_X64" x86_64)

detect_architecture("__i386" x86)
detect_architecture("__i386__" x86)
detect_architecture("_M_IX86" x86)

detect_architecture("__ia64" IA64)
detect_architecture("__ia64__" IA64)
detect_architecture("_M_IA64" IA64)

detect_architecture("__mips" MIPS)
detect_architecture("__mips__" MIPS)
detect_architecture("_M_MRX000" MIPS)

detect_architecture("__ppc64__" PPC64)
detect_architecture("__powerpc64__" PPC64)

detect_architecture("__ppc__" PowerPC)
detect_architecture("__ppc" PowerPC)
detect_architecture("__powerpc__" PowerPC)
detect_architecture("_ARCH_COM" PowerPC)
detect_architecture("_ARCH_PWR" PowerPC)
detect_architecture("_ARCH_PPC" PowerPC)
detect_architecture("_M_MPPC" PowerPC)
detect_architecture("_M_PPC" PowerPC)

detect_architecture("__riscv" RISCV)

detect_architecture("__EMSCRIPTEN__" WASM)
