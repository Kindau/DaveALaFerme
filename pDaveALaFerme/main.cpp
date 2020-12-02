#include <SFML/Graphics.hpp>
#include <iostream>

//Import des classes

#include <Market.h>
#include <Path.h>
#include <Tile.h>
#include <Wallet.h>
#include <Mover.h>
#include <Player.h>

using namespace std;
int main()
{
    //Je suis un Comm de louis et Audrey et Mel
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
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
        window.draw(shape);
        window.display();
    }

    cout<<"Test construction des objects ! : "<<endl;

    Market market(0,0);
    Path path(0,0);
    Tile tile(0,0);

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
    Tile tileTestState(2,2);

    tileTestState.handle();
    tileTestState.handle();
    tileTestState.handle();
    tileTestState.handle();
    tileTestState.handle();
    tileTestState.handle();

    return 0;
}
