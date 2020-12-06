#include "Model/Ground/IInteractive.h"

IInteractive::IInteractive()
{
    //ctor
}

IInteractive::~IInteractive()
{
    //dtor
}

IInteractive::IInteractive(const IInteractive& other)
{
    //copy ctor
}

IInteractive& IInteractive::operator=(const IInteractive& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
