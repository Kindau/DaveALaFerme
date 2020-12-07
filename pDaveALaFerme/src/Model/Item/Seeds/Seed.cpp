#include "Model/Item/Seeds/Seed.h"

Seed::Seed(int id, string nom, string plantingTime, int timeToGrow, int price, int caseX, int caseY, int nbSeeds):Tool(id, nom), plantingTime(plantingTime),timeToGrow(timeToGrow), price(price), caseX(caseX), caseY(caseY), nbSeeds(nbSeeds)
{
    //ctor
}

Seed::Seed():Tool(0,""){
    plantingTime = "none";
    timeToGrow = 0;
    price = 0;
    caseX = 0;
    caseY = 0;
}

Seed::~Seed()
{
    //dtor
}

Seed::Seed(const Seed &seed):Tool(seed)
{
    plantingTime = seed.plantingTime ;
    timeToGrow = seed.timeToGrow ;
    price = seed.price ;
    caseX = seed.caseX ;
    caseY = seed.caseY ;
}

Seed& Seed::operator=(const Seed& rhs)
{
    if (this != &rhs) {
        Tool::operator=(rhs);
        plantingTime = rhs.plantingTime ;
        timeToGrow = rhs.timeToGrow ;
        price = rhs.price ;
        caseX = rhs.caseX ;
        caseY = rhs.caseY ;
    }

    return *this;
}


string Seed::str()const{
    string rtn = Tool::str();
    rtn += " " + to_string(price) + " " + plantingTime+"  timeToGrow: "
        + to_string(timeToGrow) + " " + to_string(caseX) + " " + to_string(caseY);
    return rtn;
}

//GETTERS & SETTERS
string Seed::getPlantingTime() const
{
    return plantingTime ;
}
int Seed::getPrice() const
{
    return price ;
}
int Seed::getTimeToGrow() const
{
    return timeToGrow ;
}
int Seed::getCaseX() const
{
    return caseX ;
}
int Seed::getCaseY() const
{
    return caseY ;
}

void Seed::addSeed(int nb) {
    nbSeeds = nbSeeds + nb;
}

//renvoie true si le nombre de seed est 0 après avoir reduit de 1 nbSeeds. Permet de savoir quand il faut déséquiper la seeds equipé au joueur.
bool Seed::minusSeed() {
    if(nbSeeds<=0){
        return true;
    }
    nbSeeds--;
    if(nbSeeds==0){
        return true;
    }
    return false;

}

int Seed::getNbSeeds() const{
    return nbSeeds;
}

