/*
Garrett Ostrander - Period 1
Program Problem 2: Take_in_Data
Create data types stored in appropriate variable
*/
// Libraries
#include<iostream>// gives access to cin, cout, cndl, <<, >>, boolalpha, noboolaplha
#include<conio.h>// gives access to _kbhit() and _getch() for pause () // Namesapces
using namespace std; //*
// Functions ()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '/n';
}
// MAIN
void main () {
	// Variables
	int potato;
	float tomato;
	double tomatoes;
	bool beet_root = false; // assume no one has beet roots
	char frisk;
	int calc_1, calc_2, calc_3;
	// User Queries
	cout << "How many potatoes do you have? ";
	cin >> potato; // float?
	cout << "How many tomatoes do you think exist on the planet in mols? ";
	cin >> tomatoes;
	cout << "Do you have a beet root : Y/N ";
	cin >> frisk;
	if (frisk == 'Y' || frisk == 'y') {
		beet_root = true; // freely changes the value from false to true
	}

	