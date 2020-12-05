#ifndef SEED_H
#define SEED_H
#include "Item.h"
#include <string>
#include <Season.h>

using std::string;
using std::to_string;

class Seed: public Item
{
    private:
        Season* plantingTime ;
        int timeToGrow ;
        int price ;

    public:
        Seed(int id, string nom,Season* season,int timeToGrow, int price);
        virtual ~Seed();
        Seed(const Seed& other);
        Seed& operator=(const Seed& other);
        Seed* clone() const{return new Seed(*this);};

        //void toPlant() ;
        string str() const ;

};

#endif // SEED_H
