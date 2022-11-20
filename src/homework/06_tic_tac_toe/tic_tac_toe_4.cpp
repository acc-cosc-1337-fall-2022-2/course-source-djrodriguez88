#include "tic_tac_toe_4.h"

TicTacToe4::TicTacToe3(): TicTacToe(4){}
/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool TicTacToe4::check_column_win()
{
    bool check = false;
    if(pegs[0] == "X" || pegs[0] == "O") {
        if (pegs[0] == pegs[4] && pegs[0] == pegs[8] && pegs[0] == pegs[12]) {
            set_winner();
            check = true;
        }
    }
    if(pegs[1] == "X" || pegs[1] == "O"){
        if (pegs[1] == pegs[5] && pegs[1] == pegs[9] && pegs[1] == pegs[13]){
            set_winner();
            check = true;
        }
    }
    if(pegs[2] == "X" || pegs[2] == "O"){
        if (pegs[2] == pegs[6] && pegs[2] == pegs[10] && pegs[2] == pegs[14]){
                set_winner();
                check = true;
            }
    }
   if(pegs[3] == "X" || pegs[3] == "O"){
       if (pegs[3] == pegs[7] && pegs[3] == pegs[11] && pegs[3] == pegs[15]){
            set_winner();
            check = true;
         }
    }
    return check;

}




/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/

bool TicTacToe4::check_row_win()
{
    bool check = false;
    if(pegs[0] == "X" || pegs[0] == "O") {
        if (pegs[0] == pegs[1] && pegs[0] == pegs[2] && pegs[0] == pegs[3]){
            set_winner();
            check = true;
            return check;
        }
    }
    if(pegs[4] == "X" || pegs[4] == "O"){
        if (pegs[4] == pegs[5] && pegs[4] == pegs[6] && pegs[4] == pegs[7]){
            set_winner();
            check = true;
            return check;
        }
    }
    if(pegs[8] == "X" || pegs[8] == "O"){
        if (pegs[8] == pegs[9] && pegs[8] == pegs[10] && pegs[8] == pegs[11]){
            set_winner();
            check = true;
            return check;
        }
    }
    if(pegs[12] == "X" || pegs[12] == "O"){
        if (pegs[12] == pegs[13] && pegs[12] == pegs[14] && pegs[12] == pegs[15]){
            set_winner();
            check = true;
            return check;
            }
    }
    return check;

}


/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/

bool TicTacToe4::check_diagonal_win()
{
    bool check = false;
    if(pegs[0] == "X" || pegs[0] == "O") {
        if (pegs[0] == pegs[5] && pegs[0] == pegs[10] && pegs[0] == pegs[15]) {
            set_winner();
            check = true;
            return check;
        }
    }
    if(pegs[6] == "X" || pegs[6] == "O")
    {
        if (pegs[12] == pegs[9] && pegs[12] == pegs[6] && pegs[12] == pegs[3]) {

            set_winner();
            check = true;
            return check;
        }
    }
    return check;

}