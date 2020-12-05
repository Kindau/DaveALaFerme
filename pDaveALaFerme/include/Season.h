#ifndef SEASON_H
#define SEASON_H

#include <StateSeason.h>


class Season
{
    private:
        StateSeason* season;

    public:
        Season();
        Season(StateSeason* season);
        virtual ~Season();
        Season(const Season& other);
        Season& operator=(const Season& other);
        void setSeason(StateSeason* newSeason);

        StateSeason* getSeason();



    protected:

};

#endif // SEASON_H
