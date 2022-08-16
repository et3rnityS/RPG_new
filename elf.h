#ifndef ELF_H
#define ELF_H
#include"hero.h"

class Elf : public Hero
{
public:
    Elf(int hp, int damage): Hero(hp, damage)
    {

    };

    void getDamage(int damage);
    int doDamage();
    bool isDead();
    int getHp() const;


};

#endif // ELF_H
