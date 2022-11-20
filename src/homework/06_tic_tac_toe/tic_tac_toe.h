#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef TicTacToe_h
#define TicTacToe_h

using
        std::ostream,
        std::istream,
        std::string,
        std::vector;


class TicTacToe{

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    void how_to_play();
    string get_player() const;
    int size;
    TicTacToe(int size);

    friend ostream& operator<<(ostream& out, const TicTacToe& game);
    friend istream& operator>>(istream& in, TicTacToe& game);

    string get_winner() const;

private:
    string player;
    string winner;
   // vector<string> pegs{" "," "," "," "," "," "," "," "," "};

    void set_next_player();
    bool check_board_full();
    void clear_board();


    void set_winner();

protected:
    vector<string> pegs{size * size, " "};
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();


};

#endif