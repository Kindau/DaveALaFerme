#include "Haverst.h"

Haverst::Haverst(int id, const std::string nom):Item(id, nom)
{
    //ctor
}

Haverst::~Haverst()
{
    //dtor
}

Haverst::Haverst(const Haverst &harvest):Item(harvest)
{
    //copy ctor
}

Haverst& Haverst::operator=(const Haverst& rhs)
{
    if (this != &rhs) {

    }
    return *this;
}

