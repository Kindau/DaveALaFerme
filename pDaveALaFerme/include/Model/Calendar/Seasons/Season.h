#ifndef SEASON_H
#define SEASON_H

#include <Model/Calendar/Seasons/StateSeason.h>

// la season contiens un attribut StateSeason* qui pointe vers la saison actuel. Cette saison changeras dynamiquement grace a un DesignPatern state.
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
