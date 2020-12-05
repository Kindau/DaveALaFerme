#include "Tile.h"
#include "EmptyTile.h"

// CONSTRUCTEUR
Tile::Tile(int _x,int _y, int growingTime):Ground(_x,_y), _growingTime(growingTime)
{
    _state = new EmptyTile(this);
}

// =========================================================================================
// FORME CANONIQUE
// =========================================================================================
// DESTRUCTEUR
Tile::~Tile()
{
    //dtor
}

// CONSTRUCTEUR DE COPIE
Tile::Tile(const Tile& other):Ground(other)
{
    _growingTime = other._growingTime;
}

// OPERATEUR D'AFFECTATION
Tile& Tile::operator=(const Tile& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    if(this != &rhs){
        Ground::operator=(rhs);
        _growingTime = rhs._growingTime;
    }
    return *this;
}
// =========================================================================================

// GETTERS & SETTER
int Tile::getGrowingTime()const
{
    return _growingTime;
}

void Tile::setGrowingTime(int time)
{
    _growingTime = time;
}

//OTHER METHODS
void Tile::update(const string &str){

}

// STATE PATTERN METHODS
void Tile::setState(StateTile* state)
{
    _state = state;
}

void Tile::handle()
{
    _state->handle();
}

Ground* Tile::clone()const{
    int x = Ground::getX();
    int y = Ground::getY();

    return new Tile(x,y,_growingTime);
}


string Tile::str()const{
    return "#";
}


string Tile::stringState()const{
    return _state->str();
}
