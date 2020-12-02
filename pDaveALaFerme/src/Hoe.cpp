#include "Hoe.h"

Hoe::Hoe(int id, const std::string nom):Item(id, nom)
{
    //ctor
}

Hoe::~Hoe()
{
    //dtor
}

Hoe::Hoe(const Hoe &hoe):Item(hoe)
{

}

Hoe& Hoe::operator=(const Hoe& rhs)
{
    if (this != &rhs) {
        Item::operator=(rhs);
    }

    return *this;
}
