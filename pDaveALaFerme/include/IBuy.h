#ifndef IBUY_H
#define IBUY_H
#include <string>

using std::string;
class IBuy
{
    private:
        int price ;

    public:
        IBuy();
        virtual ~IBuy();
        IBuy(const IBuy& other);
        IBuy& operator=(const IBuy& other);

        virtual void buy(const string &message_from_subject) = 0;

};

#endif // IBUY_H
