/*
 * TerminalPlayer.cpp
 *
 *  Created on: Apr 22, 2014
 *      Author: williamhooper
 */

#include "TerminalPlayer.h"

TerminalPlayer::TerminalPlayer(string name, Board::Pieces piece,
                               Board::Board board) :
Player(name, piece, board) {
	// TODO Auto-generated constructor stub
    
}

void TerminalPlayer::nextMove()
{
    while(true)
    {
        
        //output a prompt
        
        cout << "piece please make a move by entering a (row,col) \n";

        int myRow, myCol;
        //Board::Pieces P;
        //Board::Pieces myPiece;
        
        //accept input
        cin >> myRow >> myCol;
        //cout << b;
        //board.set(myRow, myCol, P);
        
        //check for errors
        if(myRow < 3 || myCol < 3)
        {
            
            //if everything is good
            
            cout << "yup placed \n ";
            board.set(myRow, myCol, this-> piece);

            break;
        }
        
        //if everything is not good then
        //output error message and start over
        else
        {
            cerr << "sorry that's not a valid location \n";
            
        }
        
    }
    
}

TerminalPlayer::~TerminalPlayer() {
	// TODO Auto-generated destructor stub
}

