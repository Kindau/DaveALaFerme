#include "Model/Ground/Tiles/GrownTile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/PlantedTile.h"

// CONSTRUCTEUR
GrownTile::GrownTile(Tile* tile): _tile(tile)
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
    printf("grown\n");
    _tile->setState(new EmptyTile(_tile));
}


void GrownTile::update(){
    //N'est pas concerné par le passage du temps.
}

bool GrownTile::interact(Tool* t){
    return false;
}

bool GrownTile::interact(Seed* s){
    return false;
}
