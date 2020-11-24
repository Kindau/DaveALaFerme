#include "Path.h"

Path::Path(int _x,int _y):Ground(_x,_y)
{
    //ctor
}

Path::~Path()
{
    //dtor
}

Path::Path(const Path& other):Ground(other)
{
    //copy ctor
}

Path& Path::operator=(const Path& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    if(this != &rhs){
        Ground::operator=(rhs);
    }
    return *this;
}