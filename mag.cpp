#include "mag.h"

Mag::Mag()
{

}

Mag::Mag(std::string name, int health, int damage, int cooldown, int duration):
    Hero(name, health, damage, cooldown, duration)
{

}

bool Mag::ult(int step)
{
    if (step%3==0&&step!=0)
    {
        return true;
    }
    return false;
}

void Mag::getDamage(int damage, int step)
{
    if (ult(step))
    {
        damage = 0;
        m_health-=damage;
    }
    else
    {
        m_health-=damage;
    }
}

int Mag::durationUlt(int step)
{
    if (ult(step))
        return 3;
    return 0;
}
