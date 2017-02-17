//
//  main.cpp
//  lab3_VV
//
//  Created by Varun Ved on 2/11/14.
//  Copyright (c) 2014 Varun Ved. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include <tgmath.h>

using namespace std;


double avgCalc(vector <double> inpVect, int numOfIn)
{
    //------get the average-----//
    double sum = 0;
    for(int i = 0; i < numOfIn; i++)
    {
        sum += inpVect[i];//summation of every term in the vector
    }
    
    double avg = 0;
    avg = sum/numOfIn;// simple avg formula
    
    
    return avg;
    
}


double squareCalc(double value)
{
    double square = pow(value, 2);
    return square;
}


double stdDevCalc(double avg, vector<double> inpVect, int numOfIn)
{
    //------get the std dev-----//
    
    double tempStdDev = 0;
    for(int i = 0; i < numOfIn; i++)
    {
        tempStdDev += pow((inpVect[i] - avg),2);// this for loop creates sum in the (x-x(i))^2 part of the formula
        //tempStdDev += ((square - avg));// this for loop creates sum in the (x-x(i))^2 part of the formula
        
    }
    double stdDev = 0;
    stdDev = pow (tempStdDev/(numOfIn-1), .5);// the standard deviation equation
    
    
    
    

    return stdDev;
}
int main(int argc, const char * argv[])
{
    
    // ------lets declare variables--------------//
    
    
    int numOfIn = 0;// number of inputs the user wants
    //double value;// users input value
    
    //create vector, leave the size unknown since we'll use push_back
    std::vector<double> inpVect;
    
    
    //---------ask user for how many numbers they want------------//
    
    
    cout << "Please enter the number of values you would like to calculate: ";
    cin >> numOfIn; //read in their suggested size
    if (numOfIn < 0) {
        cout << "Sorry that's not a valid int, please try again\n";
    }
    else;
    
    
    //---------get the values from the user----//
    double value = 0;
    double* square = new double[numOfIn];//an array of doubles of each value that the user enters, gets passed to the square function
    for(int x = 0; x < numOfIn; x++)// use the vector here to store each value up until it reaches the user limit
    {
        cout << "Enter Value: ";//ask for a value
        cin >> value;// read the value in
        if(cin.fail())//if the number they enter isn't a valid int.
        {
            cout << "sorry, that's not a value\n";
            exit(1);//exit the program
        }
        inpVect.push_back(value);//push back to put the values at the end
        square[x] = squareCalc(value);//
    }
    
    double avg = avgCalc(inpVect, numOfIn);//call the avgCalc function to get the average
    cout << "avg: " << avg << "\n";// display avg
    
    double stdDev2 = stdDevCalc(avg, inpVect, numOfIn);//call the stdDevCalc function to get the stdDev
    cout  << "std dev: " << stdDev2;//display std dev
    
    
    
    return 0;
    
    
}

