#include "Radish.h"

// CONSTRUCTEUR
Radish::Radish(): Seed(5, "Radish", "Winter", 4, 3, 0, 2)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
Radish::~Radish()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
Radish::Radish(const Radish& other):Seed(other)
{
    //copy ctor
}

// OPERATEUR D'AFFECTATION
Radish& Radish::operator=(const Radish& rhs)
{
    if (this != &rhs)
    {
        Seed::operator=(rhs);
    }
    return *this;
}
// =========================================================================================
