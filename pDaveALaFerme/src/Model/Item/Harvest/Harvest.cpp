#include "Model/Item/Harvest/Harvest.h"

Harvest::Harvest(int id, string nom, int price, int nbHarvest):Item(id, nom), price(price), nbHarvest(nbHarvest)
{
    //ctor
}

Harvest::~Harvest()
{
    //dtor
}

Harvest::Harvest(const Harvest &harvest):Item(harvest)
{
    price = harvest.price ;
}

Harvest& Harvest::operator=(const Harvest& rhs)
{
    if (this != &rhs) {
        Item::operator=(rhs);
        price = rhs.price ;
    }

    return *this;
}

string Harvest::str()const{
    string rtn = Item::str();
    rtn += " "+ to_string(price);
    return rtn;
}

int Harvest::getTotalPrice() const{
    return price * nbHarvest;
}

void Harvest::addOneHarvest(){
    nbHarvest++;
}

