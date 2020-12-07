#include "View/SFMLStorage.h"

SFMLStorage::SFMLStorage()
{
    loadImageTools();
    loadImageSeeds();
    loadImageContours();
}

SFMLStorage::~SFMLStorage()
{
    //dtor
}

SFMLStorage::SFMLStorage(const SFMLStorage& other)
{
    //copy ctor
}

SFMLStorage& SFMLStorage::operator=(const SFMLStorage& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

// IMAGE DES TOOLS
bool SFMLStorage::loadImageTools()
{
    if (!toolsTexture.loadFromFile("Texture/Dave_Tools.png"))
    {
        return false;
    }
    // on met la texture en smooth pour eviter de voir les pixel lorsque l'image s'agrandit
    toolsTexture.setSmooth(true);

    // on set la texture au sprite
    toolsSprite.setTexture(toolsTexture);

    //on met le sprite a sa position initial (ici données de test, a changer)
    toolsSprite.setPosition(sf::Vector2f(35,60));

    return true;
}

// IMAGE DES SEEDS
bool SFMLStorage::loadImageSeeds()
{
    if (!seedsTexture.loadFromFile("Texture/Dave_Seeds.png"))
    {
        return false;
    }
    // on met la texture en smooth pour eviter de voir les pixel lorsque l'image s'agrandit
    seedsTexture.setSmooth(true);

    // on set la texture au sprite
    seedsSprite.setTexture(seedsTexture);

    //on met le sprite a sa position initial (ici données de test, a changer)
    seedsSprite.setPosition(sf::Vector2f(360,60));

    return true;
}

// IMAGE POUR LE CONTOUR AFIN DE SELECTIONNER SEEDS OU TOOLS
bool SFMLStorage::loadImageContours()
{
    if (!contoursTexture.loadFromFile("Texture/Dave_Contours.png"))
    {
        return false;
    }
    // on met la texture en smooth pour eviter de voir les pixel lorsque l'image s'agrandit
    contoursTexture.setSmooth(true);

    // on set la texture au sprite
    contoursSprite.setTexture(contoursTexture);

    //on met le sprite a sa position initial (ici données de test, a changer)
    contoursSprite.setPosition(sf::Vector2f(35,60));

    return true;
}

// GETTERS POUR LES SPRITES
sf::Sprite* SFMLStorage::getToolsSprite()
{
    return &toolsSprite;
}

sf::Sprite* SFMLStorage::getSeedsSprite()
{
    return &seedsSprite;
}

sf::Sprite* SFMLStorage::getContoursSprite()
{
    return &contoursSprite;
}

// DEPLACEMENT ENTRE TOOLS ET SEEDS
void SFMLStorage::moveLeft(){
    if (contoursSprite.getPosition().x == 35)
    {
        return;
    }
    contoursSprite.move(sf::Vector2f(-325,0));
}

void SFMLStorage::moveRight(){
    if (contoursSprite.getPosition().x == 360)
    {
        return;
    }
    contoursSprite.move(sf::Vector2f(325,0));
}
