#include <iostream>
#include "hero.h"
#include "elf.h"
#include "mag.h"
#include "knight.h"
#include <cstdlib>
#include <ctime>

using namespace std;


enum Heroes
{
    HEROES_KNIGHT,
    HEROES_ELF,
    HEROES_MAG,
    HEROES_MAX
};

void fight(Hero* hero, Hero* hero2)
{
    while(!(hero->isDead())&&!(hero2->isDead()))
    {
        hero->getDamage(hero2->doDamage());
        if (hero2->isDead())
        {
            std::cout<<"h2 is dead!"<<std::endl;

        }
        break;
        hero2->getDamage(hero->doDamage());
        std::cout<<"h1 has "<<hero->getHp()<<"; h2 has "<<hero2->getHp()<<std::endl;
    }


}

void create()
{

}
Hero switchHero(Heroes hero)
{
    switch(hero)
    {
    case 0:
        return Knight* hero = new Knight(13, 1);
    case 1:
        return Elf* hero = new Elf(9, 3);
    case 2:
        return Mag* hero = new Mag(11, 2);
    }
}
int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0/(static_cast<double>(RAND_MAX)+1.0);
    return static_cast<int>(rand()*fraction*(max - min +1)+min);
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    Heroes hero1=static_cast<Heroes>(getRandomNumber(0,HEROES_MAX-1));
    Heroes hero2=static_cast<Heroes>(getRandomNumber(0, HEROES_MAX-1));
    while (hero1!=hero2)
    {
        hero2=static_cast<Heroes>(getRandomNumber(0, HEROES_MAX-1));
    }



    Hero firstHero=switchHero(hero1);
    Hero secondHero=switchHero(hero2);

  //  Knight* hero1 = new Knight(hpKnight, damageKnight);

    //Knight* hero2 = new Knight(9, 4);

   fight(firstHero, secondHero);

    return 0;
}
