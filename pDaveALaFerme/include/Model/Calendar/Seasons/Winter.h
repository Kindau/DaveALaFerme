#ifndef WINTER_H
#define WINTER_H

#include <Model/Calendar/Seasons/StateSeason.h>
#include <Model/Calendar/Seasons/Season.h>

// Cette classe est l'état d'une saison lorsque c'est l'hiver
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

        // set le state de season a Spring
        void getNextSeason();
        string str()const;

    protected:


};

#endif // WINTER_H
