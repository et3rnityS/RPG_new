#ifndef ELF_H
#define ELF_H
#include "hero.h"

class Elf : public Hero
{
private:
    std::string m_name;
    int m_health;
    int m_damage;
public:
    Elf();
    Elf(std::string name, int health, int damage);
};

#endif // ELF_H
