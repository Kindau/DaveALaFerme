#include "Seed.h"

Seed::Seed(int id, string nom, /*Season plantingTime,*/ int timeToGrow, int price):Item(id, nom), /*plantingTime(plantingTime),*/ timeToGrow(timeToGrow), price
{
    //ctor
}

Seed::~Seed()
{
    //dtor
}

Seed::Seed(const Seed &seed):Item(seed)
{
    timeToGrow = seed.timeToGrow ;
    price = seed.price ;
}

Seed& Seed::operator=(const Seed& rhs)
{
    if (this != &rhs) {
        Item::operator=(rhs);
        timeToGrow = rhs.timeToGrow ;
        price = rhs.price ;
    }

    return *this;
}

