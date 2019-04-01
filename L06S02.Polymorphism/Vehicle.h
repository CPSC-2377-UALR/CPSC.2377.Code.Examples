#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include<string>

using namespace std;

class Vehicle{

protected:

	char* name;
	float x;
	float y;

public:

	Vehicle();
	~Vehicle();
	void setX(float);
	void setY(float);
	void setName(char*);
	float getX();
	float getY();
	char* getName();
	
	/* Lesson 3: Polymorphism via dynamic binding*/
	virtual string toString();
	virtual void changePosition(char)=0;

	//string toString();
	//void changePosition(char);
};

#endif