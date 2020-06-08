/*
 * File: TicTacToeGame.cpp
 */

#include<cstdlib>
#include<cstring>
#include<iostream>
#include<TicTacToeGame.h>

char TicTacToeGame::mBoard[10];

std::string TicTacToeGame::ChoosePlayer() {
	srand(time(NULL));
	if (rand()%2 == 0) {
		return "Player 1";
	} else {
		return "Player 2";
	}
}

char TicTacToeGame::PlayerChoice(std::string player) {
	char choice;
	std::cout <<player <<" will play first." <<std::endl;
	std::cout <<player << ", please entry your choice (O or X): ";
	std::cin >>choice;

	if(choice != 'O' and choice != 'X') {
		std::cout <<"Invalid choice exit..." <<std::endl;
		exit(0);
	}
	return (choice);
}

void TicTacToeGame::InitBoard() {
	memset(mBoard, ' ', sizeof(mBoard));
}

bool TicTacToeGame::CheckForSpace(int position) {
	return (mBoard[position] == ' ');
}

void TicTacToeGame::DisplayTheBoard() {
	std::system("clear");
	std::cout <<"!Welcome to Tic Tac Toe Game!" <<std::endl;
	std::cout <<"     |     |     "					 		<<std::endl;
	std::cout <<"  " <<mBoard[1] <<"  |  " <<mBoard[2] <<"  |  " <<mBoard[3] <<"  "	<<std::endl;
	std::cout <<"     |     |     "					 		<<std::endl;
	std::cout <<"-----------------"					 		<<std::endl;
	std::cout <<"     |     |     "					 		<<std::endl;
	std::cout <<"  " <<mBoard[4] <<"  |  " <<mBoard[5] <<"  |  " <<mBoard[6] <<"  "	<<std::endl;
	std::cout <<"     |     |     "					 		<<std::endl;
	std::cout <<"-----------------"					 		<<std::endl;
	std::cout <<"     |     |     "					 		<<std::endl;
	std::cout <<"  " <<mBoard[7] <<"  |  " <<mBoard[8] <<"  |  " <<mBoard[9] <<"  "	<<std::endl;
	std::cout <<"     |     |     "					 		<<std::endl;
}

int TicTacToeGame::PlayerMove(std::string player) {
	int position;
	do {
		std::cout <<player << " choose your next postion between 1-9: ";
		std::cin >>position;	//TODO: check for char input

	} while ((position <= 0) || (position > 9) || !CheckForSpace(position));
	return (position);
}

void TicTacToeGame::MarkPlayerMove(int position, char mark) {
	mBoard[position] = mark;
}

bool TicTacToeGame::CheckForWin(char mark) {
	return (((mBoard[1] == mark) && (mBoard[2] == mark) && (mBoard[3] == mark)) || /* Check first row top bottom */
			((mBoard[4] == mark) && (mBoard[5] == mark) && (mBoard[6] == mark)) || /* Check second row top bottom */
			((mBoard[7] == mark) && (mBoard[8] == mark) && (mBoard[9] == mark)) || /* Check third row top bottom */
			((mBoard[1] == mark) && (mBoard[4] == mark) && (mBoard[7] == mark)) || /* Check first coloumn from left to right */
			((mBoard[2] == mark) && (mBoard[5] == mark) && (mBoard[8] == mark)) || /* Check second coloumn from left to right */
			((mBoard[3] == mark) && (mBoard[6] == mark) && (mBoard[9] == mark)) || /* Check third coloumn from left to right */
			((mBoard[7] == mark) && (mBoard[5] == mark) && (mBoard[3] == mark)) || /* Check diagonal from top left corner to bottom right corner */
			((mBoard[9] == mark) && (mBoard[5] == mark) && (mBoard[1] == mark)));  /* Check diagonal from top right corner to bottom left corner */
}

bool TicTacToeGame::CheckForDraw() {
	for (int position=1; position<sizeof(mBoard); position++) {
		if(CheckForSpace(position)) {
			return (false);
		}
	}
	return (true);
}

bool TicTacToeGame::Replay() {
	std::string choice;
	do {
		std::cout <<"Do you want to play again Yes/No: ";
		std::cin >>choice;

		if (!choice.compare("Yes")) {
			return (true);
		} else if (!choice.compare("No")) {
			return (false);
		}
	}while(choice.compare("Yes") || choice.compare("No"));
}
