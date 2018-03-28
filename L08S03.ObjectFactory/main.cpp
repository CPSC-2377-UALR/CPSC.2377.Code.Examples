/*
* File: main.cpp
* Author: Keith Bush (2013)
*
* Purpose: Demonstrates an advanced use of the object factory design pattern
*   an extensible mechanism for allowing objects to be added via the ModGameFactory class hook-in
*   which facilitates minimal recompilation of the code.
*/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
#include <string>
#include <memory>

#include"GameFactory.h"
#include"BaseGameFactor.h"
#include"ModGameFactory.h"

using namespace std;

int main(){

	int N = 10;
	
	//Factory types
	GameFactory* baseFactory = (GameFactory*)new BaseGameFactory(); //storeas an inventory of base ObjectFactories
	GameFactory* modFactory = (GameFactory*)new ModGameFactory();  //stores inventory of modifed ObjectFactories (if they exist)

	//Imagine that the game is dynamically calling for types
	string objectType;

	//Display utility of the object factory
	vector<shared_ptr<Object>> objects;
	vector<shared_ptr<Object>>::iterator objectsIter;

	for(int i=0;i<N;i++){

		/*Randomly demand one of two types of object*/
		int tmp = rand()%3+1;
		switch(tmp){
		case 1:
			objectType = "child1";
			break;
		case 2:
			objectType = "child2";
			break;
		case 3:
			objectType = "child3";
			break;
		}

		cout << "TYPE: " << objectType << endl;
		shared_ptr<Object> newObject(make_shared<Object>);
		newObject->getNumber();

		//Search through the base classes
		if(baseFactory->inventory.find(objectType) != baseFactory->inventory.end()){
			newObject =	((*(baseFactory->inventory.find(objectType))).second)->create();
		}

		//Search through the mod classes
		if(modFactory->inventory.find(objectType)!= modFactory->inventory.end()){
				newObject =	((*(modFactory->inventory.find(objectType))).second)->create();
		}

		//Load the resultant object into the game space
		if(newObject != NULL){
			objects.push_back(newObject);
		}

	}

	//Display the game space
	for(objectsIter=objects.begin();objectsIter!=objects.end();objectsIter++){
		cout << (*objectsIter)->getNumber()  << endl;
	}

	system("PAUSE");

	return 0;
}
