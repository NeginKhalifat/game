cmake_minimum_required(VERSION 3.10)
project(Game)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(Game
        Board_TicTacToe.cpp
        classes.h
        ClassesOfTicTacToe.h
        CMakeLists.txt
        Dice.cpp
        Exceptions.h
        Game.cpp
        helperfunctions.h
        main.cpp
        Mohre.cpp
        Mohre_TicTacToe.cpp
        Player.cpp
        PreviousMove.cpp
        Socket.h
        TicTacToe.cpp
        Time.cpp)
