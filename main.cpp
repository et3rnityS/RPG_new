#include <iostream>
#include "hero.h"
#include "knight.h"

using namespace std;

void fight(Hero* hero, Hero* hero2)
{
    while(!(hero->isDead())&&!(hero2->isDead()))
    {
        hero->getDamage(hero2->doDamage());
        hero2->getDamage(hero->doDamage());
        std::cout<<"h1 has "<<hero->getHp()<<"; h2 has "<<hero2->getHp()<<std::endl;
    }


}

int main()
{
    int hpKnight = 11;
    int damageKnight = 3;

    Knight* hero1 = new Knight(hpKnight, damageKnight);

    Knight* hero2 = new Knight(9, 4);

    fight(hero1, hero2);

    return 0;
}
