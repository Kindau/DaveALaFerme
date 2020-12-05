#include "Zucchini.h"

// CONSTRUCTEUR
Zucchini::Zucchini(): Seed(4, "Zucchini", "Winter", 4, 3, 0, 1)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
Zucchini::~Zucchini()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
Zucchini::Zucchini(const Zucchini& other):Seed(other)
{
    //copy ctor
}

// OPERATEUR D'AFFECTATION
Zucchini& Zucchini::operator=(const Zucchini& rhs)
{
    if (this != &rhs)
    {
        Seed::operator=(rhs);
    }
    return *this;
}
// =========================================================================================
