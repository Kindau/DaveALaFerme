#ifndef MARKET_H
#define MARKET_H

#include "Model/Ground/Ground.h"
#include "Model/Ground/IInteractive.h"
#include "Model/Player/Player.h"

class Market : public Ground//, public IInteractive
{

    private:
        Player* player; //Associe un player (utile pour la gestion des transaction)

    public:
        Market(int x = 0,int y = 0);
        virtual ~Market();
        Market(const Market& other);
        Market& operator=(const Market& other);

        void sellItems(); //Cannot be defined as Item isn't

        Ground* clone()const;
        string str()const;

        void setPlayer(Player* p){ //Associe un player au market
            player = p;
        }

        Player* getPlayer()const{
            return player;
        }

        void interact();
        //Permet de vendre la totalité des objets Harvest que possède le player dans son inventaire
        virtual bool interact(Tool* t);
        virtual bool interact(Seed* s){return false;}

    protected:


};

#endif // MARKET_H
