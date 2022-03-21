//Bar.h
#ifndef Bar_H
#define Bar_H

#include <string>
#include <array>
#include <time.h>
#include "Misc.h"

using namespace std;

class Bar {

	string name;
	Misc MiscFunc;
	array<int,2> location = {0,0};
	float distance, rating;
	int occupancyLimit, occupancy;

	void setup() {
		//sets value of occupancy and its limit so that there are no case that occupancy > limit 
		bool pass = false;
		while (!pass) {
			int occu = getRandomOccupancy();
			int limitOccu = getRandomOccupancy();
			if (limitOccu > occu) {
				occupancy = occu;
				occupancyLimit = limitOccu;
				pass = true;
			}
		}
		setRandomLocation();
	}

public:

	Bar() {setup();} //Automatically sets few values with pre-defined conditions	
	void initializeBar();
	void setRandomLocation();
	int getRandomOccupancy();
	int getOccupancy();
	float getRating();
	float getOccupancyRate();
	array<int, 2> getLocation();

};

#endif