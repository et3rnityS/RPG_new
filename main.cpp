#include <iostream>
#include "hero.h"
#include "knight.h"
#include "mag.h"
#include "elf.h"
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

    switch(hero1)
    {
    case 0:
        std::cout<<"1111"<<std::endl;
        break;
    case 1:
        std::cout<<"2222"<<std::endl;
        break;
    case 2:
        std::cout<<"3333"<<std::endl;
        break;
    default:
        std::cout<<"Unknown hero!"<<std::endl;

    }
    int hpKnight = 11;
    int damageKnight = 3;

  //  Knight* hero1 = new Knight(hpKnight, damageKnight);

    //Knight* hero2 = new Knight(9, 4);

   // fight(hero1, hero2);

    return 0;
}
