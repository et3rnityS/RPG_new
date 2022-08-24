#include "hero.h"

Hero::Hero()
{

}

Hero::Hero(std::string name, int health, int damage, int cooldown, int duration)
{
    this->m_name=name;
    this->m_health=health;
    this->m_damage=damage;
    this->m_cooldown=cooldown;
    this->m_duration= duration;

}

std::string Hero::getName()
{
    return m_name;
}

int Hero::getHealth()
{
    return m_health;
}

int Hero::doDamage(int step)
{
    return m_damage;
}


void Hero::getDamage(int damage, int step)
{
    m_health-=damage;
}

bool Hero::isDead()
{
    return m_health<=0;
}

bool Hero::ult(int step)
{
    return false;
}

int Hero::durationUlt(int step)
{
    if (ult(step))
        return 0;
}


