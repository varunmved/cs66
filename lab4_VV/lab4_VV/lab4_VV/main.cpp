//
//  main.cpp
//  lab4_VV
//
//  Created by Neema on 2/18/17.
// In C++ the .h file defines the class methods and variables and the .ccp file contains the implementation of the methods. The code was missing the getters and setters for the hours, minutes, etc. and missing the Time(hours, minutes, seconds milli, micro) constructor. In main.ccp line 17 should be Time t; The timeCheck() was good but should have been a private method since it was for the use only inside the class.

#include <iostream>
#include "Time.h"

int main(int argc, const char * argv[])
{
    
  Time::Time t;
  Time::Time t3(1487443327);
  Time::Time t2(5,4,3,2,1);
    
    t.Time::setHours(2);
    t.Time::setMinutes(34);
    t.Time::setSeconds(12);
    t.Time::setMilli(321);
    t.Time::setMicros(1);
    long lLength = t.Time::asLong();
    std::cout << lLength << "\n";
    long l2 = t2.Time::asLong();
    std::cout << l2 << "\n";
    
    std::string a = t.Time::toString();
    std::string b = t2.Time::toString();
    
    std::cout << a << "\n";
    std::cout << b;
    
    
    return 0;
}

