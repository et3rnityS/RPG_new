#include "mag.h"

Mag::Mag()
{

}

Mag::Mag(std::string name, int health, int damage, int cooldown, int duration):
    Hero(name, health, damage, cooldown, duration)
{

}

int Mag::ult()
{
    return m_health;
}
void Mag::getDamage(int damage)
{
    if (m_counterCooldown==0 && m_counterDuration>0)
    {
        m_counterDuration--;
        m_health=ult();
    }

    else if (m_counterCooldown==0 && m_counterDuration==0)
    {
        m_counterCooldown=m_cooldown;
        m_counterDuration=m_duration;
        m_health-=damage;
    }

    else
    {
        m_counterCooldown--;
        m_health-=damage;
    }
}
