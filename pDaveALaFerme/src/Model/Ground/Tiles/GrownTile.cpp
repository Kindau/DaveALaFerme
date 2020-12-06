#include "Model/Ground/Tiles/GrownTile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/PlantedTile.h"

// CONSTRUCTEUR
GrownTile::GrownTile(Tile* tile,Seed* s): _tile(tile),plantedSeed(s)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
GrownTile::~GrownTile()
{
    delete _tile;
}

// CONSTRUCTEUR DE COPIE
GrownTile::GrownTile(const GrownTile& other){
    if (_tile != nullptr) delete _tile;
    _tile = other._tile;
}

// OPERATEUR D'AFFECTATION
GrownTile& GrownTile::operator=(const GrownTile& rhs)
{
    if (this != &rhs)
    {
        _tile = rhs._tile;
    }
    return *this;
}
// =========================================================================================

void GrownTile::handle()
{
    _tile->getPlayer()->getInventory()->addHarvest(plantedSeed);
    _tile->setState(new EmptyTile(_tile));
}


void GrownTile::update(){
    //N'est pas concerné par le passage du temps.
}

bool GrownTile::interact(Tool* t){
    handle();
    return true;
}

bool GrownTile::interact(Seed* s){
    handle();
    return true;
}
