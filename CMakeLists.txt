cmake_minimum_required(VERSION 3.6)
project(Lab3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Dec.cpp Dec.h Rearrange.cpp Rearrange.h)
add_executable(Lab3 ${SOURCE_FILES} Dec.cpp Dec.h Rearrange.cpp Rearrange.h)