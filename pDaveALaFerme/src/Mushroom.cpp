#include "Mushroom.h"

// CONSTRUCTEUR
Mushroom::Mushroom(): Seed(5, "Mushroom", "Winter", 4, 3, 4, 1)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
Mushroom::~Mushroom()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
Mushroom::Mushroom(const Mushroom& other)
{
    //copy ctor
}

// OPERATEUR D'AFFECTATION
Mushroom& Mushroom::operator=(const Mushroom& rhs)
{
    if (this != &rhs)
    {

    }
    return *this;
}
// =========================================================================================
