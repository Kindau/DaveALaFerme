#include "SFMLMap.h"

SFMLMap::SFMLMap(Map* _map):terrain(_map)
{
    //On part du principe que le jeu n'utilisera jamais un autre fichier de texture que celui-ci !

}

SFMLMap::~SFMLMap()
{
    //dtor
}


bool SFMLMap::load(sf::Vector2u tileSize){ //Ici : tileSize est un vector qui correspond à la taille de la Tile en pixel (32,32) signiferait qu'une tile fasse 32px - 32px
    //On charge la texture du tileSet
    if(!tileSet.loadFromFile("Texture/Dave_TileSet.png")){
        return false;
    }

    //On crée un Vertex pour qu'il puisse construire tout le niveau

    vertices.setPrimitiveType(sf::Quads);
    vertices.resize(terrain->getArea() * 4);


    //On rempli le vertex avec un Quad par tuile :
    int width = terrain->getSizeX();
    int height = terrain->getSizeY();
    cout<<to_string(tileSet.getSize().x)<<endl;

    for(int i = 0;i< width;i++){
        for(int j = 0;j<height;j++){
            //On récupère la "tuile" actuelle (en simulant un fonctionnement d'une matrice tout en étant dans un tableau à une dimension)
            //On en déduit sa position dans la texture du tileset

            // /!\CE BLOCK EST AMMENÉ A CHANGER AVEC EQUIVALENT EN CARACTERE :: # = telle coordonnée dans le tileset, $ = telle coordonnée dans le tileSet
            int choice;
            string tileType = terrain->getGround(i+j*width)->str();
            if( tileType == "#"){
                choice = 0;
            }
            else if(tileType == "$"){
                choice = 3;
            }
            else{
                choice = 1;
            }


            int tu = choice * (tileSet.getSize().x / 6);
            int tv = choice / (tileSet.getSize().y / 4);
           // cout<<to_string(tu) +" tv : "+ to_string(tv)<<endl;


            //On récupère un pointer vers le quad à définir dans le tableau vertex
            sf::Vertex* quad = &vertices[(i+ j*width) *4];

            //On définit les 4 coins :

            quad[0].position = sf::Vector2f(i * tileSize.x, j * tileSize.y);
            quad[1].position = sf::Vector2f((i+1) * tileSize.x, j * tileSize.y);
            quad[2].position = sf::Vector2f((i+1) * tileSize.x, (j+1) * tileSize.y);
            quad[3].position = sf::Vector2f(i * tileSize.x, (j+1) * tileSize.y);


            //On définit ses quatres coordonnées de texture

            quad[0].texCoords = sf::Vector2f(tu * 427, tv * 400);
            quad[1].texCoords = sf::Vector2f((tu+1) * 427, tv * 400);
            quad[2].texCoords = sf::Vector2f((tu+1) * 427, (tv+1) * 400);
            quad[3].texCoords = sf::Vector2f(tu * 427, (tv+1) * 400);
            }
        }
    return true;

}
