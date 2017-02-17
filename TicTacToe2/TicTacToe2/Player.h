/*
 * Player.h
 *
 *  Created on: Apr 22, 2014
 *      Author: williamhooper
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>
#include "Board.h"

using namespace std;

class Player {
public:
	Player(string name, Board::Pieces piece, Board Board);
	virtual ~Player();
    
    virtual void nextMove() = 0; //saying that the next move is a virtual method, the implementation of move in this class is nothing. 
    
    friend ostream& operator<<(ostream& out, const Player& b);
    

protected:
    string name;
    Board::Pieces piece;
    Board Board;
};

#endif /* PLAYER_H_ */
