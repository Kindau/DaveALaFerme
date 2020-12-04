#ifndef IVENTORY_H
#define IVENTORY_H

#include <Item.h>
#include <vector>
#include <string>

using std::string;
using std::to_string;
using std::vector;

class Iventory
{
    public:
        Iventory();
        Iventory(vector<Item*> _items);
        virtual ~Iventory();
        Iventory(const Iventory& other);
        Iventory& operator=(const Iventory& other);
        Iventory* clone() const{return new Iventory(*this);} ;

        string str() const ;

        void addItem(const Item* item);
        void removeAllHarvest();
        int calculateHarvestPrice() const;

    protected:

    private:
        vector<Item*> items;

};

#endif // IVENTORY_H
