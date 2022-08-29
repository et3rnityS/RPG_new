#include <iostream>

#include <cstdlib>
#include <ctime>
#include "hero.h"
#include "knight.h"
#include "elf.h"
#include "mag.h"

using namespace std;




int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0/(static_cast<double>(RAND_MAX)+1.0);
    return static_cast<int>(rand()*fraction*(max - min +1)+min);
}

enum Heroes
{
    KNIGHT,
    ELF,
    MAG,
    MAX_HEROES
};

void printLog(Hero *hero1, Hero *hero2)
{
    std::cout<<hero2->getName()<<" hit "<<hero1->getName()<<" on "<< hero2->doDamage()<<std::endl;
    std::cout<<hero1->getName()<<" has "<< hero1->getHealth()<<" hp"<<std::endl;
    std::cout<<hero1->getName()<<" hit "<<hero2->getName()<<" on "<< hero1->doDamage()<<std::endl;
    std::cout<<hero2->getName()<<" has "<<hero2->getHealth()<< " hp"<<std::endl;
}

void fight(Hero *hero1, Hero *hero2)
{
    int step = 0;
    while (!(hero1->isDead())&&!(hero2->isDead()))
    {
       std::cout<<"Step: "<<step+1<<std::endl;

        hero2->getDamage(hero1->doDamage());
        hero1->printHeroHit();
        if (hero2->isDead())
        {
            hero2->printHeroDead();
            break;
        }

        hero1->getDamage(hero2->doDamage());
        hero2->printHeroHit();
        if (hero1->isDead())
        {
            hero1->printHeroDead();
            break;
        }

        hero1->printHeroHealth();
        hero2->printHeroHealth();


        ++step;

    }
}



int main()
{
    srand(static_cast<unsigned int>(time(0)));
    Knight knight("Knight", 50, 2, 3, 1);
    Elf elf("Elf", 30, 4, 2, 2);
    Mag mag("Mag", 40, 3, 3, 2);


    Hero *heroes[] = {&knight, &elf, &mag};

    while (1)
    {
        /* Реализовать через перегрузку оператора !=  */

        int hero1 = getRandomNumber(0, MAX_HEROES-1);
        int hero2 = getRandomNumber(0,MAX_HEROES-1);
        if (hero1!=hero2)
        {
            fight(heroes[hero1], heroes[hero2]);
            break;
        }

    }




    return 0;
}
