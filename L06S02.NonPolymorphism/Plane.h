#ifndef PLANE_H
#define PLANE_H

#include <string>
#include "Vehicle.h"

using namespace std;

class Plane: public Vehicle{

public:
	float z;

public: 
	Plane();
	~Plane();
	
	void changePosition(char);
	string toString();


};

#endif