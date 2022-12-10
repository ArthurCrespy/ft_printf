cmake_minimum_required(VERSION 3.23)
project(ft_printf C)

set(CMAKE_C_STANDARD 11)

include_directories(files)

add_executable(ft_printf
        files/main.c
        files/ft_printf.c
        files/ft_printf_put.c
        files/ft_printf.h)