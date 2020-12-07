#ifndef CALENDAR_H
#define CALENDAR_H

#include <Model/Calendar/Seasons/Season.h>
#include "Model/Calendar/ISubject.h"
#include "Model/Calendar/IObserver.h"
#include <string>
#include <list>

using std::string;
using std::to_string;

// La classe Calendar permet de d'avoir une date et une saison pour pouvoir savoir si tels ou tels graine peut être planté. Il implemente ISubject pour permettre aus tiles de l'observer et
// de faire avancer la pousse des graines suivant l'avancement des jours dans le Calendar.
class Calendar : public ISubject
{
    private:
        int date; //Jour actuel
        int MONTH_DAY = 30; //Constante, le nombre de jour dans un mois (pour une saison)
        Season* season; //La saison actuelle (permet de gérer le stateSeason)

        //La liste des observers de calendar
        std::list<IObserver*> list_observer;

    public:
        Calendar(int date = 1);
        Calendar(Season* resumeSeason,int date = 1);
        virtual ~Calendar();
        Calendar(const Calendar& other);
        Calendar& operator=(const Calendar& other);

        void goToNextDay(); //Passe au jour suivant
        Season* getActualSeason(); //Retourne la saison actuelle

        string str()const;

        //For implementation of the observer

        void attach(IObserver *observer);
        void detach(IObserver *observer);
        void notify();


    protected:


};

#endif // CALENDAR_H
