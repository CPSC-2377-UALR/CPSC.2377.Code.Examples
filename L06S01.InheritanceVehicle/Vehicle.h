#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>

using namespace std;

class Vehicle{

public:
	float x{ 0 };
	std::string name{ " " };

	Vehicle();
	~Vehicle();
	void setX(float);
	void setY(float);
	float getX() const;
	float getY() const;

	friend ostream & operator <<(ostream &, const Vehicle &);

private:

	float y{ 0 };

};


#endif