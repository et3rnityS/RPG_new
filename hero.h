#ifndef HERO_H
#define HERO_H
#include <string>
#include <iostream>

class Hero
{
protected:
    std::string m_name;
    int m_health;
    int m_damage;
public:
    Hero();
    Hero(std::string name, int health, int damage);
    virtual std::string getName();
    virtual int getHealth();
    virtual int doDamage();
    virtual void getDamage(int damage);
    virtual bool isDead();


};

#endif // HERO_H
