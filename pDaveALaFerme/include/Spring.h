#ifndef SPRING_H
#define SPRING_H

#include <Season.h>
#include <StateSeason.h>


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

        void getNextSeason();
        string str()const;

    protected:


};

#endif // SPRING_H
