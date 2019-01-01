cmake_minimum_required(VERSION 3.10)
project(Game)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(Game
        Class.h
        CMakeLists.txt
        main.cpp)
