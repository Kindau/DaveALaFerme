#include "Model/Item/Tools/Hoe.h"

Hoe::Hoe(int id, const std::string nom):Tool(id, nom)
{
    //ctor
}

Hoe::~Hoe()
{
    //dtor
}

Hoe::Hoe(const Hoe &hoe):Tool(hoe)
{

}

Hoe& Hoe::operator=(const Hoe& rhs)
{
    if (this != &rhs) {
        Tool::operator=(rhs);
    }

    return *this;
}
