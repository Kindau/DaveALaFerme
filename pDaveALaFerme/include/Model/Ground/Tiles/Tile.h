#ifndef TILE_H
#define TILE_H

#include <string>

#include "Model/Ground/Ground.h"
#include "Model/Ground/Tiles/StateTile.h"
#include "Model/Ground/IInteractive.h"
#include "Model/Item/Seeds/Seed.h"
#include "Model/Item/Tools/Tool.h"
#include "Model/Calendar/IObserver.h"
#include "Model/Calendar/Calendar.h"
#include "Model/Player/Player.h"
//TO REMOVE IF REMOVING STR
using std::string;

//                          Implémente l'interface IObserver
class Tile : public Ground, public IObserver //, public IInteractive
{
    private:
        StateTile* _state;
        int _growingTime;

        Player* player;

        //Pour l'observer :
        //Calendar* calendar;

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

        void setPlayer(Player* p){
            player = p;
        }

        Player* getPlayer()const{
            return player;
        }


        Ground* clone()const;

        //temp for test :

        string str()const;
        string stringState()const;

        virtual bool interact(Tool* t){return _state->interact(t);}
        virtual bool interact(Seed* s){return _state->interact(s);}
};

#endif // TILE_H
