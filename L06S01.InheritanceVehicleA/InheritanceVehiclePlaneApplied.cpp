/*
 * File: InheritanceVehiclePlaneApplied.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: demonstrates a clean inheritance architecture
 * that maximizes code re-use
 */
#include<iostream>
#include<vector>
#include "Vehicle.h"
#include "Plane.h"
#include "Truck.h"
#include "Boat.h"

using namespace std;

int main(){

	int numSteps = 20;
	int numObjects = 0;

	Vehicle** objects = new Vehicle*[numSteps];
	

	objects[0] = new Plane;
	numObjects++;

	/*Display Plane*/
	cout << objects[0]->toString() << endl;
	
	for(int i=1;i<numSteps;i++){
		
		char command;
		cout << "Input a command: ";
		cin >> command;

		switch(command){
		case 't':
			objects[i] = new Truck;
			numObjects++;
			break;
		case 'p':
			objects[i] = new Plane;
			numObjects++;
			break;
		case 'b':
			objects[i] = new Boat;
			numObjects++;
			break;
		}

		/*Update All Objects Positions via command*/
		for(int j=0;j<numObjects;j++){

			objects[j]->changePosition(command);
		}

		/*Display Plane*/
		for(int j=0;j<numObjects;j++){

			cout << objects[j]->toString() << endl;
		}

	}
	
	return 0;

}

