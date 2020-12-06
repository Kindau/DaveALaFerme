#include "Model/Player/Wallet.h"

Wallet::Wallet(int _money):money(_money)
{
    //ctor
}

Wallet::~Wallet()
{
    //dtor
}

Wallet::Wallet(const Wallet& other)
{
    //copy ctor
    money = other.money;
}

Wallet& Wallet::operator=(const Wallet& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    money = rhs.money;
    return *this;
}

void Wallet::addMoney(int ammount){
    if(ammount > 0){
        money += money + ammount;
    }
}

void Wallet::spendMoney(int ammount){
    if(ammount > 0){
        money -= money - ammount;
    }
}

string Wallet::str() const{
    return "wallet: "+to_string(money);
}
