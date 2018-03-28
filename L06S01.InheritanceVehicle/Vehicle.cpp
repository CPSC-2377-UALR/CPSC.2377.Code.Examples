#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(){
	cout << "Vehicle constructor" << endl;
	x = 1.0;
	y = 1.1;
	name = new char[8];
	strcpy_s(name,8,"Vehicle");
}

Vehicle::~Vehicle(){
	cout << "Vehicle destructor" << endl;
	delete name;
	system("PAUSE");
}

void Vehicle::setX(float pX){
	x = pX;
}

void Vehicle::setY(float pY){
	y = pY;
}

float Vehicle::getX(){
	return(x);
}
	
float Vehicle::getY(){
	return(y);
}

ostream & operator <<(ostream & o, const Vehicle & src){
	o << "(Vehicle Object, " << src.name << ": x=" << src.x << ", y=" << src.y << ")";
	return o;

}