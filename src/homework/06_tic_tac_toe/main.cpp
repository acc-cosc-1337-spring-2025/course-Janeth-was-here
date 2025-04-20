#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <string>
#include <memory>

using std::cout;
using std::cin;
using std::string;
using std::unique_ptr;
using std::make_unique;

int main() 
{
    TicTacToeManager manager; // Manager instance
    char user_choice = 'y';

    do
    {
        int board_type;
        string first_player;

        // a) Prompt the user to choose 3x3 or 4x4
        while (true) {
            cout << "Choose board size (Enter 3 for 3x3 or 4 for 4x4): ";
            cin >> board_type;
            if (board_type == 3 || board_type == 4) {
                break;
            } else {
                cout << "Invalid choice. Please enter 3 or 4.\n";
            }
        }

        // b) Create the correct TicTacToe game using make_unique
        unique_ptr<TicTacToe> game;
        if (board_type == 3) {
            game = make_unique<TicTacToe3>();
        } else {
            game = make_unique<TicTacToe4>();
        }

        // c) Prompt for first player
        while (true) {
            cout << "Choose your first player (X or O): ";
            cin >> first_player;
            if (first_player == "X" || first_player == "O") {
                break;
            } else {
                cout << "Invalid input. Please choose X or O.\n";
            }
        }

        // d) Start the game
        game->start_game(first_player);
        int position;

        // Game loop
        while (!game->game_over())
        {
            game->display_board();
            cout << "Player " << first_player << ", enter position (1-" << (board_type * board_type) << "): ";
            cin >> position;
            game->mark_board(position);
        }

        // Display final board and winner
        game->display_board();
        string winner = game->get_winner();
        if (winner == "C") {
            cout << "The game is a tie!\n";
        } else {
            cout << "Player " << winner << " wins!\n";
        }

        // e) Save game using dereferenced game pointer
        manager.save_game(*game);

        // Show running totals
        int o_wins, x_wins, ties;
        manager.get_winner_total(o_wins, x_wins, ties);
        cout << "Running totals — X wins: " << x_wins
             << ", O wins: " << o_wins
             << ", Ties: " << ties << "\n";

        // Play again?
        cout << "Play again? Enter y or Y to play again, any other key to quit: ";
        cin >> user_choice;

    } while (user_choice == 'y' || user_choice == 'Y');

    cout << "Thanks for playing TicTacToe! Goodbye!\n";
    return 0;
}