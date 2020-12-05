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


    cout<<"Test construction des objects ! : "<<endl;

    Market market(0,0);
    Path path(0,0);
    Tile tile(0,0);


    Calendar calendrier;

    /*Map* terrain_de_jeu = new Map(20,20);

    cout<<terrain_de_jeu->str()<<endl;

    delete terrain_de_jeu;*/

    Map gameSpace("exempleFichier.txt");

    SFMLMap gameScreen(&gameSpace);
    if(!gameScreen.load(sf::Vector2u(40,40))){
        cout<<"Problème à resoudre :)"<<endl;
    }

    //Je suis un Comm de louis et Audrey et Mel
    sf::RenderWindow window(sf::VideoMode(1000, 600), "SFML works!");

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



  /*  for(int i = 1;i<= 300;i++){
        cout<<calendrier.str()<<endl;
        calendrier.goToNextDay();
    }


    cout <<"Si ceci s'affiche c'est que la construction est ok ! "<<endl;


    cout<<"test wallet"<<endl;
    Wallet wallet(0);
    wallet.addMoney(100);
    cout<<"wallet:"+wallet.str()<<endl;
    wallet.spendMoney(50);
    cout<<"wallet:"+wallet.str()<<endl;

    cout<<"test Mover"<<endl;
    Mover mov;
    cout<<mov.str()<<endl;
    mov.moveRight();
    cout<<mov.str()<<endl;
    mov.moveLeft();
    cout<<mov.str()<<endl;
    mov.moveUp();
    cout<<mov.str()<<endl;
    mov.moveDown();
    cout<<mov.str()<<endl;

    cout<<"test player:"<<endl;
    Player player(&wallet,&mov);
    cout<<player.str()<<endl;


    cout<<"\ntest state: "<<endl;
    Tile tileTestState(2,2,2);

    cout<<tileTestState.getGrowingTime()<<endl;

    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;
    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;
    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;
    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;
    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;
    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;
    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;
    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;
    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;
    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;
    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;
    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;
    tileTestState.handle();
    cout<<tileTestState.getGrowingTime()<<endl;*/




    return 0;
}
