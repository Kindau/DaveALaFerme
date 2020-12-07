#include "Model/Ground/Market.h"

Market::Market(int _x,int _y):Ground(_x,_y)
{
    //ctor
}

Market::~Market()
{
    //dtor
}

Market::Market(const Market& other):Ground(other)
{

}

Market& Market::operator=(const Market& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    if(this != &rhs){
        Ground::operator=(rhs);
    }
    return *this;
}



//Other methods :

void Market::sellItems(){
    //TODO DEFINE
}




Ground* Market::clone()const{
    int x = Ground::getX();
    int y = Ground::getY();

    return new Market(x,y);
}

string Market::str()const{
    return "$";
}

bool Market::interact(Tool* t){
    //Ici l'outils n'a aucune importance
    //Calcul de l'argent engendré par les récoltes (Objet Harvest)
    int paycheck = player->getInventory()->calculateHarvestPrice();
    //Suppression des objets Harvest de l'inventaire du joueur
    player->getInventory()->removeAllHarvest();
    //Ajoute de l'argent au portefeuille du joueur
    player->addMoney(paycheck);
    return true;
}
