#include "fight.h"

Fight::Fight()
{

}

void  Fight::fight(Hero *hero1)
{
    int step = 0;
    DataClass data;
    Logger log;

    Hero *hero2 = data.getRandomHero();

    if (hero1!=hero2)
    {
        while (!(hero1->isDead())&&!(hero2->isDead()))
        {
           std::cout<<"Step: "<<step+1<<std::endl;



            hero2->getDamage(hero1->doDamage());
            log.printHit(hero1, hero2);
            if (hero2->isDead())
            {
                log.printPlayAgain(hero2);
                log.printHeroDead(hero2);
                break;
            }

            hero1->getDamage(hero2->doDamage());
            log.printHit(hero2, hero1);
            if (hero1->isDead())
            {
                log.printHeroDead(hero1);
                break;
            }

            log.printHP(hero1);
            log.printHP(hero2);

            ++step;
        }
    }
}
