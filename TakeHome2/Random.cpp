#include "Random.h"
#include <time.h>
#include <xlocinfo>

int Random::getRandom(int floor, int roof)
{
	srand((unsigned)time(0));
	int i;
	i = (rand() % roof) + floor;
	return i;
}
