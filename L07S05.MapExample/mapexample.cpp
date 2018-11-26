/*
* File: mapexample.cpp
* Author: Keith Bush (2013)
*
* Purpose: Demonstrates the use and function of the map template class
*/

#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

void main(){

	//declare a map 
	map<string, string> m;
	map<string, string>::iterator miter;

	cout << "Insert pairs into the map." << endl;
	m["int"] = "type integer";
	m["char"] = "type character";
	m["float"] = "type floating point";
	m["foo"] = "bar";


	/*
	 * Lesson 1: Maps maintain an order over the keys and -> is overloaded
	 *           for iterators
	*/ 
	for(miter = m.begin(); miter != m.end(); miter++){
		cout << miter->first << ", " << miter->second << endl;
		//cout << (*miter).first << ", " << (*miter).second << endl;
	}
	system("PAUSE");

	/*
	* Lesson 2: Maps are searchable
	*/
	cout << "Searching for int: " << endl;
	if(m.find("int") != m.end()){
		cout << "int is in the map." << endl;
		cout << (m.find("int"))->second << endl;
	}else{
		cout << "int is not in the map." << endl;
	}

	cout << "Searching for SimpleSpaceShip: " << endl;
	if(m.find("SimpleSpaceShip") != m.end()){
		cout << "SimpleSpaceShip is in the map." << endl;
	}else{
		cout << "SimpleSpaceShip is not in the map." << endl;
	}

	//system("PAUSE");

	/*
	* Lesson 3: Searching a map returns an iterator to the element 
	*/
	miter = m.find("smurf");
	cout << miter->first << endl;
	cout << miter->second << endl;

	//////What happens if the element is not found?

	system("PAUSE");
}