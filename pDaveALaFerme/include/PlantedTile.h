#ifndef PLANTEDTILE_H
#define PLANTEDTILE_H

#include "Tile.h"
#include "StateTile.h"
#include "SprinkledTile.h"
#include "GrownTile.h"

class PlantedTile : public StateTile
{
    private:
        Tile* _tile;

    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            PlantedTile();
        //2 DESTRUCTEUR
            virtual ~PlantedTile();
        //3 CONSTRUCTEUR DE COPIE
            PlantedTile(const PlantedTile& other);
        //4 OPERATEUR D'AFFECTION
            PlantedTile& operator=(const PlantedTile& other);
        // ================================================================

        PlantedTile(Tile* tile);

        void handle();
        string str()const{
            return "Planted";
        }
};

#endif // PLANTEDTILE_H
