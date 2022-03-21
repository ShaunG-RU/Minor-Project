//Misc.cpp
#include "Misc.h"

//return pointer location of a 1x2 array with its values defined randomly within range of 100:100
array<int, 2> Misc::getRandomLocation() {
	srand((unsigned int)time(0) * rand() * rand());
	array<int, 2> loc = {rand()%101, rand()%101}; //defines int from 0 to 100
	return loc;
}