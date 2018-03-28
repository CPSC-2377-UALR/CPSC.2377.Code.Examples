/*
 * File: ShallowSpaceShip.h
 * Author: Keith Bush (2012)
 */
#ifndef SHALLOWSPACESHIP_H
#define SHALLOWSPACESHIP_H

class ShallowSpaceShip{

public:

	ShallowSpaceShip();							//default constructor
	ShallowSpaceShip(float,float,int);			//conversion constructor
	ShallowSpaceShip(const ShallowSpaceShip &);	//copy constructor
	~ShallowSpaceShip();				//destructor
	float getX() const;				//accessor method
	float getY() const;				//accessor method
	void setX(float);				//accessor method
	void setY(float);				//accessor method
	void setName(char*);			//accessor method
	void print() const;				//I/O method

private: 

	float x,y;    //data member
	char* name;   //data member
	int fuel;


};

#endif