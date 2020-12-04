#include "Haverst.h"

Haverst::Haverst(int id, string nom, int price):Item(id, nom), price
{
    //ctor
}

Haverst::~Haverst()
{
    //dtor
}

Haverst::Haverst(const Haverst &harvest):Item(harvest)
{
    price = seed.price ;
}

Haverst& Haverst::operator=(const Haverst& rhs)
{
    if (this != &rhs) {
        Item::operator=(rhs);
        price = rhs.price ;
    }

    return *this;
}

