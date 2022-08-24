#ifndef ELF_H
#define ELF_H
#include "hero.h"

class Elf : public Hero
{
public:
    Elf();
    Elf(std::string name, int health, int damage, int cooldown, int duration);
    virtual bool ult(int step);
    virtual int doDamage(int step);
    virtual int durationUlt(int step);
};

#endif // ELF_H
