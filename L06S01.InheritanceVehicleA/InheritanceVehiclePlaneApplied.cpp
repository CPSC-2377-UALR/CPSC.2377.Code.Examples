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

	vector<Vehicle*> objects;
	

	objects.push_back(new Plane);
	
	/*Display Plane*/
	cout << objects.back()->toString() << endl;
	
	while(objects.size() < 5)
	{
		
		char command;
		cout << "Input a command: ";
		cin >> command;

		switch(command){
		case 't':
			objects.push_back(new Truck);
			break;
		case 'p':
			objects.push_back(new Plane);
			break;
		case 'b':
			objects.push_back(new Boat);
			break;
		}

		/*Update All Objects Positions via command*/
		for(auto object : objects){

			object->changePosition(command);
		}

		
		for(auto object: objects){

			cout << object->toString() << endl;
		}

	}
	
	return 0;

}

