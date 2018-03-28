#ifndef CAR_H
#define CAR_H

#include <string>
#include "Vehicle.h"

using namespace std;

class Car: public Vehicle{

private:
	bool honk;
public: 
	Car();
	~Car();
	
	virtual void changePosition(char);
	virtual string toString();


};

#endif