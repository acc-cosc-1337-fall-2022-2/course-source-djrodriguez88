//h
#include "tic_tac_toe.h"

#ifndef TicTacToe3_h
#define TicTacToe3_h

class TicTacToe3 : public TicTacToe
{
public:
    TicTacToe3();

private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;

};

#endif