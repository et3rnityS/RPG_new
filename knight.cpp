#include "knight.h"


void Knight::getDamage(int hit)
{
    this->m_hp -= hit;
}

int Knight::doDamage()
{
    return m_damage;
}

bool Knight::isDead()
{
    return m_hp <=0;
}

int Knight::getHp() const
{
    return m_hp;
}
