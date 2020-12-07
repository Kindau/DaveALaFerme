#ifndef PATH_H
#define PATH_H

#include "Model/Ground/Ground.h"
#include "Model/Ground/IInteractive.h"
#include <iostream>

//Cette Classe "implémente" Ground
//Cette classe permet au joueur de marcher sur des cases, sur ces-dites cases, aucune interaction n'est possible,
//Il s'agit de la représentation d'un chemin


class Path : public Ground//, public IInteractive
{
    public:
        Path(int x=0, int y=0);
        virtual ~Path();
        Path(const Path& other);
        Path& operator=(const Path& other);

        Ground* clone()const;
        string str()const;


        //Car on ne peut pas interagir avec un Path
        virtual bool interact(Tool* t){return false;}
        virtual bool interact(Seed* s){return false;}

    protected:

    private:
};

#endif // PATH_H
