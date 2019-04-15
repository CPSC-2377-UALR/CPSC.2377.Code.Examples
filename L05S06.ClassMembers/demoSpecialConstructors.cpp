/*
 * File: demoClassMembers.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose:  This example demonstrates the syntax for storing, constructing
 *           and accessing class members of a class.
 */
#include <iostream>
#include "L06.S02.SimpleSpaceShip.h"

using namespace std;

SimpleSpaceShip horizontalThrustMoveReturn(SimpleSpaceShip SSS)
{
	SSS.setX(SSS.getX() + 5);
	return SSS;
}
SimpleSpaceShip horizontalThrust(SimpleSpaceShip& SSS)
{
	SSS.setX(SSS.getX() + 5);
	return SSS;
}
void printMe(SimpleSpaceShip sss)
{
	sss.print();
}
int main(){
	{
		//default constructor
		SimpleSpaceShip sss1;
		sss1.print();
	}//destructor!

	SimpleSpaceShip sss2(21.5,-1.0,5,20,10);
	sss2.print();
	//Cases when Copy Constructor is called:
	//1. When an instance of the class is directly passed in:
	SimpleSpaceShip sss3(sss2);
	
	//2. When passing by value
	printMe(sss3);
	//3. when returning by value!
	SimpleSpaceShip sss4 = horizontalThrust(sss3);
	sss4.print();

	//Case when Copy assignment Operator is called:
	sss2 = sss3;
	sss2.print();

	//cases when move constructor is called:
	//1. explicitly called:
	SimpleSpaceShip sss5(std::move(sss2));
	sss5.print();
	//2. Returning by value if value dies within the function and assigned to new instance!
	SimpleSpaceShip sss6 = horizontalThrustMoveReturn(sss3);
	sss6.print();
	//3. Explicityly called when passed as pass-by-value paramter
	//Move Assignment Operator called when temporary value is assigned!
	sss5 = horizontalThrust(std::move(sss3));
	sss5.print();
	//Move assignment operator also called expicilty
	sss5 = std::move(sss6);
	sss5.print();
	system("PAUSE");

	return 0; 
}