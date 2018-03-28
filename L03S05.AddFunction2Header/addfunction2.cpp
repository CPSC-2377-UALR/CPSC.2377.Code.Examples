/*
 * File: addfunction2.cpp
 * Author: Keith Bush (2013)
 */

#include<iostream>

#include"functions.h"

using namespace std;

int main(){

	int sum=0, n1=0, n2=0;

	while( !(sum==7 || sum==11) ){
		
		cout << "Enter two numbers on the range [0,6]: ";
		cin >> n1 >> n2;

		sum = addTwoNumbers(n1%7,n2%7);
	}

	cout << "Craps!" << endl;

	system("PAUSE");

	return 0;
}

