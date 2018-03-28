#ifndef BASEGAMEFACTORY_H
#define BASEGAMEFACTORY_H

#include"GameFactory.h"
#include"Child1Factory.h"
#include"Child2Factory.h"

using namespace std;

class BaseGameFactory : GameFactory{

public:
	BaseGameFactory(){
		inventory["child1"] = (ObjectFactory*)new Child1Factory();
		inventory["child2"] = (ObjectFactory*)new Child2Factory();
	}
};

#endif