cmake_minimum_required(VERSION 3.6)
project(44generate_parentheses)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(44generate_parentheses ${SOURCE_FILES})