#ifndef MAG_H
#define MAG_H
#include "hero.h"

class Mag : public Hero
{
public:
    Mag();
    Mag(std::string name, int health, int damage);
    virtual bool ult(int step);
    virtual void getDamage(int damage, int step);
};

#endif // MAG_H
