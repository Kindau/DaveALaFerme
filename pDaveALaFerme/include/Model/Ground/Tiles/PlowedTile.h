#ifndef PLOWEDTILE_H
#define PLOWEDTILE_H

#include "Model/Ground/Tiles/Tile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/PlantedTile.h"
#include "Model/Item/Seeds/Seed.h"
#include "Model/Item/Tools/Tool.h"

class PlowedTile : public StateTile
{
    private:
        Tile* _tile;
        Seed* tryingSeed;

    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            PlowedTile();
        //2 DESTRUCTEUR
            virtual ~PlowedTile();
        //3 CONSTRUCTEUR DE COPIE
            PlowedTile(const PlowedTile& other);
        //4 OPERATEUR D'AFFECTION
            PlowedTile& operator=(const PlowedTile& other);
        // ================================================================

        PlowedTile(Tile* tile);

        void handle();
        string str()const{
            return "Plowed";
        }

        void update();
        bool interact(Tool* t);
        bool interact(Seed* s);
};

#endif // PLOWEDTILE_H
