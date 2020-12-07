#ifndef SEED_H
#define SEED_H
#include "Model/Item/Item.h"
#include <string>
#include "Model/Calendar/Seasons//Season.h"
#include "Model/Item/Tools/Tool.h"

using std::string;
using std::to_string;

class Seed: public Tool
{
    private:
        string plantingTime ; //String permettant de connaitre la saison de plante
        int timeToGrow ; //le nombre de jour nécéssaire à la finialisation de la plante
        int price ; //Le prix d'une graine

        //La position dans le TILESET
        int caseX ;
        int caseY ;
        int nbSeeds;

    public:
        Seed();
        Seed(int id, string nom,string plantingTime,int timeToGrow, int price, int caseX, int caseY, int nbSeeds = 0);
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
        virtual string toolType()const{
            return "";
        }
        void addSeed(int nb);
        bool minusSeed();
        int getNbSeeds() const;
};

#endif // SEED_H
