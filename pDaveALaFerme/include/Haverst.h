#ifndef HAVERST_H
#define HAVERST_H
#include "Item.h"
#include <string>

using std::string;
using std::to_string;

class Haverst: public Item
{
    private:
        int price ;

    public:
        Haverst(int id, string nom,int price);
        virtual ~Haverst();
        Haverst(const Haverst& other);
        Haverst& operator=(const Haverst& other);
        Haverst* clone() const{return new Haverst(*this);};

        string str()const;


};

#endif // HAVERST_H
