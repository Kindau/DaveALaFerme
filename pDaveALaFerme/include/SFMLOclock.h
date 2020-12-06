#ifndef SFMLOCLOCK_H
#define SFMLOCLOCK_H
#include "SFML/Graphics.hpp"
#include "Calendar.h"

class SFMLOclock : public sf::Transformable, public sf::Drawable
{
    private:
        Calendar* calendar;
        sf::Text date;
        sf::Font font;



          virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const{
            //On applique la transformation
            states.transform *= getTransform();
            target.draw(date,states);





        }

    public:
        SFMLOclock(Calendar* calendrier);
        virtual ~SFMLOclock();


        void displayDate();



    protected:


};

#endif // SFMLOCLOCK_H
