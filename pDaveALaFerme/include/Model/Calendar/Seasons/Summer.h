#ifndef SUMMER_H
#define SUMMER_H

#include "Model/Calendar/Seasons/StateSeason.h"
#include "Model/Calendar/Seasons/Season.h"

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

        void getNextSeason();
        string str()const;

    protected:


};

#endif // SUMMER_H
