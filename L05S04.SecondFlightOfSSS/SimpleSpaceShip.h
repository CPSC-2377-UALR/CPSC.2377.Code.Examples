
#ifndef SIMPLESPACESHIP_H
#define SIMPLESPACESHIP_H

#include <string>

struct Coordinates
{
	float x{ 0.0f };
	float y{ 0.0f };
};

class SimpleSpaceShip{

public:

	SimpleSpaceShip();				//default constructor
	SimpleSpaceShip(Coordinates position, int name);   //conversion constructor
	~SimpleSpaceShip();				//destructor
	
	Coordinates getPosition() const;		//accessor method
	void setPosition(Coordinates position);		//accessor method	
	void setName(std::string);	//accessor method

	void print() const;		//I/O method
private:
	Coordinates position{ 0.0f, 0.0f };
	std::string name{ "Enterprise" };   //data member
	int fuel{ 0 };     //data member (no accessors for teaching purposes)


};

#endif