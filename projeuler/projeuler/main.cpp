//
//  main.cpp
//  projeuler
//
//  Created by Varun Ved on 6/3/14.
//  Copyright (c) 2014 Varun Ved. All rights reserved.
//
/*
 *If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 
 Find the sum of all the multiples of 3 or 5 below 1000.
 
 
 */

#include <iostream>
#include <stdlib.h>
int calls;




double myfib(int x)
{
    for (int x = 0 ; x < 4000000 ; x+x)
    {
        
        
        if(x% 2 != 0)
        {
            return myfib(x+x);
            
        }
        
    }
    return calls;
}
int main(int argc, const char * argv[])
{
    int num = 1;
    double fibc = myfib(num);
    
    std::cout << fibc;
    
}
