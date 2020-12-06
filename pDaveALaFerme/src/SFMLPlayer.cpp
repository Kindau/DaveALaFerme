#include "SFMLPlayer.h"

SFMLPlayer::SFMLPlayer(Player* _player):player(_player)
{
    //ctor
    setUpInitialState();
}

SFMLPlayer::~SFMLPlayer()
{
    //dtor
}

// Set les paramètre du sprite pour qu'il se trouve sur sa tile d'origne
bool SFMLPlayer::setUpInitialState() {

    // on récupere l'image du sprite
    if(!spriteTexture.loadFromFile("Texture/Dave_Hat.png")){
        return false;
    }

    // on met la texture en smooth pour eviter de voir les pixel lorsque l'image s'agrandis
    spriteTexture.setSmooth(true);

    // on set la texture au sprite
    sprite.setTexture(spriteTexture);

    //on met le sprite a sa position initial (ici données de test, a changer)
    sprite.setPosition(sf::Vector2f(0,0));

    //

    return true;
}

sf::Sprite* SFMLPlayer::getSprite(){
    return &sprite;
}

void SFMLPlayer::moveUp(){
    if(sprite.getPosition().y - 40 < 0){
        return;
    }
    sprite.move(sf::Vector2f(0,-40));
}

void SFMLPlayer::moveDown(){
    if(sprite.getPosition().y + 40 > 560){
        return;
    }
    sprite.move(sf::Vector2f(0,40));
}

void SFMLPlayer::moveLeft(){
    if(sprite.getPosition().x - 40 < 0){
        return;
    }
    sprite.move(sf::Vector2f(-40,0));
}

void SFMLPlayer::moveRight(){
    if(sprite.getPosition().x + 40 > 960){
        return;
    }
    sprite.move(sf::Vector2f(40,0));
}
