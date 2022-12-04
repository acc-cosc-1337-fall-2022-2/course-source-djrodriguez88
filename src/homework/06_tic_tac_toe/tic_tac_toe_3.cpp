#include "tic_tac_toe_3.h"

TicTacToe3::TicTacToe3(): TicTacToe(3){}


/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool TicTacToe3::check_column_win()
{
    bool check = false;
    if(pegs[0] == "X" || pegs[0] == "O") {
        if (pegs[0] == pegs[3] && pegs[0] == pegs[6]) {
            set_winner();
            check = true;
            return check;
        }
    }
    if(pegs[1] == "X" || pegs[1] == "O")
    {
        if(pegs[1] == pegs[4] && pegs[1] == pegs[7])
        {
            set_winner();
            check = true;
            return check;
        }
    }
    if(pegs[2] == "X" || pegs[2] == "O")
    {
        if(pegs[2] == pegs[5] && pegs[2] == pegs[8])
        {
            set_winner();
            check = true;
            return check;
        }
    }
    return check;

}



/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/

bool TicTacToe3::check_row_win()
{
    bool check = false;
    if(pegs[0] == "X" || pegs[0] == "O") {
        if (pegs[0] == pegs[1] && pegs[0] == pegs[2]) {
            set_winner();
            check = true;
            return check;
        }
    }
    if(pegs[3] == "X" || pegs[3] == "O")
    {
        if(pegs[3] == pegs[4] && pegs[3] == pegs[5])
        {
            set_winner();
            check = true;
            return check;
        }
    }
    if(pegs[6] == "X" || pegs[6] == "O")
    {
        if(pegs[6] == pegs[7] && pegs[6] == pegs[8])
        {
            set_winner();
            check = true;
            return check;
        }
        return check;
    }

}


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool TicTacToe3::check_diagonal_win()
{
    bool check = false;
    if(pegs[0] == "X" || pegs[0] == "O") {
        if (pegs[0] == pegs[4] && pegs[0] == pegs[8]) {
            set_winner();
            check = true;
            return check;
        }
    }
    if(pegs[6] == "X" || pegs[6] == "O")
    {
        if(pegs[6] == pegs[4] && pegs[6] == pegs[2])
        {
            set_winner();
            check = true;
            return check;
        }
    }
    return check;

}





