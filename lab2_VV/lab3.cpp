//
//  lab3.cpp
//  lab2_VV
//
//  Created by Varun Ved on 2/11/14.
//  Copyright (c) 2014 Varun Ved. All rights reserved.

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include  <tgmath.h>

using namespace std;

int main(int argc, const char * argv[])
{
    
    // lets declare variables
    int numOfIn = 0;
    double value;
    double avg = 0;
    double sum = 0;
    double stdDev = 0;
    //double variance = 0;
    double tempStdDev = 0;
    //double tempStdDev2 = 0;
    
    
    
    //---------ask user for how many numbers they want------------//
    cout << "Please enter the number of values you would like to calculate: ";
    cin >> numOfIn; //read in their suggested size
    if (numOfIn < 0) {
        cout << "Sorry that's not a valid int, please try again";
    }
    else;
    
    //cin >> numOfIn; //read in their suggested size
    
    std::vector<double>inpVect(numOfIn);//create vector of the size
    
    
    //---------get the values from the user----//
    
    int count = 0;
    for(int x = 0; x < numOfIn; x++)
    {
        cout << "Enter Value: ";
        cin >> value;
        inpVect.push_back(value);
        count = count + 1;
        
    }
    cout << count << "count \n";
    
    /*
     int count = 0;
     
     while(numOfIn != count)
     {
     
     cout << "enter value: ";
     cin >> value;
     inpVect.push_back(value);
     count = count + 1;
     
     }
     */
    
    
    
    //------get the average-----//
    
    for(int i = 0; i < numOfIn; i++)
    {
        sum += inpVect[i];
        cout << inpVect[i]<< "\n";
    }
    cout << "\n";
    cout << sum << "sum \n";
    
    avg = sum/numOfIn;
    
    cout << avg << "avg \n";
    
    
    
    //------get the std dev-----//
    for(int i = 0; i < numOfIn; i++)
    {
        tempStdDev = pow((inpVect[i] - avg),2);
        
    }
    cout << tempStdDev << "temp std dev \n";
    
    stdDev = sqrt (tempStdDev/numOfIn);
    
    cout << stdDev << "std dev \n";
    
    
    
    return 0;
}

