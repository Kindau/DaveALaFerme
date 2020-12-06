#ifndef INVENTORY_H
#define INVENTORY_H

#include "Model/Item/Item.h"
#include "Model/Item/Tools/Tool.h"
#include "Model/Item/Seeds/Seed.h"
#include "Model/Item/Harvest/Harvest.h"
#include "Model/Item/Seeds/Carrot.h"
#include "Model/Item/Seeds/Eggplant.h"
#include "Model/Item/Seeds/Endive.h"
#include "Model/Item/Seeds/Lettuce.h"
#include "Model/Item/Seeds/Mushroom.h"
#include "Model/Item/Seeds/Pumpkin.h"
#include "Model/Item/Seeds/Radish.h"
#include "Model/Item/Seeds/Tomato.h"
#include "Model/Item/Seeds/Zucchini.h"
#include <vector>
#include <string>

using std::string;
using std::to_string;
using std::vector;

class Inventory
{
    private:
        vector<Tool*> tools;
        vector<Seed*> seeds;
        vector<Harvest*> harvests;

    public:
        Inventory();
        virtual ~Inventory();
        Inventory(const Inventory& other);
        Inventory& operator=(const Inventory& other);
        Inventory* clone() const{return new Inventory(*this);} ;

        string str() const ;

        void addTool(const Tool* tool);
        void addSeed(const Seed* seed);
        void addHarvest(const Seed* seed);
        void removeAllHarvest();
        void addOneHarvest();
        void removeOneSeed(int id);
        void addOneSeed(int id);
        Seed* getSeedById(int id) const;
        int getHarvestById(int id) const;
        Tool* getToolById(int id) const;
        int calculateHarvestPrice() const;
};

#endif // INVENTORY_H
