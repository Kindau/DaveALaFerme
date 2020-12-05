#ifndef PLOWEDTILE_H
#define PLOWEDTILE_H

#include "Tile.h"
#include "StateTile.h"
#include "PlantedTile.h"

class PlowedTile : public StateTile
{
    private:
        Tile* _tile;

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
};

#endif // PLOWEDTILE_H
