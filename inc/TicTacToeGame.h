/*
 * File: TicTacToeGame.h
 */

#ifndef _TICTACTOE_H
#define _TICTACTOE_H

class TicTacToeGame {
	private:
		/*
		 * Board of game 
		 */
		static char mBoard[10];

		/*
		 * Check for available space (move)
		 */
		static bool CheckForSpace(int position);
	public:
		/*
		 * Choose player
		 */
		static std::string ChoosePlayer();

		/*
		 * Choose player's choice
		 */
		static char PlayerChoice(std::string player);

		/*
		 * Initialize the board
		 */
		static void InitBoard();

		/*
		 * Display the board
		 */
		static void DisplayTheBoard();

		/*
		 * Move the player choice
		 */
		static int PlayerMove(std::string player);

		/*
		 * Mark the player's move on the board
		 */
		static void MarkPlayerMove(int position, char mark);

		/*
		 * Check for the win of the player
		 */
		static bool CheckForWin(char mark);

		/*
		 * Check for the draw of the game
		 */
		static bool CheckForDraw();

		/*
		 * Check for replay the game
		 */
		static bool Replay();
};

#endif /* _TICTACTOE_H */
