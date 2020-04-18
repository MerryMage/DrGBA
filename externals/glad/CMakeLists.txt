add_library(glad STATIC
    src/glad.c
    include/KHR/khrplatform.h
    include/glad/glad.h
)

target_include_directories(glad PUBLIC "include/")
target_link_libraries(glad PRIVATE ${CMAKE_DL_LIBS})
