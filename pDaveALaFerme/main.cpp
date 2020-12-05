#include <SFML/Graphics.hpp>
#include <iostream>

//Import des classes

#include <Market.h>
#include <Path.h>
#include <Tile.h>
#include <Wallet.h>
#include <Mover.h>
#include <Player.h>
#include <Calendar.h>
#include <Map.h>
#include "SFMLMap.h"

using namespace std;
int main()
{
    Calendar calendrier;
    Map gameSpace("exempleFichier.txt");

    SFMLMap gameScreen(&gameSpace);
    if(!gameScreen.load(sf::Vector2u(40,40))){
        cout<<"Problème lors du chargement du fichier de la carte"<<endl;
    }

    sf::RenderWindow window(sf::VideoMode(1000, 600), "Dave à la ferme");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear();
        window.draw(gameScreen);
        window.display();
    }

    return 0;
}
