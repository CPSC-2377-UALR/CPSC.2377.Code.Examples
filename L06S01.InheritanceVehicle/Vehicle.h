#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include<string>

using namespace std;

class Vehicle{

public:
	float x;
	char* name;

	Vehicle();
	~Vehicle();
	void setX(float);
	void setY(float);
	float getX();
	float getY();

	friend ostream & operator <<(ostream &, const Vehicle &);

private:
	float y;

};


#endif