#include "PlowedTile.h"

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
    //dtor
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
    _tile->setState(new PlantedTile(_tile));
}
