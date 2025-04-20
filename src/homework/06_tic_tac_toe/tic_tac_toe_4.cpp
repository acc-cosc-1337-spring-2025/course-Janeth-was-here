#include "tic_tac_toe_4.h"

// Check column win
bool TicTacToe4::check_column_win()
{
    for (int i = 0; i < 4; ++i)
    {
        if (pegs[i] == pegs[i + 4] && 
            pegs[i + 4] == pegs[i + 8] && 
            pegs[i + 8] == pegs[i + 12] && 
            pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

// Check row win
bool TicTacToe4::check_row_win()
{
    for (int i = 0; i < 16; i += 4)
    {
        if (pegs[i] == pegs[i + 1] && 
            pegs[i + 1] == pegs[i + 2] && 
            pegs[i + 2] == pegs[i + 3] && 
            pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

// Check diagonal win
bool TicTacToe4::check_diagonal_win()
{
    if (pegs[0] == pegs[5] && pegs[5] == pegs[10] &&
        pegs[10] == pegs[15] && pegs[0] != " ")
    {
        return true;
    }
    else if (pegs[12] == pegs[9] && pegs[9] == pegs[6] &&
             pegs[6] == pegs[3] && pegs[12] != " ")
    {
        return true;
    }
    return false;
}