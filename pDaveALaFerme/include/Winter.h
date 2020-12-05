#ifndef WINTER_H
#define WINTER_H

#include <StateSeason.h>
#include <Season.h>

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
