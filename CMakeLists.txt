cmake_minimum_required(VERSION 3.26)
project(Clock)

set(CMAKE_CXX_STANDARD 17)

add_executable(Clock main.cpp
        numbers.h
        numbers.cpp
        numbers.h)
