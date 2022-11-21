//h

#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

#ifndef TicTacToeManager_H
#define TicTacToeManager_h

using
        std::ostream,
        std::istream,
        std::string,
        std::vector;
using std::unique_ptr;

class TicTacToeManager
{
public:
    friend ostream& operator << (ostream& out, const TicTacToeManager& manager);
    void get_winner_totals(int& x, int& o, int& t);
    void save_game(unique_ptr<TicTacToe>& b);



private:
    vector <unique_ptr<TicTacToe>> games;
    int
    x_wins = {0},
    o_wins = {0},
    ties = {0};

    void update_winner_count(string winner);
};

#endif