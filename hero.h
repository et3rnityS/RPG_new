#ifndef HERO_H
#define HERO_H


class Hero
{
public:
    Hero(int hp, int damage);

    virtual int getHp() const;
    virtual void setHp(int hp);

    virtual void getDamage(int hit);

    virtual void setDamage(int damage);

    virtual int doDamage();
    virtual bool isDead();



protected:
    /**
     * @brief m_hp
     */
    int m_hp = 10;
    int m_damage = 2;

};

#endif // HERO_H
