#ifndef PLAYER_H
#define PLAYER_H

#include "Mover.h"
#include "Wallet.h"


class Player
{
    public:
        Player(Wallet* _wallet, Mover* _mover);
        virtual ~Player();
        Player(const Player& other);
        Player& operator=(const Player& other);
        string str() const;

        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();

        void addMoney(int ammount);
        void spendMoney(int ammount);


    protected:

    private:
        Wallet* wallet;
        Mover* mover;
};

#endif // PLAYER_H
