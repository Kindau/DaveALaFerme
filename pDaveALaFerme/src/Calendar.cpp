#include "Calendar.h"
#include "Spring.h"


Calendar::Calendar(int _date):date(_date)
{
    season = new Season();
    season->setSeason(new Spring(season));
}

Calendar::Calendar(Season* _season,int _date):date(_date),season(_season){

}

Calendar::~Calendar()
{
    delete season;
}

Calendar::Calendar(const Calendar& other)
{
    date = other.date;
}

Calendar& Calendar::operator=(const Calendar& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    date = rhs.date;
    return *this;
}


void Calendar::goToNextDay(){
    if(date+1 > MONTH_DAY){
        date = 1;
        season->getSeason()->getNextSeason();
    }
    else{
        date += 1;
    }
}

Season* Calendar::getActualSeason(){
    return season;
}

string Calendar::str()const{
    return to_string(date) + " "+season->getSeason()->str();
}

