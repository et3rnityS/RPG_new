#include "hero.h"

Hero::Hero(int hp, int damage)
{
    this->m_hp = hp;
    this->m_damage = damage;
}

int Hero::getHp() const
{
    return m_hp;
}

void Hero::setHp(int hp)
{
    m_hp = hp;
}

void Hero::getDamage(int hit)
{
    this->m_hp -= hit;
}

void Hero::setDamage(int damage)
{
    m_damage = damage;
}

int Hero::doDamage()
{
    return m_damage;
}

bool Hero::isDead()
{
    return m_hp <=0;
}
