#ifndef HOME_H
#define HOME_H

#include <Ground.h>


class Home : public Ground
{
    public:
        // ================================================================
        // FORME CANONIQUE
        // ================================================================
        //1 CONSTRUCTEUR SANS PARAMETRE
            Home();
        //2 DESTRUCTEUR
            virtual ~Home();
        //3 CONSTRUCTEUR DE COPIE
            Home(const Home& other);
        //4 OPERATEUR D'AFFECTION
            Home& operator=(const Home& other);
        // ================================================================

        Home(int x =0,int y = 0);


        string str()const;
        Ground* clone()const{
            return new Home(*this);
        }
};

#endif // HOME_H
