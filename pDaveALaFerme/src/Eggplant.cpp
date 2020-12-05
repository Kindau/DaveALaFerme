#include "Eggplant.h"

// CONSTRUCTEUR
Eggplant::Eggplant(): Seed(5, "Eggplant", "Winter", 4, 3, 1, 1)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
Eggplant::~Eggplant()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
Eggplant::Eggplant(const Eggplant& other)
{
    //copy ctor
}

// OPERATEUR D'AFFECTATION
Eggplant& Eggplant::operator=(const Eggplant& rhs)
{
    if (this != &rhs)
    {

    }
    return *this;
}
// =========================================================================================
