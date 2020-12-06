#include "Model/Player/Mover.h"

Mover::Mover(int _nbCase):nbCase(_nbCase)
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
    nbCase = other.nbCase;
}

Mover& Mover::operator=(const Mover& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    nbCase = rhs.nbCase;
    return *this;
}

string Mover::str() const{
    return "Mover : "+to_string(nbCase);
}

void Mover::moveDown() {
    nbCase += 25;
}

void Mover::moveLeft(){
    nbCase -= 1;
}

void Mover::moveRight(){
    nbCase += 1;
}

void Mover::moveUp(){
    nbCase -= 25;
}

int Mover::getnbCase() const{
    return nbCase;
}



