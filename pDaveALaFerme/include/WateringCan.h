#ifndef WATERINGCAN_H
#define WATERINGCAN_H
#include "Item.h"

class WateringCan: public Item
{
    private:

    public:
        WateringCan(int id, const std::string nom);
        virtual ~WateringCan();
        WateringCan(const WateringCan& other);
        WateringCan& operator=(const WateringCan& other);
        WateringCan* clone() const{return new WateringCan(*this);} ;

        string str() const;
        //void sprinkle() ;
};

#endif // WATERINGCAN_H
