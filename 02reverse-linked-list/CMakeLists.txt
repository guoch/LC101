cmake_minimum_required(VERSION 3.6)
project(reverse_linked_list)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(reverse_linked_list ${SOURCE_FILES})