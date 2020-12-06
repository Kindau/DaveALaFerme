#ifndef SFMLMAP_H
#define SFMLMAP_H
#include <SFML/Graphics.hpp>
#include "Model/Map.h"

class SFMLMap : public sf::Drawable, public sf::Transformable
{
    public:
        SFMLMap(Map* terrain);
        virtual ~SFMLMap();
        bool load();

        bool load(sf::Vector2u tileSize);

    protected:

    private:
        Map* terrain;
        sf::Texture tileSet;
        sf::VertexArray vertices;



        virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const{
            //On applique la transformation
            states.transform *= getTransform();

            //ON applique la texture du tileSet
            states.texture = &tileSet;

            //et on dessine enfin le tableau de vertex
            target.draw(vertices, states);
        }

};

#endif // SFMLMAP_H
