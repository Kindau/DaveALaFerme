#include "Model/Item/Seeds/IBuy.h"

IBuy::IBuy()
{
    //ctor
}

IBuy::~IBuy()
{
    //dtor
}

IBuy::IBuy(const IBuy &ibuy)
{
    //copy ctor
    price = ibuy.price ;
}

IBuy& IBuy::operator=(const IBuy& rhs)
{
    if (this != &rhs) {
        price =rhs.price ;
    }

    return *this;
}
