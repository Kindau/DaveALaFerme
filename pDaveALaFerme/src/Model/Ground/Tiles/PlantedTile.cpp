#include "Model/Ground/Tiles/PlantedTile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/PlantedTile.h"
#include "Model/Item/Seeds/Seed.h"
#include "Model/Item/Tools/Tool.h"

// CONSTRUCTEUR
PlantedTile::PlantedTile(Tile* tile,Seed* seed,int _offset): _tile(tile),plantedSeed(seed),offset(_offset)
{
    _tile->setGrowingTime(plantedSeed->getTimeToGrow()-offset);
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
PlantedTile::~PlantedTile()
{
    delete _tile;
}

// CONSTRUCTEUR DE COPIE
PlantedTile::PlantedTile(const PlantedTile& other)
{
    _tile = other._tile;
    plantedSeed = other.plantedSeed;
    offset = other.offset;
    _tile->setGrowingTime(plantedSeed->getTimeToGrow()-offset);
}

// OPERATEUR D'AFFECTATION
PlantedTile& PlantedTile::operator=(const PlantedTile& rhs)
{
    if (this != &rhs)
    {
        _tile = rhs._tile;
    }
    return *this;
}
// =========================================================================================

// STATE PATTERN METHOD
void PlantedTile::handle()
{
    _tile->setState(new SprinkledTile(_tile,plantedSeed,offset));

}


//Observer

void PlantedTile::update(){
    //Si il n'a pas arosé, l'état de l'objet ne DOIT pas changer
}



bool PlantedTile::interact(Seed* s){
    return false;
}

bool PlantedTile::interact(Tool* t){
    if(t->toolType() == "WateringCan"){
        handle();
        return true;
    }
    return false;
}


