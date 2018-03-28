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

SimpleSpaceShip::SimpleSpaceShip(float x, float y){
	this->x = x;
	this->y = y;
	name = NULL;
	setName("Enterprise");
}

SimpleSpaceShip::SimpleSpaceShip(const SimpleSpaceShip & src){
	x = src.x;
	y = src.y;
	name = NULL;
	setName(src.name);
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



ostream & operator <<(ostream & o, const SimpleSpaceShip & src){
	o << src.name << ", Coordinate: (" << src.x << ", " << src.y << ")";
	return(o);
}











SimpleSpaceShip operator +(const SimpleSpaceShip & src1, const SimpleSpaceShip & src2){
	SimpleSpaceShip result;
	result.x = src1.x+src2.x;
	result.y = src1.y+src2.y;
	return(result);
}