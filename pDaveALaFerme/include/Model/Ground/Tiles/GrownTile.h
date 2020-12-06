#ifndef GROWNTILE_H
#define GROWNTILE_H

#include "Model/Ground/Tiles/Tile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/EmptyTile.h"

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
        string str()const{
            return "Grown";
        }
};

#endif // GROWNTILE_H
