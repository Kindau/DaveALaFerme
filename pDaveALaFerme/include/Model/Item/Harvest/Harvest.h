#ifndef HARVEST_H
#define HARVEST_H
#include "Model/Item/Item.h"
#include <string>

using std::string;
using std::to_string;

class Harvest: public Item
{
    private:
        int price ; //Le prix de vente de l'item
        int nbHarvest; //Le nombre

    public:
        Harvest(int id, string nom,int price, int nbHarvest=0);
        virtual ~Harvest();
        Harvest(const Harvest& other);
        Harvest& operator=(const Harvest& other);
        Harvest* clone() const{return new Harvest(*this);};

        string str()const;
        int getTotalPrice() const;
        void addOneHarvest();




};

#endif // HARVEST_H
