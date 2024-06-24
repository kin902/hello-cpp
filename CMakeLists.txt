cmake_minimum_required(VERSION 3.28)
project(hello_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(hello_cpp
        C++_beginner/hour_1.cpp
        C++_beginner/hour_2.cpp
        C++_beginner/hour_3.cpp
        C++_beginner/hour_4.cpp
        C++_beginner/hour_5.cpp
        C++_beginner/hour_6.cpp
        C++_beginner/29_variable_scope.cpp
        C++_beginner/01_setup_enviroment.cpp
        C++_beginner/02_basic_data_types.cpp
        C++_beginner/03_constant.cpp
        C++_beginner/04_namespace.cpp
        C++_beginner/05_typedef_type_aliases.cpp
        C++_beginner/06_arithmetic_operators.cpp
        C++_beginner/30_banking_program.cpp)
