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

//Setteurs
void Player::setTool(Tool* _tool){
    tool = _tool;
}



void Player::setSeed(Seed* _seed){
    seed = _seed;
}

// Getteurs
Tool* Player::getTool()const {
    return tool;
}

Seed* Player::getSeed()const {
    return seed;
}

int Player::getActualMoney() const{
    return wallet.getMoney();
}

int Player::getnbCase() const{
    return mover.getnbCase();
}

Inventory* Player::getInventory(){
    return &inventory;
}

// les méthodes move font appel au méthode move correspondante du moveur, elle sont appellé lorsque le sprite est déplacer dans SFMLPlayer pour garder une trace symbolique de la position
// du player sur la map (la première tuile en haut a gauche etant la tuile 0 et la dernière tuile en bas a droite etant la tuile 374)
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


// permet d'ajouter de l'argent au wallet du joueur
void Player::addMoney(int ammount){
    wallet.addMoney(ammount);
}

// permet de retirer de l'argent du wallet du joueur
void Player::spendMoney(int ammount){
    wallet.spendMoney(ammount);
}

