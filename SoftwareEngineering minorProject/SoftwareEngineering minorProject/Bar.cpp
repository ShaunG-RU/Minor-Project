//Bar.cpp
#include "Bar.h"

//used for both the occupancy and its limit
int Bar::getRandomOccupancy() {
	srand(time(0) * rand() * rand());
	return rand() % 251;
}

//sets value of location to that of numbers generated randomly
void Bar::setRandomLocation() {
		location = MiscFunc.getRandomLocation();
}

array<int, 2> Bar::getLocation() {
	return location;
}

float Bar::getRating() {
	return rating;
}

int Bar::getOccupancy() {
	return occupancy;
}

float Bar::getOccupancyRate() {
	if (occupancy > occupancyLimit)
		return 0.00;
	else
		return float(occupancy / occupancyLimit);
}