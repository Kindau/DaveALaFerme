#ifndef ENDIVE_H
#define ENDIVE_H

#include "Model/Item/Seeds/Seed.h"

// Permet la création d'un objet Endive en fixant les valeur de Seed grâce a son constructeur pour qu'elle ai le bon nom, id, caseX, caseY, ect...
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
