#include "Model/Player/Inventory.h"

Inventory::Inventory()
{
    //ctor
    //on remplis l'inventaire avec chaque type de seeds possible, quand le player achete une seed on en crée pas de nouvelle,
    //on va augmenter l'attribut nbSeed de la seed correspondante de l'inventaire
    seeds.push_back(new Carrot());
    seeds.push_back(new Eggplant());
    seeds.push_back(new Endive());
    seeds.push_back(new Lettuce());
    seeds.push_back(new Mushroom());
    seeds.push_back(new Pumpkin());
    seeds.push_back(new Radish());
    seeds.push_back(new Tomato());
    seeds.push_back(new Zucchini());

}

Inventory::~Inventory()
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

Inventory::Inventory(const Inventory& other)
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

Inventory& Inventory::operator=(const Inventory& rhs)
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

string Inventory::str() const{
    string result= "Inventory:/nTools : \n";

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
// ajoute un clone de l'outil passé en argument
void Inventory::addTool(const Tool* tool)
{
    tools.push_back(tool->clone());
}

//ajoute un clone de la seed passée en argument
void Inventory::addSeed(const Seed* seed)
{
    seeds.push_back(seed->clone());
}

//crée et ajoute un harvest par rapport a la seed crée, cherche d'abords si l'Harvest existe deja
//(basé sur l'id de l'harvest qui est égal a l'id de la seed donc elle viens(par exemple carrot a un id 3 donc Harvest Carrot auras un id 3))
void Inventory::addHarvest(const Seed* seed)
{
    int index = getHarvestById(seed->getId());
    if(index != -1){
        harvests[index]->addOneHarvest();
        return;
    }
    harvests.push_back(new Harvest(seed->getId(),seed->getNom(),seed->getPrice(),1));
}

//remove toutes les Harvest de l'inventaire et cleans le vector Harvests, est appelé lorsque l'on vend notre recolte au magasin.
void Inventory::removeAllHarvest()
{
    for(int i=0;i<(int)harvests.size();i++){
        delete harvests[i];
    }

    harvests.clear();
}

//baisse le nombre dans l'inventaire de la seed possédant l'id passé en argument de 1.
void Inventory::removeOneSeed(int id){

    for(int i=0;i<(int)seeds.size();i++){
        if(seeds[i]->getId() == id){
            seeds[i]->minusSeed();
            return;
        }

    }


}

//augmenta le nombre dans l'inventaire de la seed possédant l'id passé en argument de 1.
void Inventory::addOneSeed(int id){
    for(int i=0;i<(int)seeds.size();i++){
        if(seeds[i]->getId() == id){
            seeds[i]->addSeed();
            return;
        }

    }
}



Seed* Inventory::getSeedById(int id) const{
    for(int i=0;i<(int)seeds.size();i++){
        if(seeds[i]->getId() == id){
            return seeds[i]->clone();
        }

    }
    return nullptr;

}

//vérifie si l'harvest existe déja dans le vector harvests et si oui retourne son index sinon retourne -1
int Inventory::getHarvestById(int id) const{
    for(int i=0;i<(int)harvests.size();i++){
        if(harvests[i]->getId() == id){
            return i;
        }

    }
    return -1;

}

Tool* Inventory::getToolById(int id) const{
    for(int i=0;i<(int)tools.size();i++){
        if(tools[i]->getId() == id){
            return tools[i]->clone();
        }

    }
    return nullptr;
}

//renvoie le prix de vente total de toute la récolte dans l'inventaire.
int Inventory::calculateHarvestPrice() const{
    int result = 0;
    for(int i=0;i<(int)harvests.size();i++){
        result += harvests[i]->getTotalPrice();
    }
    return result;
}
