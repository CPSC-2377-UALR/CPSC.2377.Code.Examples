#ifndef PLANE_H
#define PLANE_H

#include <string>
#include "Vehicle.h"

using namespace std;

class Plane: public Vehicle{

private:
	float z;

public: 
	Plane();
	~Plane();
	
	virtual void changePosition(char);
	virtual string toString();


};

#endif