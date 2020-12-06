#ifndef AUTUMN_H
#define AUTUMN_H

#include<Model/Calendar/Seasons/StateSeason.h>
#include<Model/Calendar/Seasons/Season.h>

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

        void getNextSeason();
        string str()const;

    protected:


};

#endif // AUTUMN_H
