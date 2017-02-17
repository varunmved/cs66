//
//  main.cpp
//  hello world
//
//  Created by Varun Ved on 2/4/14.
//  Copyright (c) 2014 Varun Ved. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

//#include <iostream>
//#include <iomanip>
//#include <fstream>
//#include <string>


int main(int argc, const char * argv[])
{
    
    string name = ""; //create an empty string to first declare the name
    
    
    cout << "Hello, World!\n"; // initially display hello world!
    
    cout<< "Please enter your name: "; // ask user for their name
    
    cin>> name; //take in the name to name name;
    
    cout << "\nHello "; //display hello
    cout<< name; // add the name
    
    return 0;
}


