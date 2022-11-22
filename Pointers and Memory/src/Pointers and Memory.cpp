//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Pointers and Memory in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(double *value){

	cout << "2. Value of double in manipulate: "<< *value <<endl;
	*value = 10.0;
	cout << "3. Value of double in manipulate: "<< *value <<endl;
}
int main() {
	int nValue = 8;
	int* pnValue = &nValue;

	cout << "int Value: " << nValue<< endl;
	cout << "Pointer to the int address: " << pnValue<< endl;
	cout << "int value via pointer: " << *pnValue<< endl;

	cout << "===============================" <<endl;

	double dValue = 123.4;

	manipulate(&dValue);
	cout << "1. dValue: "<< dValue <<endl;
	cout << "4. dValue: "<< dValue <<endl;

	return 0;
}
