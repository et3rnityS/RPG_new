#ifndef KNIGHT_H
#define KNIGHT_H

#include "hero.h"

class Knight : public Hero
{
public:
    Knight(int hp, int damage) : Hero(hp, damage)
    {

    };

    /**
     * @brief getDamage -lkzajsdkasjdka
     * @param hit
     */
    void getDamage(int hit);

    /**
     * @brief doDamage
     * @param hit
     * @return
     */
    int doDamage();

    bool isDead();

    int getHp() const;



};

#endif // KNIGHT_H
