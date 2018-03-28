#include <iostream>
#include "Plane.h"

using namespace std;

Plane::Plane() : Vehicle(){ /*Default Constructor of Vehicle is called*/
	cout << "Plane constructor" << endl;
	x = 2.1; 
	z = 2.2;
	delete [] name; //Free memory before change!!!
	name = new char[6];
	strcpy_s(name,6,"Plane");
}

Plane::~Plane(){
	cout << "Plane destructor" << endl;
	system("PAUSE");
}
