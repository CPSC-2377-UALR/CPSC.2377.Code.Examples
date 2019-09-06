
/*
 * File: InheritanceVehiclePlane.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose:  demonstrates a simple inheritance hierarchy comprised of Vehicle (parent) and Plane (child)
 */
#include<iostream>
#include <vector>
#include "Vehicle.h"
#include "Plane.h"

using namespace std;

void main(){

	Vehicle v;
	cout << v << endl;

	Plane p;
	cout << p << endl;
	
	cout << p.x << ", " << p.z << endl;
	//	Vehicle v2;

	/*
	 * Lesson 1
	 * Derived classes can be called by
	 * functions of parent classes (see overloaded stream insertion of Vehicle)
	 *
	 * However: What's the problem???  Note the x and y values output
	 * compared to those assigned during construction
	 */

	cout << p.x << endl;

	cout << v << endl;
	cout << p << endl;
	cout << p.x << endl;

	//system("PAUSE");

	/*
	 * Lesson 2
	 * Hidden fields can be accessed through scope resolution
	 */
	p.x = 9;
	p.Vehicle::x = 6.7f;
	p.setY(8.6f);
	p.z = 9.5f;

	cout << v << endl;
	cout << p << endl;

	//system("PAUSE");

	/*
	* Lesson 3
	* Parent references can refer to child instances
	*/
	Vehicle& vRef = p;
	vRef.setX(-20);
	cout << vRef <<endl;

	/*
	* Lesson 4: this causes the child to lose it's "uniquness"
	*
	*/
	cout << vRef.x << endl;
	//vRef.z;
	//cast it a reference to the child to access the child exclusive bits.
	((Plane&)vRef).z;

	//Lesson 5: can't create arrays or vecotrs of references;

	//Vehicle& militaryRef[10];
	//vector<Vehicle&> militaryVec;
	//militaryVec.push_back(p); //<-- compile time error! references are not copyable!
	//
	system("PAUSE");	
}
