//h
#include<iostream>
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int size) : pegs(size*size, " " ){}
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    void display_board() const;
    std::string get_winner();
    void set_winner();
    void save_game(TicTacToe b);
    void get_winner_total(int& o, int& x, int&t);

protected: 
    std::vector<std::string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

private:
    std::string player;
    std::string winner;
    void clear_board();
    void set_next_player();
    bool check_board_full();
    
    std::vector<TicTacToe> games; // vector of TicTacToe
    int x_win = 0; // initialize to 0
    int o_win = 0; // initialize to 0
    int ties = 0;  // initialize to 0
    void update_winner_count(std::string winner);
    
};


#endif