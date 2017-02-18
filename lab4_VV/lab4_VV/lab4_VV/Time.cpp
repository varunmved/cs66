#include "Time.h"

Time::Time()
{
    hours = 1;
    minutes = 1;
    seconds = 1;
    millis = 1;
}

Time::Time(long time)
{
    
}

Time::Time(int hrs, int mins, int secs, int  mill)
{
    setHours(hrs);
    setMinutes(mins);
    setSeconds(secs);
    setMillis(mill);
}

int Time::getHours()
{
    return hours;
}

void Time::setHours(int hrs)
{
    if(hours > 12 && hours <= 23)
    {
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

long Time::asLong()
{
    long longTime = (hours*3600000000 + minutes*60000000 + seconds*1000000 + millis*1000);
    return longTime;
}

/**
 * Display as a string
 */
string Time::toString()
{
    string timeString;
    
    timeString << hours << ":" << minutes << ":" << seconds << ":" << millis;
    if (is24Hour() == false)
    {
      timeString << "PM";
    }

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

Time::~Time()
{
	// TODO Auto-generated destructor stub
}
