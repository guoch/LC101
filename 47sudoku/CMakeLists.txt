cmake_minimum_required(VERSION 3.6)
project(47sudoku)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(47sudoku ${SOURCE_FILES})