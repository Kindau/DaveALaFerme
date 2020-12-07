#include "View/SFMLStorageSeeds.h"

SFMLStorageSeeds::SFMLStorageSeeds()
{
    loadImages();
}

SFMLStorageSeeds::~SFMLStorageSeeds()
{
    //dtor
}

SFMLStorageSeeds::SFMLStorageSeeds(const SFMLStorageSeeds& other)
{
    //copy ctor
}

SFMLStorageSeeds& SFMLStorageSeeds::operator=(const SFMLStorageSeeds& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

// IMAGES
bool SFMLStorageSeeds::loadImages()
{
    // CARROT
    if (!carrotTexture.loadFromFile("Texture/Dave_Grown_Carrot.png")) {return false;}
    // on met la texture en smooth pour eviter de voir les pixel lorsque l'image s'agrandit
    carrotTexture.setSmooth(true);
    // on set la texture au sprite
    carrotSprite.setTexture(carrotTexture);
    //on met le sprite a sa position initial (ici données de test, a changer)
    carrotSprite.setPosition(sf::Vector2f(35,50));

    // EGGPLANT
    if (!eggplantTexture.loadFromFile("Texture/Dave_Grown_Eggplant.png")) {return false;}
    eggplantTexture.setSmooth(true);
    eggplantSprite.setTexture(eggplantTexture);
    eggplantSprite.setPosition(sf::Vector2f(225,50));

    // ENDIVE
    if (!endiveTexture.loadFromFile("Texture/Dave_Grown_Endive.png")) {return false;}
    endiveTexture.setSmooth(true);
    endiveSprite.setTexture(endiveTexture);
    endiveSprite.setPosition(sf::Vector2f(415,50));

    // LETTUCE
    if (!lettuceTexture.loadFromFile("Texture/Dave_Grown_Lettuce.png")) {return false;}
    lettuceTexture.setSmooth(true);
    lettuceSprite.setTexture(lettuceTexture);
    lettuceSprite.setPosition(sf::Vector2f(605,50));

    // MUSHROOM
    if (!mushroomTexture.loadFromFile("Texture/Dave_Grown_Mushroom.png")) {return false;}
    mushroomTexture.setSmooth(true);
    mushroomSprite.setTexture(mushroomTexture);
    mushroomSprite.setPosition(sf::Vector2f(795,50));

    // PUMPKIN
    if (!pumpkinTexture.loadFromFile("Texture/Dave_Grown_Pumpkin.png")) {return false;}
    pumpkinTexture.setSmooth(true);
    pumpkinSprite.setTexture(pumpkinTexture);
    pumpkinSprite.setPosition(sf::Vector2f(35,330));

    // RADISH
    if (!radishTexture.loadFromFile("Texture/Dave_Grown_Radish.png")) {return false;}
    radishTexture.setSmooth(true);
    radishSprite.setTexture(radishTexture);
    radishSprite.setPosition(sf::Vector2f(225,330));

    // TOMATO
    if (!tomatoTexture.loadFromFile("Texture/Dave_Grown_Tomato.png")) {return false;}
    tomatoTexture.setSmooth(true);
    tomatoSprite.setTexture(tomatoTexture);
    tomatoSprite.setPosition(sf::Vector2f(415,330));

    // ZUCCHINI
    if (!zucchiniTexture.loadFromFile("Texture/Dave_Grown_Zucchini.png")) {return false;}
    zucchiniTexture.setSmooth(true);
    zucchiniSprite.setTexture(zucchiniTexture);
    zucchiniSprite.setPosition(sf::Vector2f(605,330));

    // BACK TO STORAGE
    if (!storageTexture.loadFromFile("Texture/Dave_Storage.png")) {return false;}
    storageTexture.setSmooth(true);
    storageSprite.setTexture(storageTexture);
    storageSprite.setPosition(sf::Vector2f(795,330));

    // CONTOUR POUR SELECTIONNER
    if (!contoursTexture.loadFromFile("Texture/Dave_Contours2.png")) {return false;}
    contoursTexture.setSmooth(true);
    contoursSprite.setTexture(contoursTexture);
    contoursSprite.setPosition(sf::Vector2f(795,330));

    return true;
}

// GETTERS POUR LES SPRITES
sf::Sprite* SFMLStorageSeeds::getCarrotSprite() {return &carrotSprite;}
sf::Sprite* SFMLStorageSeeds::getEggplantSprite() {return &eggplantSprite;}
sf::Sprite* SFMLStorageSeeds::getEndiveSprite() {return &endiveSprite;}
sf::Sprite* SFMLStorageSeeds::getLettuceSprite() {return &lettuceSprite;}
sf::Sprite* SFMLStorageSeeds::getMushroomSprite() {return &mushroomSprite;}
sf::Sprite* SFMLStorageSeeds::getPumpkinSprite() {return &pumpkinSprite;}
sf::Sprite* SFMLStorageSeeds::getRadishSprite() {return &radishSprite;}
sf::Sprite* SFMLStorageSeeds::getTomatoSprite() {return &tomatoSprite;}
sf::Sprite* SFMLStorageSeeds::getZucchiniSprite() {return &zucchiniSprite;}
sf::Sprite* SFMLStorageSeeds::getStorageSprite() {return &storageSprite;}
sf::Sprite* SFMLStorageSeeds::getContoursSprite() {return &contoursSprite;}

// DEPLACEMENT ENTRE LES SEEDS
void SFMLStorageSeeds::moveLeft(){
    if (contoursSprite.getPosition().x - 190 < 0) {return;}
    contoursSprite.move(sf::Vector2f(-190,0));
}

void SFMLStorageSeeds::moveRight(){
    if (contoursSprite.getPosition().x + 190 > 810) {return;}
    contoursSprite.move(sf::Vector2f(190,0));
}

void SFMLStorageSeeds::moveDown(){
    if (contoursSprite.getPosition().y + 280 > 600) {return;}
    contoursSprite.move(sf::Vector2f(0,280));
}

void SFMLStorageSeeds::moveUp(){
    if (contoursSprite.getPosition().y - 280 < 0) {return;}
    contoursSprite.move(sf::Vector2f(0,-280));
}

void SFMLStorageSeeds::loadText() {
    sf::Font font;
    if (!font.loadFromFile("Font/arial.ttf")) {return;}
    carrotText.setFont(font);
    eggplantText.setFont(font);
    endiveText.setFont(font);
    lettuceText.setFont(font);
    mushroomText.setFont(font);
    pumpkinText.setFont(font);
    radishText.setFont(font);
    tomatoText.setFont(font);
    zucchiniText.setFont(font);

    carrotText.setString("x " + to_string(player->getInventory()->getSeedById(3)->getNbSeeds()));
    eggplantText.setString("x " + to_string(player->getInventory()->getSeedById(4)->getNbSeeds()));
    endiveText.setString("x " + to_string(player->getInventory()->getSeedById(5)->getNbSeeds()));
    lettuceText.setString("x " + to_string(player->getInventory()->getSeedById(6)->getNbSeeds()));
    mushroomText.setString("x " + to_string(player->getInventory()->getSeedById(7)->getNbSeeds()));
    pumpkinText.setString("x " + to_string(player->getInventory()->getSeedById(8)->getNbSeeds()));
    radishText.setString("x " + to_string(player->getInventory()->getSeedById(9)->getNbSeeds()));
    tomatoText.setString("x " + to_string(player->getInventory()->getSeedById(10)->getNbSeeds()));
    zucchiniText.setString("x " + to_string(player->getInventory()->getSeedById(11)->getNbSeeds()));

    int CHARACTERSIZE = 10;
    carrotText.setCharacterSize(CHARACTERSIZE);
    eggplantText.setCharacterSize(CHARACTERSIZE);
    endiveText.setCharacterSize(CHARACTERSIZE);
    lettuceText.setCharacterSize(CHARACTERSIZE);
    mushroomText.setCharacterSize(CHARACTERSIZE);
    pumpkinText.setCharacterSize(CHARACTERSIZE);
    radishText.setCharacterSize(CHARACTERSIZE);
    tomatoText.setCharacterSize(CHARACTERSIZE);
    zucchiniText.setCharacterSize(CHARACTERSIZE);

    carrotText.setPosition(sf::Vector2f(35,60));
    eggplantText.setPosition(sf::Vector2f(415,60));
    endiveText.setPosition(sf::Vector2f(605,60));
    lettuceText.setPosition(sf::Vector2f(795,60));
    mushroomText.setPosition(sf::Vector2f(35,340));
    pumpkinText.setPosition(sf::Vector2f(415,340));
    radishText.setPosition(sf::Vector2f(605,340));
    tomatoText.setPosition(sf::Vector2f(795,340));
    zucchiniText.setPosition(sf::Vector2f(35,340));
}

sf::Text SFMLStorageSeeds::getCarrotText(){return carrotText;}
sf::Text SFMLStorageSeeds::getEggplantText(){return carrotText;}
sf::Text SFMLStorageSeeds::getEndiveText(){return endiveText;}
sf::Text SFMLStorageSeeds::getLettuceText(){return lettuceText;}
sf::Text SFMLStorageSeeds::getMushroomText(){return mushroomText;}
sf::Text SFMLStorageSeeds::getPumpkinText(){return pumpkinText;}
sf::Text SFMLStorageSeeds::getRadishText(){return radishText;}
sf::Text SFMLStorageSeeds::getTomatoText(){return tomatoText;}
sf::Text SFMLStorageSeeds::getZucchiniText(){return zucchiniText;}


