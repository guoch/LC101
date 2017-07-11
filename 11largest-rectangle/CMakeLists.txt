cmake_minimum_required(VERSION 3.6)
project(largest_rectangle)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(largest_rectangle ${SOURCE_FILES})