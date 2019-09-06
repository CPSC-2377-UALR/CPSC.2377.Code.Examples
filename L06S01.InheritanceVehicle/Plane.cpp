#include <iostream>
#include "Plane.h"

using namespace std;

Plane::Plane() :x(2.1f), z(2.2f), Vehicle(){ /*Default Constructor of Vehicle is called*/
	cout << "Plane constructor" << endl;
	Vehicle::x = 3;
}

Plane::~Plane(){
	cout << "Plane destructor" << endl;
}
