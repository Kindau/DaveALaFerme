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

// ajoute 25 a nbCase car sur le vecteur de Tile de map, le sprite descent d'une ligne et donc avance de 25 tile dans le vecteur
void Mover::moveDown() {
    nbCase += 25;
}

// retire 1 a nbCase car sur le vecteur de Tile de map, le sprite va sur la tile a sa gauche et donc avance de 1 tile dans le vecteur
void Mover::moveLeft(){
    nbCase -= 1;
}

// ajoute 1 a nbCase car sur le vecteur de Tile de map, le sprite va sur la tile a sa droite et donc avance de 1 tile dans le vecteur
void Mover::moveRight(){
    nbCase += 1;
}

// retire 25 a nbCase car sur le vecteur de Tile de map, le sprite monte d'une ligne et donc recule de 25 tile dans le vecteur
void Mover::moveUp(){
    nbCase -= 25;
}

int Mover::getnbCase() const{
    return nbCase;
}



