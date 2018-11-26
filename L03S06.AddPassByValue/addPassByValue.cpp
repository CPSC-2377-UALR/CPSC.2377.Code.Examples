/*
 * File: addPassByValue.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>
using namespace std;

int addTwoNumbers(int, int);

int main(){

	int n1=5, n2=7;
	int sum = addTwoNumbers(n1,n2);
	cout << sum << endl;

	system("PAUSE");
	return 0;

}

int addTwoNumbers(int num1, int num2){
	int tmp = num1 + num2;
	num1 = -89;
	return(tmp);
}