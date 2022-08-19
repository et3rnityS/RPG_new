#include "createhero.h"

CreateHero::CreateHero()
{

}

CreateHero::CreateHero(CreateHero::Heroes hero):
    Hero(heroesData[hero].name, heroesData[hero].health, heroesData[hero].damage)
{

}
