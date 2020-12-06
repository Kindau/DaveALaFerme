#ifndef MARKET_H
#define MARKET_H

#include "Model/Ground/Ground.h"


class Market : public Ground
{

    private:


    public:
        Market(int x = 0,int y = 0);
        virtual ~Market();
        Market(const Market& other);
        Market& operator=(const Market& other);

        void sellItems(); //Cannot be defined as Item isn't

        Ground* clone()const;
        string str()const;

        void interact();

    protected:


};

#endif // MARKET_H
