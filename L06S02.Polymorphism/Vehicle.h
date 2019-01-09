#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include<string>

struct Coordinate
{
	Coordinate(float x, float y) :x{ x }, y{ y } {}
	float x{ 0.0f };
	float y{ 0.0f };
};

class Vehicle {
public:

	Vehicle();
	~Vehicle();

	void setPosition(Coordinate position);
	void setName(std::string name);

	Coordinate getPosition() const;
	std::string getName();

	/* Lesson 3: Polymorphism via dynamic binding*/
	virtual std::string toString();
	virtual void changePosition(char);

protected:
	Coordinate position{ 0.0f,0.0f };
	std::string name;




};

#endif