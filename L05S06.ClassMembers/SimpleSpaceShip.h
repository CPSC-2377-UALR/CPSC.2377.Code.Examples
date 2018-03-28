/*
 * File: SimpleSpaceShip.h
 * Author: Keith Bush (2012)
 */
#ifndef SIMPLESPACESHIP_H
#define SIMPLESPACESHIP_H

#include "Shield.h"

class SimpleSpaceShip{

public:

	SimpleSpaceShip();				//default constructor
	SimpleSpaceShip(float,float,int,int,int);   //conversion constructor
	~SimpleSpaceShip();				//destructor
	float getX() const;				//accessor method
	float getY() const;				//accessor method
	void setX(float);				//accessor method
	void setY(float);				//accessor method
	void setFrontShield(int);       //accessor method
	void setName(char*);			//accessor method
	void print() const;				//I/O method

private: 
	float x,y;       //data member
	char* name;      //data member
	int fuel;        //data member

	Shield frontShield; //data member 
	Shield rearShield; //data member

};

#endif