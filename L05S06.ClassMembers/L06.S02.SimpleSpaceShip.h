/*
 * File: SimpleSpaceShip.h
 * Author: Keith Bush (2012)
 */
#ifndef SIMPLESPACESHIP_H
#define SIMPLESPACESHIP_H

#include "Shield.h"

class SimpleSpaceShip{

public:
	/*******************Default constructor*******************/
	/*called when no values are passed in*/
	SimpleSpaceShip();	//Compiler will create for yoU!			
	/*******************Conversion constructor*******************/
	/*Sets values of classes members upon creation!*/
	SimpleSpaceShip(float,float,int,int,int);   
	/*******************Copy constructor*******************/
	/*Needed with pointer members to prevent shallow copying
	Separate memory spaces are reserved for new object and old*/
	SimpleSpaceShip(const SimpleSpaceShip& src); //compiler will create for you, but will be shallow!
	/*******************Copy Assignment Operator*******************/
	/*When = causes a copy into a new instance of an object
	Separate memory spaces are reserved for new object and old*/
	SimpleSpaceShip& operator=(const SimpleSpaceShip& src) noexcept; //compiler will create for you, but will be shallow!
	/*******************Move constructor*******************/
	/*Notice src is not const! Copies addresses for all pointers, then sets src to nullptr for all pointers
	Separate memory spaces are reserved for new object ONLY*/
	SimpleSpaceShip(SimpleSpaceShip&& src); //compiler will just use copy constructor
	/*******************Move Assignment Operator*******************/
	/*Notice src is not const! Copies addresses for all pointers, then sets src to nullptr for all pointers
	Need to be sure to delete memory that is being copied IN TO. 
	moved object is left with nullptr's for all pointers.*/
	SimpleSpaceShip& operator=(SimpleSpaceShip&& src) noexcept; //compiler will just use copy assignment
	/*******************destructor*******************/
	/*called when object dies. Uses to delete memory on the heap!*/
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

	Shield* frontShield; //data member 
	Shield* rearShield; //data member

};

#endif