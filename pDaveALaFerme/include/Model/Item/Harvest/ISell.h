#ifndef ISELL_H
#define ISELL_H
#include <string>

using std::string;

// INUTILE, A SUPPRIMER
class ISell
{
    private:
        int price ;

    public:
        ISell();
        virtual ~ISell();
        ISell(const ISell& other);
        ISell& operator=(const ISell& other);

        virtual void sell(const string &message_from_subject) = 0;
};

#endif // ISELL_H
