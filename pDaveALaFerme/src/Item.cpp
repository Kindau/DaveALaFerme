#include "Item.h"

Item::Item(int id, string nom):id(id), nom(nom)
{
    //ctor
}

Item::~Item()
{
    //dtor
}

Item::Item(const Item& other)
{
    //copy ctor
    id = other.id ;
    nom = other.nom ;
}

Item& Item::operator=(const Item& rhs)
{
    if (this != &rhs) {
        id = rhs.id ;
    nom = rhs.nom ;
    }

    return *this;
}

string Item::str() const {
    return "item : "+to_string(id) + ": " + nom;
}

int Item::getId() const {
    return id;
}



