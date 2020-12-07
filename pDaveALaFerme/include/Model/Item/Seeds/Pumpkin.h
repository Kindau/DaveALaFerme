#ifndef PUMPKIN_H
#define PUMPKIN_H

#include "Model/Item/Seeds/Seed.h"

// Permet la création d'un objet Pumpkin en fixant les valeur de Seed grâce a son constructeur pour qu'elle ai le bon nom, id, caseX, caseY, ect...
class Pumpkin : public Seed
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Pumpkin();
        //2 DESTRUCTEUR
            virtual ~Pumpkin();
        //3 CONSTRUCTEUR DE COPIE
            Pumpkin(const Pumpkin& other);
        //4 OPERATEUR D'AFFECTION
            Pumpkin& operator=(const Pumpkin& other);
        // ================================================================
};

#endif // PUMPKIN_H
