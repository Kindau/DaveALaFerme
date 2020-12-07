#include "Model/Ground/Tiles/EmptyTile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/PlantedTile.h"

// CONSTRUCTEUR
EmptyTile::EmptyTile(Tile* tile): _tile(tile)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
EmptyTile::~EmptyTile()
{
    if(_tile != nullptr){
        delete _tile;
    }
}

// CONSTRUCTEUR DE COPIE
EmptyTile::EmptyTile(const EmptyTile& other)
{
    _tile = other._tile;
}

// OPERATEUR D'AFFECTATION
EmptyTile& EmptyTile::operator=(const EmptyTile& rhs)
{
    if (this != &rhs)
    {
        _tile = rhs._tile;
    }
    return *this;
}
// =========================================================================================

void EmptyTile::handle()
{
    _tile->setState(new PlowedTile(_tile));
}


void EmptyTile::update(){
    //Ne se passe rien si la date change
}



bool EmptyTile::interact(Seed* s){
    //Ne fait rien car le joueur ne doit pas savoir planter :
    return false;
}

bool EmptyTile::interact(Tool* t){
    if(t->toolType() == "Hoe"){
        handle();
        return true;
    }
    return false;
}

