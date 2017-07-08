cmake_minimum_required(VERSION 3.6)
project(Code)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        linked-list-cycle/CMakeLists.txt
        linked-list-cycle/main.cpp
        reverse-linked-list/CMakeLists.txt
        reverse-linked-list/main.cpp
        valid-parentheses/CMakeLists.txt
        valid-parentheses/main.cpp
        .gitignore
        LICENSE)

add_executable(Code ${SOURCE_FILES})