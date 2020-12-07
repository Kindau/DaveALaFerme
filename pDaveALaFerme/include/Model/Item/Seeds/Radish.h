#ifndef RADISH_H
#define RADISH_H

#include "Model/Item/Seeds/Seed.h"

// Permet la création d'un objet Radish en fixant les valeur de Seed grâce a son constructeur pour qu'elle ai le bon nom, id, caseX, caseY, ect...
class Radish : public Seed
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Radish();
        //2 DESTRUCTEUR
            virtual ~Radish();
        //3 CONSTRUCTEUR DE COPIE
            Radish(const Radish& other);
        //4 OPERATEUR D'AFFECTION
            Radish& operator=(const Radish& other);
        // ================================================================
};

#endif // RADISH_H
