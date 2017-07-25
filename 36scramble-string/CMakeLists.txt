cmake_minimum_required(VERSION 3.6)
project(36scramble_string)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(36scramble_string ${SOURCE_FILES})