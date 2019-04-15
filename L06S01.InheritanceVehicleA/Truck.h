#ifndef TRUCK_H
#define TRUCK_H

#include <string>
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {

private:
	bool honk;
public:
	Truck();
	~Truck();

	virtual void changePosition(char);
	virtual string toString();


};

#endif