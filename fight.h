#ifndef FIGHT_H
#define FIGHT_H
#include "hero.h"
#include "knight.h"
#include "elf.h"
#include "mag.h"
#include "logger.h"
#include "dataclass.h"

class Fight
{
public:
    Fight();
    void fight(Hero *h1);
    friend bool operator!=(Hero &hero1, Hero &hero2);

};

#endif // FIGHT_H
