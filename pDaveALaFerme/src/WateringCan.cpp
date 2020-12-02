#include "WateringCan.h"

WateringCan::WateringCan(int id, const std::string nom):Item(id, nom)
{
    //ctor
}

WateringCan::~WateringCan()
{
    //dtor
}

WateringCan::WateringCan(const WateringCan &wateringcan):Item(wateringcan)
{

}

WateringCan& WateringCan::operator=(const WateringCan& rhs)
{
    if (this != &rhs) {
        Item::operator=(rhs);
    }

    return *this;
}
