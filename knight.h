#ifndef KNIGHT_H
#define KNIGHT_H
#include "hero.h"

class Knight : public Hero
{
private:
    std::string m_name;
    int m_health;
    int m_damage;
public:
    Knight();
    Knight(std::string name, int health, int damage);

};

#endif // KNIGHT_H
