#ifndef EGGPLANT_H
#define EGGPLANT_H

#include <Seed.h>


class Eggplant : public Seed
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Eggplant();
        //2 DESTRUCTEUR
            virtual ~Eggplant();
        //3 CONSTRUCTEUR DE COPIE
            Eggplant(const Eggplant& other);
        //4 OPERATEUR D'AFFECTION
            Eggplant& operator=(const Eggplant& other);
        // ================================================================
};

#endif // EGGPLANT_H
