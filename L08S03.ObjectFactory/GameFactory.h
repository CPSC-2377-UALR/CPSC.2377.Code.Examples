#ifndef GAMEFACTORY_H
#define GAMEFACTORY_H

#include<string>
#include<map>
#include"ObjectFactory.h"

using namespace std;

class GameFactory{

public:
	map<string,ObjectFactory*> inventory;
};

#endif