#include <iostream>
#include <sstream>
#include "Truck.h"

using namespace std;

Truck::Truck(){ /*Default Constructor of Vehicle is called*/
	setX(-3.0);
	setY(-3.1);
	setName("Truck");

}

Truck::~Truck(){
}

string Truck::toString(){

	stringstream result;

	result << "(Truck Object, " << Vehicle::toString() << ")";

	return(result.str());
}

void Truck::changePosition(char command){

	switch(command){
	case 'l':
		setX(getX()-2);
		break;
	case 'r':
		setX(getX()+3);
		break;
	case 'f':
		setY(getY()+4);
		break;
	case 'b':
		setY(getY()-5);
		break;
	default:
		break;
	}



}
