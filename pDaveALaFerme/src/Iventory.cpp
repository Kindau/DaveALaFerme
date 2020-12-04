#include "Iventory.h"

Iventory::Iventory()
{
    //ctor
}

Iventory::Iventory(vector<Item*> _items)
{
    for(int i=0;i<(int)_items.size();i++){
        items.push_back(_items[i]->clone());
    }
}

Iventory::~Iventory()
{
    //dtor
    for(int i=0;i<(int)items.size();i++){
        delete items[i];
    }
}

Iventory::Iventory(const Iventory& other)
{
    //copy ctor
    for(int i=0;i<(int)other.items.size();i++){
        items.push_back(other.items[i]->clone());
    }
}

Iventory& Iventory::operator=(const Iventory& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    for(int i=0;i<(int)items.size();i++){
        delete items[i];
    }

    items.clear();

    for(int i=0;i<(int) rhs.items.size();i++){
        items.push_back(rhs.items[i]->clone());
    }

    return *this;
}

string Iventory::str() const{
    string result= "Iventory:/n";
    for(int i=0;i<(int)items.size();i++){
        result += items[i]->str() + "/n";
    }
    return result;
}

void Iventory::addItem(const Item* item)
{
    items.push_back(item->clone());
}

void Iventory::removeAllHarvest()
{

}
