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
    /*
     for (int i = 0; i < 3; i++) {
     for(int j = 0; j < 3; j++)
     {
     if (pieceAt(i, j) == X) {
     
     }
     }
     }
     */
}
// TODO Auto-generated constructor stub

bool Board::isEmpty(int myRow, int myCol) const
{
    if(pieceAt(myRow, myCol) == Empty)
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
    
    if (board[myRow][myCol] == X)
        return X;
    else if(board[myRow][myCol] == O)
        return O;
    else return Empty;
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
            
            if(isEmpty(i, j) == true)
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
    /*
     out << (b.board[0,0]) << "  |  " << b.board[0,1] << "  |  " << b.board[0,2] << "\n" << "----|-----|----" << "\n" << b.board[1,0] << "  |  " << b.board[1,1] << "  |  " << b.board[1,2] << "\n"<< "----|-----|----" << "\n" << b.board[2,0] << "  |  " << b.board[2,1] << "  |  " << b.board[2,2];
     
     */
    /*
     for (int i = 0; i < BoardSize; i++)
     {
     for(int j = 0; j < BoardSize; j++)
     {
     out << b[i][j] << "|"
     out << "--|------|---- "<<endll
     }
     }
     
     */
    for(int row =0; row < 3; row++)
    {
        for (int i=0; i < 3; i++) {
            out << "==";
            
        }
        out << "=" <<endl;
        for(int col=0 ; col < 3; col++)
        {
            switch(b.board[row][col])
            {
                case Board::X:
                    out << " X";
                    break;
                case Board::O:
                    out <<  " O";
                    break;
                    
                default:
                    out << " -";
                    break;
            }
            
        }
         out  << endl;
    }
    
    return out;
}

Board::~Board() {
	// TODO Auto-generated destructor stub
}
/*
string pieceToString(Board::Pieces p) {
    switch (p) {
        case Board::X:
            return "X";
        case Board::O:
            return "O";
            
        default:
            return "-";
    }
 
}
*/

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