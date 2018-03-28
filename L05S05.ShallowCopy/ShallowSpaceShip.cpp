/*
 * File: ShallowSpaceShip.cpp
 * Author: Keith Bush (2012)
 */
#include <iostream>
#include "ShallowSpaceShip.h"

using namespace std;

ShallowSpaceShip::ShallowSpaceShip(){
	x = 0.0;
	y = 0.0;
	fuel = 0;
	name = NULL;
	setName("Enterprise");
}

ShallowSpaceShip::ShallowSpaceShip(float x, float y, int fuel){
	this->x = x;
	this->y = y;
	this->fuel = fuel;
	name = NULL;
	setName("Enterprise");
}

ShallowSpaceShip::ShallowSpaceShip(const ShallowSpaceShip & src){
	x = src.x;
	y = src.y;
	fuel = src.fuel;
	name = src.name;
}

ShallowSpaceShip::~ShallowSpaceShip(){
	delete [] name;
}

float ShallowSpaceShip::getX() const{
	return(x);
}

float ShallowSpaceShip::getY() const{
	return(y);
}


void ShallowSpaceShip::setX(float x){
	this->x = x;
}


void ShallowSpaceShip::setY(float y){
	this->y = y;
}

void ShallowSpaceShip::setName(char* name){
	if(this->name!=NULL){
		delete [] this->name;
	}
	this->name = new char[strlen(name)+1];
	strcpy_s(this->name,strlen(name)+1,name);
}

void ShallowSpaceShip::print() const{		
	cout << name << ", Position: (" << x << ", " << y << ", " << fuel << ")" << endl;
}