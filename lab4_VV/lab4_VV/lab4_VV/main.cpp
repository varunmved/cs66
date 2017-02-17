//
//  main.cpp
//  lab4_VV
//
//  Created by Varun Ved on 2/18/14.
//  Copyright (c) 2014 Varun Ved. All rights reserved.
// In C++ the .h file defines the class methods and variables and the .ccp file contains the implementation of the methods. The code was missing the getters and setters for the hours, minutes, etc. and missing the Time(hours, minutes, seconds milli, micro) constructor. In main.ccp line 17 should be Time t; The timeCheck() was good but should have been a private method since it was for the use only inside the class.

#include <iostream>
#include "Time.h"
//#include "Time.cpp"


int main(int argc, const char * argv[])
{
    
    Time t;
    Time t2(5,4,3,2,1);
    
    t.setHours(2);
    t.setMinutes(34);
    t.setSeconds(12);
    t.setMilli(321);
    t.setMicros(1);
    long lLength = t.asLong();
    cout << lLength << "\n";
    long l2 = t2.asLong();
    cout << l2 << "\n";
    
    stringstream a = t.toString();
    stringstream b = t2.toString();
    
    
    cout << a.str() << "\n";
    cout << b.str();
    //cout<< "\n" << lLength;
    
    
    return 0;
}

