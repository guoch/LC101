cmake_minimum_required(VERSION 3.6)
project(53decode_ways)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(53decode_ways ${SOURCE_FILES})