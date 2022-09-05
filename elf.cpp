#include "elf.h"

Elf::Elf()
{

}

Elf::Elf(std::string name, int health, int damage, int cooldown, int duration):
    Hero(name, health, damage, cooldown, duration)
{

}

int Elf::ult()
{
   return (m_damage+2);
}

int Elf::doDamage()
{
    if (m_counterCooldown==0&&m_counterDuration>0)
    {
        m_counterDuration--;
        return ult();
    }
    if (m_counterCooldown==0 && m_counterDuration==0)
    {
        m_counterCooldown=m_cooldown;
        m_counterDuration=m_duration;
        return m_damage;
    }
    else
    {
        m_counterCooldown--;
        return m_damage;
    }
}





