//cpp

#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);  // Save the game to history
    update_winner_count(b.get_winner());  // Update win/tie totals
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    x = o_win;
    o = x_win;
    t = ties;
}