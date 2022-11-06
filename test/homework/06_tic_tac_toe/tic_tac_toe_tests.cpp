#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"



TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);
    game.mark_board(3);
    game.mark_board(2);
    game.mark_board(5);
    game.mark_board(4);
    game.mark_board(6);
    game.mark_board(9);
    game.mark_board(7);
    game.mark_board(8);

    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test win by first column.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);//marked x
    game.mark_board(9);
    game.mark_board(4);//marked x
    game.mark_board(2);
    game.mark_board(7);//marked x

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second column.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(2);//marked x
    game.mark_board(9);
    game.mark_board(5);//marked x
    game.mark_board(4);
    game.mark_board(8);//marked x

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(3);//marked x
    game.mark_board(8);
    game.mark_board(6);//marked x
    game.mark_board(2);
    game.mark_board(9);//marked x

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by first row.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);//marked x
    game.mark_board(8);
    game.mark_board(2);//marked x
    game.mark_board(4);
    game.mark_board(3);//marked x

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(4);//marked x
    game.mark_board(8);
    game.mark_board(5);//marked x
    game.mark_board(2);
    game.mark_board(6);//marked x

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(7);//marked x
    game.mark_board(2);
    game.mark_board(8);//marked x
    game.mark_board(3);
    game.mark_board(9);//marked x

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from top left.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);//marked x
    game.mark_board(2);
    game.mark_board(5);//marked x
    game.mark_board(3);
    game.mark_board(9);//marked x

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left.")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(7);//marked x
    game.mark_board(2);
    game.mark_board(5);//marked x
    game.mark_board(4);
    game.mark_board(3);//marked x

    REQUIRE(game.game_over() == true);
}