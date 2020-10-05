#include<iostream>
#include<string>
#include<vector>

void print_board(std::vector<std::vector<std::string>> rows){
	for(auto c : rows){
		for(auto f : c) 
			std::cout<<f<<" ";
		std::cout<<"\n";
	}
	std::cout<<"\n";
}

void change_board(const int row_choice, const int column_choice, std::vector<std::vector<std::string>> &rows, bool is_comp){
	if(is_comp == false){
		rows[row_choice-1][column_choice-1] = "x";
		print_board(rows);
	}else if(is_comp == true){
		rows[row_choice-1][column_choice-1] = "o";
		print_board(rows);
	}
}

void player_choice(std::vector<std::vector<std::string>> &rows, int &row_choice, int &column_choice){
	bool player_done = false;

	while(player_done == false){
		std::cout<<"Lets begin with finding out which row and column you are going to be placing your mark\n";
		
		std::cout<<"Start by inputting your row\n";
		std::cin>>row_choice;
		while(row_choice <= 0 || row_choice >= 4){
			std::cout<<"Your input is too high or low. Pls input a number between 1-3\n";
			std::cin>>row_choice;
		}

		std::cout<<"Now input your column\n";
		
		std::cin>>column_choice;
		while(column_choice < 1 || column_choice > 3){
      std::cout<<"hi";
			std::cout<<"Your input is too high or low. Pls input a number between 1-3\n";
			std::cin>>column_choice;
		}
		if(rows[row_choice-1][column_choice-1] != "x" && rows[row_choice-1][column_choice-1] != "o") player_done = true;
	}
	change_board(row_choice, column_choice, rows, false);
}

void comp_choice(std::vector<std::vector<std::string>> &rows){
	bool comp_con = false;
	int random1,random2;
		
	while(comp_con == false){
		srand(time(NULL));
		random1 = rand()%3;
		random2 = rand()%3;
		comp_con = (rows[random1-1][random2 -1] == "-")? true: false;
	}
	change_board(random1, random2, rows, true);
}

void game_flow(std::vector<std::vector<std::string>> &rows, int row_choice, int column_choice, bool game_done){
	if(game_done == false)
		player_choice(rows, row_choice, column_choice);
		comp_choice(rows);
}