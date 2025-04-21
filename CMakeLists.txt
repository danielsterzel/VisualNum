cmake_minimum_required(VERSION 3.30)
project(Nums)

set(CMAKE_CXX_STANDARD 20)

add_executable(Nums main.cpp
        VisualNum.cpp
        VisualNum.h
        DynamicArray.cpp
        DynamicArray.h)
