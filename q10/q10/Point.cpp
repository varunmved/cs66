//
//  Point.cpp
//  q10
//
//  Created by Varun Ved on 5/21/14.
//  Copyright (c) 2014 Varun Ved. All rights reserved.
//

#include "Point.h"

Point::Point(int myx, int myy)
{
    x= myx;
    y= myy;
    
}

Point::Point(Point &p)
{
    this -> x = p.x;
    this -> y = p.y;

    
}

int Point::getX() const
{
    return x;
    
}

int Point::getY() const
{
    return y;
    
}


Point& Point::operator=(const Point& rhs)
{
    if(this == &rhs) return (*this);
    x=rhs.x;
    y=rhs.y;
    return (*this);

}

Point::~Point()
{
    // TODO Auto-generated destructor stub
}
