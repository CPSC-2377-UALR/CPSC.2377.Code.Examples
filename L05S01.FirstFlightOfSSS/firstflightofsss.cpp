/*
 * File: firstflightofsss.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: a simple introduction to declaration, construction, and manipulation of a class.
 *
 */
#include <iostream>
#include "SimpleSpaceShip.h"
#include <string>

using namespace std;

float getX();

int main(){
	
	SimpleSpaceShip sss;
	sss.print();
	
	
	sss.setX(11.5);
	sss.setY(-1.0);
	sss.print();

	SimpleSpaceShip sss2;
	sss2.print();
	sss2.setName("Atlantis");
	sss2.print();

	SimpleSpaceShip* sssPtr;
	sssPtr = new SimpleSpaceShip;
	sssPtr->setName("PtrShip");
	sssPtr->print();
	
	SimpleSpaceShip** fleet;
	fleet = new SimpleSpaceShip*[10];
	for(int i=0; i<10;i++){
		fleet[i] = new SimpleSpaceShip();
		fleet[i]->setX(i);
		char* shipName = new char[8];
		string tempName = "ship " + to_string(i);
		strcpy_s(shipName, strlen(tempName.c_str()) + 2, tempName.c_str());
		fleet[i]->setName(shipName);
		//(*fleet[i]).print();
		fleet[i]->print();
	}
	

	for(int i=0;i<10;i++){
		delete fleet[i];
	}
	delete [] fleet;

	system("PAUSE");

	return 0;
}