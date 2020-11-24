#ifndef GROUND_H
#define GROUND_H

#include <GameObject.h>


//Abstract class
class Ground:public GameObject
{
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

    protected:


};

#endif // GROUND_H
