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
void doCommand(Vehicle & v);

int main(){

	int numSteps = 10;

	Plane p;
	Vehicle& v = p;
	
	//Wrong!!! The Vehicle's toString() method is called
	cout << v.toString() << endl;

	system("PAUSE");
	for (int i = 0; i < numSteps; i++)
	{
		doCommand(v);
	}

	Vehicle& v1 = Plane();

	//Wrong!!! The Vehicle's toString() method is called
	cout << v1.toString() << endl;

	
	for (int i = 0; i < numSteps; i++)
	{

		char command;
		cout << "Input a command: ";
		cin >> command;

		//Wrong!!! The Vehicle's changePosition() method is called
		v1.changePosition(command);

		cout << v1.toString() << endl;


	}
	system("PAUSE");
	return 0;

}

void doCommand(Vehicle & v)
{
	char command;
	cout << "Input a command: ";
	cin >> command;

	//Wrong!!! The Vehicle's changePosition() method is called
	v.changePosition(command);

	cout << v.toString() << endl;
}

