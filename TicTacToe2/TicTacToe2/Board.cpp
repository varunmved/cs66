/*
 * Board.cpp
 *
 *  Created on: Apr 22, 2014
 *      Author: williamhooper
 */

//Varun Ved

#include "Board.h"

Board::Board()
{
    clear();
}
// TODO Auto-generated constructor stub

bool Board::isEmpty(int myRow, int myCol) const
{
    if(myRow == Empty && myCol == Empty)
    {
        return true;
    }
    else return false;
}

bool Board::isEmpty(Pieces myValue) const
{
    if (myValue == Empty)
        return true;
    else return false;
}

Board::Pieces Board::pieceAt(int myRow, int myCol) const
{
    
    return board[myRow][myCol];
}

Board::Pieces Board::emptyPiece(int myRow, int myCol) const
{
    return Empty;
}

Board::Pieces Board::winner() const
{
    if(pieceAt(0,0) == pieceAt(0,1) == pieceAt(0, 2) && pieceAt(0, 1) != Empty)
        return pieceAt(0,0);
    else if(pieceAt(1, 0)== pieceAt(1, 1) == pieceAt(1, 2)&& pieceAt(1, 1) != Empty)
        return pieceAt(1,0);
    else if(pieceAt(2, 0) == pieceAt(2, 1)  == pieceAt(2, 2)&& pieceAt(2, 1) != Empty)
        return pieceAt(2,0);
    else if(pieceAt(0, 0) == pieceAt(1, 0)== pieceAt(2, 0)&& pieceAt(0, 0) != Empty)
        return pieceAt(0,0);
    else if(pieceAt(0, 1)== pieceAt(1, 1)== pieceAt(2, 1)&& pieceAt(0, 1) != Empty)
        return pieceAt(0,1);
    else if(pieceAt(0, 2)== pieceAt(1, 2)== pieceAt(2, 2)&& pieceAt(0, 2) != Empty)
        return pieceAt(0,1);
    else if(pieceAt(0,0) == pieceAt(1,1) == pieceAt(2,2)&& pieceAt(0, 0) != Empty)
        return pieceAt(1,1);
    else if(pieceAt(0,2) == pieceAt(1,1) == pieceAt(2,0)&& pieceAt(0, 2) != Empty)
        return pieceAt(1,1);
    else return Empty;
    
}

int Board::getBoardSize() const
{
    return 3;
}

void Board::clear()
{
    for(int i = 0; i < BoardSize ; i++)
    {
        for (int j =0; j < BoardSize; j++) {
            
            board[i][j] = Empty;//nope
            
        }
    }
}

bool Board::isFull()const
{
    for(int i = 0 ; i < BoardSize ; i++)
    {
        for (int j = 0; j < BoardSize; j++) {
            
            if(pieceAt(i,j) == Empty)
                return false;
        }
    }
    return true;
}

void Board::set(int myRow, int myCol, Pieces myP)
{
    board[myRow][myCol] = myP;
}

ostream& operator<<(ostream& out, const Board& b)
{
    
    //out << Board.pieceAt(0,0) << "  |  " << Board.pieceAt(0,1) << "  |  " << Board.pieceAt(0,2) << "\n" << "----|-----|----" << "\n" << Board.pieceAt(1,0) << "  |  " << Board.pieceAt(1,1) << "  |  " << Board.pieceAt(1,2) << "\n"<< "----|-----|----" << "\n" << Board.pieceAt(2,0) << "  |  " << Board.pieceAt(2,1) << "  |  " << Board.pieceAt(2,2)
    
    return out;
}

Board::~Board() {
	// TODO Auto-generated destructor stub
}

/*
 0,0| 0,1 | 0,2
 ---|-----|----
 1,0| 1,1 | 1,2
 ---|-----|----
 2,0| 2,1 | 2,2
 
 X  |  X  |  X
----|-----|----
 X  |  X  |  X
----|-----|----
 X  |  X  |  X

 
 */