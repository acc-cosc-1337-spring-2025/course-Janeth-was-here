#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file 
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <memory>
using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game if the board is full")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by first column 4")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(1);  // X
	board->mark_board(2);  // O
	board->mark_board(5);  // X
	board->mark_board(6);  // O
	board->mark_board(9);  // X
	board->mark_board(10); // O
	board->mark_board(13); // X

	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by second column 4")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(2);  // X
	board->mark_board(1);  // O
	board->mark_board(6);  // X
	board->mark_board(5);  // O
	board->mark_board(10); // X
	board->mark_board(9);  // O
	board->mark_board(14); // X

	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by third column 4")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(3);  // X
	board->mark_board(1);  // O
	board->mark_board(7);  // X
	board->mark_board(2);  // O
	board->mark_board(11); // X
	board->mark_board(4);  // O
	board->mark_board(15); // X

	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by fourth column 4")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(4);  // X
	board->mark_board(1);  // O
	board->mark_board(8);  // X
	board->mark_board(2);  // O
	board->mark_board(12); // X
	board->mark_board(3);  // O
	board->mark_board(16); // X

	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win diagonally from top left 4")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(1);  // X
	board->mark_board(2);  // O
	board->mark_board(6);  // X
	board->mark_board(3);  // O
	board->mark_board(11); // X
	board->mark_board(4);  // O
	board->mark_board(16); // X

	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left 4")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	board->mark_board(13); // X
	board->mark_board(1);  // O
	board->mark_board(10); // X
	board->mark_board(2);  // O
	board->mark_board(7);  // X
	board->mark_board(3);  // O
	board->mark_board(4);  // X

	REQUIRE(board->game_over() == true);
}

