#include "tic_tac_toe.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() 
{
    TicTacToe game;  // Create an instance of the TicTacToe game
    string first_player;
    char user_choice = 'y';

    do
    {
        // Step 1: Prompt the user to choose the first player (X or O)
        while (true) {
            cout << "Welcome to TicTacToe! Choose your first player (X or O): ";
            cin >> first_player;

            // Check for valid input (either X or O)
            if (first_player == "X" || first_player == "O") {
                break;  // Valid input, break out of the loop
            } else {
                cout << "Invalid input. Please choose X or O.\n";
            }
        }

        // Step 2: Start a new game with the selected first player
        game.start_game(first_player);
        int position;

        // Step 3: Game loop until the game is over
        while (!game.game_over())
        {
            game.display_board();  // Display the current state of the board

            // Display the current player dynamically
            cout << "Player " << (game.get_winner() == "X" ? "X" : "O") << ", enter the position (1-9) to mark: ";
            cin >> position;

            // Mark the board with the current player's move
            game.mark_board(position);
        }

        // Step 4: Display the final result after the game ends
        game.display_board();  // Show the final board

        string winner = game.get_winner();
        if (winner == "C") {
            cout << "The game is a tie!\n";
        } else {
            cout << "Player " << winner << " wins!\n";
        }

        // Step 5: Prompt the user to play again or quit
        cout << "Play again? Enter y or Y to play again, any other key to quit: ";
        cin >> user_choice;

    } while (user_choice == 'y' || user_choice == 'Y');  // Outer loop to restart the game if the user chooses 'y' or 'Y'

    cout << "Thanks for playing TicTacToe! Goodbye!\n";
    return 0;
}
