//============================================================================
// Name        : SDL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : SDL Basic Program in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>

using namespace std;

int main(){
	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		cout << "SDL init failed." << endl;
		return 1;
	}
	cout << "SDL init succeeded." << endl;
	return 0;
}
