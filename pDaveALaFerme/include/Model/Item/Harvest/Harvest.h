#ifndef HARVEST_H
#define HARVEST_H
#include "Model/Item/Item.h"
#include <string>

using std::string;
using std::to_string;

class Harvest: public Item
{
    private:
        int price ;

    public:
        Harvest(int id, string nom,int price);
        virtual ~Harvest();
        Harvest(const Harvest& other);
        Harvest& operator=(const Harvest& other);
        Harvest* clone() const{return new Harvest(*this);};

        string str()const;


};

#endif // HARVEST_H
