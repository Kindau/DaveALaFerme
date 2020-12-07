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
    season = other.season;
}

Calendar& Calendar::operator=(const Calendar& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    date = rhs.date;
    season = rhs.season;
    return *this;
}

//Cette méthode avance d'un jour dans le mois (et permet de passer au mois suivant), cette méthode déclanche la méthode notify()
void Calendar::goToNextDay(){
    if(date+1 > MONTH_DAY){
        date = 1;
        season->getSeason()->getNextSeason();
    }
    else{
        date += 1;
    }
    notify();
}

//Retourne un pointeur vers la saison, ce qui permet de connaitre qu'elle est la saison actuelle lors du cours de la partie
Season* Calendar::getActualSeason(){
    return season;
}

string Calendar::str()const{
    return to_string(date) + " "+season->getSeason()->str();
}


//Permet d'ajouter un observateur
void Calendar::attach(IObserver *observer) {
    list_observer.push_back(observer);
}

//Supprimer un observateur
void Calendar::detach(IObserver *observer){
    list_observer.remove(observer);
}

//Notifie les observateur (en déclanchant leur méthode update) lors du changement d'un jour
void Calendar::notify(){
    std::list<IObserver *>::iterator iterate = list_observer.begin();
    while(iterate != list_observer.end()){
        (*iterate)->update();
        ++iterate;
    }
}



