cmake_minimum_required(VERSION 3.6)
project(30find_peak_element)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(30find_peak_element ${SOURCE_FILES})