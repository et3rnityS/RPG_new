#ifndef CREATEHERO_H
#define CREATEHERO_H
#include "hero.h"

class CreateHero : public Hero
{
public:
    CreateHero();
    enum Heroes
    {
        HEROES_KNIGHT,
        HEROES_ELF,
        HEROES_MAG,
        HEROES_MAX
    };

    struct HeroesData
    {
        std::string name;
        int health;
        int damage;
    };

    HeroesData heroesData[HEROES_MAX]
    {
        {"Knight", 20, 2},
        {"Elf", 14, 4},
        {"Mag", 16, 3}
    };
    CreateHero(Heroes hero);

};

#endif // CREATEHERO_H
