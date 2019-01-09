#include <iostream>
#include <sstream>
#include "Truck.h"

using namespace std;

Truck::Truck()
{ /*Default Constructor of Vehicle is called*/
	setPosition({ 2.0f, 2.1f });
	setName("Truck");
}

Truck::~Truck()
{
}

string Truck::toString()
{
	stringstream result;
	result << "(Truck Object, " << Vehicle::toString() << ")";
	return(result.str());
}

void Truck::changePosition(char command)
{
	switch(command){
	default:
		Vehicle::changePosition(command); //Handles other commands AND ignores garbage
		break;
	}

}
