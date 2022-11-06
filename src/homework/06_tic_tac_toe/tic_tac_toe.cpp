#include "tic_tac_toe.h"
//#include<string>
using std::string;
using std::cout;
using std::cin;
using std::count;
//public functions

void TicTacToe::start_game(string first_player) {
    if (first_player == "X" || first_player == "O") {
        player = first_player;
    }
    else {
        do {
            cout << "Invalid Input. Please choose 'X' or 'O' to begin\n";
            cin >> first_player;
            player = first_player;
        }while (first_player != "X" && first_player != "O");
    }
    TicTacToe::clear_board();
}

string TicTacToe::get_player() const{return player;}



bool TicTacToe::game_over()
{
    if(check_board_full())
    {
        set_winner();
        return true;
    }
    if(check_column_win() == true||check_row_win()||check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else return false;
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{

    for(int i = 0; i < pegs.size(); i++)
    {
        cout << pegs[i];
        if(i == 2 || i == 5 || i == 8)
        {
            cout << '\n';
        }
        else
        {
            cout << "|";
        }
    }
    cout << '\n';
}


//private functions

void TicTacToe::set_next_player()
{
    if (player == "X")
    {player = "O";}
    else{player = "X";}
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

void TicTacToe::clear_board()
{
    for(auto & peg : pegs)
    {
        peg = " ";
    }
}

string TicTacToe::get_winner() const
{
    return winner;
}

//Homework 7 Private Functions


bool TicTacToe::check_column_win()
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

bool TicTacToe::check_row_win()
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
    }
    return check;

}


bool TicTacToe::check_diagonal_win()
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

void TicTacToe::set_winner()
{
    if (player == "X")
    {winner = "O";}
    else{winner = "X";}

    if(check_board_full())
    {
        winner = "C";
    }
}


//Tutorial function
void how_to_play()
{
    cout << "\nEnter a Valid Board Position->|\n";
    cout << "1|2|3\n""4|5|6\n7|8|9\n";
}