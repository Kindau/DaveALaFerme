#ifndef MARKET_H
#define MARKET_H

#include "Model/Ground/Ground.h"
#include "Model/Ground/IInteractive.h"

class Market : public Ground//, public IInteractive
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

        virtual bool interact(Tool* t){return false;}
        virtual bool interact(Seed* s){return false;}

    protected:


};

#endif // MARKET_H
