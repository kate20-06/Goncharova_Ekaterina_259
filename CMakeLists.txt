cmake_minimum_required(VERSION 3.10)
project(calculator C)

set(CMAKE_C_STANDARD 99)

set(SRC_FILES
    src/main.c
    src/scanf_checker.c
    src/math_operations.c
)

add_executable(calculator ${SRC_FILES})

target_include_directories(calculator PRIVATE include)

target_compile_options(calculator PRIVATE -Wall -Wextra -lm)