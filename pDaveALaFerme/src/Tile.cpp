#include "Tile.h"

Tile::Tile(int _x,int _y):Ground(_x,_y)
{
    //ctor
}

Tile::~Tile()
{
    //dtor
}

Tile::Tile(const Tile& other):Ground(other)
{
    //copy ctor
}

Tile& Tile::operator=(const Tile& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    if(this != &rhs){
        Ground::operator=(rhs);
    }
    return *this;
}

//Other methods

void Tile::update(const string &str){

}

