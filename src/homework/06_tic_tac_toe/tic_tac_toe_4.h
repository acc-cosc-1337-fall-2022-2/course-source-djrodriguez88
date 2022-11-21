//h
#include "tic_tac_toe.h"

#ifndef TicTacToe4_h
#define TicTacToe4_h

class TicTacToe4: public TicTacToe
{
public:
    TicTacToe4();


private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();

};
#endif