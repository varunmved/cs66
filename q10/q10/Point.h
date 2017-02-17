//
//  Point.h
//  q10
//
//  Created by Varun Ved on 5/21/14.
//  Copyright (c) 2014 Varun Ved. All rights reserved.
//

#ifndef __q10__Point__
#define __q10__Point__

#include <iostream>
class Point
{
public:
    Point(int x, int y);
    Point(Point & p);
    virtual ~Point();
    
    int getX() const;
    int getY() const;
    
    Point & operator =(const Point& rhs);
    
private:
    int x;
    int y;
};

#endif /* defined(__q10__Point__) */
