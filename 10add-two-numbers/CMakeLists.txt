cmake_minimum_required(VERSION 3.6)
project(10add_two_numbers)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(10add_two_numbers ${SOURCE_FILES})