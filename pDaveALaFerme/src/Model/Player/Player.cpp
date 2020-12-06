#include "Model/Player/Player.h"

Player::Player(Wallet* _wallet, Mover* _mover,Tool* _tool,Seed* _seed):wallet(new Wallet(*_wallet)),mover(new Mover(*_mover)),tool(_tool),seed(_seed)
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

void Player::setTool(Tool* _tool){
    seed = nullptr;
    tool = _tool;
}

Tool* Player::getTool()const {
    return tool;
}

void Player::setSeed(Seed* _seed){
    tool = nullptr;
    seed = _seed;
}

Seed* Player::getSeed()const {
    return seed;
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

int Player::getActualMoney() const{
    return wallet->getMoney();
}

int Player::getnbCase() const{
    return mover->getnbCase();
}

