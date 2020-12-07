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


//La classe Tile représente des tuiles (cases) qui vont servir délimeter les "zones" de jeu.
//Ces tuiles pourront avoir différents états possibles (Vide,Chemin,Magasin,Maison,Terrain labouré,ect...)

//                          Implémente l'interface IObserver
class Tile : public Ground, public IObserver //, public IInteractive
{
    private:
        StateTile* _state; //Permet de savoir l'état de Tile
        int _growingTime; //Le temps qu'il faut attendre pour qu'une plante soit poussée (en jour de jeu)

        Player* player; //L'instance de player de la partie (utilie pour envoyer des infos au player (inventaire))

        //Pour l'observer :
        Calendar* calendar;

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
        int getGrowingTime()const; //retourne le temps d'attente d'une pousse
        void setGrowingTime(int time); //Permet de définir le temps d'attente d'une pousse

        void setState(StateTile* state);  //Permet de changer l'état de la tuile (Arrosée, labourée, plantée, vide)
        void handle();

        void setPlayer(Player* p){  //Permet de définir le player
            player = p;
        }

        Player* getPlayer()const{ //retourne le player
            return player;
        }


        void setCalandar(Calendar* cal){ //Permet de définir le calendrier
            calendar = cal;
        }

        Calendar* getCalandar()const{ //Retourne le calendrier
            return calendar;
        }

        StateTile* getState()const{
            return _state;
        }

        Ground* clone()const;

        //temp for test :

        string str()const;
        string stringState()const;


        //Permet de gérér les interactions avec l'utilisateur
        virtual bool interact(Tool* t){return _state->interact(t);}
        virtual bool interact(Seed* s){return _state->interact(s);}
};

#endif // TILE_H
