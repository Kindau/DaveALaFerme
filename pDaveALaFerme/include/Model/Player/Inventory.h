#ifndef INVENTORY_H
#define INVENTORY_H

#include "Model/Item/Item.h"
#include "Model/Item/Tools/Tool.h"
#include "Model/Item/Seeds/Seed.h"
#include "Model/Item/Harvest/Harvest.h"
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
        void addHarvest(const Harvest* harvest);
        void removeAllHarvest();
        void removeSeed(int id);
        Seed* getSeedById(int id) const;
        Tool* getToolById(int id) const;
        int calculateHarvestPrice() const;
};

#endif // INVENTORY_H
