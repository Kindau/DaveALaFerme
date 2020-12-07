#ifndef SFMLSTORAGESEEDS_H
#define SFMLSTORAGESEEDS_H

#include <SFML/Graphics.hpp>
#include "Model/Player/Player.h"

class SFMLStorageSeeds
{
    private:
        Player *player;

        sf::Texture carrotTexture;
        sf::Texture eggplantTexture;
        sf::Texture endiveTexture;
        sf::Texture lettuceTexture;
        sf::Texture mushroomTexture;
        sf::Texture pumpkinTexture;
        sf::Texture radishTexture;
        sf::Texture tomatoTexture;
        sf::Texture zucchiniTexture;
        sf::Texture storageTexture;
        sf::Texture contoursTexture;

        sf::Sprite carrotSprite;
        sf::Sprite eggplantSprite;
        sf::Sprite endiveSprite;
        sf::Sprite lettuceSprite;
        sf::Sprite mushroomSprite;
        sf::Sprite pumpkinSprite;
        sf::Sprite radishSprite;
        sf::Sprite tomatoSprite;
        sf::Sprite zucchiniSprite;
        sf::Sprite storageSprite;
        sf::Sprite contoursSprite;

        sf::Text carrotText;
        sf::Text eggplantText;
        sf::Text endiveText;
        sf::Text lettuceText;
        sf::Text mushroomText;
        sf::Text pumpkinText;
        sf::Text radishText;
        sf::Text tomatoText;
        sf::Text zucchiniText;

    public:
        SFMLStorageSeeds();
        virtual ~SFMLStorageSeeds();
        SFMLStorageSeeds(const SFMLStorageSeeds& other);
        SFMLStorageSeeds& operator=(const SFMLStorageSeeds& other);

        bool loadImages();

        sf::Sprite* getCarrotSprite();
        sf::Sprite* getEggplantSprite();
        sf::Sprite* getEndiveSprite();
        sf::Sprite* getLettuceSprite();
        sf::Sprite* getMushroomSprite();
        sf::Sprite* getPumpkinSprite();
        sf::Sprite* getRadishSprite();
        sf::Sprite* getTomatoSprite();
        sf::Sprite* getZucchiniSprite();
        sf::Sprite* getStorageSprite();
        sf::Sprite* getContoursSprite();

        sf::Text getCarrotText();
        sf::Text getEggplantText();
        sf::Text getEndiveText();
        sf::Text getLettuceText();
        sf::Text getMushroomText();
        sf::Text getPumpkinText();
        sf::Text getRadishText();
        sf::Text getTomatoText();
        sf::Text getZucchiniText();
        sf::Text getStorageText();
        sf::Text getContoursText();

        void moveLeft();
        void moveRight();
        void moveDown();
        void moveUp();

        void loadText();
};

#endif // SFMLSTORAGESEEDS_H
