cmake_minimum_required(VERSION 3.6)
project(23validate_binary)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(23validate_binary ${SOURCE_FILES})