/*
 * File: addPassByReference.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>
using namespace std;

void addMultiplyTwoNumbers(int , int , int &, int &);

int main(){

	int sum=0, n1=5, n2=7, multiply=0;
	addMultiplyTwoNumbers(n1,n2,sum,multiply);
	cout << sum << " " << multiply << endl;

	system("PAUSE");

	return 0;
}

void addMultiplyTwoNumbers(int num1, int  num2, int & sum, int & mult){
	sum = num1+num2;
	mult = num1*num2;
	num1 = 99;
	num2 = 100;

}