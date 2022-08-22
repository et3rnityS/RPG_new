#include "elf.h"

Elf::Elf()
{

}

Elf::Elf(std::string name, int health, int damage):
    Hero(name, health, damage)
{

}

bool Elf::ult(int step)
{
    if (step%2==0&&step!=0)
    {
        //std::cout<<"Elf has used ulty!"<<std::endl;
        return true;
    }
    return false;
}

int Elf::doDamage(int step)
{
    if (ult(step))
    {
        return (m_damage+2);
    }
    return m_damage;
}
