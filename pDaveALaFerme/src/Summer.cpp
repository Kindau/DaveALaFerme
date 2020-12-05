#include "Summer.h"
#include "Autumn.h"

Summer::Summer(Season* _season):season(_season)
{
    //ctor
}

Summer::Summer(){

}

Summer::~Summer()
{
    //dtor
}

Summer::Summer(const Summer& other)
{
    //copy ctor
}

Summer& Summer::operator=(const Summer& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    season = rhs.season;
    return *this;
}

void Summer::getNextSeason(){
    season->setSeason(new Autumn(season));
}


string Summer::str()const{
    return "Summer";
}
