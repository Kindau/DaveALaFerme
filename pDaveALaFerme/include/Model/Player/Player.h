#ifndef PLAYER_H
#define PLAYER_H

#include "Model/Player/Mover.h"
#include "Model/Player/Wallet.h"
#include "Model/Player/Inventory.h"
#include "Model/Item/Tools/Tool.h"
#include "Model/Item/Seeds/Seed.h"


class Player
{
    public:
        //forme canonique
        Player(Tool* _tool=nullptr, Seed* _seed=nullptr);
        virtual ~Player();
        Player(const Player& other);
        Player& operator=(const Player& other);
        string str() const;

        //getteurs et setteurs
        void setTool(Tool* _tool);
        Tool* getTool()const;
        void setSeed(Seed* _seed);
        Seed* getSeed()const;
        Inventory* getInventory() ;
        int getActualMoney() const;
        int getnbCase() const;


        //fonction qui font appel au mover
        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();

        //fonction qui font appel au Wallet
        void addMoney(int ammount);
        void spendMoney(int ammount);





    protected:

    private:
        // le wallet, mover et Inventory sont directement crée dans le player
        Wallet wallet;
        Mover mover;
        Inventory inventory;

        // pointeurs en agrégation externe pour que si la seed ou le tool est modifier dans player, il le soit aussi dans l'inventaire
        Tool* tool;
        Seed* seed;

};

#endif // PLAYER_H
