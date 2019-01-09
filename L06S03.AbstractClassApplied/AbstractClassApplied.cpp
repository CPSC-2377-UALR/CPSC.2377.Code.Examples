/*
 * File: AbstractClassApplied.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: demonstrates the use of the abstract
 *          class in a dynamic environment, as well
 *          as introduces the concept of the STL 
 *          vector.
 */

#include<iostream>
#include "Vehicle.h"
#include "Plane.h"
#include "Car.h"

using namespace std;

int main(){
	//Vehicle v; //<-- cannot instanstiate abstract classes!!!!
	
	Vehicle& plane = Plane();
	Vehicle& car = Car();

	bool notDone = true;
	while (notDone)
	{
		
		char command;
		cout << "Input a command (l)eft,(r)ight,(u)p,(d)own,(h)onk,(q)uit: ";
		cin >> command;

		plane.changePosition(command);
		car.changePosition(command);
		cout << plane.toString() << endl;
		cout << car.toString() << endl;
		
		notDone = (command != 'q');
	}
	
	return 0;

}

