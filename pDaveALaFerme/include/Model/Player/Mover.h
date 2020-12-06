#ifndef MOVER_H
#define MOVER_H
#include <string>

using std::string;
using std::to_string;

class Mover
{
    public:
        Mover(int _nbCase=0);
        virtual ~Mover();
        Mover(const Mover& other);
        Mover& operator=(const Mover& other);
        Mover* clone() const{return new Mover(*this);};
        string str() const;

        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();

        int getnbCase() const;

    protected:

    private:
        int nbCase;
};

#endif // MOVER_H
