#include <iostream>
#include <string>
#include <sstream>

#include "Vehicle.h"

using namespace std;


Vehicle::Vehicle(){
	x = 0.0;
	y = 0.0;
	name = new char[8];
	strcpy_s(name,8,"Vehicle");
}

Vehicle::~Vehicle(){
	delete name;
}

void Vehicle::setX(float pX){
	x = pX;
}

void Vehicle::setY(float pY){
	y = pY;
}

void Vehicle::setName(char* pName){
	delete [] name;
	name = new char[strlen(pName)+1];
	strcpy_s(name,strlen(pName)+1,pName);
}

float Vehicle::getX(){
	return(x);
}
	
float Vehicle::getY(){
	return(y);
}

char* Vehicle::getName(){
	return(name);
}

string Vehicle::toString(){
	stringstream result;
	result << "(Vehicle Object, " << name << ": x=" << x << ", y=" << y << ")";
	return(result.str());
}

void Vehicle::changePosition(char command){

	switch(command){
	case 'l':
		x--;
		break;
	case 'r':
		x++;
		break;
	case 'f':
		y++;
		break;
	case 'b':
		y--;
		break;
	default:
		break;
	}

}