/*
 * Time.cpp
 *
 *  Created on: Jan 1, 2014
 *      Author: williamhooper
 
 In the constructor and in the setter methods it is possible for the user to provide an out-of-range value.
 It just so happens that C++ has many built in exceptions we can use in our program and one is the out-of-range exception.
 You can read more about this exception here:
 */
#include "Time.h"
#include <stdexcept>

class out_of_range : public logic_error {
public:
    explicit out_of_range (const string& what_arg);
};

Time::Time()
{
	
    hours = 1;
    minutes = 1;
    seconds = 1;
    millis = 1;
    micros = 1;
    
}

//applying to copy constructor
Time::Time(const Time& t)
{
    this -> hours = t.hours;
    this -> minutes = t.minutes;
    this -> seconds = t.seconds;
    this -> millis = t.millis;
    this -> micros = t.micros;
    
}

//constructor for mutliple inputs
Time::Time(int hrs, int mins, int secs, int  mill, int micr)
{
    /*
     hours = hrs;
     minutes = mins;
     seconds = secs;
     millis = mill;
     micros = micr;
     */
    setHours(hrs);
    setMinutes(mins);
    setSeconds(secs);
    setMilli(mill);
    setMicros(micr);
}

//gets the hours
int Time::getHours()
{
    return hours;
}


//sets the hours based on the input
void Time::setHours(int hrs)
{
    //are the hours valid?
    if(hours > 12 && hours <= 23)
    {
        Time::set24Hour(true);
        
    }
    else Time::set24Hour(false);
    
    //error statement if they aren't
    try {
        if (hrs > 24)
            
            throw std::out_of_range ("hours out of range");
        else hours = hrs;
        
    }
    catch(std::out_of_range){
    }
    
}
int Time::getMinutes()
{
    return minutes;
}

void Time::setMinutes(int mins)
{
    //check if the minutes are valid
    try {
        if (mins > 60)
            
            throw std::out_of_range ("mins out of range");
        else minutes = mins;
        
    }
    catch(std::out_of_range){};

}

int Time::getSeconds()
{
    return seconds;
}

void Time::setSeconds(int secs)
{
    //check if the seconds are valid
    //check if the minutes are valid
    try {
        if (secs > 60)
            
            throw std::out_of_range ("secs out of range");
        else seconds = secs;
        
    }
    catch(std::out_of_range){};
}

int Time::getMilli()
{
    return millis;
}

void Time::setMilli(int mill)
{
    //check if the millis are valid (under 1k)
    try {
        if (mill > 1000)
            
            throw std::out_of_range ("secs out of range");
        else millis = mill;
        
    }
    catch(std::out_of_range){};
}

int Time::getMicros()
{
    return micros;
}

void Time::setMicros(int micr)
{
    //check if the micros are valid (under 1k)
    try {
        if (micr > 1000)
            
            throw std::out_of_range ("secs out of range");
        else micros = micr;
        
    }
    catch(std::out_of_range){};
}



long Time::asLong() const
{
    //multiply each hour/min/sec with the appropriate conversion to microseconds
    
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





/**
 * Define ordering relationships
 */
bool operator <(const Time& time1, const Time& time2)
{
    //check the most significant value (hours) first, if that's greater, there's no need to go on, just return false
    //keep doing that with less significant values
    if(time1.hours > time2.hours)
    {
        return false;
    }
    else if(time1.minutes > time2.minutes)
    {
        return false;
    }
    else if(time1.seconds > time2.seconds)
    {
        return false;
    }
    else if(time1.millis > time2.millis)
    {
        return false;
    }
    else if(time1.micros > time2.micros)
    {
        return false;
    }
    else return true;
    
}

bool operator >(const Time& time1, const Time& time2)
{
    //since we already wrote the opposite with the < operator, we can just
    //check if that was false, return true
    if(operator <(time1,time2) == false)
        return true;
    
    //else just return false
    else return false;
    
    
    //or couldn't i just say if the > operator is false?
    
}

bool operator ==(const Time& time1, const Time& time2)
{
    //if the hours/mins/secs etc. of the two passed times are equal return true
    
    if(time1.hours == time2.hours && time1.minutes == time2.minutes && time1.seconds == time2.seconds && time1.millis == time2.millis && time1.micros == time2.micros)
    {
        return true;
    }
    
    //otherwise just return false
    
    else return false;
    
}


// Define addition and subtraction

Time Time::operator-(const Time& rhs) const
{
    Time temp = *this;
    
    //convert both the rhs and the temp into longs using asLong, and then subtract
    
    long tempLong = temp.asLong();
    long rhsLong = rhs.asLong();
    long tl= tempLong - rhsLong;
    
    //doing the reverse of asLong here, as we convert from a long to hours/mins/secs etc.
    
    long milliseconds1   = (long) (tl / 1000) % 1000;
    long seconds1   = (((long) (tl / 1000) - milliseconds1)/1000)%60 ;
    long minutes1    = (((((long) (tl / 1000) - milliseconds1)/1000) - seconds1)/60) %60;
    long hours1      = ((((((long) (tl / 1000) - milliseconds1)/1000) - seconds1)/60) - minutes1)/60;
    
    //assign those calculated values to the temp time
    
    temp.hours = (int)hours1;
    temp.millis = (int)milliseconds1;
    temp.seconds = (int)seconds1;
    temp.minutes = (int)minutes1;
    
    
    return temp;
    
}




Time Time::operator+(const Time& rhs) const
{
    Time temp = *this; //create a temporary time
    //convert both the rhs and the temp into longs using asLong, and then add
    long tempLong = temp.asLong();
    long rhsLong = rhs.asLong();
    long tl= tempLong + rhsLong;
    
    //doing the reverse of asLong here, as we convert from a long to hours/mins/secs etc.
    long milliseconds1   = (long) (tl / 1000) % 1000;
    long seconds1   = (((long) (tl / 1000) - milliseconds1)/1000)%60 ;
    long minutes1    = (((((long) (tl / 1000) - milliseconds1)/1000) - seconds1)/60) %60;
    long hours1      = ((((((long) (tl / 1000) - milliseconds1)/1000) - seconds1)/60) - minutes1)/60;
    
    //assign those calculated values to the temp time
    temp.hours = (int)hours1;
    temp.millis = (int)milliseconds1;
    temp.seconds = (int)seconds1;
    temp.minutes = (int)minutes1;
    
    //return that time
    
    return temp;
    
}

ostream& operator<<(ostream &stream, const Time& time4)
{
    //simply output each hour/min/sec etc. to an output stream, and then return that output stream
    
    stream << time4.hours<< ": " << time4.minutes<< ": " <<time4.seconds<< ": " <<time4.millis<< ": " <<time4.micros;
    return stream;
}

Time& Time::operator =(const Time& rhs )
{
    if(this == &rhs) return (*this);//if they're already equal, there's no need to do a copy assignment
    
    //otherwise, go ahead and copy the rhs into a temporary time and return it
    Time::hours = rhs.hours;
    Time::minutes = rhs.minutes;
    Time::seconds = rhs.seconds;
    Time::millis = rhs.millis;
    Time::micros = rhs.micros;
    
    
    return (*this);
}


Time::~Time()
{
    // TODO Auto-generated destructor stub
}


