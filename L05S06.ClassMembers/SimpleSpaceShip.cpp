/*
 * File: SimpleSpaceShip.cpp
 * Author: Keith Bush (2012)
 */
#include <iostream>
#include "SimpleSpaceShip.h"
#include "Shield.h"

using namespace std;

SimpleSpaceShip::SimpleSpaceShip():frontShield(),rearShield(){
	x = 0.0f;
	y = 0.0f;
	fuel = 0;
	name = NULL;
	setName("Enterprise");
}

SimpleSpaceShip::SimpleSpaceShip(float x, float y, int fuel, int frontShield, int rearShield):frontShield(frontShield),rearShield(rearShield){
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
	frontShield.setStrength(strength);
}

void SimpleSpaceShip::setName(char* paramName){
	if(name!=NULL){
		delete [] name;
	}
	name = new char[strlen(paramName)+1];
	strcpy_s(name,strlen(paramName)+1,paramName);
}

void SimpleSpaceShip::print() const{		
	cout << name << ", Position: (" << x << ", " << y << ", " << fuel << ", FS=" << frontShield.getStrength() << ", RS=" << rearShield.getStrength() << ")" <<  endl;
}