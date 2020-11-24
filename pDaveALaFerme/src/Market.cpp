#include "Market.h"

Market::Market(int _x,int _y):Ground(_x,_y)
{
    //ctor
}

Market::~Market()
{
    //dtor
}

Market::Market(const Market& other):Ground(other)
{

}

Market& Market::operator=(const Market& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    if(this != &rhs){
        Ground::operator=(rhs);
    }
    return *this;
}



//Other methods :

void Market::sellItems(){
    //TODO DEFINE
}
