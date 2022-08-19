#ifndef HERO_H
#define HERO_H
#include <string>

class Hero
{
private:
    std::string m_name;
    int m_health;
    int m_damage;
public:
    Hero();
    Hero(std::string name, int health, int damage);
    std::string getName();
    int getHealth();
    int getDamage();
    void getDamage(int damage);
    bool isDead();


};

#endif // HERO_H
