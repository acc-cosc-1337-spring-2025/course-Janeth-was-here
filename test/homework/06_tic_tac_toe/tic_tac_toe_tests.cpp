#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game if the board is full")
{
	TicTacToe game;

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.game_over() == true);
	//REQUIRE(tic_tac_toe.get_winner() == "C");
}

TEST_CASE("Test win by first column", "[X wins first column]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X

	//X wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column", "[X wins first column]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X

	//X wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third column", "[X wins first column]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X

	//X wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row", "[X wins first column]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X

	//X wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second row", "[X wins first column]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X

	//X wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third row", "[X wins first column]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X

	//X wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from top left", "[X wins first column]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X

	//X wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left", "[X wins first column]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X

	//X wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test X wins", "X wins")
{
	TicTacToeManager manager;
    // Game 1: X wins
    TicTacToe game1;
    game1.start_game("X");
    game1.mark_board(1); // X
    game1.mark_board(4); // O
    game1.mark_board(2); // X
    game1.mark_board(5); // O
    game1.mark_board(3); // X wins
    assert(game1.game_over());
    manager.save_game(game1);
}

TEST_CASE("Test O wins", "O wins")
{
	TicTacToeManager manager;
	// Game 2: O wins
    TicTacToe game2;
    game2.start_game("O");
    game2.mark_board(1); // O
    game2.mark_board(4); // X
    game2.mark_board(2); // O
    game2.mark_board(5); // X
    game2.mark_board(3); // O wins
    assert(game2.game_over());
    manager.save_game(game2);
}

TEST_CASE("Test  tie", "tie")
{
	TicTacToeManager manager;
	// Game 3: Tie
    TicTacToe game3;
    game3.start_game("X");
    game3.mark_board(1); // X
    game3.mark_board(2); // O
    game3.mark_board(3); // X
    game3.mark_board(5); // O
    game3.mark_board(4); // X
    game3.mark_board(6); // O
    game3.mark_board(8); // X
    game3.mark_board(7); // O
    game3.mark_board(9); // X
    assert(game3.game_over());
    assert(game3.get_winner() == "C"); // Tie
    manager.save_game(game3);
}

TEST_CASE("Check totals test", "[totals]")
{
    TicTacToeManager manager;

    // Game 1: X wins (1, 2, 3)
    TicTacToe game1;
    game1.start_game("X");
    game1.mark_board(1); // X
    game1.mark_board(4); // O
    game1.mark_board(2); // X
    game1.mark_board(5); // O
    game1.mark_board(3); // X wins
    REQUIRE(game1.game_over());
    REQUIRE(game1.get_winner() == "X");
    manager.save_game(game1);

    // Game 2: O wins (1, 2, 3)
    TicTacToe game2;
    game2.start_game("O");
    game2.mark_board(1); // O
    game2.mark_board(4); // X
    game2.mark_board(2); // O
    game2.mark_board(5); // X
    game2.mark_board(3); // O wins
    REQUIRE(game2.game_over());
    REQUIRE(game2.get_winner() == "O");
    manager.save_game(game2);

    // Game 3: Tie (full board, no winner)
    TicTacToe game3;
    game3.start_game("X");
    game3.mark_board(1); // X
    game3.mark_board(2); // O
    game3.mark_board(3); // X
    game3.mark_board(5); // O
    game3.mark_board(4); // X
    game3.mark_board(6); // O
    game3.mark_board(8); // X
    game3.mark_board(7); // O
    game3.mark_board(9); // X
    REQUIRE(game3.game_over());
    REQUIRE(game3.get_winner() == "C");
    manager.save_game(game3);

    // Final winner totals
    int x, o, t;
    manager.get_winner_total(o, x, t);

    // Output for debug
    std::cout << "X: " << x << " O: " << o << " T: " << t << "\n";

    REQUIRE(x == 1);
    REQUIRE(o == 1);
    REQUIRE(t == 1);
}
