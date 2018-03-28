#ifndef CHILD3FACTORY_H
#define CHILD3FACTORY_H

#include"ObjectFactory.h"
#include"Child3.h"

class Child3Factory : ObjectFactory{
public:
	Object* create(){return((Object*)(new Child3()));}
};


#endif