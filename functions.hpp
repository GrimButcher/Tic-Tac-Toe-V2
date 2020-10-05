#include<iostream>
#include<string>
#include<vector>

void game_flow(std::vector<std::vector<std::string>> &rows, int row_choice, int column_choice, bool game_done);
void change_board(std::vector<std::vector<std::string>> &rows,bool is_comp);
void player_choice(std::vector<std::vector<std::string>> &rows,int row_choice, int column_choice);
void print_board(std::vector<std::vector<std::string>> rows);
void comp_choice(std::vector<std::vector<std::string>> &rows);