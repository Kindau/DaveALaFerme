#ifndef EMPTYTILE_H
#define EMPTYTILE_H

#include "Model/Ground/Tiles/Tile.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/Tiles/PlowedTile.h"
#include "Model/Item/Seeds/Seed.h"
#include "Model/Item/Tools/Tool.h"


//Cette classe représente l'un des états possibles d'une Tile
//On représente ici une case Vide, son prochain état ne peut être que d'être labourée

class EmptyTile : public StateTile
{
    private:
        Tile* _tile; //Pointeur vers la tuile principale

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
        Seed* getSeed()const{
            return nullptr;
        }
        //For update
        void update();

        bool interact(Tool* t);
        bool interact(Seed* s);

};

#endif // EMPTYTILE_H
