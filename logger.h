#ifndef LOGGER_H
#define LOGGER_H
#include "hero.h"

class Logger
{
public:
    Logger();

    void printHit(Hero *h1, Hero *h2);
    void printHP(Hero *h1);
    void printHeroDead(Hero *hero);
    void printPlayAgain(Hero *hero);
};

#endif // LOGGER_H
