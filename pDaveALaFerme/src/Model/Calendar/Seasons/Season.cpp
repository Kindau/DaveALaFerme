#include "Model/Calendar/Seasons/Season.h"
#include "Model/Calendar/Seasons/Spring.h"

Season::Season(StateSeason* _season):season(_season)
{
    //ctor
}

Season::Season(){
    season = new Spring(this);
}

Season::~Season()
{
    delete season;
}

Season::Season(const Season& other)
{
    season = other.season;
}

Season& Season::operator=(const Season& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    season = rhs.season;
    return *this;
}

void Season::setSeason(StateSeason* newSeason){
    season = newSeason;
}


StateSeason* Season::getSeason(){
    return season;
}
