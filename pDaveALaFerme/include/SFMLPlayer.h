#ifndef SFMLPLAYER_H
#define SFMLPLAYER_H

#include<Player.h>
#include <SFML/Graphics.hpp>

class SFMLPlayer
{
    public:
        SFMLPlayer(Player* _player);
        virtual ~SFMLPlayer();
        bool setUpInitialState();
        sf::Sprite* getSprite();
        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();

    protected:

    private:
        Player* player;
        sf::Texture spriteTexture;
        sf::Sprite sprite;



};

#endif // SFMLPLAYER_H
