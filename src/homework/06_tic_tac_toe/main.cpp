#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using
std::cout,
std::cin;


int main()
{
//Initialize variables
    TicTacToe game;
    TicTacToeManager manager;

    string first_player;
    int contPlay = 1;

//Start Game
    cout << "Tic Tac Toe! 3 in a row!\n";
    cout << "Player 1: Please choose X or O to begin\n";
    cin >> first_player;
    game.start_game(first_player);
    game.how_to_play();

//Start game loop

    while(contPlay == 1)
    {
        do
        {
            cout << game;
            cin >> game;
        }
        while(!game.game_over());
        game.game_over();
        cout << game;
        manager.save_game(game);

        if (game.get_winner() == "C")
        {
            cout << "\nThe game has ended in a draw! Settle the score and play another round!\n";
        }
        else
        {
            cout << "The Winner of the game is " << game.get_winner() << "!\n";
        }
        cout << "Would you like to play again?\nPress 1: Yes\nPress 0: No\n";
        cin >> contPlay;
        if(contPlay == 1)
        {
            cout << "Player 1: Please choose X or O to begin\n";
            cin >> first_player;
            game.start_game(first_player);
        }
    }
//End Game
    cout << manager;

    return 0;
}