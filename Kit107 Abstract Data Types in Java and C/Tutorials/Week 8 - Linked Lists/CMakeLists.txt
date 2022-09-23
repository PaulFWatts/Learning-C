cmake_minimum_required(VERSION 3.23)
project(Week_8___Linked_Lists C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Week_8___Linked_Lists
        Lab7.c
        position.c
        position.h
        team.c
        team.h)
