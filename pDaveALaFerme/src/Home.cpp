#include "Home.h"

// CONSTRUCTEUR
Home::Home(int _x,int _y):Ground(_x,_y)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
Home::~Home()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
Home::Home(const Home& other):Ground(other)
{
    //copy ctor
}

// OPERATEUR D'AFFECTATION
Home& Home::operator=(const Home& rhs)
{
    if (this != &rhs)
    {
        Ground::operator=(rhs);
    }
    return *this;
}
// =========================================================================================
