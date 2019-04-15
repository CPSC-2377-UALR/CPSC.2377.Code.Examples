#include <iostream>
#include <string>
#include "SimpleSpaceShip.h"

using namespace std;

SimpleSpaceShip shipBuilder()
{
	SimpleSpaceShip newShip({ 1, 1 }, 1, "LotBuilt");
	return newShip;
}

SimpleSpaceShip refuelShip(SimpleSpaceShip emptyShip)
{
	emptyShip.fuel = 100;
	return emptyShip;
}

int main() {

	//Copy constructor called when
		//1. returned by value from a function
	shipBuilder().print();

		//2. passed by value into a function!
	SimpleSpaceShip sss1({ 2, 2 }, 10, "SSS1");
	sss1.print();
	sss1.fuel = 0;
	sss1 = refuelShip(sss1);
	sss1.print();
		//3. directly called
	SimpleSpaceShip sss2(sss1);

		//4. compiler creates a temporary object (Need operator overloading to do this one! stay tuned!)
	

	system("PAUSE");

	return 0;
}