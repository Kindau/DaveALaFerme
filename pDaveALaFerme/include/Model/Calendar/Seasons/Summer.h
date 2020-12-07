#ifndef SUMMER_H
#define SUMMER_H

#include "Model/Calendar/Seasons/StateSeason.h"
#include "Model/Calendar/Seasons/Season.h"

// Cette classe est l'état d'une saison lorsque c'est l'été
class Summer: public StateSeason
{
    private:
        Season* season;

    public:
        Summer();
        Summer(Season* season);
        virtual ~Summer();
        Summer(const Summer& other);
        Summer& operator=(const Summer& other);

        // set le state de season a Autumn
        void getNextSeason();
        string str()const;

    protected:


};

#endif // SUMMER_H
