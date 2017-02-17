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
#include "TerminalPlayer.h"
//#include "Board.cpp"
int main(int argc, const char * argv[])
{
    
    // insert code here...
    Board b;
    
     b.set(0, 0, Board::X);
     b.set(0, 1, Board::X);
     b.set(0, 2, Board::X);
     b.set(1, 1, Board::X);
     b.set(1, 0, Board::X);
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
     
     cout << b;
    
    
    /*
    //terminal player practice
    
    Board myBoard;
    TerminalPlayer playerA("A", Board::X, myBoard);
    TerminalPlayer playerB("B", Board::O, myBoard);
    
    myBoard.clear();
    cout << myBoard << endl;
    //char s = 0;
    
    //Game loop
    while(myBoard.isFull() != true)
    {
        
        //output board
        
        
        //get player A's next move
        playerA.nextMove();
        cout << myBoard << endl;
        
        
        //output the board
        
        //check for a winner
        
        //if no winner, then check if board is full
        
        if(myBoard.winner() != Board::Empty && myBoard.isFull() == false)
        {
            //output winner
            cout << " And the winner is: " <<(myBoard.winner() == Board::X ? "X": "O");
            break;
            
        }
        
        //if board is full output the board and draw
        else if(myBoard.winner() == Board::Empty && myBoard.isFull() == true)
        {
            //output draw
            cout << "that's a draw!";
            break;
        }
        
        //get player B's next move
        
        //output the board
        
        //check for a winner
        
        //if no winner, then check if board is full
        
        playerB.nextMove();
        
        cout << myBoard << endl;
        
        if(myBoard.winner() != Board::Empty && myBoard.isFull() == false)
        {
            //output winner
            cout << " And the winner is: " <<(myBoard.winner() == Board::X ? "X": "O") << "\n";
            break;
            
        }
        
        //if board is full output the board and draw
        else if(myBoard.winner() == Board::Empty && myBoard.isFull() == true)
        {
            //output draw
            cout << "that's a draw!";
            break;
        }
        
        //goto start of game loop
        
    }
*/
    
     
}

