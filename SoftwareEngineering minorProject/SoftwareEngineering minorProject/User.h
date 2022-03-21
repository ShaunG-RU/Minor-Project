//User.h
#ifndef User_H
#define User_H

#include <string>
#include <array>
#include <time.h>
#include "Misc.h"

using namespace std;

class User {

	//user info is "private," meaning it can only be accessed by only using the functions provided in this class.
	Misc MiscFunc;
	string firstName, lastName, id, pass;
	array<int,2> location = { 0,0 };
	//predefined ID assigned to indivisual users 
	int uniqueID;

	void setup() {
		firstName = getRandomUserName();
		lastName = getRandomUserName();
	}

public:
	
	User() {setup();} //initializes all variables by calling predefined randomizers.
	void initializeUser();
	void setRandomLocation();
	void setFirstName(string first);
	void setLastName(string last);
	void setId(string ID);
	void setPass(string PASS);
	string getRandomUserName();
	string getFirstName();
	string getLastName();
	array<int,2> getLocation();

};

#endif