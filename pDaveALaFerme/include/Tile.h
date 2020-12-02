#ifndef TILE_H
#define TILE_H

#include <string>

#include <Ground.h>
#include <ISubject.h>
#include "StateTile.h"

//                          Implémente l'interface IObserver
class Tile : public Ground, public IObserver
{
    private:
        StateTile* _state;
        int _growingTime;

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

        void update(const string &message_from_subject);

        Tile(int x =0,int y = 0, int growingTime=10);
        int getGrowingTime()const;
        void setGrowingTime(int time);

        void setState(StateTile* state);
        void handle();
};

#endif // TILE_H
