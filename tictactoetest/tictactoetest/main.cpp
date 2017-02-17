//
//  main.cpp
//  TicTacToe2
//
//  Created by Varun Ved on 4/29/14.
//  Copyright (c) 2014 Varun Ved. All rights reserved.
//
/*

 
 */


#include <iostream>
#include "Board.h"
//#include "Board.cpp"
int main(int argc, const char * argv[])
{
    
    // insert code here...
    Board b;
    
    b.set(0, 0, Board::Empty);
    b.set(0, 1, Board::X);
    b.set(0, 2, Board::X);
    b.set(1, 1, Board::X);
    b.set(1, 0, Board::Empty);
    b.set(1, 2, Board::O);
    b.set(2, 1, Board::O);
    b.set(2, 2, Board::O);
    b.set(2, 0, Board::O);
    
    bool full = b.isFull();
    cout << full<< " isFull \n";
    
    int mySize = b.getBoardSize();
    cout<< mySize<< " mysize \n";
    
    Board::Pieces myWinner = b.winner();
    cout <<myWinner<< " Winner \n";
    
    bool emptyArrayTest = b.isEmpty(0,0);
    cout <<emptyArrayTest<< " isEmpty \n";
    
    bool emptyPieceTest = b.isEmpty(Board::X);
    cout <<emptyPieceTest<< " isEmpty \n";
    
    bool boardFull = b.isFull();
    cout << boardFull<< " board Full \n";
    cout << "\n\n";
    
    cout << b;
    
    
    return 0;
}

