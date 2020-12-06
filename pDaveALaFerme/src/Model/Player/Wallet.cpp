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

// ajoute a money l'ammount passé en argument si celui-ci est un nombre possitif
void Wallet::addMoney(int ammount){
    if(ammount > 0){
        money += money + ammount;
    }
}

// retire a money l'ammount passé en argument si celui-ci est un nombre possitif et qu'il ne fait pas passé money en dessous de 0
void Wallet::spendMoney(int ammount){
    if(ammount > 0 && getMoney() - ammount >=0){
        money -= money - ammount;
    }
}

int Wallet::getMoney() const{
    return money;
}

string Wallet::str() const{
    return "wallet: "+to_string(money);
}
