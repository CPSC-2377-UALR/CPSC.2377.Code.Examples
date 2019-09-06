/*
 * File: pswap.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>
using namespace std;

//int* a = &x;
//int* b = &y;
void pswap(int* a, int* b){
	//a --> x
	//b --> y
	//a = new int;
	//*a = 5;
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){

	int x = 5, y = 7;
	//int* v = nullptr;
	cout << "Before: " << x << " " << y << endl;
	pswap(&x,&y);
	cout << "After:  " << x << " " << y << endl;

	system("PAUSE");

	return 0;
}
