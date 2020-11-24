#ifndef MARKET_H
#define MARKET_H

#include <Ground.h>


class Market : public Ground
{

    private:


    public:
        Market(int x = 0,int y = 0);
        virtual ~Market();
        Market(const Market& other);
        Market& operator=(const Market& other);

        void sellItems(); //Cannot be defined as Item isn't

    protected:


};

#endif // MARKET_H
