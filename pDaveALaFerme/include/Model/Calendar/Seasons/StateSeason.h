#ifndef STATESEASON_H
#define STATESEASON_H

#include<string>

using std::string;

class StateSeason
{
    public:
        StateSeason();
        virtual ~StateSeason();
        StateSeason(const StateSeason& other);
        StateSeason& operator=(const StateSeason& other);

        virtual void getNextSeason() = 0;
        virtual string str()const =0;

    protected:

    private:
};

#endif // STATESEASON_H
