#ifndef CARROT_H
#define CARROT_H

#include <Seed.h>


class Carrot : public Seed
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Carrot();
        //2 DESTRUCTEUR
            virtual ~Carrot();
        //3 CONSTRUCTEUR DE COPIE
            Carrot(const Carrot& other);
        //4 OPERATEUR D'AFFECTION
            Carrot& operator=(const Carrot& other);
        // ================================================================
};

#endif // CARROT_H
