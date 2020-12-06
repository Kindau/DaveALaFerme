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
        Player(Tool* _tool=nullptr, Seed* _seed=nullptr);
        virtual ~Player();
        Player(const Player& other);
        Player& operator=(const Player& other);
        string str() const;

        void setTool(Tool* _tool);
        Tool* getTool()const;
        void setSeed(Seed* _seed);
        Seed* getSeed()const;


        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();

        void addMoney(int ammount);
        void spendMoney(int ammount);
        int getActualMoney() const;

        int getnbCase() const;

        Inventory* getInventory() ;


    protected:

    private:
        Wallet wallet;
        Mover mover;
        Inventory inventory;
        Tool* tool;
        Seed* seed;

};

#endif // PLAYER_H
