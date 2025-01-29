cmake_minimum_required(VERSION 3.30)
project(Library_System)

set(CMAKE_CXX_STANDARD 20)

find_package(Python3 COMPONENTS Interpreter Development)

add_executable(Library_System src/C++/main.cpp
        src/C++/Library.cpp
        src/C++/Library.h
        src/C++/Book.cpp
        src/C++/Book.h)
