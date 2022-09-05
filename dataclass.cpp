#include "dataclass.h"

#include <DataClass.h>

DataClass::DataClass()
{

}

int DataClass::getRandomNumber(int min, int max)
{
    static const double fraction = 1.0/(static_cast<double>(RAND_MAX)+1.0);
    return static_cast<int>(rand()*fraction*(max - min +1)+min);
}

Knight knight("Knight", 50, 2, 3, 1);
Elf elf("Elf", 30, 4, 2, 2);
Mag mag("Mag", 100, 5, 3, 2);

static Hero *heroes[] = {&knight, &elf, &mag};

Hero *DataClass::getRandomHero()
{
    int num = getRandomNumber(0, MAX_HEROES-1);
    return heroes[num];
}

Hero *DataClass::getHero(int num)
{
    return heroes[num];
}




