/*
 * File: ShallowSimpleSpaceShip.cpp
 * Author: Keith Bush (2012)
 */
#include <iostream>
#include "L06.S02.ShallowSimpleSpaceShip.h"
#include "Shield.h"

using namespace std;

ShallowSimpleSpaceShip::ShallowSimpleSpaceShip(){
	frontShield = new Shield();
	rearShield = new Shield();
	x = 0.0f;
	y = 0.0f;
	fuel = 0;
	name = NULL;
	setName("Enterprise");
}

ShallowSimpleSpaceShip::ShallowSimpleSpaceShip(float x, float y, int fuel, int frontShield, int rearShield)
{
	this->frontShield = new Shield(frontShield);
	this->rearShield = new Shield(rearShield);
	this->x = x;
	this->y = y;
	this->fuel = fuel;
	name = NULL;
	setName("Enterprise");
}

ShallowSimpleSpaceShip::~ShallowSimpleSpaceShip(){
	delete [] name;
}

float ShallowSimpleSpaceShip::getX() const{
	return(x);
}

float ShallowSimpleSpaceShip::getY() const{
	return(y);
}


void ShallowSimpleSpaceShip::setX(float paramX){
	if(paramX>0){
	x = paramX;
	}else{
		x=0;
	}
}

void ShallowSimpleSpaceShip::setY(float paramY){
	y = paramY;
}

void ShallowSimpleSpaceShip::setFrontShield(int strength){
	frontShield->setStrength(strength);
}

void ShallowSimpleSpaceShip::setName(char* paramName){
	if(name!=NULL){
		delete [] name;
	}
	name = new char[strlen(paramName)+1];
	strcpy_s(name,strlen(paramName)+1,paramName);
}

void ShallowSimpleSpaceShip::print() const{		
	cout << name << ", Position: (" << x << ", " << y << ", " << fuel << ", FS=" << frontShield->getStrength() << ", RS=" << rearShield->getStrength() << ")" <<  endl;
}