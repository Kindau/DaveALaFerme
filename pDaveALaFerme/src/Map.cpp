#include "Map.h"
#include <iostream>
#include <fstream>
#include <Market.h>
#include <Path.h>
#include <Storage.h>
#include <Home.h>

Map::Map(int _x,int _y):size_x(_x),size_y(_y)
{
    int area = size_x * size_y;
    int x = 1;
    int y = 1;
    for(int i = 0;i< area;i++){
        terrain.push_back(new Tile(x,y));
       x++;
       if(x > size_x){
            x=1;
            y++;
       }
    }
}


Map::Map(string fileName){
    ifstream mappingStream("Map/"+fileName);
    if(mappingStream){
        //Lecture d'un fichier dont les 2 premières lignes sont les dimensions
        mappingStream>> size_x;
        mappingStream>> size_y;
        //Lire caractère par caractère pour "construire" le terrain
        char c;
        for(int i = 1;i<= size_x+1;i++){//+1 pour le \n en fin de ligne dans le ficher texte
                for(int j = 1;j<=size_y+1;j++){
                    mappingStream.get(c);
                    //Construire dynamiquement
                    if(c == '\n'){

                    }
                    else if(c == '#'){
                        terrain.push_back(new Tile(i,j));
                    }
                    else if(c == '$'){
                        terrain.push_back(new Market(i,j));
                    }
                    else if(c == '*'){
                        terrain.push_back(new Path(i,j));
                    }
                    else if(c == '^'){
                        terrain.push_back(new Home(i,j));
                    }
                    else if(c == 'B'){
                        terrain.push_back(new Storage(i,j));
                    }

                }
            }
        }

        else{
            cout<<"Erreur lors de la lecture d'un fichier essentiel"<<endl;
        }
    }


Map::~Map()
{
    int terrainSize = terrain.size();
    for(int i = 0;i<terrainSize;i++){
        delete terrain[i];
    }
}

Map::Map(const Map& other)
{
    int otherArea = other.size_x * other.size_y;
    for(int i = 0;i<= otherArea;i++){
        Ground* toCopyTile = other.terrain[i];
        terrain[i] = toCopyTile->clone();
    }
}

Map& Map::operator=(const Map& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    int otherArea = rhs.size_x * rhs.size_y;
    for(int i = 0;i<= otherArea;i++){
        terrain[i] = rhs.terrain[i];
    }
    return *this;
}

int Map::getArea()const{
    return (size_x * size_y);
}


Ground* Map::getGround(int index){
    return terrain[index];
}


int Map::getSizeX()const{
    return size_x;
}

int Map::getSizeY()const{
    return size_y;
}






string Map::str()const{
    string rtn = "";
    int terrainSize = terrain.size();
    Ground* tile;
    for(int i =0;i<terrainSize;i++){
        if(i%size_x == 0 && i != 0){
            rtn += "\n";
        }
        tile = terrain[i];
        rtn += tile->str();

    }
    return rtn;
}
