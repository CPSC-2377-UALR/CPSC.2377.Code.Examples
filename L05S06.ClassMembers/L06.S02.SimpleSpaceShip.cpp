/*
 * File: SimpleSpaceShip.cpp
 * Author: Keith Bush (2012)
 */
#include <iostream>
#include "L06.S02.SimpleSpaceShip.h"
#include "Shield.h"

using namespace std;

SimpleSpaceShip::SimpleSpaceShip()
{
	cout << "Default Constructor" << endl;
	frontShield = new Shield();
	rearShield = new Shield();
	x = 0.0f;
	y = 0.0f;
	fuel = 0;
	name = NULL;
	setName("Enterprise");
}

SimpleSpaceShip::SimpleSpaceShip(float x, float y, int fuel, int frontShield, int rearShield)
{
	cout << "Conversion Constructor" << endl;
	this->frontShield = new Shield(frontShield);
	this->rearShield = new Shield(rearShield);
	this->x = x;
	this->y = y;
	this->fuel = fuel;
	name = NULL;
	setName("Enterprise");
}
SimpleSpaceShip::SimpleSpaceShip(const SimpleSpaceShip& src)
{
	cout << "Copy Constructor" << endl;
	name = NULL;
	setName(src.name);
	frontShield = new Shield(src.frontShield->getStrength());
	rearShield = new Shield(src.rearShield->getStrength());
	fuel = src.fuel;
	x = src.getX();
	y = src.getY();
}
SimpleSpaceShip & SimpleSpaceShip::operator=(const SimpleSpaceShip & src) noexcept
{
	cout << "Copy Assignment Constructor" << endl;
	setName(src.name);
	if (frontShield != nullptr)
	{
		delete frontShield;
	}
	if (rearShield != nullptr)
	{
		delete rearShield;
	}
	frontShield = new Shield(src.frontShield->getStrength());
	rearShield = new Shield(src.rearShield->getStrength());
	fuel = src.fuel;
	x = src.getX();
	y = src.getY();
	return *this;
}
SimpleSpaceShip::SimpleSpaceShip(SimpleSpaceShip && src)
{
	cout << "move Constructor" << endl;
	
	name = src.name;
	src.name = nullptr;
	frontShield = src.frontShield;
	src.frontShield = nullptr;
	rearShield = src.rearShield;
	src.rearShield = nullptr;
	fuel = src.fuel;
	x = src.getX();
	y = src.getY();

}
SimpleSpaceShip & SimpleSpaceShip::operator=(SimpleSpaceShip && src) noexcept
{
	cout << "Move Assignment Constructor" << endl;
	setName(src.name);
	src.name = nullptr;
	if (frontShield != nullptr)
	{
		delete frontShield;
	}
	if (rearShield != nullptr)
	{
		delete rearShield;
	}
	frontShield = src.frontShield;
	src.frontShield = nullptr;
	rearShield = src.rearShield;
	src.rearShield = nullptr;
	fuel = src.fuel;
	x = src.getX();
	y = src.getY();
	return *this;
}
SimpleSpaceShip::~SimpleSpaceShip(){
	cout << "Destructor Called" << endl;
	delete [] name;
	delete frontShield;
	delete rearShield;

}

float SimpleSpaceShip::getX() const{
	return(x);
}

float SimpleSpaceShip::getY() const{
	return(y);
}


void SimpleSpaceShip::setX(float paramX){
	if(paramX>0){
	x = paramX;
	}else{
		x=0;
	}
}

void SimpleSpaceShip::setY(float paramY){
	y = paramY;
}

void SimpleSpaceShip::setFrontShield(int strength){
	frontShield->setStrength(strength);
}

void SimpleSpaceShip::setName(char* paramName){
	if(name!=NULL){
		delete [] name;
	}
	name = new char[strlen(paramName)+1];
	strcpy_s(name,strlen(paramName)+1,paramName);
}

void SimpleSpaceShip::print() const{		
	cout << name << ", Position: (" << x << ", " << y << ", " << fuel << ", FS=" << frontShield->getStrength() << ", RS=" << rearShield->getStrength() << ")" <<  endl;
}