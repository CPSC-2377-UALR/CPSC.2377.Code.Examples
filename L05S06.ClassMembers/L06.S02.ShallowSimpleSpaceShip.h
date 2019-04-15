/*
 * File: ShallowSimpleSpaceShip.h
 * Author: Keith Bush (2012)
 */
#ifndef SHALLOWSIMPLESPACESHIP_H
#define SHALLOWSIMPLESPACESHIP_H

#include "Shield.h"

class ShallowSimpleSpaceShip{

public:

	ShallowSimpleSpaceShip();//default constructor
	ShallowSimpleSpaceShip(float,float,int,int,int);   //conversion constructor
	~ShallowSimpleSpaceShip();				//destructor
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

	Shield* frontShield; //data member 
	Shield* rearShield; //data member

};

#endif