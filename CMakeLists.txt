cmake_minimum_required(VERSION 4.1)
project(calculator_app)

set(CMAKE_CXX_STANDARD 20)

add_executable(calculator_app main.cpp
        calculator.cpp
        calculator.h
)
