#ifndef MUSHROOM_H
#define MUSHROOM_H

#include "Model/Item/Seeds/Seed.h"


class Mushroom : public Seed
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Mushroom();
        //2 DESTRUCTEUR
            virtual ~Mushroom();
        //3 CONSTRUCTEUR DE COPIE
            Mushroom(const Mushroom& other);
        //4 OPERATEUR D'AFFECTION
            Mushroom& operator=(const Mushroom& other);
        // ================================================================
};

#endif // MUSHROOM_H
