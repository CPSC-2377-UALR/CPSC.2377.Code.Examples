#ifndef BASEGAMELIBRARY_H
#define BASEGAMELIBRARY_H

#include"GameLibrary.h"
#include"Child1Factory.h"
#include"Child2Factory.h"

using namespace std;

class BaseGameLibrary : GameLibrary{

public:
	BaseGameLibrary(){
		inventory["child1"] = (ObjectFactory*)new Child1Factory();
		inventory["child2"] = (ObjectFactory*)new Child2Factory();
	}
};

#endif