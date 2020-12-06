#include "View/SFMLOclock.h"
#include <iostream>

SFMLOclock::SFMLOclock(Calendar* calendrier):calendar(calendrier)
{
  //Charger la police :

    if(!font.loadFromFile("Font/Shadow Beamer.ttf")){
        std::cout<<"Erreur de chargement de la police principale utilisée !"<<std::endl;
    }
    else{
        date.setFont(font);
        date.setString(calendar->str());
        date.setPosition(sf::Vector2f(900,10));
        date.setCharacterSize(20);
        date.setFillColor(sf::Color(255,214,0));
    }
}


void SFMLOclock::displayDate(){
        date.setString(calendar->str());
    }



SFMLOclock::~SFMLOclock()
{
    //dtor
}
