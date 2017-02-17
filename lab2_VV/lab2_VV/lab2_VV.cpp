//
//  main.cpp
//  lab2_VV
//
//  Created by Varun Ved on 2/4/14.
//  Copyright (c) 2014 Varun Ved. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include  <tgmath.h>

using namespace std;

int main(int argc, const char * argv[])
{

    // lets declare variables
    
    
    int numOfIn = 0;// number of inputs the user wants
    double value;// users input value
    
    //the rest of the variables are values i use in my equations that I declare and initialize here
    
    double avg = 0;
    double sum = 0;
    double stdDev = 0;
    double tempStdDev = 0;
    
    //create vector, leave the size unknown since we'll use push_back
    vector<double> inpVect;
    
    
    //---------ask user for how many numbers they want------------//
    
    
    cout << "Please enter the number of values you would like to calculate: ";
    cin >> numOfIn; //read in their suggested size
    if (numOfIn < 0) {
        cout << "Sorry that's not a valid int, please try again";
    }
    else;
    
    
    //---------get the values from the user----//
    
    for(int x = 0; x < numOfIn; x++)// use the vector here to store each value up until it reaches the user limit
    {
        cout << "Enter Value: ";
        cin >> value;
        inpVect.push_back(value);//push back to put the values at the end
        
    }
    
    
    //------get the average-----//
    
    for(int i = 0; i < numOfIn; i++)
    {
        sum += inpVect[i];//summation of every term in the vector
    }
    
    avg = sum/numOfIn;// simple avg formula
    cout << "avg: " << avg << "\n";// display avg
    
    
    //------get the std dev-----//
    
    for(int i = 0; i < numOfIn; i++)
    {
        tempStdDev += pow((inpVect[i] - avg),2);// this for loop creates sum in the (x-x(i))^2 part of the formula
        
    }
    
    stdDev = pow (tempStdDev/(numOfIn-1), .5);// the standard deviation equation
    
    cout  << "std dev: " << stdDev;//display std dev
    
    
    
    return 0;
}

