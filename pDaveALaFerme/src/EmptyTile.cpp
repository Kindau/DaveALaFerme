#include "EmptyTile.h"

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
    //dtor
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
    printf("empty\n");
    _tile->setState(new PlowedTile(_tile));
}
