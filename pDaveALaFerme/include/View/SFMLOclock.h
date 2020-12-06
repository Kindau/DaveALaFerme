#ifndef SFMLOCLOCK_H
#define SFMLOCLOCK_H
#include <SFML/Graphics.hpp>
#include "Model/Calendar/Calendar.h"
#include "Model/Calendar/IObserver.h"

class SFMLOclock : public sf::Transformable, public sf::Drawable, public IObserver
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

        void update();
        void subscribe(ISubject* s){
            s->attach(this);
        }
        void unsubscribe(ISubject* s){
            s->detach(this);
        }



    protected:


};

#endif // SFMLOCLOCK_H
