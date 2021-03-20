cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(c_plus src/basic/hello.cpp)
add_executable(c_plus_pre src/basic/pre_define.cpp)
add_executable(c_plus_exp src/basic/explain_code_basic.cpp)
add_executable(c_plus_ns src/basic/using_namespace.cpp)
add_executable(hello_namespace src/basic/hello_namespace.cpp)