cmake_minimum_required(VERSION 3.12)
project(DrGBA CXX)

# Default to a Release build
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build, options are: Debug Release RelWithDebInfo MinSizeRel." FORCE)
    message(STATUS "Defaulting to a Release build")
endif()

# Set hard requirements for C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Disable in-source builds
set(CMAKE_DISABLE_SOURCE_CHANGES ON)
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
    message(SEND_ERROR "In-source builds are not allowed.")
endif()

# Add the module directory to the list of paths
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/CMakeModules")

# Compiler flags
if (MSVC)
    set(DRGBA_CXX_FLAGS
        /std:c++latest
        /Wall /WX
        /permissive-
        /Zc:externConstexpr /Zc:inline /Zc:throwingNew
        /volatile:iso
        /EHsc
        /Zi /Zo
        /MP
        /DNOMINMAX)

    if (CMAKE_VS_PLATFORM_TOOLSET MATCHES "LLVM-vs[0-9]+")
        list(APPEND DYNARMIC_CXX_FLAGS
             -Qunused-arguments
             -Wno-missing-braces)
    endif()
else()
    set(DRGBA_CXX_FLAGS
        -Wall
        -Wextra
        -Werror
        -Wfatal-errors
        -Wcast-qual
        -pedantic
        -pedantic-errors
        -Wno-missing-braces)
endif()

# Arch detection
include(DetectArchitecture)
message(STATUS "Target architecture: ${ARCHITECTURE}")

enable_testing(true)
add_subdirectory(externals)
add_subdirectory(src)
add_subdirectory(test)
