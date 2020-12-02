#include "Seed.h"

Seed::Seed(int id,  const std::string nom, /*Season plantingTime,*/ int timeToGrow):Item(id, nom), /*plantingTime(plantingTime),*/ timeToGrow(timeToGrow)
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
}

Seed& Seed::operator=(const Seed& rhs)
{
    if (this != &rhs) {
        Item::operator=(rhs);
        timeToGrow = rhs.timeToGrow ;
    }

    return *this;
}

