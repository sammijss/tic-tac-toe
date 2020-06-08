/*
 * File: main.cpp
 */

#include<iostream>
#include<TicTacToeGame.h>

int main()
{
	int position;
	std::string player;
	char choice, player_1_choice, player_2_choice;

	std::cout <<"!Welcome to Tic Tac Toe Game!" <<std::endl;

	player = TicTacToeGame::ChoosePlayer();
	choice = TicTacToeGame::PlayerChoice(player);

	if (!player.compare("Player 1")) {
		player_1_choice = choice;
		if (choice == 'O') {
			player_2_choice = 'X';
		} else {
			player_2_choice = 'O';
		}
	} else {
		player_2_choice = choice;
		if (choice == 'O') {
			player_1_choice = 'X';
		} else {
			player_1_choice = 'O';
		}
	}

	while (true) {
		TicTacToeGame::InitBoard();
		TicTacToeGame::DisplayTheBoard();

		while (true) {
			/* Player 1 move */
			if (!player.compare("Player 1")) {
				position = TicTacToeGame::PlayerMove("Player 1");
				TicTacToeGame::MarkPlayerMove(position, player_1_choice);
				TicTacToeGame::DisplayTheBoard();
				if(TicTacToeGame::CheckForWin(player_1_choice)) {
					std::cout <<"Player 1 won the match." <<std::endl;
					break;
				}
				player = "Player 2";

			} else {
				/* Player 2 move */
				position = TicTacToeGame::PlayerMove("Player 2");
				TicTacToeGame::MarkPlayerMove(position, player_2_choice);
				TicTacToeGame::DisplayTheBoard();
				if(TicTacToeGame::CheckForWin(player_2_choice)) {
					std::cout <<"Player 2 won the match." <<std::endl;
					break;
				}
				player = "Player 1";
			}

			if(TicTacToeGame::CheckForDraw()) {
				std::cout <<"Match has been draw." <<std::endl;
				break;
			}
		}

		/* End the game if no one wants to play further */
		if (!TicTacToeGame::Replay()) {
			break;
		}
	}
}
