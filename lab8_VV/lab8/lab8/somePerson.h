//
//  somePerson.h
//  lab8
//
//  Created by Varun Ved on 4/1/14.
//  Copyright (c) 2014 Varun Ved. All rights reserved.
//
/*
 *
 For this assignment we are going to do some file IO. Attached is a database file with comma separated values. The values are in the format (index, first name, last name, address, city, state, zip). There are duplicates in this database file. Read in the database, remove the duplicates, and write a new comma separated database file without the duplicates. The index field in the new file must be sequential start at one.
 
 Some suggestions:
 
 Create a class to hold a single data record. Override the = operator to ease comparison.
 Use a vector to contain your data records.
 Create a function to read a single data record and return your class.
 While the provided database file contains valid data be aware of potential errors from bad data records.
 */

#ifndef __lab8__somePerson__
#define __lab8__somePerson__

#include <iostream>
using namespace std;

class somePerson
{
public:
    struct recordInfo // a struct containing what is held in the CSV files
    {
    int index;
    string fname;
    string lname;
    string streetAdd;
    string city;
    string state;
    string zip;
    };
    
    somePerson();

//bool operator ==(const somePerson& lhs , const somePerson& rhs); //= operator

};


#endif /* defined(__lab8__somePerson__) */