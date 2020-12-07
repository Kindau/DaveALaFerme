#ifndef GROWNTILE_H
#define GROWNTILE_H

#include "Model/Ground/Tiles/Tile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/EmptyTile.h"
#include "Model/Item/Seeds/Seed.h"
#include "Model/Item/Tools/Tool.h"

class GrownTile : public StateTile
{
    private:
        Tile* _tile; //Pointeur vers la tuile principale
        Seed* plantedSeed; //La plante plantée (donne juste le type, n'est pas une instance spécifique)

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

        GrownTile(Tile* tile,Seed* plantedSeed);

        void handle();
        string str()const{
            return "Grown";
        }
        bool interact(Tool* t);
        bool interact(Seed* s);

        void update();
};

#endif // GROWNTILE_H
