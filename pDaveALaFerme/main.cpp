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
#include "SFMLOclock.h"
#include "SFMLPlayer.h"

using namespace std;
int main()
{
    Calendar calendrier;
    Wallet wallet;
    Mover mover;
    Player player(&wallet, &mover);
    Map gameSpace("exempleFichier.txt");
    SFMLPlayer SfmlPlayer(&player);

    SFMLMap gameScreen(&gameSpace);
    if(!gameScreen.load(sf::Vector2u(40,40))){
        cout<<"Problème lors du chargement du fichier de la carte"<<endl;
    }

    sf::RenderWindow window(sf::VideoMode(1000, 600), "Dave à la ferme");

    SFMLOclock clock(&calendrier);
    clock.displayDate();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            /*if (event.type == sf::Event::KeyPressed){
                Ground* g = gameSpace.getGround(30);
                Tile* t = (Tile*)g;
                t->handle();
                gameScreen.load(sf::Vector2u(40,40));
                calendrier.goToNextDay();
                clock.displayDate();
            }*/
             // On déplace le sprite
            if (event.type == sf::Event::KeyPressed)
            {
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
                {
                    SfmlPlayer.moveUp();
                }
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
                {
                    SfmlPlayer.moveDown();
                }
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                {
                    SfmlPlayer.moveLeft();
                }
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                {
                    SfmlPlayer.moveRight();
                }

            }
        }
        window.clear();
        window.draw(gameScreen);
        window.draw(*(SfmlPlayer.getSprite()));
        window.draw(clock);

        window.display();
    }

    return 0;
}
