#include <iostream>

#include <cstdlib>
#include <ctime>
#include "hero.h"
#include "knight.h"
#include "elf.h"
#include "mag.h"
#include "fight.h"
#include "logger.h"
#include "dataclass.h"

using namespace std;

bool operator!=(Hero &hero1, Hero &hero2)
{
    return (hero1.getName() != hero2.getName());
}



int main()
{
    srand(static_cast<unsigned int>(time(0)));


    std::cout<<"Choose your hero! (0 - Knight, 1 - Elf, 2 - Mag)"<<std::endl;
    int choice;
    std::cin>>choice;
    DataClass d;
    Fight f;

    Hero *hero1 = d.getHero(choice);

   while (!(hero1->isDead()))
   {
        f.fight(hero1);
   }



    return 0;
}
