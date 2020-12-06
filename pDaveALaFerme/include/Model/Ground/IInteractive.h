#ifndef IINTERACTIVE_H
#define IINTERACTIVE_H

#include "Model/Item/Tools/Tool.h"
#include "Model/Item/Seeds/Seed.h"


class IInteractive
{
    private:



    public:
        IInteractive();
        virtual ~IInteractive();
        IInteractive(const IInteractive& other);
        IInteractive& operator=(const IInteractive& other);

        virtual bool interact(Tool* t)=0;
        virtual bool interact(Seed* s)=0;

    protected:

};

#endif // IINTERACTIVE_H
