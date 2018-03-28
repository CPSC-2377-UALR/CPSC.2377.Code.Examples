/*
 * File: demoOverloadedOperators.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: demonstration of operator overloading for a user-defined class
 */
#include <iostream>
#include <string>

#include "SimpleSpaceShip.h"

using namespace std;

void main(){


	SimpleSpaceShip sss1(0.0,1.0);
	SimpleSpaceShip sss2(10.0,2.0);
	SimpleSpaceShip sss3(1.4,-0.5);
	sss3.setName("Firefly");

	//Calling Output Stream Operator
	cout << sss1 << ", " << sss2 << endl;
	cout << sss3 << endl; 

	//Calling stream insertion operator with addition operator
	cout << sss1 + sss2 << endl;

	////Calling stream insertion, addition operators with copy constructor
	SimpleSpaceShip sss4(sss1 + (sss2 + sss3));

	////Checking results
	cout << sss4 << endl;

	system("PAUSE");
}



