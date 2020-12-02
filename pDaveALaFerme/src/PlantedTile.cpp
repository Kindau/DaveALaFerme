#include "PlantedTile.h"

// CONSTRUCTEUR
PlantedTile::PlantedTile(Tile* tile, int growingTime): _tile(tile), _growingTime(growingTime)
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
    _growingTime = other._growingTime;
}

// OPERATEUR D'AFFECTATION
PlantedTile& PlantedTile::operator=(const PlantedTile& rhs)
{
    if (this != &rhs)
    {
        _tile = rhs._tile;
        _growingTime = rhs._growingTime;
    }
    return *this;
}
// =========================================================================================

// GETTERS & SETTER
int PlantedTile::getGrowingTime()const
{
    return _growingTime;
}

void PlantedTile::setGrowingTime(int time)
{
    _growingTime = time;
}

void PlantedTile::handle()
{
    printf("planted\n");
    if (_growingTime >= 1)
    {
        _growingTime = _growingTime - 1;
        _tile->setState(new SprinkledTile(_tile));
    }
    _growingTime = 10;
    _tile->setState(new GrownTile(_tile));
}
