#include "ClassesOfTicTacToe.h"
#include <algorithm>
#include <iterator>
//
// Created by negin on 1/2/19.
//
TicTacToe::TicTacToe()
{

}
int TicTacToe::check_winner(Player* current_player) {
        if (board.get_board()[0][3]== board.get_board()[0][4]  && board.get_board()[0][4] == board.get_board()[0][5] )
        {	if ( board.get_board()[0][3] == players[0]->get_ident()[0] )
                        return 0;
                else
                        return 1;
        }
        else
        if (board.get_board()[1][3] == board.get_board()[1][4]  && board.get_board()[1][4] == board.get_board()[1][5] )
        {	if ( board.get_board()[1][3] == players[0]->get_ident()[0] )
                        return 0;
                else
                        return 1;
        }
        else
        if (board.get_board()[2][3] == board.get_board() [2][4]  && board.get_board()[2][4] == board.get_board()[2][5] )
        {	if ( board.get_board() [2][3] == players[0]->get_ident()[0] )
                        return 0;
                else
                        return 1;
        }
        else
        if (board.get_board()[0][3] == board.get_board() [1][3]  && board.get_board()[1][3] == board.get_board()[2][3] )
        {	if ( board.get_board() [0][3] == players[0]->get_ident()[0] )
                        return 0;
                else
                        return 1;
        }
        else
        if (board.get_board()[0][4] == board.get_board() [1][4]  && board.get_board()[1][4] == board.get_board()[2][4] )
        {	if ( board.get_board() [0][4] == players[0]->get_ident()[0] )
                        return 0;
                else
                        return 1;
        }
        else
        if (board.get_board()[0][5] == board.get_board() [1][5]  && board.get_board()[1][5] == board.get_board()[2][5] )
        {	if ( board.get_board() [0][5] == players[0]->get_ident()[0] )
                        return 0;
                else
                        return 1;
        }
        else
        if (board.get_board()[0][3] == board.get_board() [1][4]  && board.get_board()[1][4] == board.get_board()[2][5] )
        {	if ( board.get_board()[0][3] == players[0]->get_ident()[0])
                        return 0;
                else
                        return 1;
        }
        else
        if (board.get_board()[0][5] == board.get_board() [1][4]  && board.get_board()[1][4] == board.get_board()[2][3] )
        {	if ( board.get_board() [0][5] == players[0]->get_ident()[0] )
                        return 0;
                else
                        return 1;
        }
        else
                return -1;          //no winner!
}
Player* TicTacToe::get_turn(Player* current_turn) {
    auto it= std::find (players.begin(), players.end(), current_turn);
    auto next= std::next(it,1);
    int found_index=next-players.begin();
    if(found_index==players.size()-1)       //if current player is the lastest player
        return players[0];
    return players[found_index];
}


bool TicTacToe::check_done() {
    bool flag=true;
    for (int i = 0; i <6 ; ++i) {
        for (int j = 3; j <6 ; ++j) {
            if(!(board.get_board()[i][j]=='X'||board.get_board()[i][j]=='O')){
                flag= false;
                return flag;
            }
        }
    }
    return flag;
}
void TicTacToe::Board_initialize() {
    COLOR color_1=players[0]->get_color();
    COLOR color_2=players[1]->get_color();
    Board_TicTacToe(color_1,color_2);
}
bool TicTacToe::HasLegalMove(Board *board, Dice *dice) {
   if( check_done())
       return 0;
    return 1;
}