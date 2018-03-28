/*
 * File: SimpleSpaceShip.h
 * Author: Keith Bush (2012)
 */
#ifndef SIMPLESPACESHIP_H
#define SIMPLESPACESHIP_H

#include <iostream>

using namespace std;

class SimpleSpaceShip{

public:

	SimpleSpaceShip();							//default constructor
	SimpleSpaceShip(float,float);				//conversion constructor
	SimpleSpaceShip(const SimpleSpaceShip &);	//copy constructor
	~SimpleSpaceShip();							//destructor
	float getX() const;							//accessor method
	float getY() const;							//accessor method
	void setX(float);							//accessor method
	void setY(float);							//accessor method
	void setName(char*);						//accessor method
	
	//Overloaded operators
	friend ostream & operator <<(ostream &, const SimpleSpaceShip &);

	friend SimpleSpaceShip operator +(const SimpleSpaceShip &, const SimpleSpaceShip &);

private: 

	float x,y;    //data member
	char* name;   //data member

};



#endif