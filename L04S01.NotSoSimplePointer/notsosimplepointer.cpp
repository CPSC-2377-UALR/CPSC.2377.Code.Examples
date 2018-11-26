/*
 * File: notsosimplepointer.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>

using namespace std;

int main(){

	int i = 5; //i[5]
	int j = 7; //j[7]
	int* p = &i; // p --> i
	int** q; // q --> *

	q = &p; // q --> p --> i[5]
	*p = 9; // p --> i[9]
	*q = &j; // q --> p --> j[7]
	**q = 11; // q --> p --> j[11]

	cout << i << endl;
	cout << j << endl;
	cout << *p << endl;
	cout << **q << endl;

	system("PAUSE");

	return 0;
}
