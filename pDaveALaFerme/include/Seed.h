#ifndef SEED_H
#define SEED_H
#include "Item.h"
#include <string>

using std::string;
using std::to_string;

class Seed: public Item
{
    private:
        //Season plantingTime ;
        int timeToGrow ;
        int price ;

    public:
        Seed(int id, string nom, int timeToGrow, int price);// Season plantingTime,
        virtual ~Seed();
        Seed(const Seed& other);
        Seed& operator=(const Seed& other);
        Seed* clone() const{return new Seed(*this);};

        //void toPlant() ;
        string str() const ;

};

#endif // SEED_H
