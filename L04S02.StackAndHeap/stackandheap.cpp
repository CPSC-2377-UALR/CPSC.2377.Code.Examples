/*
 * File: stackandheap.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>
using namespace std;

int main(){

	//Allocate i & j on the stack
	int i = 5;
	int * k = &i;

	//Allocate j on the heap
	int* j;
	
	j = new int;
	
	*j = 7;
	int* l = j;
	*l = 4;
	
	//Clean up memory on the heap
	delete j;
	l = nullptr;
	int *p = new int;
	j = new int;
	*l = 6;

	void* m;
	m = j;
	//cout << (int)(*m);
	return 0;
}
