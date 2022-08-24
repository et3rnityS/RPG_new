#include "elf.h"

Elf::Elf()
{

}

Elf::Elf(std::string name, int health, int damage, int cooldown, int duration):
    Hero(name, health, damage, cooldown, duration)
{

}

bool Elf::ult(int step)
{
    if (step%2==0&&step!=0)
    {

        return true;
    }
    return false;
}

int Elf::doDamage(int step)
{
    if (ult(step))
    {
        return (m_damage+2);
    }
    return m_damage;
}

int Elf::durationUlt(int step)
{
    if (ult(step))
        return 3;
    return 0;
}
