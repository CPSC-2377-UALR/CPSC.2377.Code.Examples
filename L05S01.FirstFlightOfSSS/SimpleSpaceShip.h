#ifndef SIMPLESPACESHIP_H
#define SIMPLESPACESHIP_H

#include <string>
struct Coordinates
{
	float x;
	float y;
};

class SimpleSpaceShip{

public:
	SimpleSpaceShip();		//default constructor

	
	Coordinates getPosition() const;		//accessor method
	void setPosition(Coordinates position);		//accessor method	
	void setName(std::string);	//accessor method
	
	void print() const;		//I/O method
private: 
	Coordinates position{ 0.0f, 0.0f };
	std::string name{ "Enterprise" };   //data member
};

#endif