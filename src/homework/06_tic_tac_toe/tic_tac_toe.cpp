//cpp
#include "tic_tac_toe.h"

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
    for(long unsigned int i=0; i < pegs.size(); i += 3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
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
    // Check first column: positions 0, 3, 6
    if (pegs[0] != " " && pegs[0] == pegs[3] && pegs[3] == pegs[6]) {
        return true;
    }
    // Check second column: positions 1, 4, 7
    if (pegs[1] != " " && pegs[1] == pegs[4] && pegs[4] == pegs[7]) {
        return true;
    }
    // Check third column: positions 2, 5, 8
    if (pegs[2] != " " && pegs[2] == pegs[5] && pegs[5] == pegs[8]) {
        return true;
    }

    return false;
}

bool TicTacToe::check_row_win()
{
    // First row: positions 0, 1, 2
    if (pegs[0] != " " && pegs[0] == pegs[1] && pegs[1] == pegs[2]) {
        return true;
    }
    // Second row: positions 3, 4, 5
    if (pegs[3] != " " && pegs[3] == pegs[4] && pegs[4] == pegs[5]) {
        return true;
    }
    // Third row: positions 6, 7, 8
    if (pegs[6] != " " && pegs[6] == pegs[7] && pegs[7] == pegs[8]) {
        return true;
    }

    return false;
}

bool TicTacToe::check_diagonal_win()
{
    // First diagonal: positions 0, 4, 8 (1, 5, 9)
    if (pegs[0] != " " && pegs[0] == pegs[4] && pegs[4] == pegs[8]) {
        return true;
    }
    // Second diagonal: positions 6, 4, 2 (7, 5, 3)
    if (pegs[6] != " " && pegs[6] == pegs[4] && pegs[4] == pegs[2]) {
        return true;
    }

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
