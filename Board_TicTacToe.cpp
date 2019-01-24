#include "ClassesOfTicTacToe.h"
#include "classes.h"
//
// Created by negin on 1/2/19.
//
Board_TicTacToe::Board_TicTacToe(COLOR color_1,COLOR color_2) {
    length=6;
width=6;
        game_board = (char **)malloc(6 * sizeof(char *));
        for (int i=0; i<6; i++)
            game_board[i] = (char *)malloc(6 * sizeof(int));

        for (int i =0 ; i <6 ; ++i) {
            for (int j = 2; j <6; ++j) {
                game_board[i][j]='';
                
            }
            for (int l = 0; l <5 ; ++l) {
             game_board[l][0]='X';
            }

            for (int l = 1; l <6 ; ++l) {
                game_board[5][l]='O';
            }

        }

    Mohre_TicTacToe first("X",color_1,5,0);
    Mohre_TicTacToe second("X",color_1,5,1);
    Mohre_TicTacToe _3th("X",color_1,5,2);
    Mohre_TicTacToe _4th("X",color_1,5,3);
    Mohre_TicTacToe _5th("X",color_1,5,4);
    Mohre_TicTacToe first_2("O",color_2,0,0);
    Mohre_TicTacToe second_2("O",color_2,1,0);
    Mohre_TicTacToe _3th_2("O",color_2,2,0);
    Mohre_TicTacToe _4th_2("O",color_2,3,0);
    Mohre_TicTacToe _5th_2("O",color_2,4,0);
    elemenets.emplace_back(&first);
    elemenets.emplace_back(&second);
    elemenets.emplace_back(&_3th);
    elemenets.emplace_back(&_4th);
    elemenets.emplace_back(&_5th);
    elemenets.emplace_back(&first_2);
    elemenets.emplace_back(&second_2);
    elemenets.emplace_back(&_3th_2);
    elemenets.emplace_back(&_4th_2);
    elemenets.emplace_back(&_5th_2);
}

Board_TicTacToe::Board_TicTacToe() {}

