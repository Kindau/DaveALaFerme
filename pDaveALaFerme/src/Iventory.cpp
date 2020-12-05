#include "Iventory.h"

Iventory::Iventory()
{
    //ctor
}

Iventory::~Iventory()
{
    //dtor
    for(int i=0;i<(int)tools.size();i++){
        delete tools[i];
    }

    for(int i=0;i<(int)seeds.size();i++){
        delete seeds[i];
    }

    for(int i=0;i<(int)harvests.size();i++){
        delete harvests[i];
    }
}

Iventory::Iventory(const Iventory& other)
{
    //copy ctor
    for(int i=0;i<(int)other.tools.size();i++){
        tools.push_back(other.tools[i]->clone());
    }

    for(int i=0;i<(int)other.seeds.size();i++){
        seeds.push_back(other.seeds[i]->clone());
    }

    for(int i=0;i<(int)other.harvests.size();i++){
        harvests.push_back(other.harvests[i]->clone());
    }
}

Iventory& Iventory::operator=(const Iventory& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    for(int i=0;i<(int)tools.size();i++){
        delete tools[i];
    }

    tools.clear();

    for(int i=0;i<(int)seeds.size();i++){
        delete seeds[i];
    }

    seeds.clear();

    for(int i=0;i<(int)harvests.size();i++){
        delete harvests[i];
    }

    harvests.clear();

    for(int i=0;i<(int) rhs.tools.size();i++){
        tools.push_back(rhs.tools[i]->clone());
    }

    for(int i=0;i<(int) rhs.seeds.size();i++){
        seeds.push_back(rhs.seeds[i]->clone());
    }

    for(int i=0;i<(int) rhs.harvests.size();i++){
        harvests.push_back(rhs.harvests[i]->clone());
    }

    return *this;
}

string Iventory::str() const{
    string result= "Iventory:/nTools : \n";

    for(int i=0;i<(int)tools.size();i++){
        result += tools[i]->str() + "/n";
    }

    result += "\nSeeds :\n";
    for(int i=0;i<(int)seeds.size();i++){
        result += seeds[i]->str() + "/n";
    }

    result += "\nHarvests :\n";
    for(int i=0;i<(int)harvests.size();i++){
        result += harvests[i]->str() + "/n";
    }
    return result;
}

void Iventory::addTool(const Tool* tool)
{
    tools.push_back(tool->clone());
}

void Iventory::addSeed(const Seed* seed)
{
    seeds.push_back(seed->clone());
}


void Iventory::addHarvest(const Haverst* harvest)
{
    harvests.push_back(harvest->clone());
}


void Iventory::removeAllHarvest()
{
    for(int i=0;i<(int)harvests.size();i++){
        delete harvests[i];
    }

    harvests.clear();
}

void Iventory::removeSeed(int id){

    for(int i=0;i<(int)seeds.size();i++){
        if(seeds[i]->getId() == id){
            delete seeds[i];
            seeds.erase(seeds.begin()+i);
            return;
        }

    }


}

Seed* Iventory::getSeedById(int id) const{
    for(int i=0;i<(int)seeds.size();i++){
        if(seeds[i]->getId() == id){
            return seeds[i]->clone();
        }

    }
    return nullptr;

}

Tool* Iventory::getToolById(int id) const{
    for(int i=0;i<(int)tools.size();i++){
        if(tools[i]->getId() == id){
            return tools[i]->clone();
        }

    }
    return nullptr;
}
