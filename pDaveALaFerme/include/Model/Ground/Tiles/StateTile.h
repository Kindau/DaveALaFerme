#ifndef STATETILE_H
#define STATETILE_H
#include <iostream>
#include <string>

#include "Model/Item/Tools/Tool.h"
#include "Model/Item/Seeds/Seed.h"

using namespace std;

class StateTile
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            StateTile();
        //2 DESTRUCTEUR
            virtual ~StateTile();
        //3 CONSTRUCTEUR DE COPIE
            StateTile(const StateTile& other);
        //4 OPERATEUR D'AFFECTION
            StateTile& operator=(const StateTile& other);
        // ================================================================
        virtual void update()=0;
        virtual void handle() = 0;
        virtual string str()const =0;

        virtual bool interact(Tool* t)=0;
        virtual bool interact(Seed* s)=0;
};

#endif // STATETILE_H
