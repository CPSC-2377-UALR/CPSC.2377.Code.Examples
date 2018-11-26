
/*
 * File: InheritanceVehiclePlane.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose:  demonstrates a simple inheritance hierarchy comprised of Vehicle (parent) and Plane (child)
 */
#include<iostream>
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

	system("PAUSE");

	/*
	 * Lesson 2
	 * Hidden fields can be accessed through scope resolution
	 */
	p.x = 3;
	p.Vehicle::x = 6.7;
	p.setY(8.6);
	p.z = 9.5;

	cout << v << endl;
	cout << p << endl;

	system("PAUSE");

	/*
	* Lesson 3
	* Parent pointers can point to child instances
	*/

	////Typical set-up
	Vehicle* vptr = &v;
	vptr->setX(-20);

	cout << *vptr <<endl;

	//Wow!!!  This is powerful!
	vptr = &p;
	
	cout << *vptr << endl;

	system("PAUSE");	
}
