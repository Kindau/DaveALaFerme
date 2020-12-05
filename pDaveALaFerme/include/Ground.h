#ifndef GROUND_H
#define GROUND_H

#include <GameObject.h>
#include <string>

using std::string;

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
        virtual Ground* clone()const = 0;

        int getX()const;
        int getY()const;


        //For testing :

        virtual string str()const=0;

    protected:


};

#endif // GROUND_H
