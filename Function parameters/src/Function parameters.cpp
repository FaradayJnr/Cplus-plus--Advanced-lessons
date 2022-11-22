//============================================================================
// Name        : Functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Passing parameters to functions with C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showMenu(){
	cout << "Choose an Option below: " << endl;
	cout << "1.Search " << endl;
	cout << "2.Run " << endl;
	cout << "3.Debug and Run " << endl;
}

int getInput(){

	int input;
	cin >> input;
	return input;
}

void processSelection(int input){
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

}

int main() {
	showMenu();
   int input = getInput();
    processSelection(input);
		return 0;
}
