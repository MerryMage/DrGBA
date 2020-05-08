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

# mp
add_library(mp INTERFACE)
target_include_directories(mp INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/mp/include>)
