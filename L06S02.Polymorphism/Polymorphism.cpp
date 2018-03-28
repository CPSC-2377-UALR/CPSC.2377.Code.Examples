/*
* File: Polymorphism.cpp
* Author: Keith Bush (2013)
*
* Purpose: understanding virtual methods, polymorphism, and
*          dynamic binding
*/
#include<iostream>
#include "Vehicle.h"
#include "Plane.h"

using namespace std;

int main(){

	int numSteps = 10;

	/*Lesson 1: parents can point to children*/
	Vehicle* v = new Plane;

	/*Lesson 2: invoking methods has the desired polymorphic behavior
	* because of virtual keyword (see Vehicle.h). 
	*/

	/*invokes plane's toString() method*/
	cout << v->toString() << endl;

	for(int i=0;i<numSteps;i++){

		char command;
		cout << "Input a command: ";
		cin >> command;

		/*invoke's plane's changePosition() method*/
		v->changePosition(command);

		cout << v->toString() << endl;
		 
	}

	return 0;

}

