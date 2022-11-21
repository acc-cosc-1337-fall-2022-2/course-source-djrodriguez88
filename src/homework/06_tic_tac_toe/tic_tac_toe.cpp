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
    if(check_column_win()||check_row_win()||check_diagonal_win())
    {
        set_winner();
        return true;
    }
    if(check_board_full())
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
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

//Tutorial function
void TicTacToe::how_to_play()
{
    cout << "\nEnter a Valid Board Position->|\n";
    cout << "1|2|3\n""4|5|6\n7|8|9\n";
}



ostream &operator << (ostream &out, const TicTacToe &game)
{

    for(int i = 0; i < game.pegs.size(); i++)
    {
        if (game.pegs.size() == 9) {
            out << game.pegs[i];
            if (i == 2 || i == 5 || i == 8) {
                out << '\n';
            } else {
                out << '|';
            }
        }
        else
        {
            out << game.pegs[i];
            if (i == 3 || i == 7 || i == 11) {
                out << '\n';
            } else {
                out << '|';
            }
        }
    }
    return out;
}

istream& operator>>(istream& in, TicTacToe& game)
{
    int position;

    cout << "Player \'" << game.get_player() << "\' take your turn (Choose position on board)\n";
    cin >> position;
    game.mark_board(position);

    return in;

}

TicTacToe::TicTacToe(int size): pegs(size*size, " "){}



