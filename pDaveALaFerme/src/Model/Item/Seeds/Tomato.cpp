#include "Model/Item/Seeds/Tomato.h"

// CONSTRUCTEUR
Tomato::Tomato(): Seed(10, "Tomato", "Winter", 10, 15, 1, 2)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
Tomato::~Tomato()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
Tomato::Tomato(const Tomato& other):Seed(other)
{
    //copy ctor
}

// OPERATEUR D'AFFECTATION
Tomato& Tomato::operator=(const Tomato& rhs)
{
    if (this != &rhs)
    {
        Seed::operator=(rhs);
    }
    return *this;
}
// =========================================================================================
