//
// Created by negin on 1/2/19.
//

#include "ClassesOfTicTacToe.h"
#include "classes.h"
Mohre_TicTacToe::Mohre_TicTacToe(std::string shape, COLOR color, int x, int y){
    shape=shape;
    color=color;
    x=x;
    y=y;
}
void Mohre_TicTacToe::move(int xdest, int ydest, Board &board, Mohre &target, Dice &dice,
                           std::vector<PreviousMove *> &moves) {
    if (board.get_board()[xdest][ydest]=='X'||board.get_board()[xdest][ydest]=='O'){
        InvalidMoveException e;
        throw e;
    }

    board.get_board()[xdest][ydest] = shape.c_str()[0];
   // Mohre_TicTacToe temp = Mohre_TicTacToe()
    PreviousMove last (this,this->get_x(),this->get_y(),MOVE,xdest,ydest);
    moves.push_back(&last);

}