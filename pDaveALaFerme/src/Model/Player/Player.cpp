#include "Model/Player/Player.h"

Player::Player(Wallet* _wallet, Mover* _mover):wallet(new Wallet(*_wallet)),mover(new Mover(*_mover))
{
    //ctor
}

Player::~Player()
{
    //dtor
    delete wallet;
    delete mover;
}

Player::Player(const Player& other)
{
    //copy ctor
    this->wallet = other.wallet->clone();
    this->mover = other.mover->clone();
}

Player& Player::operator=(const Player& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    delete wallet;
    delete mover;

    mover = rhs.mover->clone();
    wallet = rhs.wallet->clone();
    return *this;
}

string Player::str() const{
    return "Player:\n"+wallet->str() +"\n"+ mover->str();
}

void Player::moveDown() {
    mover->moveDown();
}

void Player::moveLeft(){
    mover->moveLeft();
}

void Player::moveRight(){
    mover->moveRight();
}

void Player::moveUp(){
    mover->moveUp();
}

void Player::addMoney(int ammount){
    wallet->addMoney(ammount);
}

void Player::spendMoney(int ammount){
    wallet->spendMoney(ammount);
}
