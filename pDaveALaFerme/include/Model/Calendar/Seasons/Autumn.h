#ifndef AUTUMN_H
#define AUTUMN_H

#include<Model/Calendar/Seasons/StateSeason.h>
#include<Model/Calendar/Seasons/Season.h>

// Cette classe est l'état d'une saison lorsque c'est l'automne
class Autumn:public StateSeason
{
    private:
        Season* season;


    public:
        Autumn();
        Autumn(Season* season);
        virtual ~Autumn();
        Autumn(const Autumn& other);
        Autumn& operator=(const Autumn& other);

        // set le state de season a Winter
        void getNextSeason();
        string str()const;

    protected:


};

#endif // AUTUMN_H
