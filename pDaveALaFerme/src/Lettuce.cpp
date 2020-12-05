#include "Lettuce.h"

// CONSTRUCTEUR
Lettuce::Lettuce(): Seed(5, "Lettuce", "Winter", 4, 3, 3, 1)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
Lettuce::~Lettuce()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
Lettuce::Lettuce(const Lettuce& other)
{
    //copy ctor
}

// OPERATEUR D'AFFECTATION
Lettuce& Lettuce::operator=(const Lettuce& rhs)
{
    if (this != &rhs)
    {

    }
    return *this;
}
// =========================================================================================
