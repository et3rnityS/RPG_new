#ifndef ELF_H
#define ELF_H
#include "hero.h"

class Elf : public Hero
{
public:
    Elf();
    Elf(std::string name, int health, int damage);
    virtual bool ult(int step);
    virtual int doDamage(int step);
};

#endif // ELF_H
