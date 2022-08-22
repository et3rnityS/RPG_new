#include "knight.h"

Knight::Knight()
{

}

Knight::Knight(std::string name, int health, int damage):
    Hero(name, health, damage)
{

}
bool Knight::ult(int step)
{
    if (step%3==0&&step!=0)
    {
       // std::cout<<"Knight has use ulty!"<<std::endl;
        return true;
    }
    return false;
}

int Knight::doDamage(int step)
{
    if (ult(step))
    {
        return m_damage*2;
    }
    return m_damage;
}


