#ifndef GAMELIBRARY_H
#define GAMELIBRARY_H

#include<string>
#include<map>
#include"ObjectFactory.h"

using namespace std;

class GameLibrary{

public:
	map<string,ObjectFactory*> inventory;
};

#endif