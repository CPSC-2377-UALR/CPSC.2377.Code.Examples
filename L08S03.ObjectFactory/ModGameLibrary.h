#ifndef MODGAMELIBRARY_H
#define MODGAMELIBRARY_H

#include"Child3Factory.h"

//Declare GameLibrary as a valid type
#include "GameLibrary.h"

class ModGameLibrary : GameLibrary{

public:

	ModGameLibrary(){
		inventory["child3"] = (ObjectFactory*)new Child3Factory();
	}
};

#endif