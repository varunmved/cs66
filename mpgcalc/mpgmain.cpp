/* 
 * File:   mpgmain.cpp
 * Author: Varun
 *
 * Created on January 30, 2014, 7:00 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double fc=0;
    double mpy=0;
    double mpg=0;
    //double milesc;
    //double milesh;
    //int fc;
    cout << "please enter fuel cost";
    cin >> fc;
    cout << "\nplease enter miles per year:";
    cin >> mpy;
    cout << "\nplease enter mpg";
    cin >> mpg;
    //cout << "\nplease enter amount of mixed city and highway driving\n as two space separated decimal values";
    //cin >> milesc, milesh;
    
    
    double totcost = 0;
    totcost = (mpy/mpg)*fc;
    
    //cout << totcost; 
    
    

    return totcost;
}

