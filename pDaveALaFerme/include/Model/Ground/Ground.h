#ifndef GROUND_H
#define GROUND_H

#include "Model/GameObject.h"
#include <string>
#include "Model/Ground/IInteractive.h"

using std::string;

//Cette classe est une classe virtuelle absolue,
//Elle permet le polymorphisme des différentes "cases" possible (Case n'est pas objet réel, mais plus une réprésentation)


//Abstract class
class Ground:public GameObject
{

    //Représente les coordonnées de la case dans un tableau 2D (Ce tableau est fictif, et ne sers qu'a mieux représenter l'affichage)
    private:
        int x;
        int y;


    public:
        Ground(int x = 0,int y = 0);
        virtual ~Ground() = 0; //Set the class as abstract
        Ground(const Ground& other);
        Ground& operator=(const Ground& other);

        void setX(int x);
        void setY(int y);
        virtual Ground* clone()const = 0;

        int getX()const;
        int getY()const;


        //For testing :

        virtual string str()const=0;
        virtual bool interact(Tool* t)=0;
        virtual bool interact(Seed* s)=0;

    protected:


};

#endif // GROUND_H
