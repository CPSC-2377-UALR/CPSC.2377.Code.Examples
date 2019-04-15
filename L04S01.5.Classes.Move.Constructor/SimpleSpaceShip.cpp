/*
* File: SimpleSpaceShip.cpp
* Author: Keith Bush (2012)
*/
#include <iostream>
#include "SimpleSpaceShip.h"

using namespace std;

SimpleSpaceShip::SimpleSpaceShip()
{
	name += "_default";
	cout << "Default Constructor Called, " << name << endl;
}

SimpleSpaceShip::SimpleSpaceShip(Coordinates position, int fuel, std::string name):position(position), fuel(fuel)
{
	this->name = name + "_conversion";

	cout << "Conversion Constructor Called, " << name << endl;
}

SimpleSpaceShip::SimpleSpaceShip(const SimpleSpaceShip & src) {
	position = src.position;
	fuel = src.fuel;
	name = src.name + "_copy";

	cout << "Copy Constructor Called, " << name << endl;
}

SimpleSpaceShip::SimpleSpaceShip(SimpleSpaceShip && src)
{
	//1. release my resouces
	position = { 0.0f, 0.0f };
	fuel = 0;
	name = " ";

	//2. Steal resources from src.
	position = src.position;
	fuel = src.fuel;
	name = src.name + "_move";

	//3. kill off src resources.
	src.position = { 0.0f, 0.0f };
	src.fuel = 0.0f;
	src.name = " ";
	
	//Move constructor becomes less trivial when we learn about pointers! stay tuned!!
	cout << "Move Constructor Called, " << name << endl;

}

SimpleSpaceShip::~SimpleSpaceShip()
{
	cout << name << " is being destroyed" << endl;
}

Coordinates SimpleSpaceShip::getPosition() const
{
	return position;
}

void SimpleSpaceShip::setPosition(Coordinates position)
{
	this->position = position;
}

void SimpleSpaceShip::setName(string name)
{
	this->name = name;
}

void SimpleSpaceShip::print() const {
	cout << name << ", Position: (" << position.x << ", " << position.y << ", " << fuel << ")" << endl;
}

SimpleSpaceShip & SimpleSpaceShip::operator=(const SimpleSpaceShip & src)
{
	if (this == &src)
	{
		return *this;
	}
	
	position = src.position;
	fuel = src.fuel;
	name = src.name + "_copyAssignment";
	return *this;
}
