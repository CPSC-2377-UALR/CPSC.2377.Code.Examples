/*
 * File: demoClassMembers.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose:  This example demonstrates the syntax for storing, constructing
 *           and accessing class members of a class.
 */
#include <iostream>
#include "SimpleSpaceShip.h"

using namespace std;

int main(){

	SimpleSpaceShip sss1;
	sss1.print();	

	SimpleSpaceShip sss2(21.5,-1.0,5,20,10);
	sss2.print();

	system("PAUSE");

	return 0; 
}