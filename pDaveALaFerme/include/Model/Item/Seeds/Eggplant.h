#ifndef EGGPLANT_H
#define EGGPLANT_H

#include "Model/Item/Seeds/Seed.h"

// Permet la création d'un objet Eggplant en fixant les valeur de Seed grâce a son constructeur pour qu'elle ai le bon nom, id, caseX, caseY, ect...
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
