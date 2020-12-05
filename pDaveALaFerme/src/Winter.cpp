#include "Winter.h"
#include "Spring.h"

Winter::Winter(Season* _season):season(_season)
{
    //ctor
}

Winter::Winter(){

}


Winter::~Winter()
{
    //dtor
}

Winter::Winter(const Winter& other)
{
    season = other.season;
}

Winter& Winter::operator=(const Winter& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    season = rhs.season;
    return *this;
}


void Winter::getNextSeason(){
    season->setSeason(new Spring(season));
}


string Winter::str()const{
    return "Winter";
}
