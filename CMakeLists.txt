cmake_minimum_required(VERSION 3.30)
project(Library_System)

set(CMAKE_CXX_STANDARD 20)

add_executable(Library_System main.cpp
        Library.cpp
        Library.h
        Book.cpp
        Book.h)
