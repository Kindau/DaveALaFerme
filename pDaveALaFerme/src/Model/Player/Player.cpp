#include "Model/Player/Player.h"

Player::Player(Tool* _tool,Seed* _seed):wallet(),mover(),inventory(),tool(_tool),seed(_seed)
{
    //ctor

}

Player::~Player()
{
    //dtor

}

Player::Player(const Player& other)
{
    //copy ctor
    this->wallet = other.wallet;
    this->mover = other.mover;
    this->inventory = other.inventory;
}

Player& Player::operator=(const Player& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator

    mover = rhs.mover;
    wallet = rhs.wallet;
    return *this;
}

string Player::str() const{
    return "Player:\n"+wallet.str() +"\n"+ mover.str();
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
    mover.moveDown();
}

void Player::moveLeft(){
    mover.moveLeft();
}

void Player::moveRight(){
    mover.moveRight();
}

void Player::moveUp(){
    mover.moveUp();
}

void Player::addMoney(int ammount){
    wallet.addMoney(ammount);
}

void Player::spendMoney(int ammount){
    wallet.spendMoney(ammount);
}

int Player::getActualMoney() const{
    return wallet.getMoney();
}

int Player::getnbCase() const{
    return mover.getnbCase();
}

