#include "Model/Ground/Tiles/GrownTile.h"

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
    //dtor
}

// CONSTRUCTEUR DE COPIE
GrownTile::GrownTile(const GrownTile& other)
{
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
