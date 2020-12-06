#include <SFML/Graphics.hpp>
#include <iostream>

//Import des classes

#include <Model/Ground/Market.h>
#include <Model/Ground/Path.h>
#include <Model/Ground/Tiles/Tile.h>
#include <Model/Player/Wallet.h>
#include <Model/Player/Mover.h>
#include <Model/Player/Player.h>
#include <Model/Calendar/Calendar.h>
#include <Model/Map.h>
#include "Model/Item/Tools/Tool.h"
#include "Model/Item/Tools/Hoe.h"
#include "Model/Item/Tools/WateringCan.h"
#include "Model/Item/Seeds/Carrot.h"
#include "View/SFMLMap.h"
#include "View/SFMLOclock.h"
#include "View/SFMLPlayer.h"

using namespace std;



Ground* getPlayerTile(Player* p,Map* m){
    int caseIndex = p->getnbCase();
    return m->getGround(caseIndex);
}





int main()
{
    Calendar calendrier;
    Player player;
    cout<<player.str()<<endl;

    //Création des outils (ceux-ci ne sont pas ammenés à évoluer)
    Tool* hoe = new Hoe(1,"Hoe");
    Tool* wateringCan =  new WateringCan(2,"WateringCan");
    //*********************************************************************************************************

    //Création des paquets de graines (Classe Seed*)
    Carrot* carrot = new Carrot();


    //Mettre par défaut la hoe comme Tool et la carotte par défaut
    player.setTool(hoe);
    player.setSeed(carrot);
    player.getSeed()->addSeed();
    player.getSeed()->addSeed();

    //Création de la carte et mise en place des tuiles selons un carte dans un fichier
    Map gameSpace(&calendrier,&player,"exempleFichier.txt");
    SFMLPlayer SfmlPlayer(&player);

    SFMLMap gameScreen(&gameSpace);
    if(!gameScreen.load(sf::Vector2u(40,40))){
        cout<<"Problème lors du chargement du fichier de la carte"<<endl;
    }





    sf::RenderWindow window(sf::VideoMode(1000, 600), "Dave à la ferme");


    //Création de l'affichage
    SFMLOclock clock(&calendrier);
    //Ajout de l'"horloge" à la liste des observateur de Calendrier
    clock.subscribe(&calendrier);
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
                //Pour intéragir avec l'environement et labourer le champs et arroser (dépendant de l'outil actuel)
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){
                    cout<<to_string(getPlayerTile(&player,&gameSpace)->interact(player.getTool()))<<endl;
                    gameScreen.load(sf::Vector2u(40,40));
                }
                //Pour planter des graines
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)){
                    getPlayerTile(&player,&gameSpace)->interact(player.getSeed());
                    gameScreen.load(sf::Vector2u(40,40));
                }
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
                    player.setTool(wateringCan);
                }
            }
        }
        window.clear();
        window.draw(gameScreen);
        window.draw(*(SfmlPlayer.getSprite()));
        window.draw(clock);

        window.display();
    }


    delete hoe;
    delete wateringCan;
    delete carrot;


    return 0;
}

