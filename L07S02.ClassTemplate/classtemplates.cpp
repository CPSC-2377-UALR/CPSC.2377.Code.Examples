/*
* File: classtemplates.cpp
* Author: Keith Bush (2013)
*
* Purpose: demonstrate the declaration, construction, and accessing a templated class.
*/

#include <iostream>
#include <vector>
#include "Pair.h"

using namespace std;

int main(){

	///*Lesson 1: Template classes can handle any type*/
	Pair<char, int> pair1('a',3);
	Pair<int, int> pair2(1,2);
	
	cout << pair1.getFirst() << ", " << pair1.getSecond() << endl;
	cout << pair2.getFirst() << ", " << pair2.getSecond() << endl;

	Pair<int, char> pair3(7,'a');

	///*Lesson 2: Template classes can be embedded*/
	vector<Pair<char, int>> v;

	for(int i=0;i<256;i++){
		Pair<char,int> pair((char)i,i);
		v.push_back(pair);
	}

	for(int i=0;i<v.size();i++){
		cout << v[i].getFirst() << ", " << v[i].getSecond() << endl;
	}

	system("PAUSE");

}