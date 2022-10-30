#include "tic_tac_toe.h"
#include <iostream>

using
std::cout,
std::cin;

int main()
{
    TicTacToe game;

    string first_player;
    int position;
    int contPlay = 1;


    cout << "Tic Tac Toe! 3 in a row!\n";

    game.start_game(first_player);
    how_to_play();

    while(contPlay == 1)
    {
        do
        {
            cout << "Player \'" << game.get_player() << "\' take your turn (Choose position on board)\n";
            game.display_board();
            cin >> position;
            game.mark_board(position);
        }
        while(!game.game_over());

        game.display_board();
        game.game_over();
        game.display_board();

        cout << "Would you like to play again?\nPress 1: Yes\nPress 0: No\n";
        cin >> contPlay;
        if(contPlay == 1)
        {
            game.start_game(first_player);
        }
    }

    return 0;
}