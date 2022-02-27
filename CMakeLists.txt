cmake_minimum_required(VERSION 3.2)
project(Flexer)

set(OpenGL_GL_PREFERENCE GLVND)

# Load all header files
file(GLOB_RECURSE HDRS
    ${Flexer_SOURCE_DIR}/src/*.h
    ${Flexer_SOURCE_DIR}/src/*.hpp
)

# Load all source files
file(GLOB_RECURSE SRCS
    ${Flexer_SOURCE_DIR}/src/*.cpp
    ${Flexer_SOURCE_DIR}/src/*.c
)

add_executable(Flexer ${HDRS} ${SRCS})
target_include_directories(Flexer PUBLIC "${Flexer_SOURCE_DIR}/include/")

# Find the libraries that are being used
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)
find_package(OpenGL REQUIRED)

# Link the libraries used
target_link_libraries(Flexer glfw)
target_link_libraries(Flexer ${GLEW_LIBRARIES})
target_link_libraries(Flexer ${GLM_LIBRARIES})
target_link_libraries(Flexer ${OPENGL_LIBRARIES})

# Include the libraries used
target_include_directories(Flexer PRIVATE glfw)
target_include_directories(Flexer PRIVATE ${GLEW_INCLUDE_DIRS})
target_include_directories(Flexer PRIVATE ${GLM_INCLUDE_DIRS})
target_include_directories(Flexer PRIVATE ${OPENGL_INCLUDE_DIRS})
