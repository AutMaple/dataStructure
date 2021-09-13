cmake_minimum_required(VERSION 3.20)
project(dataStructure)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(dataStructure
        src/sortAlgorithm.cpp
        headers/sortAlgorithm.h
        test.cpp headers/utils.h src/utils.cpp)
