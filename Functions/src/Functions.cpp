//============================================================================
// Name        : Functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Functions, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showMenu(){
	cout << "Choose an Option below: " << endl;
	cout << "1.Search " << endl;
	cout << "2.Run " << endl;
	cout << "3.Debug and Run " << endl;
}

int main() {
	showMenu();

	int input;
	cin >> input;

	switch(input){
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Running..." << endl;
		break;
	case 3:
		cout << "Debugging..." << endl;
		break;
	default:
		cout << "Option invalid!!" << endl;
	}
	return 0;
}
