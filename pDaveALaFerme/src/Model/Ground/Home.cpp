#include "Model/Ground/Home.h"

// CONSTRUCTEUR
Home::Home(Calendar* cal,int _x,int _y):Ground(_x,_y),calendar(cal)
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

bool Home::interact(Tool* s){
    //Ici le tool importe peu
    calendar->goToNextDay();
    return true;
}


string Home::str()const{
    return "^";
}
