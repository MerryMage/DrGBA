# fmt
add_subdirectory(fmt)

# glad
add_subdirectory(glad)

# glfw
set(GLFW_BUILD_EXAMPLES OFF)
set(GLFW_BUILD_TESTS OFF)
set(GLFW_BUILD_DOCS OFF)
set(GLFW_INSTALL OFF)
add_subdirectory(glfw)

# imgui
add_subdirectory(imgui)
