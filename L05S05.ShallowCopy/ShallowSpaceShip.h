
#ifndef SHALLOWSPACESHIP_H
#define SHALLOWSPACESHIP_H

#include <string> //<-- always put <> includes BEFORE "xxx.h" includes!!!!

#include "Shield.h"
#include "SimpleSpaceShip.h"
class ShallowSpaceShip {

public:

	ShallowSpaceShip();				//default constructor
	ShallowSpaceShip(Coordinates position, int fuel, int frontShield, int rearShield, std::string name);   //conversion constructor
	ShallowSpaceShip(const ShallowSpaceShip &);	//copy constructor
	ShallowSpaceShip(ShallowSpaceShip &&);
	~ShallowSpaceShip();				//destructor

	Coordinates getPosition() const;		//accessor method
	int getFrontShieldStrength()const;
	int getRearShieldStrength()const;

	void setPosition(Coordinates position);		//accessor method	
	void setName(std::string);	//accessor method
	void setFrontShieldStrength(int strength);
	void setRearShiledStrength(int strength);

	void print() const;		//I/O method

	int fuel{ 0 };     //data member 

	ShallowSpaceShip & operator=(const ShallowSpaceShip & src);

private:
	Coordinates position{ 0.0f, 0.0f };
	std::string name{ "Enterprise" };   //data member
	Shield* frontShield{ 0 }; //data member 
	Shield* rearShield{ 0 }; //data member








};

#endif