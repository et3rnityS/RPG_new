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
    this->m_counterCooldown=cooldown;
    this->m_counterDuration=duration;

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

int Hero::ult()
{

}

void Hero::printHeroDead()
{
    std::cout<<"Hero is dead!"<<std::endl;
}

void Hero::printHeroHealth()
{
    std::cout<<m_name<<" has "<<m_health<< " hp"<<std::endl;
}

void Hero::printHeroHit()
{
    std::cout<<m_name<<" hit on "<<m_damage<<std::endl;
}




