#ifndef TILE_H
#define TILE_H

#include <string>

#include <Ground.h>
#include <ISubject.h>
//                         Implémente l'interface IObserver
class Tile : public Ground,public IObserver
{
    public:
        Tile(int x =0,int y = 0);
        virtual ~Tile();
        Tile(const Tile& other);
        Tile& operator=(const Tile& other);


        void update(const string &message_from_subject);



    protected:

    private:
};

#endif // TILE_H
