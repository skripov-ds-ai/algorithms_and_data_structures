cmake_minimum_required(VERSION 3.7)
project(algorithms_and_data_structures)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp algorithms/euclidean.cpp algorithms/euclidean.h data_structures/point.cpp data_structures/point.h algorithms/binary_power.h algorithms/binary_power.cpp)
add_executable(algorithms_and_data_structures ${SOURCE_FILES} algorithms/binary_power.h)