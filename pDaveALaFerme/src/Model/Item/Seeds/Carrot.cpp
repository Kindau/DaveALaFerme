#include "Model/Item/Seeds/Carrot.h"

// CONSTRUCTEUR
Carrot::Carrot(): Seed(3, "Carrot", "Spring", 2, 5, 5, 0)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
Carrot::~Carrot()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
Carrot::Carrot(const Carrot& other):Seed(other)
{

}

// OPERATEUR D'AFFECTATION
Carrot& Carrot::operator=(const Carrot& rhs)
{
    if (this != &rhs)
    {
        Seed::operator=(rhs);
    }
    return *this;
}
// =========================================================================================
