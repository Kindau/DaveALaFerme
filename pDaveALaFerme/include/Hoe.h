#ifndef HOE_H
#define HOE_H
#include "Item.h"


class Hoe: public Item
{
    private:

    public:
        Hoe(int id, const std::string nom);
        virtual ~Hoe();
        Hoe(const Hoe& other);
        Hoe& operator=(const Hoe& other);
        Hoe* clone() const{return new Hoe(*this);};

        string str() const;
};

#endif // HOE_H
