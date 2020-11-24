#ifndef IOBSERVER_H
#define IOBSERVER_H

#include <string>


using std::string;
//Equivalent à une interface java ==> pas de constructeur // Laissé dans la déclaration pour forme canonique
class IObserver
{
    public:
        IObserver();
        virtual ~IObserver();
        IObserver(const IObserver& other);
        IObserver& operator=(const IObserver& other);

        virtual void update(const string &message_from_subject) = 0;

    protected:

    private:
};

#endif // IOBSERVER_H
