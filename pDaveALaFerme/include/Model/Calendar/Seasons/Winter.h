#ifndef WINTER_H
#define WINTER_H

#include <Model/Calendar/Seasons/StateSeason.h>
#include <Model/Calendar/Seasons/Season.h>

class Winter : public StateSeason
{
    private:
        Season* season;

    public:
        Winter();
        Winter(Season* season);
        virtual ~Winter();
        Winter(const Winter& other);
        Winter& operator=(const Winter& other);

        void getNextSeason();
        string str()const;

    protected:


};

#endif // WINTER_H
