#ifndef TILE_H
#define TILE_H

#include <string>

#include "Model/Ground/Ground.h"
#include "Model/Calendar/ISubject.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/IInteractive.h"
#include "Model/Item/Seeds/Seed.h"
#include "Model/Item/Tools/Tool.h"
//TO REMOVE IF REMOVING STR
using std::string;

//                          Implémente l'interface IObserver
class Tile : public Ground, public IObserver, public IInteractive
{
    private:
        StateTile* _state;
        int _growingTime;

        //For interface

    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Tile();
        //2 DESTRUCTEUR
            virtual ~Tile();
        //3 CONSTRUCTEUR DE COPIE
            Tile(const Tile& other);
        //4 OPERATEUR D'AFFECTION
            Tile& operator=(const Tile& other);
        // ================================================================

        virtual void update();

        Tile(int x =0,int y = 0, int growingTime=10);
        int getGrowingTime()const;
        void setGrowingTime(int time);

        void setState(StateTile* state);
        void handle();

        Ground* clone()const;

        //temp for test :

        string str()const;
        string stringState()const;
;
        virtual bool interact(Tool* t){return false;}
        virtual bool interact(Seed* s){return false;}
};

#endif // TILE_H
