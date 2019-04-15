/*
 * File: firstflightofsss.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: a simple introduction to declaration, construction, and manipulation of a class.
 *
 */
#include <iostream>
#include <vector>
#include <string>
#include "SimpleSpaceShip.h"

using namespace std;

float getX();

int main(){
	
	SimpleSpaceShip sss;
	sss.print();	
	sss.setPosition({ 11.5, -1.0 });
	sss.print();

	SimpleSpaceShip sss2;
	sss2.print();
	sss2.setName("Atlantis");
	sss2.print();

	
	vector<SimpleSpaceShip> fleet;
	for (int i = 0; i < 10; i++)
	{
		SimpleSpaceShip newShip;
		fleet.push_back(newShip);
		fleet.back().setPosition({ i, i + 1 });
		string shipName = "ship " + to_string(i);
		fleet.back().setName(shipName);
		fleet.back().print();
	}
	
	system("PAUSE");

	return 0;
}