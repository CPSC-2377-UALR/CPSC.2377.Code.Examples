#ifndef BOAT_H
#define BOAT_H

#include <string>
#include "Vehicle.h"

using namespace std;

class Boat : public Vehicle {

private:
	float z;

public:
	Boat();
	~Boat();

	void changePosition(char) override;
	string toString() override;


};

#endif