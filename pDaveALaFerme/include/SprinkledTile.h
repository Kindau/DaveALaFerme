#ifndef SPRINKLEDTILE_H
#define SPRINKLEDTILE_H

#include "Tile.h"
#include "StateTile.h"
#include "PlantedTile.h"

class SprinkledTile : public StateTile
{
    private:
        Tile* _tile;

    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            SprinkledTile();
        //2 DESTRUCTEUR
            virtual ~SprinkledTile();
        //3 CONSTRUCTEUR DE COPIE
            SprinkledTile(const SprinkledTile& other);
        //4 OPERATEUR D'AFFECTION
            SprinkledTile& operator=(const SprinkledTile& other);
        // ================================================================

        SprinkledTile(Tile* tile);

        void handle();
        string str()const{
            return "Sprinkled";
        }
};

#endif // SPRINKLEDTILE_H
