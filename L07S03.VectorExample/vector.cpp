/*
 * File: vector.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: Declaring, populating and accessing vectors
 */

#include<iostream>
#include<vector>
#include<list>

using namespace std;

void main(){

	/*
	* Lesson 1: Vectors are templated
	*/
	vector<int> v;

	v.push_back(10);
	v.push_back(5);
	cout << "output v contents" << endl;
	
	for(int i=0;i<v.size();i++){
		cout << v[i] << endl;
	}

	vector<char> vchar;
	vchar.push_back('w');
	vchar.push_back('z');
	cout << "output vchar contents" << endl;
	for(int i=0;i<v.size();i++){
		cout << vchar[i] << endl;
	}

	system("PAUSE");
}
