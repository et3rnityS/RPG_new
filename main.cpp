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

void fight(Hero *hero1, Hero *hero2)
{
    int step = 0;
    while (!(hero1->isDead())&&!(hero2->isDead()))
    {
        std::cout<<"Step: "<<step<<std::endl;

        hero2->ult(step);
        hero1->getDamage(hero2->doDamage(step));
        std::cout<<hero2->getName()<< " hit "<<hero1->getName()<<" on "<<hero2->doDamage(step)<<std::endl;
        std::cout<<hero1->getName()<<" has "<<hero1->getHealth()<<" hp"<<std::endl;

        if (hero1->isDead())
        {
            std::cout<<hero1->getName()<<" is dead"<<std::endl;
            break;
        }
        hero1->ult(step);
        hero2->getDamage(hero1->doDamage(step));
        std::cout<<hero1->getName()<< " hit "<<hero2->getName()<<" on "<<hero1->doDamage(step)<<std::endl;
        std::cout<<hero2->getName()<<" has "<<hero2->getHealth()<<" hp"<<std::endl;
        if (hero2->isDead())
        {
            std::cout<<hero2->getName()<<" is dead"<<std::endl;
            break;
        }

        ++step;

    }
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    Knight knight("Knight", 50, 2);
    Elf elf("Elf", 30, 4);
    Mag mag("Mag", 40, 3);


    Hero *heroes[] = {&knight, &elf, &mag};
    /*for (int iii=0; iii<3; ++iii)
    {
        std::cout<<heroes[iii]->getName()<<" has "<<heroes[iii]->getHealth()
                <<" hp and "<<heroes[iii]->doDamage()<<" damage"<<std::endl;
    }*/
    fight(heroes[getRandomNumber(0,2)], heroes[getRandomNumber(0,2)]);



    return 0;
}
