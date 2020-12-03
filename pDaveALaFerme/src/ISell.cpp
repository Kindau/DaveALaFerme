#include "ISell.h"

ISell::ISell(int price):price(price)
{
    //ctor
}

ISell::~ISell()
{
    //dtor
}

ISell::ISell(const ISell& other)
{
    //copy ctor
    price = other.price ;
}

ISell& ISell::operator=(const ISell& rhs)
{
    if (this != &rhs) {
        price =rhs.price ;
    }

    return *this;
}
