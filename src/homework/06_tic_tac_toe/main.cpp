#include <iostream>
//#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using
std::cout,
std::cin;
using std::unique_ptr;


int main()
{
//Initialize variables
    unique_ptr<TicTacToe> game;
    TicTacToeManager manager;

    string first_player;
    int contPlay = 1;

//Start game loop
    while(contPlay == 1)
    {
        //Game Selection
        string game_selection;
        do
        {
            cout << "TicTacToe: 3 or 4 in a row?\n";
            cin >> game_selection;
        }
        while(game_selection != "3" && game_selection != "4");

        if (game_selection == "3")
        {
            game = std::make_unique<TicTacToe3>();
        }
        else if(game_selection == "4")
        {
            game = std::make_unique<TicTacToe4>();
        }

        cout << "Tic Tac Toe! 3 or 4 in a row!\n";
        cout << "Player 1: Please choose X or O to begin\n";
        cin >> first_player;
 //       game.how_to_play();


        game->start_game(first_player);

        do
        {
            cout << *game;
            cin >> *game;
        }
        while (!game->game_over());

        manager.save_game(game);

        int x, o, t;
        manager.get_winner_totals(x,o,t);
        cout << "\nX Wins: " << x << "\n";
        cout << "O Wins: " << o << "\n";
        cout << "Ties: " << t << "\n";



/*
        if (game->get_winner() == "C")
        {
            cout << "\nThe game has ended in a draw! Settle the score and play another round!\n";
        }
        else
        {
            cout << "The Winner of the game is " << game->get_winner() << "!\n";
        }*/
        cout << "Would you like to play again?\nPress 1: Yes\nPress 0: No\n";
        cin >> contPlay;
    }
//End Game
    cout << manager;

    return 0;
}