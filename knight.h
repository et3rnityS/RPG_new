#ifndef KNIGHT_H
#define KNIGHT_H
#include "hero.h"

class Knight : public Hero
{
public:
    Knight();
    Knight(std::string name, int health, int damage, int cooldown, int duration);
    virtual bool ult(int step);
    virtual int doDamage(int step);

};

#endif // KNIGHT_H
