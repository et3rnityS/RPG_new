#include <iostream>

#include <cstdlib>
#include <ctime>
#include "hero.h"
#include "createhero.h"

using namespace std;




int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0/(static_cast<double>(RAND_MAX)+1.0);
    return static_cast<int>(rand()*fraction*(max - min +1)+min);
}

int main()
{
    CreateHero k(CreateHero::HEROES_KNIGHT);
    std::cout<<k.getName();


    return 0;
}
