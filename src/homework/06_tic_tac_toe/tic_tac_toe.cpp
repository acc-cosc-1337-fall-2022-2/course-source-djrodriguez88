#include "tic_tac_toe.h"
//#include<string>
using std::string;
using std::cout;
using std::cin;
using std::count;
//public functions

void TicTacToe::start_game(string first_player) {
    cout << "Player 1: Please choose X or O to begin\n";
    cin >> first_player;
    if (first_player == "X" || first_player == "O") {
        player = first_player;
    } else {
        cout << "Invalid Input. Please choose 'X' or 'O' to begin\n";
        cin >> first_player;
        player = first_player;
    }
    clear_board();
}

string TicTacToe::get_player() const{return player;}



bool TicTacToe::game_over()
{
    return check_board_full();
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

//Tutorial function
void how_to_play()
{
    cout << "\nEnter a Valid Board Position->|\n";
    cout << "1|2|3\n""4|5|6\n7|8|9\n";
}