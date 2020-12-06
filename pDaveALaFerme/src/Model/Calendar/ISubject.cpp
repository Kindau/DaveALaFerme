#include "Model/Calendar/ISubject.h"

ISubject::ISubject()
{
    //ctor
}

ISubject::~ISubject()
{
    //dtor
}

ISubject::ISubject(const ISubject& other)
{
    //copy ctor
}

ISubject& ISubject::operator=(const ISubject& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
