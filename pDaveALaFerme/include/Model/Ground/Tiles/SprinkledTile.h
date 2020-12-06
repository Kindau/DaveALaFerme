#ifndef SPRINKLEDTILE_H
#define SPRINKLEDTILE_H

#include "Model/Ground/Tiles/Tile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/PlantedTile.h"
#include "Model/Item/Seeds/Seed.h"
#include "Model/Item/Tools/Tool.h"

class SprinkledTile : public StateTile
{
    private:
        Tile* _tile;
        int offset;
        Seed* plantedSeed;

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

        SprinkledTile(Tile* tile,Seed* seed,int offset);

        void handle();
        string str()const{
            return "Sprinkled";
        }


        void update();

        bool interact(Tool* t);
        bool interact(Seed* s);
};

#endif // SPRINKLEDTILE_H
