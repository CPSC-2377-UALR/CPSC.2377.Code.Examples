#include <iostream>
#include <sstream>
#include "Car.h"

using namespace std;

Car::Car(){ /*Default Constructor of Vehicle is called*/
	setX(3.0);
	setY(3.1);
	honk = false;
	setName("Car");
}

Car::~Car(){
}

string Car::toString(){

	stringstream result;

	result << "(Car Object, " << Vehicle::toString();
	if(honk){
		result << ", HONK, HONK!";	
	}
	result << ")";

	return(result.str());
}

void Car::changePosition(char command){

	switch(command){
	case 'h':
		honk=!honk;
		break;
	default:
		Vehicle::changePosition(command); //Handles other commands AND ignores garbage
		break;
	}

}
