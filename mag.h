#ifndef MAG_H
#define MAG_H
#include "hero.h"

class Mag : public Hero
{
public:
    Mag(int hp, int damage):Hero(hp,damage)
    {

    };
    void getDamage(int damage);
    int doDamage();
    bool isDead();
    int getHp() const;

};

#endif // MAG_H
