#include <iostream>
#include <vector>
#include "Class.h"
using namespace std;
class Board_TicTacToe :public Board{
    friend class TicTacToe;
protected:
   Board_TicTacToe (){
       Board(3,3);
       char k='0';
       for (int i =0 ; i <width ; ++i) {
           for (int j = 0; j <length ; ++j) {
             game_board[i][j]=k;
             k++;
           }
       }

   };

};
class TicTacToe:public Game{
    Board_TicTacToe board;
     TicTacToe():has_dice(0){
         Board_TicTacToe();
        players=new vector<Player> ;
    }
   // char board[9] = {'0','1','2','3','4','5','6','7','8'};
public:
    void start(){

    }
    int checkwin()
    {
        if (board.game_board[0][0]= board.game_board [0][1]  && board.game_board[0][1] == board.game_board[0][2] )
        {	if ( board.game_board [0][0] == 'X' )
                return 1;
            else
                return 2;
        }
        else
        if (board.game_board[1][0] == board.game_board [1][1]  && board.game_board[1][1] == board.game_board[1][2] )
        {	if ( board.game_board[1][0] == 'X' )
                return 1;
            else
                return 2;
        }
        else
        if (board.game_board[2][0] == board.game_board [2][1]  && board.game_board[2][1] == board.game_board[2][2] )
        {	if ( board.game_board [2][0] == 'X' )
                return 1;
            else
                return 2;
        }
        else
        if (board.game_board[0][0] == board.game_board [1][0]  && board.game_board[1][0] == board.game_board[2][0] )
        {	if ( board.game_board [0][0] == 'X' )
                return 1;
            else
                return 2;
        }
        else
        if (board.game_board[0][1] == board.game_board [1][1]  && board.game_board[1][1] == board.game_board[2][1] )
        {	if ( board.game_board [0][1] == 'X' )
                return 1;
            else
                return 2;
        }
        else
        if (board.game_board[0][2] == board.game_board [1][2]  && board.game_board[1][2] == board.game_board[2][2] )
        {	if ( board.game_board [0][2] == 'X' )
                return 1;
            else
                return 2;
        }
        else
        if (board.game_board[0][0] == board.game_board [1][1]  && board.game_board[1][1] == board.game_board[2][2] )
        {	if ( board.game_board[0] [0] == 'X' )
                return 1;
            else
                return 2;
        }
        else
        if (board.game_board[0][2] == board.game_board [1][1]  && board.game_board[1][1] == board.game_board[2][0] )
        {	if ( board.game_board [0][2] == 'X' )
                return 1;
            else
                return 2;
        }
        else
            return 0;
    }
    void mark(int player, int x,int y)
    {
        if (player == 1 )
        {

            board.game_board[x][y] = 'X';
        }
        else
            board.game_board[x][y] = 'Y';
    }

};


/*
void display()
{
    for(int i=0;i<9;i++)
    {
        cout<< board.game_board[i] << "\t" ;
        if (i == 2 || i== 5 || i==8)
            cout<<"\n";
    }
}*/
int main()
{
TicTacToe a;
    int player1 = 1, player2 =2 ;

    int box, result = 0, flag = 0;

    for(int i=1;i<5;i++)
    {

        cout<< "\n Player " << player1 << "Enter the Box";
        cin>> box;
        a.mark( player1, box);
        //display();

        result =a.checkwin();
        if (result == 1 )
        {	cout<<"\n Congratualtions! player " << player1 << " has Won ";
            flag = 1;
            break;
        }
        else
        if (result == 2 )
        {	cout<<"\n Congratualtions! player " << player2 << " has Won ";
            flag = 1;
            break;
        }

        cout<< "\n Player " << player2 << "Enter the Box";
        cin>> box;
        a.mark ( player2, box);
       // display();

        result =a.checkwin();
        if (result == 1 )
        {	cout<<"\n Congratualtions! player " << player1 << " has Won ";
            flag = 1;
            break;
        }
        else
        if (result == 2 )
        {	cout<<"\n Congratualtions! player " << player2 << " has Won ";
            flag = 1;
            break;
        }
    }
    if (flag == 0 )
        cout<<" \n Sorry, The game is a draw ";

    return 0;
}