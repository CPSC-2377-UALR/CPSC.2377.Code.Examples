
#include <iostream>
#include "SimpleSpaceShip.h"

using namespace std;


SimpleSpaceShip::SimpleSpaceShip()
{}


Coordinates SimpleSpaceShip::getPosition() const
{
	return position;
}

void SimpleSpaceShip::setPosition(Coordinates position)
{
	this->position = position;
}


void SimpleSpaceShip::setName( string name)
{
	this->name = name;
}

void SimpleSpaceShip::print() const
{		
	cout << name << ", Position: (" << position.x << ", " << position.y << ")" << endl;
}

//float getX()
//{
//	//int x = 5;
//	return(x);
//}