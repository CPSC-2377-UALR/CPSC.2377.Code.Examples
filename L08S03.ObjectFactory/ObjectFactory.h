#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H

#include"Object.h"

class ObjectFactory{
public:
	virtual Object* create() = 0;
};

#endif