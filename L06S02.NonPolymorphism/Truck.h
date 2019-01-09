#ifndef TRUCK_H
#define TRUCK_H

#include <string>
#include "Vehicle.h"

using namespace std;

class Truck: public Vehicle{

public: 
	Truck();
	~Truck();
	
	void changePosition(char);
	string toString();


};

#endif