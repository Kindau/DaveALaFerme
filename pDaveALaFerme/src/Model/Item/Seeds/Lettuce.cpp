#include "Model/Item/Seeds/Lettuce.h"

// CONSTRUCTEUR
Lettuce::Lettuce(): Seed(6, "Lettuce", "Summer", 4, 3, 3, 1)
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
Lettuce::Lettuce(const Lettuce& other):Seed(other)
{
    //copy ctor
}

// OPERATEUR D'AFFECTATION
Lettuce& Lettuce::operator=(const Lettuce& rhs)
{
    if (this != &rhs)
    {
        Seed::operator=(rhs);
    }
    return *this;
}
// =========================================================================================
