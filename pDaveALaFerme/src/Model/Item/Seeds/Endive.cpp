#include "Model/Item/Seeds/Endive.h"

// CONSTRUCTEUR
Endive::Endive(): Seed(5, "Endive", "Summer", 4, 3, 2, 1)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
Endive::~Endive()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
Endive::Endive(const Endive& other):Seed(other)
{
    //copy ctor
}

// OPERATEUR D'AFFECTATION
Endive& Endive::operator=(const Endive& rhs)
{
    if (this != &rhs)
    {
        Seed::operator=(rhs);
    }
    return *this;
}
// =========================================================================================
