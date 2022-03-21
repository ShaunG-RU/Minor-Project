//User.cpp
#include "User.h"

string User::getRandomUserName() {
	return "name";
}

void User::setRandomLocation() {
	for (int i = 0; i < 2; i++) {
		array<int, 2> p = MiscFunc.getRandomLocation();
		location[i] = p[i];
	}
}

void User::setFirstName(string first) {
	firstName = first;
}

void User::setLastName(string last) {
	lastName = last;
}

void User::setId(string ID) {
	id = ID;
}

void User::setPass(string PASS) {
	pass = PASS;
}

string User::getFirstName() {
	return firstName;
}

string User::getLastName() {
	return lastName;
}