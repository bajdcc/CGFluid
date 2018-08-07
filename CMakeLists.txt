cmake_minimum_required(VERSION 3.12)
project(CGFluid)

set(CMAKE_CXX_STANDARD 14)

add_executable(CGFluid main.cpp)
target_link_libraries(CGFluid freeglut opengl32 glu32)