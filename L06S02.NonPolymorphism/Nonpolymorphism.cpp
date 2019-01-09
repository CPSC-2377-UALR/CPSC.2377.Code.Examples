/*
 * File: Nonpolymorphism.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: understanding how polymorphism doens't happen
 *          without virtual methods
 */
#include<iostream>
#include "Vehicle.h"
#include "Plane.h"

using namespace std;

int main(){

	int numSteps = 10;

	Vehicle& v = Plane();

	//Wrong!!! The Vehicle's toString() method is called
	cout << v.toString() << endl;

	
	for (int i = 0; i < numSteps; i++)
	{

		char command;
		cout << "Input a command: ";
		cin >> command;

		//Wrong!!! The Vehicle's changePosition() method is called
		v.changePosition(command);

		cout << v.toString() << endl;

	}
	system("PAUSE");
	return 0;

}

