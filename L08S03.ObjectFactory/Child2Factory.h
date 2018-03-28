#ifndef CHILD2FACTORY_H
#define CHILD2FACTORY_H

#include"ObjectFactory.h"
#include"Child2.h"

class Child2Factory: ObjectFactory{
public:
	Object* create(){return((Object*)(new Child2()));}
};


#endif