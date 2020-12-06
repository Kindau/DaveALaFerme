#include "Model/Ground/Tiles/PlowedTile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/PlantedTile.h"
// CONSTRUCTEUR
PlowedTile::PlowedTile(Tile* tile): _tile(tile)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
PlowedTile::~PlowedTile()
{
    delete _tile;
}

// CONSTRUCTEUR DE COPIE
PlowedTile::PlowedTile(const PlowedTile& other)
{
    _tile = other._tile;
}

// OPERATEUR D'AFFECTATION
PlowedTile& PlowedTile::operator=(const PlowedTile& rhs)
{
    if (this != &rhs)
    {
        _tile = rhs._tile;
    }
    return *this;
}
// =========================================================================================

void PlowedTile::handle()
{
    printf("plowed\n");
    _tile->setState(new PlantedTile(_tile,tryingSeed));
}


void PlowedTile::update(){
    //Ne dépends pas du changement du date
}


bool PlowedTile::interact(Seed* s){
    tryingSeed = s;
    //Vérification de la saison à implémenter
    handle();
    return true;
}

bool PlowedTile::interact(Tool* t){
    return false;
}
