#include "Model/Item/Seeds/Eggplant.h"

// CONSTRUCTEUR
Eggplant::Eggplant(): Seed(4, "Eggplant", "Spring", 4, 8, 1, 1)
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
Eggplant::Eggplant(const Eggplant& other):Seed(other)
{
    //copy ctor
}

// OPERATEUR D'AFFECTATION
Eggplant& Eggplant::operator=(const Eggplant& rhs)
{
    if (this != &rhs)
    {
        Seed::operator=(rhs);
    }
    return *this;
}
// =========================================================================================
