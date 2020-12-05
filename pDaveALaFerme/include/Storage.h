#ifndef STORAGE_H
#define STORAGE_H

#include <Ground.h>


class Storage : public Ground
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Storage();
        //2 DESTRUCTEUR
            virtual ~Storage();
        //3 CONSTRUCTEUR DE COPIE
            Storage(const Storage& other);
        //4 OPERATEUR D'AFFECTION
            Storage& operator=(const Storage& other);
        // ================================================================

        Storage(int x =0,int y = 0);
};

#endif // STORAGE_H
