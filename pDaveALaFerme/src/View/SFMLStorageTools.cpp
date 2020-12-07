#include "View/SFMLStorageTools.h"

SFMLStorageTools::SFMLStorageTools()
{
    loadImages();
}

SFMLStorageTools::~SFMLStorageTools()
{
    //dtor
}

SFMLStorageTools::SFMLStorageTools(const SFMLStorageTools& other)
{
    //copy ctor
}

SFMLStorageTools& SFMLStorageTools::operator=(const SFMLStorageTools& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}


// IMAGES
bool SFMLStorageTools::loadImages()
{
    // WATERING CAN
    if (!wateringCanTexture.loadFromFile("Texture/Dave_Watering_Can.png")) {return false;}
    wateringCanTexture.setSmooth(true);
    wateringCanSprite.setTexture(wateringCanTexture);
    wateringCanSprite.setPosition(sf::Vector2f(70,150));

    // HOE
    if (!hoeTexture.loadFromFile("Texture/Dave_Hoe.png")) {return false;}
    hoeTexture.setSmooth(true);
    hoeSprite.setTexture(hoeTexture);
    hoeSprite.setPosition(sf::Vector2f(385,150));

    // BACK TO STORAGE
    if (!storageTexture.loadFromFile("Texture/Dave_Storage2.png")) {return false;}
    storageTexture.setSmooth(true);
    storageSprite.setTexture(storageTexture);
    storageSprite.setPosition(sf::Vector2f(700,150));

    // CONTOUR POUR SELECTIONNER
    if (!contoursTexture.loadFromFile("Texture/Dave_Contours3.png")) {return false;}
    contoursTexture.setSmooth(true);
    contoursSprite.setTexture(contoursTexture);
    contoursSprite.setPosition(sf::Vector2f(700,150));

    return true;
}

// GETTERS POUR LES SPRITES
sf::Sprite* SFMLStorageTools::getWateringCanSprite() {return &wateringCanSprite;}
sf::Sprite* SFMLStorageTools::getHoeSprite() {return &hoeSprite;}
sf::Sprite* SFMLStorageTools::getStorageSprite() {return &storageSprite;}
sf::Sprite* SFMLStorageTools::getContoursSprite() {return &contoursSprite;}

// DEPLACEMENT ENTRE LES TOOLS
void SFMLStorageTools::moveLeft(){
    if (contoursSprite.getPosition().x - 190 < 0) {return;}
    contoursSprite.move(sf::Vector2f(-315,0));
}

void SFMLStorageTools::moveRight(){
    if (contoursSprite.getPosition().x + 227 > 810) {return;}
    contoursSprite.move(sf::Vector2f(315,0));
}
