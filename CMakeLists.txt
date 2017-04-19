cmake_minimum_required(VERSION 3.7)
project(algorithms_and_data_structures)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp algorithms/euclid.cpp algorithms/euclid.h data_structures/point.cpp data_structures/point.h)
add_executable(algorithms_and_data_structures ${SOURCE_FILES})