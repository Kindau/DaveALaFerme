#include "SprinkledTile.h"

// CONSTRUCTEUR
SprinkledTile::SprinkledTile(Tile* tile): _tile(tile)
{
    //ctor
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
SprinkledTile::~SprinkledTile()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
SprinkledTile::SprinkledTile(const SprinkledTile& other)
{
    _tile = other._tile;
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
    _tile->setState(new PlantedTile(_tile));
}
