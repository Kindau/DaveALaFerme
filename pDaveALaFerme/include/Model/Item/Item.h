#ifndef ITEM_H
#define ITEM_H

#include <string>

using std::string;
using std::to_string;

class Item
{
    private:
        int id ; //L'id d'un item
        string nom ;

    public:
        //CONSTRUCTEUR COMPLET
        Item(int id, string nom);

        //CONSTRUCTEUR VIDE
        Item() ;

        virtual ~Item();

        //CONSTRUCTEUR DE COPIE
        Item(const Item& other);

        //OPERATEUR D'AFFECTATION
        Item& operator = (const Item& other);

        //Clone
        Item* clone() const{return new Item(*this);} ;

        int getId() const;
        string getNom() const;

        virtual string str() const ;


};

#endif // ITEM_H
