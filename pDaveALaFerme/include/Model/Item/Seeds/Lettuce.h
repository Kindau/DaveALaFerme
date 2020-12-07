#ifndef LETTUCE_H
#define LETTUCE_H

#include "Model/Item/Seeds/Seed.h"

// Permet la création d'un objet Lettuce en fixant les valeur de Seed grâce a son constructeur pour qu'elle ai le bon nom, id, caseX, caseY, ect...
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
