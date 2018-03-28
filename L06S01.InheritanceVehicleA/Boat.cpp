#include <iostream>
#include <sstream>
#include "Boat.h"

using namespace std;

Boat::Boat(){ /*Default Constructor of Vehicle is called*/
	setX(-2.0);
	setY(-2.1);
	setName("Boat");
	z = -2.2;
}


string Boat::toString(){

	stringstream result;

	result << "(Boat Object, " << Vehicle::toString() << ", z=" << z << ")";

	return(result.str());
}

void Boat::changePosition(char command){

	switch(command){
	case 'u':
		z=z+4;
		break;
	case 'd':
		z=z-4;
		break;
	default:
		Vehicle::changePosition(command); //Handles other commands AND ignores garbage
		break;
	}

}
