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
    int m_cooldown;
    int m_duration;
    int m_counterCooldown;
    int m_counterDuration;
public:
    Hero();
    Hero(std::string name, int health, int damage, int cooldown, int duration);
    virtual std::string getName();
    virtual int getHealth();
    virtual int doDamage();
    virtual void getDamage(int damage);
    virtual bool isDead();
    virtual int ult()=0;
    friend bool operator!=(Hero &hero1, Hero &hero2);
};

#endif // HERO_H
