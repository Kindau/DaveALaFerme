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
#include "View/SFMLMonneyDisplayer.h"
#include "View/SFMLStorage.h"
#include "View/SFMLStorageSeeds.h"
#include "View/SFMLStorageTools.h"

using namespace std;


Ground* getPlayerTile(Player* p,Map* m)
{
    int caseIndex = p->getnbCase();
    return m->getGround(caseIndex);
}

int main()
{
    Calendar calendrier;
    Player player;

    SFMLStorage SfmlStorage;
    SFMLStorageSeeds SfmlStorageSeeds;
    SFMLStorageTools SfmlStorageTools;

    //Création des outils (ceux-ci ne sont pas ammenés à évoluer)
    Tool* hoe = new Hoe(1,"Hoe");
    Tool* wateringCan =  new WateringCan(2,"WateringCan");
    //*********************************************************************************************************

    //Création des paquets de graines (Classe Seed*)
    Carrot* carrot = new Carrot();

    //Mettre par défaut la hoe comme Tool et la carotte par défaut
    player.setTool(hoe);
    player.setSeed(carrot);
    player.getSeed()->addSeed(2);
    player.addMoney(1000);


    //Création de la carte et mise en place des tuiles selons un carte dans un fichier
    Map gameSpace(&calendrier,&player,"exempleFichier.txt");
    SFMLPlayer SfmlPlayer(&player);

    SFMLMap gameScreen(&gameSpace);
    if(!gameScreen.load(sf::Vector2u(40,40))){
        cout<<"Problème lors du chargement du fichier de la carte"<<endl;
    }

    sf::RenderWindow window(sf::VideoMode(1000, 600), "Dave à la ferme");
    sf::RenderWindow windowStorage;
    sf::RenderWindow windowStorageInside;


    //Création de l'affichage tête haute
    SFMLOclock clock(&calendrier);
    SFMLMonneyDisplayer monneyDisplayer(&player);
    monneyDisplayer.loadMonney();

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
                    (getPlayerTile(&player,&gameSpace)->interact(player.getTool()));
                    gameScreen.load(sf::Vector2u(40,40));
                    monneyDisplayer.loadMonney();
                }
                //Pour planter des graines
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)){
                    getPlayerTile(&player,&gameSpace)->interact(player.getSeed());
                    gameScreen.load(sf::Vector2u(40,40));
                }
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
                    //Changement de l'outil
                    if(player.getTool()->toolType() == "Hoe"){
                        player.setTool(wateringCan);
                    }
                    else{
                        player.setTool(hoe);
                    }
                }
            }
        }

        if ((SfmlPlayer.getSprite()->getPosition().x == 960) && (SfmlPlayer.getSprite()->getPosition().y == 560) && (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)))
        {
            windowStorage.create(sf::VideoMode(700, 420), "Storage cabinet");

            while (windowStorage.isOpen())
            {
                sf::Event eventStorage;
                while (windowStorage.pollEvent(eventStorage))
                {
                    if (eventStorage.type == sf::Event::Closed)
                    {
                        windowStorage.close();
                    }

                    if (eventStorage.type == sf::Event::KeyPressed)
                    {
                        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                        {
                            SfmlStorage.moveLeft();
                        }
                        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                        {
                            SfmlStorage.moveRight();
                        }
                        if((SfmlStorage.getContoursSprite()->getPosition().x == 360) && (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)))
                        {
                            windowStorage.close();
                            windowStorageInside.create(sf::VideoMode(1000, 600), "Storage seeds");

                            while (windowStorageInside.isOpen())
                            {
                                sf::Event eventStorageSeeds;
                                while (windowStorageInside.pollEvent(eventStorageSeeds))
                                {
                                    if (eventStorageSeeds.type == sf::Event::Closed)
                                    {
                                        windowStorageInside.close();
                                    }

                                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                                    {
                                        SfmlStorageSeeds.moveLeft();
                                    }
                                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                                    {
                                        SfmlStorageSeeds.moveRight();
                                    }
                                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
                                    {
                                        SfmlStorageSeeds.moveDown();
                                    }
                                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
                                    {
                                        SfmlStorageSeeds.moveUp();
                                    }
                                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
                                    {
                                        // vérifie la case selectionner et achete plus rajoute les graines a l'inventaire.

                                        switch(SfmlStorageSeeds.getIdSelected()) {
                                            case 1  :

                                                if(player.getActualMoney() < (player.getInventory()->getSeedById(3)->getPrice()) * 5){

                                                    break;
                                                }
                                                player.spendMoney((player.getInventory()->getSeedById(3)->getPrice()) * 5);
                                                player.getInventory()->getSeedById(3)->addSeed(5);
                                                player.setSeed(player.getInventory()->getSeedById(3));
                                                windowStorageInside.close();
                                                break;
                                            case 2  :
                                                if(player.getActualMoney() < (player.getInventory()->getSeedById(4)->getPrice()) * 5){

                                                    break;
                                                }
                                                player.spendMoney((player.getInventory()->getSeedById(4)->getPrice()) * 5);
                                                player.getInventory()->getSeedById(4)->addSeed(5);
                                                player.setSeed(player.getInventory()->getSeedById(4));
                                                windowStorageInside.close();
                                                break;
                                            case 3  :
                                                if(player.getActualMoney() < (player.getInventory()->getSeedById(5)->getPrice()) * 5){

                                                    break;
                                                }
                                                player.spendMoney((player.getInventory()->getSeedById(5)->getPrice()) * 5);
                                                player.getInventory()->getSeedById(5)->addSeed(5);
                                                player.setSeed(player.getInventory()->getSeedById(5));
                                                windowStorageInside.close();
                                                break;
                                            case 4  :
                                                if(player.getActualMoney() < (player.getInventory()->getSeedById(6)->getPrice()) * 5){

                                                    break;
                                                }
                                                player.spendMoney((player.getInventory()->getSeedById(6)->getPrice()) * 5);
                                                player.getInventory()->getSeedById(6)->addSeed(5);
                                                player.setSeed(player.getInventory()->getSeedById(6));
                                                windowStorageInside.close();
                                                break;
                                            case 5  :
                                                if(player.getActualMoney() < (player.getInventory()->getSeedById(7)->getPrice()) * 5){

                                                    break;
                                                }
                                                player.spendMoney((player.getInventory()->getSeedById(7)->getPrice()) * 5);
                                                player.getInventory()->getSeedById(7)->addSeed(5);
                                                player.setSeed(player.getInventory()->getSeedById(7));
                                                windowStorageInside.close();
                                                break;
                                            case 6  :

                                                if(player.getActualMoney() < (player.getInventory()->getSeedById(8)->getPrice()) * 5){

                                                    break;
                                                }
                                                player.spendMoney((player.getInventory()->getSeedById(8)->getPrice()) * 5);
                                                player.getInventory()->getSeedById(8)->addSeed(5);
                                                player.setSeed(player.getInventory()->getSeedById(8));

                                                windowStorageInside.close();
                                                break;
                                            case 7  :

                                                if(player.getActualMoney() < (player.getInventory()->getSeedById(9)->getPrice()) * 5){

                                                    break;
                                                }
                                                player.spendMoney((player.getInventory()->getSeedById(9)->getPrice()) * 5);
                                                player.getInventory()->getSeedById(9)->addSeed(5);
                                                player.setSeed(player.getInventory()->getSeedById(9));

                                                windowStorageInside.close();
                                                break;
                                            case 8  :

                                                if(player.getActualMoney() < (player.getInventory()->getSeedById(10)->getPrice()) * 5){

                                                    break;
                                                }
                                                player.spendMoney((player.getInventory()->getSeedById(10)->getPrice()) * 5);
                                                player.getInventory()->getSeedById(10)->addSeed(5);
                                                player.setSeed(player.getInventory()->getSeedById(10));

                                                windowStorageInside.close();
                                                break;
                                            case 9  :
                                                if(player.getActualMoney() < (player.getInventory()->getSeedById(11)->getPrice()) * 5){

                                                    break;
                                                }
                                                player.spendMoney((player.getInventory()->getSeedById(11)->getPrice()) * 5);
                                                player.getInventory()->getSeedById(11)->addSeed(5);
                                                player.setSeed(player.getInventory()->getSeedById(11));

                                                windowStorageInside.close();
                                                break;
                                            case 10  :

                                                windowStorageInside.close();
                                                break;

                                            default :
                                                cout<<"error"<<endl;
                                        }

                                    monneyDisplayer.loadMonney();
                                    }
                                    windowStorageInside.clear(sf::Color(100, 100, 200));
                                    windowStorageInside.draw(*(SfmlStorageSeeds.getCarrotSprite()));
                                    windowStorageInside.draw((SfmlStorageSeeds.getCarrotText()));
                                    windowStorageInside.draw(*(SfmlStorageSeeds.getEggplantSprite()));
                                    windowStorageInside.draw((SfmlStorageSeeds.getEggplantText()));
                                    windowStorageInside.draw(*(SfmlStorageSeeds.getEndiveSprite()));
                                    windowStorageInside.draw((SfmlStorageSeeds.getEndiveText()));
                                    windowStorageInside.draw(*(SfmlStorageSeeds.getLettuceSprite()));
                                    windowStorageInside.draw((SfmlStorageSeeds.getLettuceText()));
                                    windowStorageInside.draw(*(SfmlStorageSeeds.getMushroomSprite()));
                                    windowStorageInside.draw((SfmlStorageSeeds.getMushroomText()));
                                    windowStorageInside.draw(*(SfmlStorageSeeds.getPumpkinSprite()));
                                    windowStorageInside.draw((SfmlStorageSeeds.getPumpkinText()));
                                    windowStorageInside.draw(*(SfmlStorageSeeds.getRadishSprite()));
                                    windowStorageInside.draw((SfmlStorageSeeds.getRadishText()));
                                    windowStorageInside.draw(*(SfmlStorageSeeds.getTomatoSprite()));
                                    windowStorageInside.draw((SfmlStorageSeeds.getTomatoText()));
                                    windowStorageInside.draw(*(SfmlStorageSeeds.getZucchiniSprite()));
                                    windowStorageInside.draw((SfmlStorageSeeds.getZucchiniText()));
                                    windowStorageInside.draw(*(SfmlStorageSeeds.getStorageSprite()));
                                    windowStorageInside.draw(*(SfmlStorageSeeds.getContoursSprite()));
                                    windowStorageInside.display();
                                }
                            }
                        }
                        if((SfmlStorage.getContoursSprite()->getPosition().x == 35) && (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)))
                        {
                            windowStorageInside.create(sf::VideoMode(1000, 600), "Storage tools");

                            while (windowStorageInside.isOpen())
                            {
                                sf::Event eventStorageTools;
                                while (windowStorageInside.pollEvent(eventStorageTools))
                                {
                                    if (eventStorageTools.type == sf::Event::Closed)
                                    {
                                        windowStorageInside.close();
                                    }

                                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                                    {
                                        SfmlStorageTools.moveLeft();
                                    }
                                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                                    {
                                        SfmlStorageTools.moveRight();
                                    }
                                    windowStorageInside.clear(sf::Color(100, 100, 200));
                                    windowStorageInside.draw(*(SfmlStorageTools.getWateringCanSprite()));
                                    windowStorageInside.draw(*(SfmlStorageTools.getHoeSprite()));
                                    windowStorageInside.draw(*(SfmlStorageTools.getStorageSprite()));
                                    windowStorageInside.draw(*(SfmlStorageTools.getContoursSprite()));
                                    windowStorageInside.display();
                                }
                            }
                        }
                    }
                }
                windowStorage.clear(sf::Color(100, 100, 200));
                windowStorage.draw(*(SfmlStorage.getToolsSprite()));
                windowStorage.draw(*(SfmlStorage.getSeedsSprite()));
                windowStorage.draw(*(SfmlStorage.getContoursSprite()));
                windowStorage.display();
            }
        }
        window.clear();
        window.draw(gameScreen);
        window.draw(*(SfmlPlayer.getSprite()));
        window.draw(clock);
        window.draw(monneyDisplayer);

        window.display();
    }

    delete hoe;
    delete wateringCan;
    delete carrot;

    return 0;
}
