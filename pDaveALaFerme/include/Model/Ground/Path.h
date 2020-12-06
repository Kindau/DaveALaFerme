#ifndef PATH_H
#define PATH_H

#include "Model/Ground/Ground.h"
#include "Model/Ground/IInteractive.h"
#include <iostream>

class Path : public Ground//, public IInteractive
{
    public:
        Path(int x=0, int y=0);
        virtual ~Path();
        Path(const Path& other);
        Path& operator=(const Path& other);

        Ground* clone()const;
        string str()const;

        virtual bool interact(Tool* t){std::cout<<"Je suis dans un path"<<std::endl;return false;}
        virtual bool interact(Seed* s){return false;}

    protected:

    private:
};

#endif // PATH_H
