#include <iostream>
#include "functions.hpp"
#include<vector>
#include<string>

int main() {
  //setting up board and player choices
  std::vector<std::vector<std::string>> rows = {{"-", "-", "-"}, {"-", "-", "-"}, {"-", "-", "-"}};
	int row_choice, column_choice;
	bool player_done = false;
	//welcoming players
  std::cout <<"Welcome to Tic Tac Toe\n";
  std::cout<<"This is going to be fun\n\n";
	//printing the empty board
	std::cout<<"This is the board\n";
	print_board(rows);
	//calls game_flow to start the game
  std::cout<<"Let's start with your turn\n";
	game_flow((std::vector<std::vector<std::string>>) rows, row_choice, column_choice);
}