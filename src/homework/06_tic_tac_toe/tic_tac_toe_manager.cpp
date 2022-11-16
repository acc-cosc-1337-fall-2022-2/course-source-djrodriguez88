//cpp
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"

//Homework 8 Manager Public functions
void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    string winner = b.get_winner();
    update_winner_count(winner);
}

void TicTacToeManager::get_winner_totals(int& x, int& o, int& t)
{
    x = x_wins;
    o = o_wins;
    t = ties;
}

ostream& operator << (ostream& out, const TicTacToeManager& manager)
{
    for (int i = 0; i < manager.games.size(); i++)
    {
        out << manager.games[i] << '\n';
    }

    out << "X Wins: " << manager.x_wins << '\n';
    out << "O Wins: " << manager.o_wins << '\n';
    out << "Ties: " << manager.ties << '\n';

    return out;
}



//Homework 8 Manager Private functions

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
    {x_wins++;}
    else if(winner == "O")
    {o_wins++;}
    else
    {ties++;}
}