#ifndef HAVERST_H
#define HAVERST_H
#include "Item.h"

class Haverst: public Item
{
    public:
        Haverst(int id, const std::string nom);
        virtual ~Haverst();
        Haverst(const Haverst& other);
        Haverst& operator=(const Haverst& other);
        //Harvest* clone() const{return new Harvest(*this);};

        string str() const;

    private:
};

#endif // HAVERST_H
