#ifndef SFMLMONNEYDISPLAYER_H
#define SFMLMONNEYDISPLAYER_H
#include <SFML/Graphics.hpp>
#include "Model/Player/Player.h"


class SFMLMonneyDisplayer : public sf::Transformable, public sf::Drawable
{
    public:
        SFMLMonneyDisplayer(Player* p);
        virtual ~SFMLMonneyDisplayer();

        void loadMonney();

    protected:

    private:
        sf::Text monney;
        sf::Font font;
        Player* player;


          virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const{
            //On applique la transformation
            states.transform *= getTransform();
            target.draw(monney,states);
        }

};

#endif // SFMLMONNEYDISPLAYER_H
