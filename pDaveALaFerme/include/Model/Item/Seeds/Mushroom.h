#ifndef MUSHROOM_H
#define MUSHROOM_H

#include "Model/Item/Seeds/Seed.h"

// Permet la création d'un objet Mushroom en fixant les valeur de Seed grâce a son constructeur pour qu'elle ai le bon nom, id, caseX, caseY, ect...
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
