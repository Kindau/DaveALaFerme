#ifndef STORAGE_H
#define STORAGE_H

#include "Model/Ground/Ground.h"
#include "Model/Ground/IInteractive.h"


class Storage : public Ground//, public IInteractive
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Storage();
        //2 DESTRUCTEUR
            virtual ~Storage();
        //3 CONSTRUCTEUR DE COPIE
            Storage(const Storage& other);
        //4 OPERATEUR D'AFFECTION
            Storage& operator=(const Storage& other);
        // ================================================================

        Storage(int x =0,int y = 0);

        string str()const;
        Ground* clone()const{
            return new Storage(*this);
        }

        void interact();

        virtual bool interact(Tool* t){return false;}
        virtual bool interact(Seed* s){return false;}

};

#endif // STORAGE_H
