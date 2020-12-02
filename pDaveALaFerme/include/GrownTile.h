#ifndef GROWNTILE_H
#define GROWNTILE_H

#include "Tile.h"
#include "StateTile.h"
#include "EmptyTile.h"

class GrownTile : public StateTile
{
    private:
        Tile* _tile;

    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            GrownTile();
        //2 DESTRUCTEUR
            virtual ~GrownTile();
        //3 CONSTRUCTEUR DE COPIE
            GrownTile(const GrownTile& other);
        //4 OPERATEUR D'AFFECTION
            GrownTile& operator=(const GrownTile& other);
        // ================================================================

        GrownTile(Tile* tile);

        void handle();
};

#endif // GROWNTILE_H
