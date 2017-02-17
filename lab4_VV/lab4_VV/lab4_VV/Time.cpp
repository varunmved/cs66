/*
 * Time.cpp
 *
 *  Created on: Jan 1, 2014
 *      Author: williamhooper
 
 In C++ the .h file defines the class methods and variables and the .ccp file contains the implementation of the methods. The code was missing the getters and setters for the hours, minutes, etc. and missing the Time(hours, minutes, seconds milli, micro) constructor. In main.ccp line 17 should be Time t; The timeCheck() was good but should have been a private method since it was for the use only inside the class.

 */

#include "Time.h"

Time::Time()
{
	
    hours = 1;
    minutes = 1;
    seconds = 1;
    millis = 1;
    micros = 1;
     

}
/*
Time::Time(const Time& t)
{
    this -> hours = t.hours;
    this -> minutes = t.minutes;
    this -> seconds = t.seconds;
    this -> millis = t.millis;
    this -> micros = t.micros;
    
    
}
*/
 
Time::Time(int hrs, int mins, int secs, int  mill, int micr)
{
    hours = hrs;
    minutes = mins;
    seconds = secs;
    millis = mill;
    micros = micr;
}

int Time::getHours()
{
    return hours;
}

void Time::setHours(int hrs)
{
    if(hours > 12 && hours <= 23)
    {
        //bool value2 = true;
        Time::set24Hour(true);
        
    }
    else Time::set24Hour(false);
    
    if (hrs > 24)
    {
        cerr << "sorry that's not a valid hour: /n";
        
    }
    else hours = hrs;
}

int Time::getMinutes()
{
    return minutes;
}

void Time::setMinutes(int mins)
{
    if (mins > 60)
    {
        cerr << "sorry that's not a valid minute count: /n";
        
    }
    else minutes = mins;
}

int Time::getSeconds()
{
    return seconds;
}

void Time::setSeconds(int secs)
{
    if (secs > 60)
    {
        cerr << "sorry that's not a valid second count: /n";
        
    }
    else seconds = secs;
}

int Time::getMilli()
{
    return millis;
}

void Time::setMilli(int mill)
{
    if (mill > 1000)
    {
        cerr << "sorry that's not a valid millisecond count: /n";
        
    }
    else millis= mill;
}

int Time::getMicros()
{
    return micros;
}

void Time::setMicros(int micr)
{
    if (micr > 1000)
    {
        cerr << "sorry that's not a valid microsecond count: /n";
        
    }
    else micros = micr;
}

long Time::asLong()
{
    long longTime = (hours*3600000000 + minutes*60000000 + seconds*1000000 + millis*1000) + micros;
    return longTime;
    
}

/**
 * Display as a string
 */


stringstream Time::toString()
{
    stringstream timeString;
    timeString << hours << ":" << minutes << ":" << seconds << ":" << millis << "." << micros;
    return timeString;
    
    
}


/**
 * Enable/disable 24 hour time
 */
void Time::set24Hour(bool value)

{
    isHour = value;
}
/**
 * Return true if 24 hour time is enabled
 */

bool Time::is24Hour()
{
    return true;
}




/*
Time::~Time()
{
	// TODO Auto-generated destructor stub
}

long Time::asLong() const
{
    return 0L;
}

*/