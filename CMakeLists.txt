cmake_minimum_required(VERSION 3.16)

project(Cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Hello_World Hello_World/main.cpp
        sintax_and_basic/variables.cpp)

add_executable(arithmetic sintax_and_basic/arithmetic.cpp
        sintax_and_basic/variables.cpp)
add_executable(exemples sintax_and_basic/exemples.cpp
        sintax_and_basic/variables.cpp)
add_executable(variables sintax_and_basic/variables.cpp
        sintax_and_basic/variables.cpp)
add_executable(constants sintax_and_basic/constants.cpp
        sintax_and_basic/variables.cpp)
add_executable(conversion sintax_and_basic/conversion.cpp
        sintax_and_basic/variables.cpp)
add_executable(operators sintax_and_basic/operators.cpp
        sintax_and_basic/variables.cpp)
