
#ifndef SIMPLESPACESHIP_H
#define SIMPLESPACESHIP_H

#include <string>
struct Coordinates
{
	float x{ 0.0f };
	float y{ 0.0f };
};
class SimpleSpaceShip {

public:

	SimpleSpaceShip();				//default constructor
	SimpleSpaceShip(Coordinates position, int fuel, int shield, std::string name);   //conversion constructor
	SimpleSpaceShip(const SimpleSpaceShip &);	//copy constructor
	SimpleSpaceShip(SimpleSpaceShip &&);
	~SimpleSpaceShip();				//destructor

	Coordinates getPosition() const;		//accessor method
	int getShieldStrength()const;

	void setPosition(Coordinates position);		//accessor method	
	void setName(std::string);	//accessor method
	
	void print() const;		//I/O method

	int fuel{ 0 };     //data member 

	SimpleSpaceShip & operator=(const SimpleSpaceShip & src);

private:
	Coordinates position{ 0.0f, 0.0f };
	std::string name{ "Enterprise" };   //data member
	const int shield{ 0 };








};

#endif