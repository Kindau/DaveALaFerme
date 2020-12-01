#include "Mover.h"

Mover::Mover(int _x, int _y):x(_x),y(_y)
{
    //ctor
}

Mover::~Mover()
{
    //dtor
}

Mover::Mover(const Mover& other)
{
    //copy ctor
    x = other.x;
    y = other.y;
}

Mover& Mover::operator=(const Mover& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    x = rhs.x;
    y = rhs.y;
    return *this;
}

string Mover::str() const{
    return "Mover : "+to_string(x)+to_string(y);
}

void Mover::moveDown() {
    --y;
}

void Mover::moveLeft(){
    --x;
}

void Mover::moveRight(){
    ++x;
}

void Mover::moveUp(){
    ++y;
}
