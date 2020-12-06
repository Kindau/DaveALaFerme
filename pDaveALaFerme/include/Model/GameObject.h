#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H


class GameObject
{
    public:
        GameObject();
        virtual ~GameObject();
        GameObject(const GameObject& other);
        GameObject& operator=(const GameObject& other);

    protected:

    private:
};

#endif // GAMEOBJECT_H
