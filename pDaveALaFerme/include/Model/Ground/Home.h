#ifndef HOME_H
#define HOME_H

#include "Model/Ground/Ground.h"
#include "Model/Ground/IInteractive.h"
#include "Model/Calendar/Calendar.h"

class Home : public Ground //,public IInteractive
{
private:
    Calendar* calendar;

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

        Home(Calendar* cal,int x =0,int y = 0);


        string str()const;
        Ground* clone()const{
            return new Home(*this);
        }

        virtual bool interact(Tool* t);
        virtual bool interact(Seed* s){return false;}
};

#endif // HOME_H
