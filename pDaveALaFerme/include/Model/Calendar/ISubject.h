#ifndef ISUBJECT_H
#define ISUBJECT_H

#include <Model/Calendar/IObserver.h>

//Equivalent à une interface (observabble)
class ISubject
{
    public:
        ISubject();
        virtual ~ISubject();
        ISubject(const ISubject& other);
        ISubject& operator=(const ISubject& other);

        virtual void attach(IObserver *observer) = 0;
        virtual void detach(IObserver *observer) = 0;
        virtual void notify() = 0;

    protected:

    private:
};

#endif // ISUBJECT_H
