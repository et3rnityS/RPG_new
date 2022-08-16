#include "mag.h"


void Mag::getDamage(int damage)
{
    m_hp-=damage;
}

int Mag::doDamage()
{
    return m_damage;
}

bool Mag::isDead()
{
    return m_hp<=0;
}

int Mag::getHp() const
{
    return m_hp;
}
