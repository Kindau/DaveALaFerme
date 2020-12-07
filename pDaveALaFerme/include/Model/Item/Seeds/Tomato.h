#ifndef TOMATO_H
#define TOMATO_H

#include "Model/Item/Seeds/Seed.h"

// Permet la création d'un objet Tomato en fixant les valeur de Seed grâce a son constructeur pour qu'elle ai le bon nom, id, caseX, caseY, ect...
class Tomato : public Seed
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Tomato();
        //2 DESTRUCTEUR
            virtual ~Tomato();
        //3 CONSTRUCTEUR DE COPIE
            Tomato(const Tomato& other);
        //4 OPERATEUR D'AFFECTION
            Tomato& operator=(const Tomato& other);
        // ================================================================
};

#endif // TOMATO_H
