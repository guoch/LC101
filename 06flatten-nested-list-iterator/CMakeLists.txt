cmake_minimum_required(VERSION 3.6)
project(flatten_nested_list_iterator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(flatten_nested_list_iterator ${SOURCE_FILES})