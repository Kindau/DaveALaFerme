#include "Model/Ground/Tiles/PlantedTile.h"

// CONSTRUCTEUR
PlantedTile::PlantedTile(Tile* tile): _tile(tile)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
PlantedTile::~PlantedTile()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
PlantedTile::PlantedTile(const PlantedTile& other)
{
    _tile = other._tile;
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
    printf("planted\n");

    if (_tile->getGrowingTime() > 0)
    {
        _tile->setGrowingTime(_tile->getGrowingTime()-1);
        _tile->setState(new SprinkledTile(_tile));
    }
    else
    {
        _tile->setGrowingTime(10);
        _tile->setState(new GrownTile(_tile));
    }
}
