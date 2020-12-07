#ifndef HOME_H
#define HOME_H

#include "Model/Ground/Ground.h"
#include "Model/Ground/IInteractive.h"
#include "Model/Calendar/Calendar.h"

//Cette classe implémente Ground
//La classe Home permet lors de l'interaction avec le joueur de passer au jour suivant


class Home : public Ground //,public IInteractive
{
private:
    Calendar* calendar; //Utilisé pour passer les journées lors de la partie

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
        //Ceci permet de passer le jour suivant en passant par le Calendar
        virtual bool interact(Tool* t);
        virtual bool interact(Seed* s){return false;}
};

#endif // HOME_H
