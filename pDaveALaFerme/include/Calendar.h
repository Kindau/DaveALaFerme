#ifndef CALENDAR_H
#define CALENDAR_H

#include <Season.h>
#include <string>

using std::string;
using std::to_string;

class Calendar
{
    private:
        int date;
        int MONTH_DAY = 30;
        Season* season;

    public:
        Calendar(int date = 1);
        Calendar(Season* resumeSeason,int date = 1);
        virtual ~Calendar();
        Calendar(const Calendar& other);
        Calendar& operator=(const Calendar& other);

        void goToNextDay();
        Season* getActualSeason();

        string str()const;


    protected:


};

#endif // CALENDAR_H
