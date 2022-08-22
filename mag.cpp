#include "mag.h"

Mag::Mag()
{

}

Mag::Mag(std::string name, int health, int damage):
    Hero(name, health, damage)
{

}

bool Mag::ult(int step)
{
    if (step%3==0&&step!=0)
    {
        std::cout<<"Mag has used ulty!"<<std::endl;
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
