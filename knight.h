#ifndef KNIGHT_H
#define KNIGHT_H
#include "hero.h"

class Knight : public Hero
{
public:
    Knight();
    Knight(std::string name, int health, int damage, int cooldown, int duration);
    virtual int ult();
    virtual int doDamage();
    virtual void printHeroDead();

};

#endif // KNIGHT_H
