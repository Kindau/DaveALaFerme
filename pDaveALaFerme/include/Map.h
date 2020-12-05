#ifndef MAP_H
#define MAP_H

#include <vector>
#include <Ground.h>
#include <Tile.h>

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

        //For testing

        string str()const;

    protected:


};

#endif // MAP_H
