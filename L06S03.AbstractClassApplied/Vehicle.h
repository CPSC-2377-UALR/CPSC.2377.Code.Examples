#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include<string>

using namespace std;

class Vehicle{

private:

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
	virtual string toString()=0;
	virtual void changePosition(char)=0;

};

#endif