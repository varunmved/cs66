/*
 * TerminalPlayer.cpp
 *
 *  Created on: Apr 22, 2014
 *      Author: williamhooper
 */

#include "TerminalPlayer.h"

TerminalPlayer::TerminalPlayer(string name, Board::Pieces piece, Board &board) :
		Player(name, piece, board) {

}

TerminalPlayer::~TerminalPlayer() {

}

void TerminalPlayer::nextMove() {

	while (true) {
		// output a prompt

		// accept input

		// check for errors

		// if everything is good, then

		//	board.set(row, col, this->piece);
		//	break;

		// if everything is not good, then

		// output error message and start over
	}
}
