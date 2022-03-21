//The program is to run on C++11

#include <iostream>
#include <vector>
#include <array>

#include "Bar.h"
#include "User.h"

using namespace std;

int main() {

	
	//test
	Bar bar1;
	bar1.setRandomLocation();
	array<int,2> arr = bar1.getLocation();

	cout << arr[0] << " " << arr[1] << "\n";

	//login credentials
	string trueId = "user";
	string truePass = "pass";

	string id = "";
	string pass = "";

/*

//login sequence

	cout << "Login\n----------------------------------------\n";
	cout << "Welcome to the application.\nPlease login to continue.\n\n";
login:
	cout << "login: ";
	cin >> id;
	cout << "pass: ";
	cin >> pass;
	if(id!=trueId || pass!=truePass) {
		cout << "\nPlease enter correct credentials.\n\n";
		goto login;
	}

	//system("CLS");

//main menu

	int switchCase;

	cout << "\n\nMain Menu\n----------------------------------------\n";
	cout << "Welcome to the application.\nPlease select an action.\n\n";
	cout << "1:View recommended stores\n2:Get geolocation\n3:Get\n\n";
	cout << "Enter selection: ";

	Bar bar1;

	cin >> switchCase;

	switch(switchCase) {
	case 1:
		cout << "Display list.";
	case 2:
		
	case 3:
		cout << "case3";
	default:
		cout << "Please enter a valid selection";
	}

//abc

	cout << "\n\n\n";

*/

	return 0;
}