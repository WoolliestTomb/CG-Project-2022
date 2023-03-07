cmake_minimum_required(VERSION 3.25.2)
project(CG-Project-2022)
add_executable(CG-Project-2022 src/glad.c main.cpp)
target_link_libraries(CG-Project-2022 GL dl glfw)
