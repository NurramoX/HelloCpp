cmake_minimum_required(VERSION 3.26)
project(Hello_world)

set(CMAKE_CXX_STANDARD 23)

add_executable(Hello_world
        src/main.cpp
        src/simple_math.hpp)

add_executable(RunTests
        tests/test.cpp
        src/simple_math.cpp
        src/simple_math.hpp)

target_include_directories(RunTests PRIVATE ${CMAKE_SOURCE_DIR}/src)