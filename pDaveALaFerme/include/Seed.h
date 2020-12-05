#ifndef SEED_H
#define SEED_H
#include "Item.h"
#include <string>
#include <Season.h>
#include "Tool.h"

using std::string;
using std::to_string;

class Seed: public Tool
{
    private:
        string plantingTime ;
        int timeToGrow ;
        int price ;
        int caseX ;
        int caseY ;

    public:
        Seed(int id, string nom,string plantingTime,int timeToGrow, int price, int caseX, int caseY);
        virtual ~Seed();
        Seed(const Seed& other);
        Seed& operator=(const Seed& other);
        Seed* clone() const{return new Seed(*this);};

        //GETTERS
        string getPlantingTime() const ;
        int getTimeToGrow() const ;
        int getPrice() const ;
        int getCaseX() const ;
        int getCaseY() const ;


        //void toPlant() ;
        string str()const;

};

#endif // SEED_H
