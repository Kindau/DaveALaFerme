#ifndef CALENDAR_H
#define CALENDAR_H

#include <Model/Calendar/Seasons/Season.h>
#include "Model/Calendar/ISubject.h"
#include "Model/Calendar/IObserver.h"
#include <string>
#include <list>

using std::string;
using std::to_string;

class Calendar : public ISubject
{
    private:
        int date;
        int MONTH_DAY = 30;
        Season* season;

        //La liste des observers de calendar
        std::list<IObserver*> list_observer;

    public:
        Calendar(int date = 1);
        Calendar(Season* resumeSeason,int date = 1);
        virtual ~Calendar();
        Calendar(const Calendar& other);
        Calendar& operator=(const Calendar& other);

        void goToNextDay();
        Season* getActualSeason();

        string str()const;

        //For implementation of the observer

        void attach(IObserver *observer);
        void detach(IObserver *observer);
        void notify();


    protected:


};

#endif // CALENDAR_H
