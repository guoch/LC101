cmake_minimum_required(VERSION 3.6)
project(evaluate_reverse_polish_notation)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(evaluate_reverse_polish_notation ${SOURCE_FILES})