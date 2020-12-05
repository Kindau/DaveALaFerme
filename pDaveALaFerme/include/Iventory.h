#ifndef IVENTORY_H
#define IVENTORY_H

#include <Item.h>
#include <Tool.h>
#include <Seed.h>
#include <Haverst.h>
#include <vector>
#include <string>

using std::string;
using std::to_string;
using std::vector;

class Iventory
{
    public:
        Iventory();
        virtual ~Iventory();
        Iventory(const Iventory& other);
        Iventory& operator=(const Iventory& other);
        Iventory* clone() const{return new Iventory(*this);} ;

        string str() const ;

        void addTool(const Tool* tool);
        void addSeed(const Seed* seed);
        void addHarvest(const Haverst* harvest);
        void removeAllHarvest();
        void removeSeed(int id);
        Seed* getSeedById(int id) const;
        Tool* getToolById(int id) const;
        int calculateHarvestPrice() const;

    protected:

    private:
        vector<Tool*> tools;
        vector<Seed*> seeds;
        vector<Haverst*> harvests;

};

#endif // IVENTORY_H
