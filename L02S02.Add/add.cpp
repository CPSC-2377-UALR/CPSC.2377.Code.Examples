// File: add.cpp
//Author: Keith Bush (2013)


#include<iostream>

using namespace std;

int main(){

	bool num1;
	int num2;

	cout << "Enter 2 integers: ";
	//cin >> num1;
	num1 = false;
	cin >> num2;

	int sum;
	sum = (int)num1 + num2;

	cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

	system("PAUSE");

	return 0;

}