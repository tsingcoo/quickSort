cmake_minimum_required(VERSION 3.6)
project(quickSort)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp solution.cpp solution.h)
add_executable(quickSort ${SOURCE_FILES})