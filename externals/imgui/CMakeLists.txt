cmake_minimum_required(VERSION 3.12)

project(imgui LANGUAGES CXX)

find_package(OpenGL REQUIRED)

add_library(imgui STATIC
    imgui/imconfig.h
    imgui/imgui.cpp
    imgui/imgui.h
    imgui/imgui_demo.cpp
    imgui/imgui_draw.cpp
    imgui/examples/imgui_impl_glfw.cpp
    imgui/examples/imgui_impl_glfw.h
    imgui/examples/imgui_impl_opengl3.cpp
    imgui/examples/imgui_impl_opengl3.h
    imgui/imgui_internal.h
    imgui/imgui_widgets.cpp
    imgui/imstb_rectpack.h
    imgui/imstb_textedit.h
    imgui/imstb_truetype.h
)
target_include_directories(imgui PUBLIC "include/")
target_link_libraries(imgui PUBLIC glad glfw ${OPENGL_gl_LIBRARY})
