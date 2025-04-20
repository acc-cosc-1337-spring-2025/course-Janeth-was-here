//cpp
#include "tic_tac_toe.h"
#include <cmath>
using std::cout;

bool TicTacToe::game_over()
{
    if (check_row_win()) {
        set_winner();  // Set the winner to the current player
        return true;
    }
    else if (check_column_win()) {
        set_winner();  // Set the winner to the current player
        return true;
    }
    else if (check_diagonal_win()) {
        set_winner();  // Set the winner to the current player
        return true;
    }
    else if (check_board_full()) {
        winner = "C";  // C stands for a tie
        return true;
    }
    else {
        return false;  // The game continues
    }
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    int board_size = static_cast<int>(std::sqrt(pegs.size()));

    for (size_t i = 0; i < pegs.size(); i += board_size)
    {
        for (int j = 0; j < board_size; ++j)
        {
            std::cout << pegs[i + j];
            if (j < board_size - 1)
                std::cout << "|";
        }
        std::cout << "\n";
    }
}

//private functions
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }

}
bool TicTacToe::check_board_full()
{
    for(long unsigned int i= 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}

std::string TicTacToe::get_winner() 
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";  // If the current player is X, set the winner to O
    }
    else
    {
        winner = "X";  // If the current player is O, set the winner to X
    }
}
