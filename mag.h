#ifndef MAG_H
#define MAG_H
#include "hero.h"

class Mag : public Hero
{
public:
    Mag();
    Mag(std::string name, int health, int damage, int cooldown, int duration);
    virtual int ult();
    virtual void getDamage(int damage);
};

#endif // MAG_H
