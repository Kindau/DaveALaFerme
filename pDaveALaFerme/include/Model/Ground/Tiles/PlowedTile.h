#ifndef PLOWEDTILE_H
#define PLOWEDTILE_H

#include "Model/Ground/Tiles/Tile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/PlantedTile.h"
#include "Model/Item/Seeds/Seed.h"
#include "Model/Item/Tools/Tool.h"

//Cette classe représente l'un des états possibles d'une Tile
//Ici, on représente une tuile qui vient d'être labourée, son prochain état ne peut être que plantedTile lorsqu'on lui plante une graine.


class PlowedTile : public StateTile
{
    private:
        Tile* _tile;
        Seed* tryingSeed; //Le type de graine que l'on essaie de planter (On vérifiera la saison avant de planter)

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

        Seed* getSeed()const{
                return nullptr;
        }
};

#endif // PLOWEDTILE_H
