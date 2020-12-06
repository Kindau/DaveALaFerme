#include "Model/Item/Tools/WateringCan.h"

WateringCan::WateringCan(int id, const std::string nom):Tool(id, nom)
{
    //ctor
}

WateringCan::~WateringCan()
{
    //dtor
}

WateringCan::WateringCan(const WateringCan &wateringcan):Tool(wateringcan)
{

}

WateringCan& WateringCan::operator=(const WateringCan& rhs)
{
    if (this != &rhs) {
        Tool::operator=(rhs);
    }

    return *this;
}


string WateringCan::toolType()const{
    return "WateringCan";
}
