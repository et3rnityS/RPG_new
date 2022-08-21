#ifndef MAG_H
#define MAG_H
#include "hero.h"

class Mag : public Hero
{
private:
    std::string m_name;
    int m_health;
    int m_damage;
public:
    Mag();
    Mag(std::string name, int health, int damage);
};

#endif // MAG_H
