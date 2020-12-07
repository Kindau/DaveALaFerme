#include "View/SFMLMonneyDisplayer.h"
#include <string>
#include <iostream>


SFMLMonneyDisplayer::SFMLMonneyDisplayer(Player* p):player(p)
{
    //ctor
}

SFMLMonneyDisplayer::~SFMLMonneyDisplayer()
{
    //dtor
}


void SFMLMonneyDisplayer::loadMonney(){

    if(!font.loadFromFile("Font/arial.ttf")){
        std::cout<<"Erreur de chargement de la police principale utilisée !"<<std::endl;
    }
    else{
        monney.setFont(font);
        monney.setString(to_string(player->getActualMoney()) + "G");
        monney.setPosition(sf::Vector2f(15,565));
        monney.setCharacterSize(30);
        monney.setFillColor(sf::Color(255,225,100));
    }
}
