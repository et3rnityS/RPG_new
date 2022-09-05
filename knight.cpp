#include "knight.h"

Knight::Knight()
{

}

Knight::Knight(std::string name, int health, int damage, int cooldown, int duration):
    Hero(name, health, damage, cooldown, duration)
{

}
int Knight::ult()
{
    return (m_damage*2);
}

int Knight::doDamage()
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

