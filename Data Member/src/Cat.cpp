#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::speak(){

	if(happy){
	cout << "Meowwww!" << endl;
	}
	else{
		cout << "Sssssh!!" << endl;
	}
}
