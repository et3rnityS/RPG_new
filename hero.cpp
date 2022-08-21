#include "hero.h"

Hero::Hero()
{

}

Hero::Hero(std::string name, int health, int damage)
{
    this->m_name=name;
    this->m_health=health;
    this->m_damage=damage;

}

std::string Hero::getName()
{
    return m_name;
}

int Hero::getHealth()
{
    return m_health;
}

int Hero::doDamage()
{
    return m_damage;
}

void Hero::getDamage(int damage)
{
    m_health-=damage;
}

bool Hero::isDead()
{
    return m_health<=0;
}
