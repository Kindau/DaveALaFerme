#include "Ground.h"

Ground::Ground(int _x,int _y):x(_x),y(_y)
{
    //ctor
}

Ground::~Ground()
{
    //dtor
}

Ground::Ground(const Ground& other)
{
    x = other.x;
    y = other.y;
}

Ground& Ground::operator=(const Ground& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    if (this != &rhs){
        x = rhs.x;
        y= rhs.y;
    }
    return *this;
}
