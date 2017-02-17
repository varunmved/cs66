/*
 * ComputerPlayer.h
 *
 *  Created on: Apr 22, 2014
 *      Author: williamhooper
 */

#ifndef COMPUTERPLAYER_H_
#define COMPUTERPLAYER_H_

#include "Player.h"

class ComputerPlayer: Player {
public:
	ComputerPlayer(string name, Board::Pieces piece, Board board);
	virtual ~ComputerPlayer();
};

#endif /* COMPUTERPLAYER_H_ */
