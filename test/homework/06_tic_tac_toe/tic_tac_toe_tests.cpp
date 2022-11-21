#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"



TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);
    game.game_over();
    game.mark_board(3);
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(5);
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(6);
    game.game_over();
    game.mark_board(9);
    game.game_over();
    game.mark_board(7);
    game.game_over();
    game.mark_board(8);
    game.game_over();

    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test win by first column.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);//marked x
    game.game_over();
    game.mark_board(9);
    game.game_over();
    game.mark_board(4);//marked x
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(7);//marked x
    game.game_over();

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second column.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(2);//marked x
    game.game_over();
    game.mark_board(9);
    game.game_over();
    game.mark_board(5);//marked x
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(8);//marked x
    game.game_over();

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(3);//marked x
    game.game_over();
    game.mark_board(8);
    game.game_over();
    game.mark_board(6);//marked x
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(9);//marked x
    game.game_over();

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by first row.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);//marked x
    game.game_over();
    game.mark_board(8);
    game.game_over();
    game.mark_board(2);//marked x
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(3);//marked x
    game.game_over();

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(4);//marked x
    game.game_over();
    game.mark_board(8);
    game.game_over();
    game.mark_board(5);//marked x
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(6);//marked x
    game.game_over();

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(7);//marked x
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(8);//marked x
    game.game_over();
    game.mark_board(3);
    game.game_over();
    game.mark_board(9);//marked x
    game.game_over();

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from top left.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);//marked x
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(5);//marked x
    game.game_over();
    game.mark_board(3);
    game.game_over();
    game.mark_board(9);//marked x
    game.game_over();

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(7);//marked x
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(5);//marked x
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(3);//marked x
    game.game_over();

    REQUIRE(game.game_over() == true);
}

TEST_CASE("TicTacToeManager class with 3 games - Check Winner")
{
    TicTacToe game;
    TicTacToeManager manager;
    int x_wins = 0;
    int o_wins = 0;
    int ties = 0;

    game.start_game("X");


    game.mark_board(1);
    game.game_over();
    game.mark_board(6);
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(3);

    game.game_over();
    manager.save_game(game);

    game.start_game("O");


    game.mark_board(5);
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(3);
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(7);

    game.game_over();
    manager.save_game(game);

    game.start_game("X");


    game.mark_board(5);
    game.game_over();
    game.mark_board(1);
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(3);
    game.game_over();
    game.mark_board(7);
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(6);
    game.game_over();
    game.mark_board(8);
    game.game_over();
    game.mark_board(9);

    game.game_over();
    manager.save_game(game);

    manager.get_winner_totals(x_wins, o_wins, ties);

    REQUIRE(x_wins == 1);
    REQUIRE(o_wins == 1);
    REQUIRE(ties == 1);

}

