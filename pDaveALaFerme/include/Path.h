#ifndef PATH_H
#define PATH_H

#include <Ground.h>


class Path : public Ground
{
    public:
        Path(int x=0, int y=0);
        virtual ~Path();
        Path(const Path& other);
        Path& operator=(const Path& other);

        Ground* clone()const;
        string str()const;

    protected:

    private:
};

#endif // PATH_H
