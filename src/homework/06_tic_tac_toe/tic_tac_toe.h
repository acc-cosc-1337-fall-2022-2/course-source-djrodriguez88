#include<iostream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef TicTacToe_h
#define TicTacToe_h

using std::string;
using std::vector;
using std::count;

class TicTacToe{

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;

    string get_winner() const;

private:
    string player;
    string winner;
    vector<string> pegs{" "," "," "," "," "," "," "," "," "};

    void set_next_player();
    bool check_board_full();
    void clear_board();

    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();

};


class TicTacToeManager{

public:
    void save_game(TicTacToe b);
    std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
    void get_winner_total(int& o, int& w int& t);

private:
    vector<TicTacToe> games{};
    int o_wins = 0;
    int x_wins = 0;
    int ties = 0;

    void update_winner_count(string winner);

};

//Other/tutorial function
void how_to_play();



#endif