#include "Autumn.h"
#include "Winter.h"

Autumn::Autumn(Season* _season):season(_season)
{
    //ctor
}

Autumn::Autumn(){

}

Autumn::~Autumn()
{
    //dtor
}

Autumn::Autumn(const Autumn& other)
{
    //copy ctor
}

Autumn& Autumn::operator=(const Autumn& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    season = rhs.season;
    return *this;
}

void Autumn::getNextSeason(){
    season->setSeason(new Winter(season));
}

string Autumn::str()const{
    return "Autumn";
}

