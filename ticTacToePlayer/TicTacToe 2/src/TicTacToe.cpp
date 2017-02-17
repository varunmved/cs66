//============================================================================
// Name        : TicTacToe.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Board.h"
#include "TerminalPlayer.h"
#include "ComputerPlayer.h"

using namespace std;

int main() {
	Board myBoard;

	TerminalPlayer playerA("player A", Board::X, myBoard);
	ComputerPlayer playerB("player B", Board::O, myBoard);

	// clear the board

	// Game Loop

	// output the board

	// get player A's next move

	// output the board

	// check for a winner

	// if there is a winner, output message and end the game

	// if no winner, then check if the board is full

	// if board is full, output message and end the game

	// get player B's next move

	// if there is a winner, output message and end the game

	// if no winner, then check if the board is full

	// if board is full, output message and end the game

	// goto start of Game Loop

	return 0;
}
