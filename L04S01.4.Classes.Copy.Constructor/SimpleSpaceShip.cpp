/*
* File: SimpleSpaceShip.cpp
* Author: Keith Bush (2012)
*/
#include <iostream>
#include "SimpleSpaceShip.h"

using namespace std;

SimpleSpaceShip::SimpleSpaceShip()
{
	cout << "Default Constructor Called, " << name << endl;
}

SimpleSpaceShip::SimpleSpaceShip(Coordinates postion, int fuel, std::string name) : position(position), fuel(fuel)
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