#include "Model/Ground/Tiles/SprinkledTile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/PlantedTile.h"

// CONSTRUCTEUR
SprinkledTile::SprinkledTile(Tile* tile,Seed* seed,int _offset): _tile(tile),offset(_offset),plantedSeed(seed)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
SprinkledTile::~SprinkledTile()
{
    delete _tile;
}

// CONSTRUCTEUR DE COPIE
SprinkledTile::SprinkledTile(const SprinkledTile& other)
{
    _tile = other._tile;
    plantedSeed = other.plantedSeed;
}

// OPERATEUR D'AFFECTATION
SprinkledTile& SprinkledTile::operator=(const SprinkledTile& rhs)
{
    if (this != &rhs)
    {
        _tile = rhs._tile;
    }
    return *this;
}
// =========================================================================================

void SprinkledTile::handle()
{
    printf("sprinkled\n");
    _tile->setState(new PlantedTile(_tile,plantedSeed,offset+1));
}



//Observer

void SprinkledTile::update(){
    //Si arrosé, au jour suivant, elle doit retournér à l'état suivant (c'est à dire planted mais avec un jour -1
    handle();
}



bool SprinkledTile::interact(Tool* t){
    return false;
}
bool SprinkledTile::interact(Seed* s){
    return false;
}
