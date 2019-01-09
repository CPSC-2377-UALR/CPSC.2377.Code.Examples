/*
 * File: secondflightofsss.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: Demonstrates how copy construction as well as how "shallow copy" is problematic.
 */
#include <iostream>
#include "SimpleSpaceShip.h"
#include "ShallowSpaceShip.h"

using namespace std;

int main(){

	////The wrong way
	ShallowSpaceShip shallowSS({ 21.5,-1.0 }, 5, 12, 6, "Shallow1");
	shallowSS.print();

	ShallowSpaceShip shallowSS2(shallowSS);
	shallowSS2.print();

	shallowSS.setFrontShieldStrength(-88);
	shallowSS2.setRearShiledStrength(-99);
	shallowSS.print();
	shallowSS2.print();

	//The right way;
	SimpleSpaceShip simpleSS({ 21.5,-1.0 }, 5, 1, 2, "Deep1");
	simpleSS.print();

	SimpleSpaceShip simpleSS2(simpleSS);
	simpleSS2.print();

	simpleSS.setFrontShieldStrength(-77);
	simpleSS2.setRearShiledStrength(-66);
	simpleSS.print();
	simpleSS2.print();

	system("PAUSE");

	return 0; 
}