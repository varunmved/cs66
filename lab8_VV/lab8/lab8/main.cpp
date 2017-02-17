//
//  main.cpp
//  lab8
//
//  Created by Varun Ved on 4/1/14.
//  Copyright (c) 2014 Varun Ved. All rights reserved.
//

/*
 Some suggestions:
 
 Create a class to hold a single data record. Override the = operator to ease comparison.
 Use a vector to contain your data records.
 Create a function to read a single data record and return your class.
 While the provided database file contains valid data be aware of potential errors from bad data records.
 */

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    class recordInfo // a class containing what is held in the CSV files
    {
    public:
        //string index;
        string fname;
        string lname;
        string streetAdd;
        string city;
        string state;
        string zip;
    };
    
    std::vector <string> list; //a vector string of each line
    std::vector < recordInfo> records; // a vector of type recordInfo that contains all the records
    
    ifstream  data("database.csv"); //input the file
    
    string line;//one line from the csv file
    while(getline(data,line))//while loop to get this line from the file
    {
        stringstream  lineStream(line);
        string  cell;
        list.clear();//clear the line
        while(getline(lineStream,cell,','))//parse each line by each csv and sort each value as string cell
        {
            list.push_back(cell);//push each csv back on the line
            
        }
        
        struct recordInfo thisInfo;//sort each csv by fname,lname, etc. into the struct thisInfo
        thisInfo.fname = list[1];
        thisInfo.lname = list[2];
        thisInfo.streetAdd = list[3];
        thisInfo.city = list[4];
        thisInfo.state = list[5];
        thisInfo.zip = list[6];
        
        /*
         while(strcmp(thisInfo, list) !=0){
         records.push_back(thisInfo);
         
         Should i remove duplicates here?
         }
         */
    }
    
    data.close();//close the file
    
    /*
     for(int i = 0 ; i < records. size() ; i++)
     {
     should I remove duplicates here?
     }
     */
    
    ofstream data2("/Users/Varun/Documents/database/database2.csv");
    // you probably need to change the destination for your file
    
    for (int index = 0; index < records.size(); ++index)//print out the new file
    {
        data2  << index+1 << "," << records[index].fname << "," << records[index].lname << "," << records[index].streetAdd << "," << records[index].city << "," << records[index].state << "," << records[index].zip <<    '\n';
    }
    data2.close();//close the new file
    
}


