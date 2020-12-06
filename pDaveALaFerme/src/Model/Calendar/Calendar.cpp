#include "Model/Calendar/Calendar.h"
#include "Model/Calendar/Seasons/Spring.h"


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




void Calendar::attach(IObserver *observer) {
    list_observer.push_back(observer);
}

void Calendar::detach(IObserver *observer){
    list_observer.remove(observer);
}

void Calendar::notify(){
    std::list<IObserver *>::iterator iterate = list_observer.begin();
    while(iterate != list_observer.end()){
        (*iterate)->update();
        ++iterate;
    }
}



