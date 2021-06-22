cmake_minimum_required(VERSION 3.19)
project(strings)

set(CMAKE_CXX_STANDARD 11)

add_executable(strings main.cpp mystrings/line.cpp mystrings/line.h mystrings/some_functions.h)