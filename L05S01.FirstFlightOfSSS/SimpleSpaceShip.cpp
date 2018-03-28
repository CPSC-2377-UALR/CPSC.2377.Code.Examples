/*
* File: SimpleSpaceShip.cpp
* Author: Keith Bush (2012)
*/
#include <iostream>
#include "SimpleSpaceShip.h"

using namespace std;

SimpleSpaceShip::SimpleSpaceShip(){
	x = 0.0;
	y = 0.0;
	name = NULL;
	setName("Enterprise");
}

SimpleSpaceShip::~SimpleSpaceShip(){
	cout << name << " is being destroyed" << endl;
	delete [] name;
}

float SimpleSpaceShip::getX() const{
	return(x);
}

float SimpleSpaceShip::getY() const{
	return(y);
}


void SimpleSpaceShip::setX(float paramX){
	x = paramX;
}


void SimpleSpaceShip::setY(float paramY){
	y = paramY;
}

void SimpleSpaceShip::setName(char* paramName){
	if(name!=NULL){
		delete [] name;
	}
	name = new char[strlen(paramName)+1];
	strcpy_s(name,strlen(paramName)+1,paramName);
}

void SimpleSpaceShip::print() const{		
	cout << name << ", Position: (" << x << ", " << y << ")" << endl;
}

float getX(){
	int x = 5;
	return(x);
}