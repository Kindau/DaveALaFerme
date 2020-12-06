#ifndef EMPTYTILE_H
#define EMPTYTILE_H

#include "Model/Ground/Tiles/Tile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/PlowedTile.h"

class EmptyTile : public StateTile
{
    private:
        Tile* _tile;

    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            EmptyTile();
        //2 DESTRUCTEUR
            virtual ~EmptyTile();
        //3 CONSTRUCTEUR DE COPIE
            EmptyTile(const EmptyTile& other);
        //4 OPERATEUR D'AFFECTION
            EmptyTile& operator=(const EmptyTile& other);
        // ================================================================

        EmptyTile(Tile* tile);

        void handle();
        string str()const{
            return "Empty";
        }

};

#endif // EMPTYTILE_H
