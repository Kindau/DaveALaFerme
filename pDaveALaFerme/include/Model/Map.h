#ifndef MAP_H
#define MAP_H

#include <vector>
#include "Model/Ground/Ground.h"
#include "Model/Ground/Tiles/Tile.h"

using std::vector;

class Map
{
    private:
        int size_x;
        int size_y;

        vector<Ground*> terrain;





    public:
        Map(string fileName);
        Map(int size_x = 20,int size_y = 20);
        virtual ~Map();
        Map(const Map& other);
        Map& operator=(const Map& other);


        string str()const;
        int getArea()const;

        int getSizeX()const;
        int getSizeY()const;


        //For "communicate" with the SMFL class
        Ground* getGround(int index);


    protected:


};

#endif // MAP_H
