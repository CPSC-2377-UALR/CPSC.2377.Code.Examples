/*
 * File: SimpleSpaceShip.h
 * Author: Keith Bush (2013)
 *
 * Purpose: example of declaring a class with more sophisticated construction.
 */
#ifndef SIMPLESPACESHIP_H
#define SIMPLESPACESHIP_H

class SimpleSpaceShip{

public:

	SimpleSpaceShip();				//default constructor
	SimpleSpaceShip(float,float,int);   //conversion constructor
	~SimpleSpaceShip();				//destructor
	float getX() const;				//accessor method
	float getY() const;				//accessor method
	void setX(float);				//accessor method
	void setY(float);				//accessor method
	void setName(char*);			//accessor method
	void print() const;				//I/O method

private: 

	float x,y;    //data member
	char* name;   //data member
	int fuel;     //data member (no accessors for teaching purposes)


};

#endif