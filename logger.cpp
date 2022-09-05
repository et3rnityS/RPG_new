#include "logger.h"

Logger::Logger()
{

}

void Logger::printHit(Hero *h1, Hero *h2)
{
    std::cout<<h1->getName()<< " hit "<<h2->getName()<<" on "<<h1->doDamage()<<std::endl;
}

void Logger::printHP(Hero *h1)
{
    std::cout<<h1->getName()<<" has "<<h1->getHealth()<<" hp"<<std::endl;
}

void Logger::printHeroDead(Hero *hero)
{
    std::cout<<hero->getName()<<" is dead"<<std::endl;
}

void Logger::printPlayAgain(Hero *hero)
{
    std::cout<<"You killed "<<hero->getName()<<". Wanna continue?"<<std::endl;
}
