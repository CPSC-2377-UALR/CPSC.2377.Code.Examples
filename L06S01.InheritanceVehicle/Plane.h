#ifndef PLANE_H
#define PLANE_H

#include "Vehicle.h"

class Plane: public Vehicle{

public: 
	Plane();
	~Plane();

	float x{ 0 };
	float z{ 0 };

	

};

#endif

	