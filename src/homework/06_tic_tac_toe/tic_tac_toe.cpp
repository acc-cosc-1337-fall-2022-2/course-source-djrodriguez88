#include "tic_tac_toe.h

//public functions

void start_game(string first_player)
{
    player = first_player;
    clear_board();
}

string get_player() const{return player};



bool TicTacToe::gameover()
{
    return check_board_full();
}

void mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}


//private functions

void set_next_player()
{
    if (player == "x")
    {player = "o"}
    else{player = "x"}
}

bool TicTacToe::check_board_full()
{
    bool isOver;
    if(count (pegs.begin(), pegs.end(), " "))
    {
        isOver = false;
    }
    else
    {
        isOver = true;
    }
    return isOver;
}

void TicTacToes::clear_board()
{
    for(int i=0; i < pegs.size(); i++)
    {
        pegs[1] = " ";
    }
}