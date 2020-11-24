#include "GameObject.h"

GameObject::GameObject()
{
    //ctor
}

GameObject::~GameObject()
{
    //dtor
}

GameObject::GameObject(const GameObject& other)
{
    //copy ctor
}

GameObject& GameObject::operator=(const GameObject& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
