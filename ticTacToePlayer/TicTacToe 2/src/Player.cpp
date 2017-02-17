/*
 * Player.cpp
 *
 *  Created on: Apr 22, 2014
 *      Author: williamhooper
 */

#include "Player.h"

Player::Player(string name, Board::Pieces piece, Board &board) :
		name(name), piece(piece), board(board) {

}

Player::~Player() {

}

