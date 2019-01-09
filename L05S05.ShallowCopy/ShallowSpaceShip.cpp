/*
* File: ShallowSpaceShip.cpp
* Author: Keith Bush (2012)
*/
#include <iostream>
#include "ShallowSpaceShip.h"

using namespace std;

ShallowSpaceShip::ShallowSpaceShip()
{
	this->frontShield = new Shield();
	this->rearShield = new Shield();

	name += "_default";
	cout << "Default Constructor Called, " << name << endl;
}

ShallowSpaceShip::ShallowSpaceShip(Coordinates position, int fuel, int frontShield, int rearShield, std::string name)
	:position{ position }, fuel{ fuel }
{
	this->frontShield = new Shield(frontShield);
	this->rearShield = new Shield(rearShield);

	this->name = name + "_conversion";

	cout << "Conversion Constructor Called, " << name << endl;
}

ShallowSpaceShip::ShallowSpaceShip(const ShallowSpaceShip & src)
	: frontShield{ src.frontShield }, rearShield{ src.rearShield }//<--HERE'S THE PROBLEM!!!
{
	position = src.position;
	fuel = src.fuel;
	name = src.name + "_copy";

	cout << "Copy Constructor Called, " << name << endl;
}

ShallowSpaceShip::ShallowSpaceShip(ShallowSpaceShip && src)
	: frontShield{ src.frontShield }, rearShield{ src.rearShield }
{
	//1. release my resouces
	position = { 0.0f, 0.0f };
	fuel = 0;
	name = " ";
	delete frontShield;
	delete rearShield;

	//2. Steal resources from src.
	position = src.position;
	fuel = src.fuel;
	name = src.name + "_move";
	frontShield = src.frontShield;
	rearShield = src.rearShield;

	//3. kill off src resources.
	src.position = { 0.0f, 0.0f };
	src.fuel = 0.0f;
	src.name = " ";
	src.frontShield = nullptr;
	src.rearShield = nullptr;

	cout << "Move Constructor Called, " << name << endl;

}

ShallowSpaceShip::~ShallowSpaceShip()
{
	delete frontShield;
	delete rearShield;
	cout << name << " is being destroyed" << endl;
}

Coordinates ShallowSpaceShip::getPosition() const
{
	return position;
}

int ShallowSpaceShip::getFrontShieldStrength() const
{
	return frontShield->getStrength();
}

int ShallowSpaceShip::getRearShieldStrength() const
{
	return rearShield->getStrength();
}



void ShallowSpaceShip::setPosition(Coordinates position)
{
	this->position = position;
}

void ShallowSpaceShip::setName(string name)
{
	this->name = name;
}

void ShallowSpaceShip::setFrontShieldStrength(int strength)
{
	frontShield->setStrength(strength);
}

void ShallowSpaceShip::setRearShiledStrength(int strength)
{
	rearShield->setStrength(strength);

}

void ShallowSpaceShip::print() const {
	cout << name << ", Position: (" << position.x << ", " << position.y << ")" << " F: " << fuel << " RS: " << rearShield->getStrength() << " FS: " << frontShield->getStrength() << endl;
}

ShallowSpaceShip & ShallowSpaceShip::operator=(const ShallowSpaceShip & src)
{
	if (this == &src)
	{
		return *this;
	}

	position = src.position;
	fuel = src.fuel;
	frontShield->setStrength(src.frontShield->getStrength());
	rearShield->setStrength(src.rearShield->getStrength());
	name = src.name + "_copyAssignment";
	return *this;
}
