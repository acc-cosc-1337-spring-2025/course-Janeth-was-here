#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"  // Include the manager header
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() 
{
    TicTacToeManager manager; // Create instance of manager
    string first_player;
    char user_choice = 'y';

    do
    {
        TicTacToe game; // New game instance for each round

        // Step 1: Prompt the user to choose the first player (X or O)
        while (true) {
            cout << "Welcome to TicTacToe! Choose your first player (X or O): ";
            cin >> first_player;

            if (first_player == "X" || first_player == "O") {
                break;
            } else {
                cout << "Invalid input. Please choose X or O.\n";
            }
        }

        // Step 2: Start a new game
        game.start_game(first_player);
        int position;

        // Step 3: Game loop
        while (!game.game_over())
        {
            game.display_board();
            cout << "Player " << first_player << ", enter the position (1-9) to mark: ";
            cin >> position;

            game.mark_board(position);
        }

        // Step 4: Display the final result
        game.display_board();
        string winner = game.get_winner();
        if (winner == "C") {
            cout << "The game is a tie!\n";
        } else {
            cout << "Player " << winner << " wins!\n";
        }

        // Step 5: Save game to manager and display running totals
        manager.save_game(game);

        int o_wins, x_wins, ties;
        manager.get_winner_total(o_wins, x_wins, ties);
        cout << "Running totals — X wins: " << x_wins 
             << ", O wins: " << o_wins 
             << ", Ties: " << ties << "\n";

        // Step 6: Play again?
        cout << "Play again? Enter y or Y to play again, any other key to quit: ";
        cin >> user_choice;

    } while (user_choice == 'y' || user_choice == 'Y');

    cout << "Thanks for playing TicTacToe! Goodbye!\n";
    return 0;
}
