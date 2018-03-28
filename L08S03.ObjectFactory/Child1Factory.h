#ifndef CHILD1FACTORY_H
#define CHILD1FACTORY_H

#include"ObjectFactory.h"
#include"Child1.h"

class Child1Factory: ObjectFactory{
public:
	Object* create(){return((Object*)(new Child1()));}
};


#endif
