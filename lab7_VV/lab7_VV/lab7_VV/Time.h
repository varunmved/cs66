/*
 * Time.h
 *
 *  Created on: Jan 1, 2014
 *      Author: williamhooper
 In C++ the .h file defines the class methods and variables and the .ccp file contains the implementation of the methods. The code was missing the getters and setters for the hours, minutes, etc. and missing the Time(hours, minutes, seconds milli, micro) constructor. In main.ccp line 17 should be Time t; The timeCheck() was good but should have been a private method since it was for the use only inside the class.
 */

#ifndef TIME_H_
#define TIME_H_

#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>      // std::out_of_range


using namespace std;

/**
 * Time class
 *
 * The Time class contains time as hours:minutes:seconds:milliseconds.microseconds.
 */

//const int HOURS = 60;

class Time
{
public:
	Time();
	Time(int hours, int minutes, int seconds, int millis, int micro);
    virtual ~Time();
    
    
    Time(const Time & t); //copy instantiation for the copy assignment 6
    //virtual ~Time(); //for assignment 6
    
	/**
	 * Implement getter and setter methods
	 */
    int getHours();
    
    void setHours(int hours);
    
    int getMinutes();
    
    void setMinutes(int minutes);
    
    int getSeconds();
    
    void setSeconds(int seconds);
    
    int getMilli();
    
    void setMilli(int millis);
    
    int getMicros();
    
    void setMicros(int micros);
	/**
	 * Return time as a long
	 */
    
	long asLong() const;
    
	/**
	 * Display as a string
	 */
    
    
	stringstream toString();
	
    /**
	 * Enable/disable 24 hour time
	 */
	void set24Hour(bool value);
    /**
	 * Return true if 24 hour time is enabled
	 */
    
	bool is24Hour();
    
    
    //friend bool operator <(const Time&, const Time& s);
    
    //Time& operator =( const Time& rhs ); for Assignment 6
    
    /**
	 * Output a Time to an output stream as hours:minutes:seconds:milliseconds.microseconds
	 */
	friend std::ostream& operator<< (std::ostream&, const Time&); // Output a Time to an output stream
    
	/**
	 * Define ordering relationships
	 */
	friend bool operator <(const Time&, const Time&);
	friend bool operator >(const Time&, const Time&);
	friend bool operator ==(const Time &a, const Time &b);
    
	/**
	 * Define addition and subtraction
	 */
    Time operator +(const Time&) const;
    Time operator -(const Time&) const;
    
    //copy assignment
    Time& operator =( const Time& rhs );
    
    
private:
	/**
	 * Private members go here
	 */
    int hours;
    int minutes;
    int seconds;
    int millis;
    int micros;
    bool isHour;
    
};

#endif /* TIME_H_ */