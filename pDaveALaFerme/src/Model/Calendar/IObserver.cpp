#include "Model/Calendar/IObserver.h"

IObserver::IObserver()
{
    //ctor
}

IObserver::~IObserver()
{
    //dtor
}

IObserver::IObserver(const IObserver& other)
{
    //copy ctor
}

IObserver& IObserver::operator=(const IObserver& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

