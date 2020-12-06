#include "Model/Calendar/Seasons/Spring.h"
#include "Model/Calendar/Seasons/Summer.h"

Spring::Spring(Season* _season):season(_season)
{

}

Spring::Spring(){

}

Spring::~Spring()
{

}

Spring::Spring(const Spring& other)
{
    season = other.season;
}

Spring& Spring::operator=(const Spring& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    season = rhs.season;
    return *this;
}

void Spring::getNextSeason(){
    season->setSeason(new Summer(season));
}

string Spring::str()const{
    return "Spring";
}
