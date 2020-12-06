#ifndef STATETILE_H
#define STATETILE_H
#include <iostream>
#include <string>

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

        virtual void handle() = 0;
        virtual string str()const =0;
};

#endif // STATETILE_H
