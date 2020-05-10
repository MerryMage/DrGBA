add_executable(drgba-tests
    core/cpu/decoder/test_decode_thumb.cpp
    test_main.cpp
)

target_link_libraries(drgba-tests PRIVATE catch drgba-lib)
target_include_directories(drgba-tests PRIVATE . ../src)
target_compile_options(drgba-tests PRIVATE ${DRGBA_CXX_FLAGS})

add_test(drgba-tests drgba-tests)
