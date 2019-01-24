//
// Created by negin on 1/2/19.
//
#pragma once
#ifndef GAME_CLASSESOFTICTACTOE_H
#define GAME_CLASSESOFTICTACTOE_H

#include "classes.h"
//#include <vector>
class Mohre_TicTacToe: public  Mohre{
    friend class TicTacToe;
    friend  class Board_TicTacToe;
protected:
      Mohre_TicTacToe(std::string ident,COLOR color,int x,int y);
    void move(int xdest, int ydest, Board &board, Mohre &target, Dice &dice, std::vector<PreviousMove*> &moves);
};
class Board_TicTacToe :public Board{
    friend class TicTacToe;
protected:
    Board_TicTacToe(COLOR color_1, COLOR color_2);

public:
    Board_TicTacToe();

    void insert_peace(Player* player, int x, int y, Dice& dice, std::vector<PreviousMove*>& moves);

};

class TicTacToe:public Game{
    Board_TicTacToe board;
    friend class Player;
public:
    TicTacToe();
    int check_winner(Player* current_player);
    bool check_done();
    Player *get_turn(Player *current_turn);
    void Board_initialize();//

    virtual bool HasLegalMove(Board *board, Dice *dice);
};

#endif //GAME_CLASSESOFTICTACTOE_H
