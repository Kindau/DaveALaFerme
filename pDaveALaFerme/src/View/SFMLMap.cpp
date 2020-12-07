#include "View/SFMLMap.h"

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
    int NB_IMAGE_HORIZONTAL = 6;
    int NB_IMAGE_VERTICAL = 4;


    int setSizeX = tileSet.getSize().x / NB_IMAGE_HORIZONTAL;
    int setSizeY = tileSet.getSize().y / NB_IMAGE_VERTICAL;
    //On crée un Vertex pour qu'il puisse construire tout le niveau

    vertices.setPrimitiveType(sf::Quads);
    vertices.resize(terrain->getArea() * 4);


    //On rempli le vertex avec un Quad par tuile :
    int width = terrain->getSizeX();
    int height = terrain->getSizeY();

    for(int i = 0;i< width;i++){
        for(int j = 0;j<height;j++){
            //On récupère la "tuile" actuelle (en simulant un fonctionnement d'une matrice tout en étant dans un tableau à une dimension)
            //On en déduit sa position dans la texture du tileset

            // /!\CE BLOCK EST AMMENÉ A CHANGER AVEC EQUIVALENT EN CARACTERE :: # = telle coordonnée dans le tileset, $ = telle coordonnée dans le tileSet
            int caseX = 0;
            int caseY = 0;
            Ground* g = terrain->getGround(i+j*width);
            string tileType = g->str();
            if( tileType == "#"){
                Tile* t = (Tile*)g;
                string typeSoil = t->stringState();
                if(typeSoil == "Empty"){
                    caseX = 0;
                    caseY = 0;
                }
                else if(typeSoil == "Grown"){
                    caseX = t->getState()->getSeed()->getCaseX();
                    caseY = t->getState()->getSeed()->getCaseY();
                }
                else if(typeSoil == "Planted"){
                    caseX = 3;
                    caseY = 0;
                }
                else if(typeSoil == "Sprinkled"){
                    caseX = 4;
                    caseY = 0;
                }
                else if(typeSoil == "Plowed"){
                    caseX = 1;
                    caseY = 0;
                }

            }
            else if(tileType == "$"){
                caseX = 2;
                caseY = 3;
            }
            else if(tileType == "*"){
                caseX = 3;
                caseY = 3;
            }
            else if(tileType == "B"){
                caseX = 5;
                caseY = 2;
            }
            else if(tileType == "^"){
                caseX = 1;
                caseY = 3;
            }

            //On récupère un pointer vers le quad à définir dans le tableau vertex
            sf::Vertex* quad = &vertices[(i+ j*width) *4];

            //On définit les 4 coins :

            quad[0].position = sf::Vector2f(i * tileSize.x, j * tileSize.y);
            quad[1].position = sf::Vector2f((i+1) * tileSize.x, j * tileSize.y);
            quad[2].position = sf::Vector2f((i+1) * tileSize.x, (j+1) * tileSize.y);
            quad[3].position = sf::Vector2f(i * tileSize.x, (j+1) * tileSize.y);


            //On définit ses quatres coordonnées de texture

            quad[0].texCoords = sf::Vector2f(caseX * setSizeX, caseY *setSizeY);
            quad[1].texCoords = sf::Vector2f((caseX+1) * setSizeX, caseY * setSizeY);
            quad[2].texCoords = sf::Vector2f((caseX+1) * setSizeX, (caseY+1) * setSizeY);
            quad[3].texCoords = sf::Vector2f(caseX * setSizeX, (caseY+1) * setSizeY);
            }
        }
    return true;

}
