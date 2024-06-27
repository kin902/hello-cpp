cmake_minimum_required(VERSION 3.28)
project(hello_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(hello_cpp
        C++_beginner/hour_2.cpp
        C++_beginner/29_variable_scope.cpp
        C++_beginner/01_setup_enviroment.cpp
        C++_beginner/02_basic_data_types.cpp
        C++_beginner/03_constant.cpp
        C++_beginner/04_namespace.cpp
        C++_beginner/05_typedef_type_aliases.cpp
        C++_beginner/06_arithmetic_operators.cpp
        C++_beginner/30_banking_program.cpp
        C++_beginner/07_type_conversion.cpp
        C++_beginner/08_user_input.cpp
        C++_beginner/09_useful_math_functions.cpp
        C++_beginner/10_hypotenuse_calculator_program.cpp
        C++_beginner/11_if_statements.cpp
        C++_beginner/12_switches.cpp
        C++_beginner/13_console_calculate_program.cpp
        C++_beginner/14_ternary_operator.cpp
        C++_beginner/31_rock_paper_scissors_game.cpp
        C++_beginner/15_logical_operator.cpp
        C++_beginner/16_temperature_conversion_program.cpp
        "C++_beginner/32_array.cpp"
        C++_beginner/33_sizeof_operator.cpp
        C++_beginner/34_literate_over_an_array.cpp
        C++_beginner/35_foreach_loop.cpp
        C++_beginner/36_pass_array_to_a_functions.cpp)
