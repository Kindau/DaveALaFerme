#ifndef SFMLSTORAGE_H
#define SFMLSTORAGE_H

#include <SFML/Graphics.hpp>

class SFMLStorage
{
    private:
        sf::Texture toolsTexture;
        sf::Texture seedsTexture;
        sf::Texture contoursTexture;

        sf::Sprite toolsSprite;
        sf::Sprite seedsSprite;
        sf::Sprite contoursSprite;

    public:
        SFMLStorage();
        virtual ~SFMLStorage();
        SFMLStorage(const SFMLStorage& other);
        SFMLStorage& operator=(const SFMLStorage& other);

        bool loadImageTools();
        bool loadImageSeeds();
        bool loadImageContours();

        sf::Sprite* getToolsSprite();
        sf::Sprite* getSeedsSprite();
        sf::Sprite* getContoursSprite();

        void moveLeft();
        void moveRight();
};

#endif // SFMLSTORAGE_H
