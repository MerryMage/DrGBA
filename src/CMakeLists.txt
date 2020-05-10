add_library(drgba-lib
    common/assert.cpp
    common/assert.h
    common/bit_util.h
    common/common_types.h
    common/unlikely.h
    core/constants.h
    core/cpu/cpu_state.cpp
    core/cpu/cpu_state.h
    core/cpu/decoder/arm_instruction_class.h
    core/cpu/decoder/bit_string.h
    core/cpu/decoder/decode_thumb.cpp
    core/cpu/decoder/decode_thumb.h
    core/cpu/decoder/thumb_encodings.inc.h
    core/cpu/instructions.inc.h
    core/state.h
)

target_include_directories(drgba-lib PUBLIC .)
target_link_libraries(drgba-lib PUBLIC fmt mp)
target_compile_options(drgba-lib PRIVATE ${DRGBA_CXX_FLAGS})

add_executable(drgba
    ui/main.cpp
)

target_link_libraries(drgba PRIVATE drgba-lib glad glfw imgui)
