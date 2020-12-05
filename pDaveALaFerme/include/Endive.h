#ifndef ENDIVE_H
#define ENDIVE_H

#include <Seed.h>


class Endive : public Seed
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Endive();
        //2 DESTRUCTEUR
            virtual ~Endive();
        //3 CONSTRUCTEUR DE COPIE
            Endive(const Endive& other);
        //4 OPERATEUR D'AFFECTION
            Endive& operator=(const Endive& other);
        // ================================================================
};

#endif // ENDIVE_H
