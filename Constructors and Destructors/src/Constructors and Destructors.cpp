//============================================================================
// Name        : Constructors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : COnstructors and Destructors in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	cout << "Starting program....." << endl;

	{
	Cat bob;
	bob.speak();
	}

	cout << "Endind program....." << endl;
	return 0;
}
