#include "Storage.h"

// CONSTRUCTEUR
Storage::Storage(int _x,int _y):Ground(_x,_y)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
Storage::~Storage()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
Storage::Storage(const Storage& other):Ground(other)
{
    //copy ctor
}

// OPERATEUR D'AFFECTATION
Storage& Storage::operator=(const Storage& rhs)
{
    if (this != &rhs)
    {
        Ground::operator=(rhs);
    }
    return *this;
}
// =========================================================================================
