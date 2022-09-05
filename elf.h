#ifndef ELF_H
#define ELF_H
#include "hero.h"

class Elf : public Hero
{
public:
    Elf();
    Elf(std::string name, int health, int damage, int cooldown, int duration);
    virtual int ult();
    virtual int doDamage();
};

#endif // ELF_H
