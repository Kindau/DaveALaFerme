#ifndef LETTUCE_H
#define LETTUCE_H

#include <Seed.h>


class Lettuce : public Seed
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Lettuce();
        //2 DESTRUCTEUR
            virtual ~Lettuce();
        //3 CONSTRUCTEUR DE COPIE
            Lettuce(const Lettuce& other);
        //4 OPERATEUR D'AFFECTION
            Lettuce& operator=(const Lettuce& other);
        // ================================================================
};

#endif // LETTUCE_H
