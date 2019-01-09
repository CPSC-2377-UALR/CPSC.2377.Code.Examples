
#ifndef SIMPLESPACESHIP_H
#define SIMPLESPACESHIP_H

#include <string>
#include <iostream>
using namespace std;
struct Coordinates
{
	Coordinates(float x, float y) :x{ x }, y{ y }{}
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

	//not friend because already part of the class!
	//return & because using this pointer which uses the memory address of the calling instance (item to left of = or +=)
	// paramaters are const and & because information is being gleaned from src, but src is not changed.
	SimpleSpaceShip& operator=(const SimpleSpaceShip & src);
	SimpleSpaceShip& operator++();
	SimpleSpaceShip& operator--();
	SimpleSpaceShip& operator+= (const SimpleSpaceShip& src);

	//friend so we can access private members even though these operators are not class methods!
	//arithmetic operators create new memory with new instance of class, so return is NOT &
	friend SimpleSpaceShip operator+(const SimpleSpaceShip & srcL, const SimpleSpaceShip & srcR);
	friend SimpleSpaceShip operator-(const SimpleSpaceShip & srcL, const SimpleSpaceShip & srcR);
	
	//stream operators chain pieces together, so takes an ostream and returns one to carry on the chain.
	//the stream is modified by what is in src.
	friend std::ostream & operator<<(std::ostream& o, const SimpleSpaceShip & src);
	//notice src is not const! because >> modifies src!!!
	friend std::istream & operator>>(std::istream& o, SimpleSpaceShip & src);
	
	//boolean operators return bool! define < and all the rest should be based off of <
	friend bool operator<(const SimpleSpaceShip & srcL, const SimpleSpaceShip & srcR);
	friend bool operator>(const SimpleSpaceShip & srcL, const SimpleSpaceShip & srcR);

	//define == and != should be based off of ==
	friend bool operator==(const SimpleSpaceShip & srcL, const SimpleSpaceShip & srcR);
	friend bool operator!=(const SimpleSpaceShip & srcL, const SimpleSpaceShip & srcR);
	
	int fuel{ 0 };     //data member 
private:
	Coordinates position{ 0.0f, 0.0f };
	std::string name{ "Enterprise" };   //data member
	const int shield{ 0 };








};

#endif