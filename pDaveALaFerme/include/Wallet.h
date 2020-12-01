#ifndef WALLET_H
#define WALLET_H
#include <string>

using std::string;
using std::to_string;
class Wallet
{
    public:
        Wallet(int _money = 0);
        virtual ~Wallet();
        Wallet(const Wallet& other);
        Wallet& operator=(const Wallet& other);
        Wallet* clone() const{return new Wallet(*this);};

        void addMoney(int ammount);
        void spendMoney(int ammount);
        string str() const;

    protected:

    private:
        int money;
};

#endif // WALLET_H
