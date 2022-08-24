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
public:
    Hero();
    Hero(std::string name, int health, int damage, int cooldown, int duration);
    virtual std::string getName();
    virtual int getHealth();
    virtual int doDamage(int step);
    virtual void getDamage(int damage, int step);
    virtual bool isDead();
    virtual bool ult(int step);
    virtual int durationUlt(int step);



};

#endif // HERO_H
