#ifndef DATACLASS_H
#define DATACLASS_H
#include "knight.h"
#include "elf.h"
#include "mag.h"



class DataClass
{
public:
    DataClass();
    enum Heroes
    {
        KNIGHT,
        ELF,
        MAG,
        MAX_HEROES
    };


    int getRandomNumber(int min, int max);

    Hero* getRandomHero();
    Hero* getHero(int num);


};

#endif // DATACLASS_H
