/*
 * File: SimpleSpaceShip.cpp
 * Author: Keith Bush (2012)
 */
#include <iostream>
#include "SimpleSpaceShip.h"

using namespace std;

SimpleSpaceShip::SimpleSpaceShip() : shield(10)
{
    x = 0.0;
	y = 0.0;
	fuel = 0;
	name = NULL;
	setName("Enterprise");
}

SimpleSpaceShip::SimpleSpaceShip(float x, float y, int fuel, int SHIELD) : shield(SHIELD){
	this->x = x;
	this->y = y;
	this->fuel = fuel;
	name = NULL;
	setName("Enterprise");
}

SimpleSpaceShip::~SimpleSpaceShip(){
	delete [] name;
}

float SimpleSpaceShip::getX() const{
	return(x);
}

float SimpleSpaceShip::getY() const{
	return(y);
}

float SimpleSpaceShip::getShield() const
{
	return(shield);
}


void SimpleSpaceShip::setX(float x){
	this->x = x;
}


void SimpleSpaceShip::setY(float y){
	this->y = y;
}

void SimpleSpaceShip::setName(char* name){
	if(this->name!=NULL){
		delete [] this->name;
	}
	this->name = new char[strlen(name)+1];
	strcpy_s(this->name,strlen(name)+1,name);
}

void SimpleSpaceShip::print() const{		
	cout << name << ", Position: (" << x << ", " << y << ", " << fuel << ", " << shield << ")" << endl;
}