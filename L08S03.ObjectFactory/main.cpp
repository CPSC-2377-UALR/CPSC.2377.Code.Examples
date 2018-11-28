/*
* File: main.cpp
* Author: Keith Bush (2013)
*
* Purpose: Demonstrates an advanced use of the object factory design pattern
*   an extensible mechanism for allowing objects to be added via the ModGameLibrary class hook-in
*   which facilitates minimal recompilation of the code.
*/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
#include <string>
#include <memory>

#include"GameLibrary.h"
#include"BaseGameLibrary.h"
#include"ModGameLibrary.h"

using namespace std;

int main(){

	const int N = 10;
	
	//Factory types
	GameLibrary* baseLibrary = (GameLibrary*)new BaseGameLibrary(); //storeas an inventory of base ObjectFactories
	GameLibrary* modLibrary = (GameLibrary*)new ModGameLibrary();  //stores inventory of modifed ObjectFactories (if they exist)

	//Imagine that the game is dynamically calling for types
	string objectType;

	//Display utility of the object factory
	vector<Object*> objects;

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
		Object* newObject=nullptr;
		
		//Search through the base classes
		if(baseLibrary->inventory.find(objectType) != baseLibrary->inventory.end()){
			newObject =	((*(baseLibrary->inventory.find(objectType))).second)->create();
		}

		//Search through the mod classes
		if(modLibrary->inventory.find(objectType)!= modLibrary->inventory.end()){
				newObject =	((*(modLibrary->inventory.find(objectType))).second)->create();
		}

		//Load the resultant object into the game space
		if(newObject != NULL){
			objects.push_back(newObject);
		}

	}

	//Display the game space
	for(auto object : objects){
		cout << object->getNumber()  << endl;
	}

	system("PAUSE");

	return 0;
}
