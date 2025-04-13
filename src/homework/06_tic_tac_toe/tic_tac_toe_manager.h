//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <vector>
#include <string>

class TicTacToeManager
{
public:
    void save_game(TicTacToe b);
    void get_winner_total(int& o, int& x, int& t);

private:
    std::vector<TicTacToe> games; // vector of TicTacToe

    int x_win = 0; // initialize to 0
    int o_win = 0; // initialize to 0
    int ties = 0;  // initialize to 0

    void update_winner_count(std::string winner);
};

#endif