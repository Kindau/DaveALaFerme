#ifndef SFMLSTORAGETOOLS_H
#define SFMLSTORAGETOOLS_H

#include <SFML/Graphics.hpp>

class SFMLStorageTools
{
    private:
        sf::Texture wateringCanTexture;
        sf::Texture hoeTexture;
        sf::Texture storageTexture;
        sf::Texture contoursTexture;

        sf::Sprite wateringCanSprite;
        sf::Sprite hoeSprite;
        sf::Sprite storageSprite;
        sf::Sprite contoursSprite;

    public:
        SFMLStorageTools();
        virtual ~SFMLStorageTools();
        SFMLStorageTools(const SFMLStorageTools& other);
        SFMLStorageTools& operator=(const SFMLStorageTools& other);

        sf::Sprite* getWateringCanSprite();
        sf::Sprite* getHoeSprite();
        sf::Sprite* getStorageSprite();
        sf::Sprite* getContoursSprite();

        bool loadImages();

        void moveLeft();
        void moveRight();
};

#endif // SFMLSTORAGETOOLS_H
