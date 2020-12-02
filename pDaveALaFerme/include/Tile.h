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

    public:
        Tile(int x =0,int y = 0);
        virtual ~Tile();
        Tile(const Tile& other);
        Tile& operator=(const Tile& other);


        void update(const string &message_from_subject);

        Tile();
        void setState(StateTile* state);
        void handle();
};

#endif // TILE_H
