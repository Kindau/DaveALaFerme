#ifndef IEQUIPABLE_H
#define IEQUIPABLE_H


class IEquipable
{
    public:
        IEquipable();
        virtual ~IEquipable();
        IEquipable(const IEquipable& other);
        IEquipable& operator=(const IEquipable& other);

    protected:

    private:

};

#endif // IEQUIPABLE_H
