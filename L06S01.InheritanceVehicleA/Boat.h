#ifndef BOAT_H
#define BOAT_H

#include <string>
#include "Vehicle.h"

using namespace std;

class Boat: public Vehicle{

private:
	float z;

public: 
	Boat();
	void changePosition(char);
	string toString();

};

#endif