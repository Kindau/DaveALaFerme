#ifndef SPRING_H
#define SPRING_H

#include <Model/Calendar/Seasons/Season.h>
#include <Model/Calendar/Seasons/StateSeason.h>

// Cette classe est l'état d'une saison lorsque c'est le printemps
class Spring : public StateSeason
{
    private:
        Season* season;

    public:
        Spring();
        Spring(Season* season);
        virtual ~Spring();
        Spring(const Spring& other);
        Spring& operator=(const Spring& other);

        // set le state de season a été
        void getNextSeason();
        string str()const;

    protected:


};

#endif // SPRING_H
