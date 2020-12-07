#ifndef IOBSERVER_H
#define IOBSERVER_H

#include <string>


using std::string;
//Equivalent à une interface java ==> pas de constructeur // Laissé dans la déclaration pour forme canonique
// L'interface IObserver permet de mettre en place un Design Pattern Observer, elle devras être implementée dans les classes pour vant observer un subject
class IObserver
{
    public:
        IObserver();
        virtual ~IObserver();
        IObserver(const IObserver& other);
        IObserver& operator=(const IObserver& other);

        virtual void update() = 0;
//        virtual void subscribe(ISubject* subject);
//        virtual void unsubscribe(ISubject* subject);

    protected:

    private:
};

#endif // IOBSERVER_H
