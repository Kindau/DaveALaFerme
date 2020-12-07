#ifndef ZUCCHINI_H
#define ZUCCHINI_H

#include "Model/Item/Seeds/Seed.h"

// Permet la création d'un objet Zucchini en fixant les valeur de Seed grâce a son constructeur pour qu'elle ai le bon nom, id, caseX, caseY, ect...
class Zucchini : public Seed
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Zucchini();
        //2 DESTRUCTEUR
            virtual ~Zucchini();
        //3 CONSTRUCTEUR DE COPIE
            Zucchini(const Zucchini& other);
        //4 OPERATEUR D'AFFECTION
            Zucchini& operator=(const Zucchini& other);
        // ================================================================
};

#endif // ZUCCHINI_H
