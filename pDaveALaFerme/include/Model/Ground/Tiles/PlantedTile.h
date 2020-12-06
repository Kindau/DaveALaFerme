#ifndef PLANTEDTILE_H
#define PLANTEDTILE_H

#include "Model/Ground/Tiles/Tile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/SprinkledTile.h"
#include "Model/Ground/Tiles/GrownTile.h"
#include "Model/Item/Seeds/Seed.h"
#include "Model/Item/Tools/Tool.h"

class PlantedTile : public StateTile
{
    private:
        Tile* _tile;
        Seed* plantedSeed;
        int offset;


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

        PlantedTile(Tile* tile,Seed* s = new Seed,int offset = 0);

        void handle();
        string str()const{
            return "Planted";
        }

        void update();

        bool interact(Tool* t);
        bool interact(Seed* s);

};

#endif // PLANTEDTILE_H
