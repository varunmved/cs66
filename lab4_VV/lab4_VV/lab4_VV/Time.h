/*
 * Time.h
 *
 *  Created on: Jan 1, 2014
 */

#ifndef TIME_H_
#define TIME_H_

#include <iostream>
#include <string>

/**
 * Time class
 *
 * The Time class contains time as hours:minutes:seconds:milliseconds.microseconds.
 */
class Time
{
public:
  /**
   * Constructor with zero values
   */
  Time();
	
  /**
   * Constructors with Arguments
   */
  Time(long time);
  Time(int hours, int minutes, int seconds, int millis, int micro);
  
  /**
   * Deconstructor
   */
  virtual ~Time();

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
  std::string toString();
	
  /**
	 * Enable/disable 24 hour time
	 */
  void set24Hour(bool value);
  
  /**
	 * Return true if 24 hour time is enabled
	 */
	bool is24Hour();
    
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
