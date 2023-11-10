cmake_minimum_required(VERSION 3.25)
project(sorting C)

set(CMAKE_C_STANDARD 11)

add_executable(sorting bubbleSort.c "sorting_public _headfile.h")
