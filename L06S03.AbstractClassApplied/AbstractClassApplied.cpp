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
	int maxVehicles = 20;
    //Vehicle* v = new Vehicle();

	Vehicle** vArray = new Vehicle*[maxVehicles];

	int numVehicles = 0;
	bool notDone = true;
	while (notDone && numVehicles < maxVehicles)
	{
		
		//Handle user input
		char command;
		cout << "Input a command (p)lane,(c)ar,(l)eft,(r)ight,(u)p,(d)own,(h)onk,(q)uit: ";
		cin >> command;

		//Dynamically allocate memory and add this to the vector container
		switch(command){
		case 'p':	
			vArray[numVehicles] = new Plane();
			numVehicles++;
			break;
		case 'c':	
			vArray[numVehicles] = new Car();
			numVehicles++;
			break;
		case 'q':
			notDone = false; //Terminate construction phase
		}
	
		/*Adjust all objects*/
		for(int j=0;j<numVehicles;j++){
			vArray[j]->changePosition(command);
		}

		/*Output all objects*/
		for(int j=0;j<numVehicles;j++){
			cout << vArray[j]->toString() << endl;
		}

	}
	
	return 0;

}

