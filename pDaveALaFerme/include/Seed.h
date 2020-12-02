#ifndef SEED_H
#define SEED_H
#include "Item.h"

class Seed: public Item
{
    private:
        //Season plantingTime ;
        int timeToGrow ;

    public:
        Seed(int id,  const std::string nom, int timeToGrow);// Season plantingTime,
        virtual ~Seed();
        Seed(const Seed& other);
        Seed& operator=(const Seed& other);
        Seed* clone() const{return new Seed(*this);};

        //void toPlant() ;
        string str() const ;

};

#endif // SEED_H
