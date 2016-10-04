cmake_minimum_required(VERSION 3.6)
project(sort_review)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp shell_sort/shell_sort.cpp shell_sort/shell_sort.h sort_method.cpp sort_method.h)
add_executable(sort_review ${SOURCE_FILES})