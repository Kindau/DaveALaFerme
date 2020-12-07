#ifndef CARROT_H
#define CARROT_H

#include "Model/Item/Seeds/Seed.h"

// Permet la création d'un objet Carrot en fixant les valeur de Seed grâce a son constructeur pour qu'elle ai le bon nom, id, caseX, caseY, ect...
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
