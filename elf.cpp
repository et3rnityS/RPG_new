#include "elf.h"

void Elf::getDamage(int damage)
{
    m_hp-=damage;
}

int Elf::doDamage()
{
    return m_damage;
}

bool Elf::isDead()
{
    return m_hp<=0;
}

int Elf::getHp() const
{
    return m_hp;
}
