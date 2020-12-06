#ifndef SFMLPLAYER_H
#define SFMLPLAYER_H

#include <SFML/Graphics.hpp>
#include "Model/Player/Player.h"

class SFMLPlayer
{
    private:
        Player* player;
        sf::Texture spriteTexture;
        sf::Sprite sprite;

    public:
        SFMLPlayer(Player* _player);
        virtual ~SFMLPlayer();
        bool setUpInitialState();
        sf::Sprite* getSprite();
        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();
};

#endif // SFMLPLAYER_H
