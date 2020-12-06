#include "Model/Item/Seeds/Pumpkin.h"

// CONSTRUCTEUR
Pumpkin::Pumpkin(): Seed(8, "Pumpkin", "Winter", 4, 3, 5, 1)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
Pumpkin::~Pumpkin()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
Pumpkin::Pumpkin(const Pumpkin& other):Seed(other)
{
    //copy ctor
}

// OPERATEUR D'AFFECTATION
Pumpkin& Pumpkin::operator=(const Pumpkin& rhs)
{
    if (this != &rhs)
    {
        Seed::operator=(rhs);
    }
    return *this;
}
// =========================================================================================
