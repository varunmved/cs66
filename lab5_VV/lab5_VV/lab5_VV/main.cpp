//
//  main.cpp
//  lab4_VV
//
//  Created by Varun Ved on 2/18/14.
//  Copyright (c) 2014 Varun Ved. All rights reserved.

#include <iostream>
#include <stdexcept>
#include "Time.h"
//#include "Time.cpp"


int main(int argc, const char * argv[])
{
    
    Time t;
    Time t2(5,4,3,2,1);
    Time t3(6,7,8,9,10);
    Time t4(1,3,5,7,9);
    Time t5(1,3,5,7,9);
    Time t6(26,76,5000,7,9);
    
    t.setHours(2);
    t.setMinutes(34);
    t.setSeconds(12);
    t.setMilli(321);
    t.setMicros(1);
    
    cout << "t: " << t << endl;
    cout << "t2: " << t2 << endl;
    cout << "t3: " << t3 << endl;
    cout << "t4: " << t4 << endl;
    cout << "t5: " << t5 << endl << endl;
    cout << "t6: " << t6 << endl << endl;
    
    cout << "t+ t2:" <<endl << t.operator+(t2) << endl << endl;
    cout << "t2- t:" <<endl << t2.operator-(t) << endl << endl;
    
    bool bg = operator >(t2,t3);
    bool bg2 = operator==(t4,t5);
    cout << "is t2 greater than t3? " << bg << endl;
    cout << "are t4 and t5 equal? " << bg2 << endl;
    
    t.operator=(t4);
    cout << "\nif my copy constructor worked, t should now print t4: " << endl << t << endl;
    
    
    return 0;
}

