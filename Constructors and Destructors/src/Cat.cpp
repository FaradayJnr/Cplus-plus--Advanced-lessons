/*
 * Cat.cpp
 *
 *  Created on: 15 Nov 2022
 *      Author: USER
 */
#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat(){
	cout <<"Cat created" << endl;

	happy = true;
}
Cat::~Cat(){
	cout <<"Cat destroyed" << endl;
}
void Cat::speak(){
	if(happy){
		cout << "Meowwww!!" << endl;
	}
	else{
		cout << "Sssssh!" << endl;
	}
}

