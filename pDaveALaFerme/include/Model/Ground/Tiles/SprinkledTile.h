#ifndef SPRINKLEDTILE_H
#define SPRINKLEDTILE_H

#include "Model/Ground/Tiles/Tile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/PlantedTile.h"
#include "Model/Item/Seeds/Seed.h"
#include "Model/Item/Tools/Tool.h"


//Implémentation de l'observer
#include "Model/Calendar/IObserver.h"
#include "Model/Calendar/ISubject.h"

//Cette classe représente l'un des états possibles d'une Tile
//Ici, on représente une tuile plantée qui vient d'être arrosée aujourd'hui (en jeu).
//Ses prochains états sont : GrownTile si c'est son dernier jour de pousse, ou PlantedTile sinon




class SprinkledTile : public StateTile, public IObserver
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

        Seed* getSeed()const{
                return plantedSeed;
        }
};

#endif // SPRINKLEDTILE_H
