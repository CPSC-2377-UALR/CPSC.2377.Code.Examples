#ifndef MODGAMEFACTORY_H
#define MODGAMEFACTORY_H

#include"Child3Factory.h"

//Declare GameFactory as a valid type
class GameFactory;

class ModGameFactory : GameFactory{

public:

	ModGameFactory(){
		inventory["child3"] = (ObjectFactory*)new Child3Factory();
	}
};

#endif